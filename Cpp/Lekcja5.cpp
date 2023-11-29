#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    const int LICZBA_MAKSYMALNA = 20;
    const int LICZBA_MINIMALNA = 10;
    // inicjacja generatora ziarna
    srand(time(NULL));
    // losowanie liczby z zakresu od 10 do 20
    int liczbaPseudolosowa = rand()%(LICZBA_MAKSYMALNA - LICZBA_MINIMALNA + 1) + LICZBA_MINIMALNA;
    // 70000 129
    int drugaLiczba = rand() % (70000 - 129 + 1) + 129;
                                // gorny zakres + dolny zakres
    if (liczbaPseudolosowa > 15) {
        std::cout << "Nasza liczba jest wieksza niz 15" << std::endl;
        std::cout << "Rowna jest dokladnie: " << liczbaPseudolosowa;
    }
    else {
        std::cout << "Nasza liczba jest mniejsza niz 15" << std::endl;
        std::cout << "Rowna jest dokladnie: " << liczbaPseudolosowa;
    }
}

