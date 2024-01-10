// Lekcja 10 - Tablice
#include <iostream>

int main()
{
    // typ nazwa [ilość elementów] = {wartości}
    int tablica[10] = {3, 4, 5, 0, 1, 2, 6, 7, 8, 9};

    std::cout << tablica; // Takie polecenie zadziała, ale nie wypisze nam elementów :)

    // wypisanie elementów pętlą for
    for (int i = 0; i < 10; i++) {
        std::cout << tablica[i] << std::endl;
    }

    tablica[5] = 6;

    char literka = 'K';

    // wypisanie elementów pętlą for each
    for (int liczba:tablica) {
        std::cout << liczba << std::endl;
    }

    char imie[3] = { 'K', 'O', 'R' };

    // typ wewnątrz for musi być zgodny z typem tablicy
    for (char literka : imie) {
        std::cout << literka;
    }
}


// Zadanie 1 - stwórz tablicę z literami swojego imienia i wypisz ją

// Zadanie 2 - wczytaj 10 liczb od użytkownika i wypisz tylko parzyste
/*
    deklaracja tablicy
    pętla for po tablicy i pobranie wartości std::cin >>
    pętla for i wypisanie wartości %2 == 0
*/

// Zadanie 3 - weźmy tablicę z zadania drugiego i wypiszmy największy element
// tworzymy zmienną pomocniczą
// porównujemy ją ze wszystkimi elementami w pętli for
// jezeli zmienna jest mniejsza niż element z tablicy to zmieniamy wartość zmiennej
// na wartość tego elementu