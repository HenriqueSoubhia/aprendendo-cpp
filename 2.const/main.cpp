#include <iostream>

int main(){
    //Pi é uma constante, caps boa pratica pra nao esquecer
    const double PI = 3.14159;
    // PI = 0; vai da ruim
    double radius = 10;
    double circumference = 2* PI * radius;

    std::cout << circumference;


    return 0;
}