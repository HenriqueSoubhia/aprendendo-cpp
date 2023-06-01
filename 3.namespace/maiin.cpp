#include <iostream>

//serve pra ter a "mesma" variavel em diferentes situacoes 
//"guarda" variaveis diferentes com mesmo nome em locais difrentes


namespace first{
    int x = 1;
}

namespace second{
    int x = 2;
}

void exemple(){
    using namespace std;

    // essas linhas aplicam só nesses casos, 
    
    // using std::cout; 
    // using std::string;

    //agora posso declarar strings sem escrever std::
    string amongus = "best game ever\n";

    //o cout tbm
    cout << amongus;

}

int main(){
    exemple();
    // int x = 0;

    //pdoemos usar, para "mudar o padrao local", agora o padrao é o first
    using namespace first;
    
    //selecionar individualmente as variables dos namespaces
    std::cout << x << "\n";
    // std::cout << first::x << "\n";
    std::cout << second::x << "\n";

    return 0;
}
