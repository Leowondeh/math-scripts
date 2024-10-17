#include <iostream>

using namespace std;

bool yDivisorOfX(int x, int y) { 
    return (y % x == 0);
}

int main() {
    int x, y, n, aux, vectorCounter = 0;
    cout << "Give an interval (x, y) and a number (n): ";
    cin >> x >> y >> n;
    if (!(0 < x && x < 100 && 0 < y && y < 100)) {
        cout << "\nx or y exceed limits (positive and less than 100)";
        return 0;
    }

    int divisorVector[100];
    // Swap x and y if x is bigger to create a valid interval
    if (y <= x) {
        aux = x;
        x = y;
        y = aux;
    }

    for(int i = x; i <= y; i++) {
        if(n % i == 0) {
            divisorVector[vectorCounter] = i;
            vectorCounter++;
        }
    }

    // output
    cout << "Numbers in interval (" << x << "," << y << ")" << " which divide " << n << ":\n";
    for(int i=0; i < vectorCounter; i++) {
        cout << divisorVector[i] << " ";
    }
    
    return 0;
}