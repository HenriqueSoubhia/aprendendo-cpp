#include <iostream>

int main(){
    using std::cout;
    using std::cin;

    double temp;
    std::string unit;

    cout << "****** TEMPERATURA CONVERSAO 100% GRATIS ******\n";
    cout << "F = Fahrenheit\n";
    cout << "C = Celsius\n";
    cout << "qual que ce vai quer: ";
    cin >> unit;

    if(unit == "F"|| unit=="f"){
        cout << "fala quantos celsius tem: ";
        cin >> temp;

        temp = (1.8 * temp) + 32.0;

        cout << "sao " << temp << "F meu cria";
    }else if(unit == "C" || unit == "c"){
        cout << "fala quantos fahrenheit tem: ";
        cin >> temp;

        temp = (temp -32) / 1.8;

        cout << "sao " << temp << "C meu cria";
    }else{
        cout << "manda um valor que nem gente por favor";
    }

    return 0;
}