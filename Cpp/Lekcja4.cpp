#include <iostream>

int main()
{
    int liczbaA, liczbaB, liczbaC;
    std::cout << "Podaj pierwsza liczbe: ";
    std::cin >> liczbaA;
    std::cout << "\nPodaj druga liczbe: ";
    std::cin >> liczbaB;
    liczbaC = 5;
    // Instrukcje warunkowe
    // Poczatek bloku - tylko raz
    if (liczbaA == liczbaB) {
        std::cout << "\nLiczby sa rowne.";
        // Warunek zagnieżdżony
        if (liczbaA == liczbaC)
            std::cout << "\nTrzecia liczba (5), tez jest rowna";
    }
    else if (liczbaA > liczbaB) {       // Dowolna ilosc
        std::cout << "\nPierwsza liczba jest wieksza.";
    }
    else {                              // Tylko raz na koniec
        std::cout << "\nDruga liczba jest wieksza.";
    }
    /*
    * Operatory
    * >, >=, <, <= - większy/mniejszy (równy)
    * == - przyrównanie
    * != - rózny od
    * Operatory logiczne 
    * && and
    * || lub
    * ! negacja
    */

    /*
    Zad 1: Napisz program, który wczyta od użytkownika wiek i ilość pieniędzy,
    a następnie sprawdzi, czy dana osoba może wejść do kina (np. ma 18 lat i 25zł)
    */

    /*
    Podpowiedzi:
    Zadeklaruj zmienne
    Załaduj ich wartości (std::cin)
    stwórz instrukcje warunkowe
    */

    int wiek, kasa;
    std::cout << "\nPodaj wiek: ";
    std::cin >> wiek;
    std::cout << "\nIle masz kasy?: ";

    if (wiek >= 18 && kasa >= 25) {
        std::cout << "\nMozesz wejsc do kina!";
    }
    else if (wiek >= 18 || kasa >= 25) {
        std::cout << "\nMasz zbyt malo lat lub pieniedzy!";
    }
    else {
        std::cout << "\nJestes zbyt mlody i masz zbyt malo pieniedzy!";
    }

    /*
    Zad 2: System wyboru klasy i specjalizacji postaci w grze (np mag -> mag ognia/wody
    rycerz -> palladyn, wiking).
    Instrukcje zagniezdżone
    */

    bool klasa; // 1 = mag 0 = rycerz
    int podklasa;
    std::cout << "\nPodaj klase: (1 - mag 0 - rycerz) ";
    std::cin >> klasa;
    if (klasa) {
        std::cout << "\nWybrano maga\nWybierz podklase:\n1. Mag ognia\n2. Mag wody\n3. Mag lodu";
        std::cin >> podklasa;
        if (podklasa == 1) {
            std::cout << "Mag ognia";
        }
        else if (podklasa == 2) {
            std::cout << "Mag wody";
        }
        else {
            std::cout << "Mag lodu";
        }
    }
    else {
        std::cout << "\nWybrano rycerza\nWybierz podklase:\n1. Palladyn\n2. Berserk\n3. Bard";
        std::cin >> podklasa;
        if (podklasa == 1) {
            std::cout << "Palladyn";
        }
        else if (podklasa == 2) {
            std::cout << "Berserk";
        }
        else {
            std::cout << "Bard";
        }
    }
}
