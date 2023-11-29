# OPERATORY RELACYJNE I LOGICZNE (BOOLEAN) - PRZYPOMNIENIE

# Operatory relacyjne
"""
> >= większy, większy równy
< <= mniejszy, mniejszy równy
== równość (logiczna)
!= nierówność
"""

# Operatory logiczne (w kolejności wykonywania)
# not (negacja)
"""
not True -> False           !1 = 0
not False -> True           !0 = 1
"""
# and (i)
"""
True and True -> True       1 and 1 = 1
True and False -> False     1 and 0 = 0
False and True -> False     0 and 1 = 0
False and False -> False    0 and 0 = 0
"""
# or (lub)
"""
True or True -> True        1 or 1 = 1
True or False -> True       1 or 0 = 1
False or True -> True       0 or 1 = 1
False or False -> False     0 or 0 = 0
"""

warunek_1 = int(input("Podaj czy warunek_1 to prawda (1/0): "))
warunek_2 = int(input("Podaj czy warunek_2 to prawda (1/0): "))
warunek_3 = int(input("Podaj czy warunek_3 to prawda (1/0): "))
wynik_1 = "Pierwszy warunek to prawda, następnych nie sprawdzamy"
wynik_2 = "Drugi warunek to prawda"
wynik_3 = "Trzeci warunek to prawda"
wynik_4 = "Wszystkie warunki byly nieprawdziwe!"

# Instrukcje warunkowe

if warunek_1 == 1:               # jeżeli warunek zostanie spełniony to:
    print(wynik_1)
elif warunek_2 == 1:             # jeżeli pierwszy nie został spełnony to:
    print(wynik_2)
    if warunek_3 == 1:           # instrukcja zagnieżdżona
        print(wynik_3)
elif warunek_3 == 1:
    print(wynik_3)
else:                            # jeżeli żaden warunek nie został spełniony to:
    print(wynik_4)
