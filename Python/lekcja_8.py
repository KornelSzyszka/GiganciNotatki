start: int = 1
koniec: int = 100
krok: int = 2

# jeżeli podamy tylko jedną wartość w range(n)
# to bedzie nasz zakres (0, n-1), gdzie n to nasza warość w range(n)
for i in range(6):
    print(i)

for iterator in range(start, koniec, krok):
    print(iterator)
   
# Dla licznika w zasięgu od 1 do 100 wypisz co drugą liczbę

# Zadanie 1
# 0, 1, 3, 4, 5
# 5, 6, 7, 8, 9, 10, 11, 12
# 0, 5, 10, 15
# -100 -25 50 125

zakres = int(input("Prosze podac zakres: "))
'''
a, b = 0, 1
print(a)
print(b)
for i in range(zakres+1):
    c = a
    a = b
    b = b + c
    print(b)
'''
for i in range(zakres+1):
    czy_pierwsza: bool = True
    for j in range(2, i):
        if not(i % j):
            czy_pierwsza = False
    if czy_pierwsza:
        print(i)

# sprawdzamy czy liczba dzieli się przez cokolwiek (innego niż 1 i ta liczba)
# jeżeli tak to nie chcemy jej wypisywać
# w przeciwmy przypadku jest pierwsza i wypisujemy ją  