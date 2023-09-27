#include <iostream>
using namespace std;

string evenOrOdd(int number) {
    if (number % 2 == 0) {
        return "even";
    } else {
        return "odd";
    }
}

int main() {
    int num;

   cout << "Enter a number: ";
   cin >> num;

    string result = evenOrOdd(num);

   cout << "Number " << num << " is " << result << endl;

    return 0;
}