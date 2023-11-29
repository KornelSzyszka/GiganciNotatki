#include <iostream>
#include <math.h>
#include <cmath>

int main()
{
    int a, b;
    a = 7;
    b = 3;
    // Modulo
    std::cout << "Operacja modulo: " << a % b; // -> 1

    // Dodawnie
    std::cout << "Dodawanie: " << a + b;

    // Odejmowanie
    std::cout << "Odejmowanie: " << a - b;

    // Mnożenie
    std::cout << "Mnozenie: " << a * b;

    // Dzielenie
    std::cout << "Dzielenie: " << a / b << std::endl;

    // Potęgowanie pow od power (potęga z angielskiego), przyjmuje dwie liczby, a - potęgowania, b - potęga a^b
    std::cout << "Potegowanie: " << std::pow(a, b) << std::endl;

    // Pierwiastek
    std::cout << "Pierwiastek: " << std::sqrt(a) << std::endl;

    // Pierwiastek b-stopnia
    std::cout << "Pierwiastek b-stopnia: " << std::pow(a, 1/b) << std::endl;

    a = a + 1;
    a += 1;
    // Inkrementacja
    a++; // -> zwiększenie o jeden

    // Dekrementacja
    a--; // -> zminiejszenie o jeden

    bool prawda = true; // 1
    bool falsz = false; // 0

    // Zapis logiczny "i" ("and") -> &&
    std::cout << "Prawda i falsz: " << (prawda && falsz) << std::endl;
    // Zapis logiczny "lub" -> || 
    std::cout << "Prawda lub falsz: " << (prawda || falsz) << std::endl;
    // Zapis negacji "nie" -> !
    std::cout << "Nie-Prawda" << !prawda << std::endl;


    // ZADANIE 1
    /*
    Wczytać wykość i boki trapezu (a+b)*h/2
    Wczytać promień koła         pi*r^2
    i wyliczyć pole trapezu i koła
    */

    unsigned int a, b, h, r; // unsigned oznacza liczby dodatnie (nie jest to wymagane, ale wiemy, że w naszym przypadku
                            // nie będzie liczb ujemnych
    const unsigned int pi = 3.14; // STAŁA (const)
    // Trapez
    std::cout << "Podaj pierwszy bok trapezu: ";
    std::cin >> a;
    std::cout << "\nPodaj drugi bok trapezu: ";
    std::cin >> b;
    std::cout << "\nPodaj wysokosc trapezu: ";
    std::cin >> h;
    std::cout << "\nPole trapezu = " << (a + b) * h / 2;
    // Koło
    std::cout << "\nPodaj promien kola: ";
    std::cin >> r;
    std::cout << "\nPole kola = " << pi * pow(r, 2);
}

