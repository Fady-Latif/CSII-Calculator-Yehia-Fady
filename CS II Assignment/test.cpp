#include "calculator.h"
#include <iostream>

using namespace std;

int main() {
    cout << "Basic Operations:\n";
    cout << "3 + 5 = " << add(3, 5) << "\n";
    cout << "10 - 4 = " << subtract(10, 4) << "\n";
    cout << "6 * 7 = " << multiply(6, 7) << "\n";
    cout << "20 / 4 = " << divide(20, 4) << "\n";

    cout << "\nFactorial:\n";
    cout << "5! = " << factorial(5) << "\n";

    cout << "\nGCD & LCM:\n";
    cout << "GCD(48, 18) = " << gcd(48, 18) << "\n";
    cout << "LCM(12, 15) = " << lcm(12, 15) << "\n";

    cout << "\nRandom Number:\n";
    cout << "Random number between 1 and 100: " << generate_random(1, 100) << "\n";

    cout << "\nExpression Parsing:\n";
    const char* expr = "3+4*2-1";
    cout << "Evaluating: " << expr << " = " << evaluate_expression(expr) << "\n";

    return 0;
}
