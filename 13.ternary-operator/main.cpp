#include <iostream>

int main(){


    //if else muito mais clean
    //? = if
    //: = else

    // int grade = 75;
    // grade >= 60 ? std::cout << "amassou" : std::cout << "falhou";

    // int number = 9;
    // number % 2 ? std::cout << "impar" : std::cout << "par";

    bool cria = false;
    
    // mesma coisa (👍)

    // cria ? std::cout << "aqui eh cria tio" : std::cout << "comedia, sai pra la";
    std::cout << (cria? "aqui eh cria tio" : "comedia, sai pra la");


    return 0;
}