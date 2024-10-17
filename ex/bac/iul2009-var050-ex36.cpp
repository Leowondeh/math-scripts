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

int digitSum(int num) {
    int digitSum = 0;
    while (num > 0) {
        digitSum += num % 10;
        num /= 10;
    }
    return digitSum;
}

int main() {
    int n, nums[100];

    // input
    cout << "Input a number: ";
    cin >> n;
    cout << "\nInput " << n << " numbers to check if their digit sum is prime: ";
    for (int i = 0; i < n; i++) cin >> nums[i];

    // check for each num in nums if digit sum is prime
    int validNums = 0;
    for (int i = 0; i < n; i++) {
        if (isPrime(digitSum(nums[i]))) {
            validNums++;
        }
    }

    // output
    cout << "\nValid numbers: " << validNums;
    return 0;
}