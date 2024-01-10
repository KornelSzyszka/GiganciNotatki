#include <iostream>

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

void czySieZmieni(int liczba) {
    liczba = 10;
}

// Zadanie 1 - napisz funkcję, która przyjmuje zakres (n)
// i wypisuje wszystkie liczby mieszczące się w nim (od 1 do n-1)
void wypiszLiczby(int zakres) {
    for (int i = 1; i < zakres; i++) {
        std::cout << i << std::endl;
    }
}

// Zadanie 2 - napisz funkcję, która przyjmuje liczbę
// jeżeli ta liczba będzie ujemna to zwraca false
// a jeżeli dodatnia to true
bool czyDodatnia(int liczba) {
    if (liczba >= 0)
        return true;
    else
        return false;
}

// W DOMU !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

// Zadanie 3 - napisz funkcję, która przyjmuje dwie liczby
// i zwraca większą z nich

// Zadanie 4 - napisz funkcję, która przyjmuje dwie liczby
// i wypisuje ich sumę, różnicę, iloraz oraz iloczyn

// Zadanie 5 - napisz funkcję, która przyjmuje twoje imię i nazwisko
// a następnie wypisuje powitanie


void zadanie(int numerZadania) {
    std::cout << "\n\n| Zadanie " << numerZadania << " ===========================================|\n";
}

// main też jest funkcją
int main() {
    int a = 5, b = 4, c = 3;
    helloWorld();
    funkcja(a);
    funkcja(50);
    int wynikSumy = suma(b, c);
    std::cout << "\nWynik funkcji suma: " << wynikSumy;
    std::cout << "\nWynik funkcji potegowania: " << potega(b);
    std::cout << "\nWynik funkcji potegowania: " << potega(b, c);
    czySieZmieni(a);
    std::cout << "\n" << a;
    zadanie(1);
    wypiszLiczby(20);
    zadanie(2);
    std::cout << "\nCzy liczba 10 jest dodatnia?: " << czyDodatnia(10);

    return 0;
}

