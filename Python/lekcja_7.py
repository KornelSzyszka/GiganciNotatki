# Pętle while
'''
while warunek:
    instrukcja

Kiedy warunek jest prawdziwy wykonuj instrukcje
'''

i: int = 0
warunek = True

while warunek:
    print(f"Iteracja: {i}")
    i += 1
    if i == 10: break

while i == 10:
    print("\nDruga petla")
    break


napis = "napis"
len(napis) # -> 5
# n -> 0, a -> 1, p -> 2.. s -> 4
literka = len(napis)
odwrocony_napis = ""
odwrocony_napis[0] = napis[literka]
odwrocony_napis += napis[literka]

# Zadanie 1
'''
Napisz program, który wczytuje napis od użytkownika i wypisuje go odwróconego.
'''

# Zadanie 2
'''
Zgadywanie liczby wylosowanej przez komputer. Program losuje liczbę,
zadaniem użytkownika jest odgadnąć ją. Komputer odpowiada “za mało”, “za
dużo” lub w przypadku trafienia wyświetla informację o wygranej i liczbie tur
potrzebnych do wygranej.
'''

# Zadanie 3
'''
Napisz program, który wyświetla pierwsze n liczb ciągu Fibonacciego. 
Ciąg Fibonacciego zaczyna się od 0 i 1, 
a każdy kolejny element jest sumą dwóch poprzednich.

0 1 1 2 3 5 8 13
0+1=1 1+1=2 1+2=3 2+3=5 3+5=8
'''

# Zadanie 4
'''
Napisz program, który sprawdza, 
czy podane słowo jest palindromem (czytane od przodu i od tyłu jest takie samo).
np. kajak, abba
slowo[i]
0 == 4 (k)
1 == 3 (a)
2 == 2 (j)
  !=
'''
# Zadanie 5
'''
Algorytm Euklidesa
'''
while b != 0:
    temp = b # temp = 2
    # a = 6 b = 2
    b = a % b # b = 6 % 2
    a = temp # a = 2

nwd = a

# Zadanie 6
'''
Silnia
6! = 1 * 2 * 3 * 4 * 5 * 6
5! = 1 * 2 * 3 * 4 * 5
0! = 1
'''