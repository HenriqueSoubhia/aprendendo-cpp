#include <iostream>

int main()
{

    char op;
    double num1;
    double num2;
    double result;

    std::cout << "********** Calculos **********\n";

    std::cout << "qq ce quer fazer(+ - * /)?: ";
    std::cin >> op;

    std::cout << "passa primeiro numero: ";
    std::cin >> num1;

    std::cout << "passa segundo numero: ";
    std::cin >> num2;

    switch (op)
    {
    case '+':
        result = num1 + num2;
        std::cout << "resultado eh " << result ;
        break;
    case '-':
        result = num1 - num2;
        std::cout << "resultado eh " << result ;
        break;
    case '/':
        result = num1 / num2;
        std::cout << "resultado eh " << result ;
        break;
    case '*':
        result = num1 * num2;
        std::cout << "resultado eh " << result ;
        break;
    default:
        std::cout << "digita certo seu burro";
        break;
    }


    return 0;
}