#include <iostream>
using namespace std;


int calculateStickersNeeded(int sideLength)
 {
  
     return 6 * sideLength * sideLength;
}

int main() {
    int sideLength, stickersNeeded;

    cout<< "Enter the side length of the Rubik's Cube: ";
    cin >> sideLength;

    
    stickersNeeded = calculateStickersNeeded(sideLength);

    
    cout << "Number of stickers needed: " << stickersNeeded <<endl;
return 0;

    
}
