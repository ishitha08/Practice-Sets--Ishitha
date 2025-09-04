// Print all prime numbers between 1 and 100 (without bool)
#include<iostream>
using namespace std;

int main() {
    for(int n = 2; n <= 100; n++) {   // check numbers from 2 to 100
        int count = 0;

        for(int i = 1; i <= n; i++) {  // check divisors
            if(n % i == 0) {
                count++;
            }
        }

        if(count == 2) {   // prime numbers have exactly 2 factors: 1 and itself
            cout << n << " ";
        }
    }

    return 0;
}
