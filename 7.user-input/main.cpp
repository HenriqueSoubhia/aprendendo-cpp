#include <iostream>

int main(){

    std::string name;
    int age;

    std::cout << "seu nome completo: ";
    //c in, pra pegar informcao, ">> name", armazena em name
    //porem nao pode ter espaço
    // std::cin >> name;

    //entao
    std::getline(std::cin >> std::ws,name); 
    // ">> std::ws" sem isso vai dar ruim quanto tiver outro cin em cima desse

    std::cout << "sua idade: ";
    std::cin >> age;


    std::cout << "oi " << name << "\n";
    std::cout << "sua idade e " << age;


    return 0;
}