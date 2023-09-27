#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


void calculatePayableAmount(const string& day, int purchaseAmount)
 {
    int discount = 0;

   
    if (day == "Sunday") {
        discount = 0.10 * purchaseAmount;
    }

int payableAmount = purchaseAmount - discount;

   
    cout << "Payable Amount: $" << fixed <<setprecision(2) << payableAmount << endl;
}

int main() {
    string day;
   int purchaseAmount;

   cout << "Enter the day of purchase: ";
    cin >> day;

    cout << "Enter the total purchase amount: $";
   cin >> purchaseAmount;

    
    calculatePayableAmount(day, purchaseAmount);

    return 0;
}