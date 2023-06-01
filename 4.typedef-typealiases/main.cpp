#include <iostream>
//exmplo cabuloso
#include <vector>

//é como se fosse um apelido, boa pratica colocar _t

//exemplo
typedef std::string text_t;

//vo fazer do jeito mais popular, funciona igual
using number_t = int;

int main(){

    //agora posso declarar umas strings com "text_t"
    text_t firstName = "sopa";
    //mesma coisa pra int
    number_t age = 180;

    std::cout << firstName << "\n" << age;

    return 0;
}