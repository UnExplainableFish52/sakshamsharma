//just getting started with this, sweet beginning !!
#include <iostream>
using namespace std;

int main() {
    char op;  
       // Variable to store the operator (+, -, *, /)
    int i=1;
    double num1, num2, result; 
    // Variables to store the two numbers and the result
while ( i !=0)
{
    // Prompt the user to enter an operator
    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;
if (op == "+" || op == "-"  || op == "*"  || op == "/")
 {
    // Prompt the user to enter two numbers
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Perform the calculation based on the chosen operator
    switch (op) 
    {
        case '+':
            result = num1 + num2;  // Addition
            cout << num1 << " + " << num2 << " = " << result << endl;
            break;
        case '-':
            result = num1 - num2;  // Subtraction
            cout << num1 << " - " << num2 << " = " << result << endl;
            break;
        case '*':
            result = num1 * num2;  // Multiplication
            cout << num1 << " * " << num2 << " = " << result << endl;
            break;
        case '/':
            // Check if the second number is not zero before dividing
            if (num2 != 0) {
                result = num1 / num2;  // Division
                cout << num1 << " / " << num2 << " = " << result << endl;
            } 
            else 
            {
                // Error message if the user tries to divide by zero
                cout << "Hey! do you really want the universe to stop making sense? error!! .\n";
            }
            break;
        default:
            // Error message if the user enters an invalid operator
            cout << "Error! Invalid operator. Please use only:  +, -, *, or /.\n" ;
            break;
    }
    cout<< "Enter 0 to exit the Calculator ! ";
    cin>> i;
 }    
else{
  cout<<"Invalid Operations \n";
 }
}
    cout<<"Exited Successfully !! Have a nice day!! ";
    return 0;  
    // I know lietrally asking the user to input an operation looks so dumb but that's all I have for now, I could do something like numbers to represent the operations but I hope it doesn't make much difference. thanks for checking btw
}