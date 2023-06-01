#include <iostream>
#include <cmath>

int main(){

    double a;
    double b;
    double c;

    std::cout << "lanca o lado A: ";
    std::cin >> a;

    std::cout << "lanca o lado B: ";
    std::cin >> b;

    c = sqrt(pow(a,2) + pow(b,2));

    std::cout << "lado C: " << c;

    return 0;
}