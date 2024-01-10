# Funkcje II

def silnia(liczba):
    wynik = 1
    for i in range(1, liczba+1):
        wynik = i * wynik
    return wynik

# Poniższa funkcja nie różni się od funkcji silnia
# mamy tu jednak dodany type hinting
# który pozwala zniwelowac błędy związane z niepoprawnymi typami
# wystarczy dopisac jaki typ mają argumenty i jaki typ jest zwracany
def silnia_bezpieczna(liczba: int) -> int:
    wynik = 1
    for i in range(1, liczba+1):
        wynik = i * wynik
    return wynik


#print(silnia_bezpieczna(5))
#print(silnia("Slowo"))
#print(silnia_bezpieczna("Slowo"))


# Zadanie 1
'''
Przygotuj funkcję, która jako argument otrzymuje string oraz listę stringów, a
zwraca napis, gdzie pomiędzy elementy z listy dokładana jest zawartość
pierwszego argumentu. Przykład:

foo(‘?’, [‘ala’, ‘ma’, ‘kota’]) -> ‘ala?ma?kota’
'''

def foo(symbol: str, slowa: list[str]) -> str:
    slowo_pomocnicze = slowa[0]
    
    for slowo in slowa[1:]:
        slowo_pomocnicze += symbol + slowo
    
    return slowo_pomocnicze

def foo2(symbol: str, slowa: list[str]) -> str:
    return symbol.join(slowa)

print(foo('?', ['ala', 'ma', 'kota']))
print(foo2('?', ['ala', 'ma', 'kota']))

# Zadanie 2
'''
Napisz funkcję, która otrzyma dwa argumenty pierwszym będzie liczba, którą
chcemy podzielić bez reszty a drugim argumentem będzie dzielnik. 
Sprawdź czy dzielnik jest poprawny (to znaczy nie ma reszty z dzielenia)
'''

def dzielenie(liczba: int, dzielnik: int):
    if not (liczba % dzielnik):
        print("Jest to dzielnik tej liczby")
    else:
        print("Nie jest to dzielnik tej liczby")

# Zadanie 3
# Funkcja do logowania, która pozwala na n prób zalogowań
# jeżeli użytkownik wpisze hasło źle więcej niż n razy
# to nie może wpisywać już więcej

# Zadanie 4 
'''
Napisz funkcję przyjmującą imię, wiek i wzrost
i zwraca string "{imie}, lat {wiek}, {wzrost} m wzrostu" 
'''

info = f"informacje"

# nazwa = lambda argumenty : instrukcje
mnozenie = lambda a, b : a * b
print(mnozenie(5, 6))
print(mnozenie(7, 8))

# Zadanie 5 
# Funkcja do wyszukiwania w liczb pierwszych w danym zakresie
# można użyć Sito Eratostenesa

def prime(zakres: int) -> list[int]:
    liczby_pierwsze: list = []
    
    for cyfra in range(2, zakres+1):
        jest_pierwsza = True
        
        for dzielnik in range (2, cyfra):
            if cyfra % dzielnik == 0:
                jest_pierwsza = False
        
        if jest_pierwsza:
            liczby_pierwsze.append(cyfra)
    
    return liczby_pierwsze

print(prime(30))
            