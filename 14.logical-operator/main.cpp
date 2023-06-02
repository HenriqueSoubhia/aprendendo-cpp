#include <iostream>

//mesma coisa do criaScript(js)

int main(){
    
    // && = e
    //|| = ou
    //! = sei la explicar esse

    int idade;
    bool possuiHabilitacao;

    std::cout << "Informe sua idade: ";
    std::cin >> idade;

    std::cout << "Possui habilitacao? (1 - Sim, 0 - Nao): ";
    std::cin >> possuiHabilitacao;

    if (idade >= 18 && possuiHabilitacao) {
        std::cout << "Voce pode dirigir.";
    } else if (idade < 18 && possuiHabilitacao) {
        std::cout << "Voce eh menor de idade, nao pode dirigir.";
    } else if (idade >= 18 && !possuiHabilitacao) {
        std::cout << "Voce precisa ter habilitacao para dirigir.";
    } else {
        std::cout << "Voce eh menor de idade e nao possui habilitacao, nao pode dirigir.";
    }

    //chatgpt fez pra mim

    return 0;
}