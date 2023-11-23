# Typy danych
# spacja pisana _ np. liczba_calkowita = 5
# w nazwach zmiennych nie możemy używać spacji
# nie zaczynamy nazw zmiennych od liczb, same liczby moga jednak w nazwie zmiennej wystepowac
 
"""
int - liczby calkowite np. 5
float - liczby zmiennoprzecinkowe np. 3.14
bool - prawda/falsz zapisujemy jako True/False albo 1/0
string - typ znakowy, czyli slowa lub zdania
"""



liczba_zmienn = 3.14
slowo = "Slowo"
prawda = True
falsz = False

# Konwersja do typu int
print("Konwersja na int: ")
liczba_calkowita = int(liczba_zmienn)
print(liczba_calkowita, type(liczba_calkowita))
liczba_calkowita = int(prawda)
print(liczba_calkowita, type(liczba_calkowita))
liczba_calkowita = int(falsz)
print(liczba_calkowita, type(liczba_calkowita))
liczba_calkowita = int('10')
print(liczba_calkowita, type(liczba_calkowita))

liczba_string = str(10)
print(liczba_string, type(liczba_string))

snake_case = "Jestem zmienna zapisana w snake_case" # zmienne
camelCase = "Jestem zmienna zapisana w camelCase"   # funkcje
PascalCase = "Jestem zmienna zapisana w PascalCase" # klasy
STALA_ZMIENNA = "Jestem stala zmianna"              # stałe zmienne