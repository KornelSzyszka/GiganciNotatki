#include <iostream>

int main() {
    std::string test;
    int miesiac;
    std::cout << "Podaj numer miesiaca" << std::endl;
    std::cin >> miesiac;
    if (miesiac == 1)
    {
        std::cout << "Styczen";
    }
    else if (miesiac == 2)
    {
        std::cout << "Luty";
    }
    else if (miesiac == 3)
    {
        std::cout << "Marzec";
    }
    // ...
    else 
        std::cout << "Nie ma takiego miesiaca!";
// -----------------------------------------------------
    switch (miesiac) {
    case 1:
        std::cout << "\nStyczen";
        break;
    case 2:
        std::cout << "Luty";
        break;
    case 3:
        std::cout << "Marzec";
        break;
    // ...
    default:
        std::cout << "Nie ma takiego miesiaca!";
    }

// Zadanie 2
// Napisz prosty dialog z dowolną postacią na dowolny temat używając instrukcji switch case



    int opcje;
    std::cout << "Wybierz opcje: ";
    std::cin >> opcje;

    // opcje -> liczby, słowa etc.
    // switch -> rozpoczecie instrukcji
    switch (opcje) {
    case 1:     // case -> opcja, instrukcja przy konkretnym warunku
        std::cout << "\nOpcja " << opcje;
        break;  // przerwanie instrukcji, by nie sprawdzac pozostalych warunków
    case 2:
        std::cout << "\nOpcja " << opcje;
        break;
    default:    // domyślna instrukcja, gdy
        std::cout << "\nNie ma takiej opcji!";
    }
    // beark i default są opcjonalne
}