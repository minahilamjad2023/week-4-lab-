#include <iostream>
using namespace std;



void DeterminePassOrFail(int score) {
    if (score > 50) {
        cout << "Pass" << endl;
    } else {
        cout << "Fail" <<endl;
    }
}

int main() {
    int score;

    cout << "Enter your score: ";
    cin >> score;

   
    DeterminePassOrFail(score);

    return 0;
}







