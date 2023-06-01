#include <iostream>

// por favor né, é if

int main()
{

    int age;

    std::cout << "sua idade, comedia: ";
    std::cin >> age;

    if (age >= 18)
    {
        std::cout << "comedia...";
    }
    else if(age < 0){
        std::cout << "não naceu ainda...";
    }
    else if(age >=100){
        std::cout << "comedia dms...";
    }
    else
    {
        std::cout << "não comedia...";
    }

    return 0;
}