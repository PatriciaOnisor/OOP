#include <iostream>
#include "Math.h"
using namespace std;
int main() {
    cout << Math::Add(1, 2) << endl;
    cout << Math::Add(1, 2, 3) << endl;
    cout << Math::Add(1.5, 2.7) << endl;
    cout << Math::Add(1.5, 2.7, 3.8) << endl;
    cout << Math::Mul(2, 3) << endl;
    cout << Math::Mul(2, 3, 4) << endl;
    cout << Math::Mul(1.5, 2.7) << endl;
    cout << Math::Mul(1.5, 2.7, 3.8) << endl;
    cout << Math::Add(5, 1, 2, 3, 4, 5) << endl;
    cout << Math::Add("hello", "world") << endl;
    cout << Math::Add(nullptr, "world") << endl;
    return 0;
}