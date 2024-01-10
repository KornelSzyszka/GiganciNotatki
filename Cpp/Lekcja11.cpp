#include <iostream>
#include <cmath>

// Lekcja 11 - Funkcje


// typ nazwa (argumenty) { instrukcje; return (zwracana wartosc) }
// typ void oznacza, że funkcja nie zwraca wartości
void funkcja(int argument) {
    std::cout << "\nPodany argument to: " << argument << std::endl;
}

// funkcja nie musi przyjmowac wartości, ani ich zwracać
void helloWorld() {
    std::cout << "\nHello World!" << std::endl;
}

// poniższa funkcja zwraca nam wynik, ale nie wypisuje go sama
int suma(int a, int b) {
    int wynik = a + b;
    return wynik;
}

// funkcja ma argument domyślny (wykładnik)
// oznacza to, że nie musimy go podawac w jej wywołaniu
int potega(int podstawa, int wykladnik = 1) {
    int wynik = 1;
    for (int i = 0; i < wykladnik; i++) {
        wynik *= podstawa;
    }
    return wynik;
}

// main też jest funkcją
int main()
{
    int a = 5, b = 4, c = 3;
    helloWorld();
    funkcja(a);
    funkcja(50);
    int wynikSumy = suma(b, c);
    std::cout << "\nWynik funkcji suma: " << wynikSumy;
    std::cout << "\nWynik funkcji potegowania: " << potega(b);
    std::cout << "\nWynik funkcji potegowania: " << potega(b, c);

    return 0;
}


// Zadanie 1 - napisz funkcję, która przyjmuje zakres (n)
// i wypisuje wszystkie liczby mieszczące się w nim (od 1 do n-1)

// Zadanie 2 - napisz funkcję, która przyjmuje liczbę
// jeżeli ta liczba będzie ujemna to zwraca false
// a jeżeli dodatnia to true

// Zadanie 3 - napisz funkcję, która przyjmuje dwie liczby
// i zwraca większą z nich
