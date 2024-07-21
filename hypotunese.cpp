#include <iostream>
#include <cmath>

int main(){
    double a,b,c;
    std::cout << "Enter the side A: ";
    std::cin >> a;
    std::cout << "Enter the side B: ";
    std::cin >> b;
    c = sqrt((pow(a,2))+(pow(b,2)));
    std::cout << "hypotunese = " << c << '\n';
    return 0;
}