#include <iostream>

// ez

int main()
{
    int month;
    std::cout << "teu mes favorito (1-12): ";
    std::cin >> month;

    switch (month)
    {
    case 1:
        std::cout << "janeiro";
        break;
    case 2:
        std::cout << "fevereiro";
        break;
    case 3:
        std::cout << "marco";
        break;
    case 4:
        std::cout << "abril";
        break;
    case 5:
        std::cout << "maio";
        break;
    case 6:
        std::cout << "junho";
        break;
    case 7:
        std::cout << "julho";
        break;
    case 8:
        std::cout << "agosto";
        break;
    case 9:
        std::cout << "setembro";
        break;
    case 10:
        std::cout << "outubro";
        break;
    case 11:
        std::cout << "novembro";
        break;
    case 12:
        std::cout << "dezembro";
        break;
    default:
        std::cout << "Mes invalido";
        break;
    }

    return 0;
}