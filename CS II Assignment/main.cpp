//
//  main.cpp
//  CS II Assignment
//
//  Created by Yahia Genena on 02/04/2025.
//

#include "calculator.h"
#include <cstdlib>
#include <ctime>
using namespace std;

int subtract(int a, int b) {
    return a - b;
}

float divide(int a, int b) {
    if (b == 0) {
        return 0;
    }
    return (1.0 * a) / b; }

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int generateRandom(int min, int max) {
    srand(time(0));
    return rand() % (max - min + 1) + min;
}
