#include<iostream>
#include<vector>
using namespace std;

// Function to calculate x^n (x raised to the power n)
double exponential(double x, int n) {
    // Base cases
    if(n == 0) return 1.0;        // any number^0 = 1
    if(x == 0) return 0.0;        // 0^n = 0
    if(x == 1) return 1.0;        // 1^n = 1
    if(x == -1 && n == 0) return 1.0;  
    if(x == -1 && n != 0) return -1.0; 

    // Convert n to long for safety (to handle negative powers)
    long bForm = n;

    // If exponent is negative, take reciprocal of base
    if(n < 0) {
        x = 1 / x;           // Example: 2^-3 = (1/2)^3
        bForm = -bForm;      // make exponent positive
    }

    double ans = 1;

    // Binary exponentiation logic
    // Instead of multiplying x 'n' times, we square it and multiply only when needed.
    while(bForm > 0) {
        // If the current bit (bForm % 2) is 1 → multiply current x into answer
        if(bForm % 2 == 1) {
            ans *= x;
        }

        // Square the base (x = x^2)
        x *= x;

        // Divide exponent by 2 → moves to the next binary bit
        bForm /= 2;
    }

    // Final result
    return ans;
}

int main() {
    double x = 2.00000;
    int n = 10;

    // Expected output: 1024 (because 2^10 = 1024)
    cout << exponential(x, n);
    return 0;
}
