#include "calculator.h"

using namespace std;


double add(double a, double b) { 
    return a + b; 
}

double multiply(double a, double b) { 
    return a * b; 
}

unsigned long long factorial(int n) {
    if (n < 0) return 0; 
    unsigned long long result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}


int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}
