#include <iostream>
#include <string>

/*
nazwaZmiennej
nie moza uzywac spacji, polskich znakow, wiele znakow specjalnych
nie mozna zaczynac nazwy od liczby
nie moga byc to slowa kluczowe jak int, double
rozrozniamy wielkie i male litery
*/

// typ to rodzaj zmiennej np int, char
int main()
{
    // Stala
    const float PI = 3.14;
    // Deklaracje zmiennych
    int liczbaCalkowita;        // -1, 0, 1, 2
    unsigned int liczbaNaturnalna;
    float liczbaPrzecinkowa;    // 0.5 , 1.3,  
    double liczbaPrzecinkowa2;  // -1.5 , 6.5
    bool logiczna;              // prawda/falsz -> true/false -> 1/0
    char znak;                  // 'z'
    std::string napis;          // "napis"

    // Zad 1
    // Zadeklarowac zmienne kazdego z powyzszych typow
    // przyjac wartosc (cin >>)
    // wypisac wartosc (cout <<)
    int mojaLiczba1;
    float mojaLiczba2;
    std::cout << "Podaj liczbe calkowita (int): ";
    std::cin >> mojaLiczba1;
    std::cout << "Liczba calkowita (int): " << mojaLiczba1 << std::endl;

    std::cout << "Podaj liczbe zmiennoprzecinkowa (float): ";
    std::cin >> mojaLiczba2;
    std::cout << "Liczba calkowita (int): " << mojaLiczba2 << std::endl;

    // Inicjalizacja zmiennej
    short Liczba = 5;
    Liczba = 6;

    std::cout << "Zmienna int rozmiar:" << sizeof(liczbaCalkowita) << std::endl;
    std::cout << "Zmienna float rozmiar: " << sizeof(liczbaPrzecinkowa) << std::endl;
    std::cout << "Zmienna double rozmiar: " << sizeof(liczbaPrzecinkowa2) << std::endl;
    std::cout << "Zmienna char rozmiar: " << sizeof(znak) << std::endl;
    std::cout << "Zmienna bool rozmiar: " << sizeof(logiczna) << std::endl;
    std::cout << "Zmienna string rozmiar: " << sizeof(napis) << std::endl;

    // Rzutowanie typ(zmienna) np. float(zmiennaInt)
    liczbaCalkowita = 7;
    std::cout << "Dzielenie int: " << liczbaCalkowita / 2 << std::endl; // -> 3
    std::cout << "Dzielenie z rzutowaniem int na float : " << float(liczbaCalkowita) / 2 << std::endl; // -> 3.5
    // float(liczbaCalkowita / 2) rzutuje nam wynik, czyli 3 -> 3
}

