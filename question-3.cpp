#include <iostream>  
using namespace std;  

int factorial(int n) {  
    // Base case  
    if (n <= 1)  
        return 1;  
    // Recursive case  
    return n * factorial(n - 1);  
}  

int main() {  
    int number;  

    cout << "Enter a positive integer: ";  
    cin >> number;  
    if (number < 0) {  
        cout << "Factorial is not defined for negative numbers." << endl;  
    } else {  
        cout << "The factorial of " << number << " is " << factorial(number) << "." << endl;  
    }  

    return 0;  
}
