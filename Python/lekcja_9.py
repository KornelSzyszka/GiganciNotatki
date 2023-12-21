# listy, operacje na string, (struktury danych)

lista = [2, "Napis", 'litera', 2.5, -10.001, True, 'a', ["Kolejna", 0, "Lista"], 10, -2]
# lista jest strukturą danych - czyli zmienną, która przechowuje wiele zmiennych
# deklarujemy ją tak jak inne zmienne, jednak wpisując jej wartości w []

print(len(lista))   # len(list) wypisuje długość listy (ilość elementów)
print(lista)        # wypisuje wszystkie elementy listy
print(lista[0])     # wypisuje pierwszy element listy
koniec_listy = len(lista)-1     # koniec listy znajduje się na indeksie (rozmiar - 1)
print(lista[koniec_listy])      # lista indeksowana jest od 0
print(lista[-1])                # ujemne indeksy dają elementy od końca
lista.append("Nowy element")

for element in lista:
    print(element)
    
napis = "Jestem jak lista!"
for litera in napis:
    print(litera)