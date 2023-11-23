liczba_1 = 5
liczba_2 = 10
print(f'Dodawanie {liczba_1} + {liczba_2} = {liczba_1 + liczba_2}')
# zmienna = input() -> input to nasze wejście, czyli pobranie wartości z konsoli
# możemy przy pomocy input() nadać również wiadomość przed pobraniem wartości
imie = input("Podaj swoje imie: ")
print(type(imie)) # -> String
wiek = input("Podaj swoj wiek: ")
print(type(wiek)) # -> String
wiek = int(input("Podaj swoj wiek: "))
print(type(wiek)) # -> int

# operacje na int/float
liczba_1: float = float(input("Podaj pierwsza liczbe: ")) #10
liczba_2: float = float(input("Podaj druga liczbe: "))    #5
print(+liczba_1)                        # -> 10
print(liczba_1 + liczba_2) # dodawanie      # -> 15
print(-liczba_1) # negacja (wartość ujemna) # -10
print(liczba_1 - liczba_2) # odejmowanie    # 5
print(liczba_1 * liczba_2) # mnożenie       # 50
print(liczba_1 / liczba_2) # dzielenie -> zawsze zwraca float, nawet w przypadku liczb podzielnych przez siebie
print(liczba_1 % liczba_2) # modulo (reszta z dzielenia)    # 0
print(liczba_1 // liczba_2) # dzielenie całkowitoliczbowe (ucina wartość po kropce) 5//10 = 0
print(liczba_1 ** liczba_2) # potęgowanie
# ----------------------------------------------------------------- #
liczba_1 = liczba_1 + 1 # -> 11
liczba_1 += 1           # -> 12
liczba_1 -= 1           # -> 11
# ... operator=

# operacje na boolean
print(True + True) # -> 2
print(True + False) # -> 1
print(False + False) # -> 0
print(3*True) # -> 3

# operacje na string
slowo_1 = "Witaj"
SPACJA = " "
slowo_2 = "Swiecie!"
slowo_1 += SPACJA
print(slowo_1 + SPACJA + slowo_2) # -> zdanie
print(3*slowo_1)         # Witaj Witaj Witaj
nasza_liczba_str = "Nasza liczba: "
# stringi + liczby
print(nasza_liczba_str, liczba_1)
print(nasza_liczba_str + str(liczba_1))
# fstring -> string, który przyjmuje wartość
# f to flaga
print(f'Nasza liczba: {liczba_1}')
print(f'Liczba_1 =  {liczba_1} liczba_2 = {liczba_2}')

liczba_3 = -liczba_1    # -10.6
print(abs(liczba_3))    # 10
print(min(2, 5, 6, 3, 4)) # -> 2
print(max(2, 5, 6, 3, 4)) # -> 6
print(round(liczba_3))  # -10 <- -10.6 | 10.6 -> 11
print(len(nasza_liczba_str)) # -> liczba znaków w stringu

# Zadanie 1
# Przyjąć imię, nazwisko i rok urodzenia
# wypisać przy pomocy fstring

# Zadanie 2
# "Kalkulator"
# Przyjąć dwie liczby ( input() ) i przy pomocy fstring wypisać wyniki
# wszystkich działań matematycznych na nich
print(f'Dodawanie {liczba_1} + {liczba_2} = {liczba_1 + liczba_2}')