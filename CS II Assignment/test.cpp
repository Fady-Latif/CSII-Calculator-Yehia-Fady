//
//  test.cpp
//  CS II Assignment
//
//  Created by Yahia Genena on 02/04/2025.
//

#include <iostream>
#include "calculator.h"

using namespace std;

int main() {
    cout << "Subtraction: 10 - 4 = " << subtract(10, 4) << endl;
    cout << "Division: 20 / 5 = " << divide(20, 5) << endl;
    cout << "GCD of 28 and 36 = " << gcd(28, 36) << endl;
    cout << "Random number between 1 and 10: " << generateRandom(1, 10) << endl;
    return 0;
}
