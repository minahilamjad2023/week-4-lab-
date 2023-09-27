#include <iostream>
using namespace std;


int calculateFuel(double distance) {
    int fuel = static_cast<int>(distance * 10); 

   
    if (fuel < 100) {
        fuel = 100;
    }

    return fuel;
}

int main() {
    double distance;

    cout << "Enter the distance: ";
    cin >> distance;

    int fuelNeeded = calculateFuel(distance);

   cout << "Fuel needed: " << fuelNeeded << endl;

    return 0;
}