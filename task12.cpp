#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


double calculatePayableAmount(const string& day, double purchaseAmount) {
    double discount = 0.0;

   
    if (day == "Sunday") {
        discount = 0.10 * purchaseAmount;
    } else {
        discount = 0.05 * purchaseAmount; 
    }

    double payableAmount = purchaseAmount - discount;

    return payableAmount;
}

int main() {
   string day;
    double purchaseAmount;

    while (true) {
       cout << "Enter the day of purchase (e.g., Sunday, Monday, ...): ";
        cin >> day;

        cout << "Enter the total purchase amount: $";
        cin >> purchaseAmount;

        double payableAmount = calculatePayableAmount(day, purchaseAmount);

       
       cout << "Payable Amount: $" << fixed <<setprecision(2) << payableAmount << endl;

        
       cout << "Do you want to calculate for another customer? (yes/no): ";
        string response;
        cin >> response;

        if (response != "yes") {
            break; 
        }
    }

    return 0;
}