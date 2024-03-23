#ifndef NUMBER_H
#define NUMBER_H

class Number {
private:
    int numar;
public:
    Number();
    Number(int numar);
    Number(const Number& num);
    Number(Number&& num);
    Number(const char* numar, int base);
    ~Number();

    Number operator+(Number num);
    Number operator+(int numar);
    Number operator-(Number num);
    void operator++();
    void operator++(int);
    void operator--();
    void operator--(int);
    bool operator!();
    int operator[](int index);
    Number& operator=(Number&& num);
    bool operator<(Number num);
    bool operator>(Number num);
    bool operator<=(Number num);
    bool operator>=(Number num);
    bool operator==(Number num);
    bool operator<(int numar);
    bool operator>(int numar);
    bool operator<=(int numar);
    bool operator>=(int numar);
    bool operator==(int numar);
    friend int operator-(Number num, int numar);

    void SwitchBase(int newBase);
    void Print();
    int GetDigitsCount();
    int GetBase();
};

#endif