#include<iostream>
using namespace std;

void multiplication (int number1, int number2);
void substraction (int number1, int number2);
void addition (int number1, int number2);
void division (int number1, int number2);

int main(){  
int number1,number2;
      char op;
      cout << "Enter 1st number: ";
      cin  >> number1;
      cout << "Enter 2nd number: ";
      cin  >> number2;
      cout << "Enter an operator (+, -, *, /): ";
      cin  >> op;


      

      if(op == '*') 
{
       multiplication(number1,number2);
}

     if(op == '-')
{  
        substraction(number1,number2);
}

    if(op == '+' )
{           addition(number1,number2);

}
   if(op == '/')
{
   division(number1,number2);
}}

        void multiplication (int number1, int number2)
{
        cout << "Multiplication: "  << number1*number2;
}

         void substraction (int number1, int number2)
{
        cout <<  "Substraction: "   << number1-number2;
}

         void addition (int number1, int number2)
{
         cout <<  "Addition: "       << number1+number2;
}

        void division (int number1, int number2)
{
        cout <<  "Division: "       << number1/number2;
}


 
  
