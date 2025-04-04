#ifndef CALCULATOR_H
#define CALCULATOR_H

using namespace std;


double add(double a, double b);
double multiply(double a, double b);
int subtract(int a, int b);
float divide(int a, int b);
int generateRandom(int min, int max);
unsigned long long factorial(int n);
int gcd(int a, int b);
int lcm(int a, int b);


double evaluate_expression(const char* expression);

#endif 
