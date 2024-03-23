#include "Math.h"
#include <stdarg.h>
#include <cstring>

int Math::Add(int a, int b)
{
	return a + b;
}
int Math::Add(int a, int b, int c) {
    return a + b + c;
}

int Math::Add(double a, double b) {
    return (int)(a + b);
}

int Math::Add(double a, double b, double c) {
    return (int)(a + b + c);
}

int Math::Mul(int a, int b) {
    return a * b;
}

int Math::Mul(int a, int b, int c) {
    return a * b * c;
}

int Math::Mul(double a, double b) {
    return (int)(a * b);
}

int Math::Mul(double a, double b, double c) {
    return (int)(a * b * c);
}

int Math::Add(int count, ...) {
    int sum = 0;
    va_list args;
    va_start(args, count);
    for (int i = 0; i < count; i++) {
        sum = sum + va_arg(args, int);
    }
    va_end(args);
    return sum;
}

char* Math::Add(const char* s1, const char* s2) {
    
    size_t l = sizeof(s1) + sizeof(s2);
    char* sir = new char[l + 1];
    int lungime = 0;
    sir[0] = NULL;

    if (s1 == NULL || s2 == NULL) {
        return sir ;
    }
    
    for (int i = 0; *(s1 + i) != NULL; i++)
        sir[lungime++] = *(s1 + i);
    
    for (int j = 0; *(s2 + j) != NULL; j++)
        sir[lungime++] = *(s2 + j);
    
    sir[lungime] = NULL;

    return sir;
}
