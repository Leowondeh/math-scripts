#include <iostream>
#include <fstream>
using namespace std;

ifstream in("cars.in");

// Class exercise

int main()
{
    struct car {
        char manufacturer[20];
        int an, price;
    }cars[100], aux;
    int n, i;
    bool sortC = true;
    in>>n;
    // input
    for(i=0;i<n-1;i++) {
        in>>cars[i].manufacturer>>cars[i].an>>cars[i].price;
    }
    // sort
    while(sortC) {
        sortC = false;
        for(i=0;i<n-1;i++) {
            if(cars[i].price < cars[i+1].price) {
                sortC = true;
                aux = cars[i];
                cars[i] = cars[i+1];
                cars[i+1] = aux;
            }
        }
    }
    // output
    cout<<"In descending order:\n";
    for(i=0;i<n-1;i++) {
        cout<<"Car "<<i+1<<": "<<cars[i].manufacturer<<", "<<cars[i].an<<", Price: $"<<cars[i].price<<"\n";
    }
    return 0;
}
