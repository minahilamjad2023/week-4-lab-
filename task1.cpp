#include <iostream>
using namespace std;


void calculateFuelNeeded(double distance)
 {
    double fuelNeeded = 10 * distance;
    cout << "Fuel needed: " << fuelNeeded << endl;
}

int main() {
    double distance;

  
   cout << "Enter the distance: ";
    cin >> distance;

   
    calculateFuelNeeded(distance);

    return 0;
}




