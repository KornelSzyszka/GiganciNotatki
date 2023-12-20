#include <iostream>

int main()
{
    for (int i = 0; i < 100; i++) {
        std::cout << "\ni: " << i;
        for (int j = 0; j < 3; j++)
            std::cout << " j: " << j;
    }

    int liczba_do_zgadniecia = 5;
    int liczba;
    bool warunek2 = true;
    while (warunek2) {
        std::cout << "\nPodaj liczbe: ";
        std::cin >> liczba;
        if (liczba < liczba_do_zgadniecia)
            std::cout << "Zbyt malo!\n";
        else if (liczba > liczba_do_zgadniecia)
        {
            std::cout << "Zbyt duzo!\n";
        }
        else {
            std::cout << "Gratulacje\n";
            warunek2 = false;
        }
    }

    
    /*
    i = 0:
       i: 0 , j: 0,1,2
    i = 1:
       i: 1 , j: 0,1,2
    i = 2:
       i: 2 , j: 0,1,2
    */





    int warunek = 10;
    // Pętla for
    for (int iterator = 1; iterator < warunek; iterator++) {
        std::cout << "Wypisuje to " << iterator << " raz!" << std::endl;
    }
    /*
    Powyższa pętla wypisze nam zdanie:
    "Wypisuje to 1, 2, ..., 9 raz!"
    iterator (dla szybszego zapisu wystarczy i) - licznik
    for (start; warunek; zmiana)
    for (i = 0; i < 10; i++) - dla i zaczynającego się od 0
    zwiększamy i o 1 przy każdym powtórzeniu do momentu gdy i = 10,
    wtedy przerywamy pętlę
    */

    int i = 0;
    while (i < 10) {
        std::cout << "Wypisuje to " << i << " raz!" << std::endl;
        i++;
    }

    /*
    Powyższa pętla wypisze nam zdanie:
    "Wypisuje to 1, 2, ..., 9 raz!"
    while (warunek){
        instrukcje
    }
    nasza pętla while, wykonuje się tak długo, jak warunek jest prawdziwy
    */

    do {
        //instrukcje
    } while (liczba < warunek); // liczba == 10 i warunek == 10
}


/*
Zadanie powtórkowe
Korzystając ze switch case napisz program
zamieniający liczby 1-10 na liczby rzymskie

switch(liczby){
    case 1:
        ...
        break
}
*/

/* Zadanie 1
Napisać pętlę która sprawdzi liczby do 100
i wypisze tylko te podzielne przez 3 i 5

for (int i=1; i<=100; i++){
    if (i % 3 || i % 5)
        std::cout << i << std::endl;
}
*/

/* Zadanie 2
*/
