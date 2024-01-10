# Funkcje

def funkcja(argument):          # deklaracja funkcji
    print("To jest nasza pierwsza funkcja: ") 
    print("Funkcja przyjela argument: ", argument)
    print("Zwiekszymy go o dwa: ")
    return argument+2           # wartosc zwracana przez funkcje
# nie musimy dawać argumentów
# nie musimy zwracać wartości


def wartosc_bezwzgledna(liczba):
    if liczba < 0:
        return -liczba
    else:
        return liczba


# Funkcja może miec dowolną ilość argumentów
def funkcja_kwadratowa(x, a = 1, b = 0):   # oraz może mieć ustawione domyślne wartości     
    return a*x*x + b


zmienna = -5
print(funkcja(zmienna))
print("Wartosc bezwzgledna: ", wartosc_bezwzgledna(zmienna))
print("Wartosc bezwzgledna: ", wartosc_bezwzgledna(-10))
print("Wartosc bezwzgledna: ", wartosc_bezwzgledna(5))

print("Funkcja kwadratowa: ", funkcja_kwadratowa(zmienna))

# Zadanie 1 - funkcja pole prostokąta a*b
# Zadanie 2 - podajemy imię, a funkcja zwraca powitanie z iminiem
# Zadanie 3 - silnia 5! = 1*2*3*4*5
# Zadanie 4 - czy nasze słowo ma 5 lub więcej liter?

def silnia(liczba):
    wynik = 1
    for i in range(1, liczba+1):
        wynik = i * wynik
    return wynik

print(silnia(2))
print(silnia(5))
print(silnia(6))