#include <iostream>

int main(){

    double pi = 3.14;
    //mesmo sendo um double eu force ele a ser int
    int roundedPi = pi;

    //aqui eu arredondo direto no double
    pi = (int) pi;

    // std::cout << pi;


    //interpreto 100 como um caractere
    std::cout << (char)100 << "\n";


    int correct = 8;
    int questions = 10;
    //sem esse double a conta nao pode ser feita em numeros inteiros
    double score = correct/(double)questions * 100;


    std::cout << score << "\n";

    return 0;
}