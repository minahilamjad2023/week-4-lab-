#include <iostream>
using namespace std;


   double inchesToFeet(double inches) 
{
    const double inchesPerFoot = 12.0;
    return inches / inchesPerFoot;
}

int main() 
{
    double inches, feet;

    
    cout << "Enter the measurement in inches: ";
    cin >> inches;

    
    feet = inchesToFeet(inches);

    cout << "Equivalent in feet: " << feet <<endl;

    return 0;
}