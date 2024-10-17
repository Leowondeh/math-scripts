#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int num) {
    for(int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int divisorSum(int num) {
    int divSum = 0;
    for(int i = 1; i <= num; i++) {
        if(num % i == 0) divSum += i;
    }
    return divSum;
}

int main() {
    int n;
    cout<<"Enter a number: ";
    cin >> n;
    if(n>1000) {
        cout << "\nGiven n exceeds conditions (n<1000)";
        return 0;
    }

    cout << "Numbers less than n whose sum of divisors is prime:\n";
    for(int i = 1; i <= n; i++) {
        if (isPrime(divisorSum(i))) {
            cout << i << " ";
        }
    }
    
    return 0;
}