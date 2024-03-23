#include "Number.h"
#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

Number::Number() {
    //cout << "default constructor\n";
    numar = 0;
}

Number::Number(int numar) {
    //cout << "constructor with one parameter\n";
    this->numar = numar;
}

Number::Number(const Number& num) {
    //cout << "copy constructor\n";
    this->numar = num.numar;
}

Number::Number(Number&& num) {
    //cout << "move constructor\n";
    this->numar = num.numar;
}

Number::~Number() {
    //cout << "destructor\n";
    numar = 0;
}

Number::Number(const char* numar, int base) {
    int len = strlen(numar);
    int power = len - 1;
    for (int i = 0; i < len; i++) {
        int digit = 0;
        if (numar[i] >= '0' && numar[i] <= '9') {
            digit = numar[i] - '0';
        }
        else if (numar[i] >= 'a' && numar[i] <= 'f') {
            digit = numar[i] - 'a' + 10;
        }
        else if (numar[i] >= 'A' && numar[i] <= 'F') {
            digit = numar[i] - 'A' + 10;
        }
        else {
            this->numar = 0;
            return;
        }
        this->numar += digit * pow(base, power);
        power--;
    }
}

Number Number::operator+(Number num) {
    //cout << "operator+\n";
    return Number(this->numar + num.numar);
}

Number Number::operator+(int numar) {
    //cout << "operator+(int)\n";
    return Number(this->numar + numar);
}

Number Number::operator-(Number num) {
    //cout << "operator-\n";
    return Number(this->numar - num.numar);
}

void Number::operator++() {
   // cout << "operator++\n";
    this->numar++;
}

void Number::operator++(int) {
    //cout << "operator++(int)\n";
    this->numar++;
}

void Number::operator--() {
    //cout << "operator--\n";
    this->numar--;
}

void Number::operator--(int) {
    //cout << "operator--(int)\n";
    this->numar--;
}

bool Number::operator!() {
    //cout << "operator!\n";
    return !this->numar;
}

int Number::operator[](int index) {
    //cout << "operator[]\n";
    return (int)(this->numar / pow(10, index)) % 10;
}

Number& Number::operator=(Number&& num) {
    //cout << "move operator=\n";
    if (this == &num) {
        return *this;
    }
    this->numar = num.numar;
    return *this;
}

bool Number::operator<(Number num) {
    return this->numar < num.numar;
}

bool Number::operator>(Number num) {
    return this->numar > num.numar;
}

bool Number::operator<=(Number num) {
    return this->numar <= num.numar;
}

bool Number::operator>=(Number num) {
    return this->numar >= num.numar;
}

bool Number::operator==(Number num) {
    return this->numar == num.numar;
}

bool Number::operator<(int numar) {
    return this->numar < numar;
}

bool Number::operator>(int numar) {
    return this->numar > numar;
}

bool Number::operator<=(int numar) {
    return this->numar <= numar;
}

bool Number::operator>=(int numar) {
    return this->numar >= numar;
}

bool Number::operator==(int numar) {
    return this->numar == numar;
}

int operator-(Number num, int numar) {
    return num.numar - numar;
}

void Number::SwitchBase(int newBase) {
    //cout << "SwitchBase\n";
    int num = this->numar;
    int digits[32];
    int len = 0;
    while (num) {
        digits[len++] = num % newBase;
        num /= newBase;
    }
    int newNum = 0;
    int power = 1;
    for (int i = len - 1; i >= 0; i--) {
        newNum += digits[i] * power;
        power *= 10;
    }
    this->numar = newNum;
}


void Number::Print() {
    cout << "The number is " << numar << endl;
}

int Number::GetDigitsCount() {
    //cout << "GetDigitsCount\n";
    if (this->numar == 0) {
        return 1;
    }
    return (int)log10(abs(this->numar)) + 1;
}

int Number::GetBase() {
    //cout << "GetBase\n";
    int num = this->numar;
    int maxDigit = 0;
    while (num) {
        int digit = num % 10;
        if (digit > maxDigit) {
            maxDigit = digit;
        }
        num /= 10;
    }
    return maxDigit + 1;
}