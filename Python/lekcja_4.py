# OPERATORY RELACYJNE I LOGICZNE (BOOLEAN)

# Operatory relacyjne
"""
> >= większy, większy równy
< <= mniejszy, mniejszy równy
== równość (logiczna)
!= nierówność
"""

# Operatory logiczne (w kolejności wykonywania)
# NOT (negacja)
"""
Not True -> False           !1 = 0
Not False -> True           !0 = 1
"""
# AND (i)
"""
True and True -> True       1 and 1 = 1
True and False -> False     1 and 0 = 0
False and True -> False     0 and 1 = 0
False and False -> False    0 and 0 = 0
"""
# OR (lub)
"""
True or True -> True        1 or 1 = 1
True or False -> True       1 or 0 = 1
False or True -> True       0 or 1 = 1
False or False -> False     0 or 0 = 0
"""

# Zad 3
# Wczytaj wzrost od użytkownika
# Jeżeli jego wzrost bedzie <160, zwróć fałsz
# Jeżeli większy, to prawdę
wzrost: int = int(input("Podaj wzrost: "))
WZROST_GRANICZNY: int = 160
czy_dobry_wzrost: bool = (wzrost > WZROST_GRANICZNY)
print("Czy mozesz wjesc: ", czy_dobry_wzrost)

# Zad 4
# Wczytaj trzy liczby
# Stworzmy zmienne bool, które będą reprezentować:
# Czy pierwsza, czy druga czy trzecia liczba jest największa

liczba_1 = int(input("Liczba 1: "))
liczba_2 = int(input("Liczba 2: "))
liczba_3 = int(input("Liczba 3: "))

czy_liczba_1: bool = (liczba_1 > liczba_2 and liczba_1 > liczba_3)
czy_liczba_2: bool = (liczba_2 > liczba_1 and liczba_2 > liczba_3)
czy_liczba_3: bool = not liczba_1 and not liczba_2

print("Czy liczba 1 jest najwieksza?: ", czy_liczba_1)
print("Czy liczba 2 jest najwieksza?: ", czy_liczba_2)
print("Czy liczba 3 jest najwieksza?: ", czy_liczba_3)

# in -> czy dany element jest np w stringu
# input().lower() -> wczytywane jako małe litery
# input().upper() -> [...] wielkie litery

slowo_1 = "kesta"
slowo_2 = "teczka"
czy_ostatnia_litera: bool = slowo_1[-1] == slowo_2[-1]
print("Czy ostatnia litera jest taka sama? ", czy_ostatnia_litera)
