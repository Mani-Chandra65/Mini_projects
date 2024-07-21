#include <iostream>

int main(){
    std::cout << "Hello! Welcome to the Simple calculator!!\n";
    std::cout << "Enter first number: ";
    double a , b , sol;
    char ch;
    std::cin >> a;
    std::cout << "Enter the operation:\n{+ , - , / , *}\n";
    std::cin >> ch;
    std::cout << "Enter second number: ";
    std::cin >> b;

    switch(ch){
        case '+' :
            sol = a + b;
            break;
        case '-' :
            sol = a - b;
            break;
        case '*' :
            sol = a * b;
            break;
        case '/' :
            sol = a / b;
            break;
        default:
            std::cout << "Enter a valid choice!!\n";
    }
    std::cout << "Solution= " << sol << '\n';
    return 0;
}