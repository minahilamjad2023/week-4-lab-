#include <iostream>
#include <string>
using namespace std;


void printName(const std::string& name) {
   cout << "Hello, " << name << "!" << endl;
}

int main() {
              string userName;
            cout << "Enter your name: ";
              cin >> userName;

    while (true) {
        printName(userName);
    }

    return 0;
}




