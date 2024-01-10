#include <iostream>
#include <cstdlib>
#include <ctime> 

int main() {
	// ZMIENNE
	bool winner = false;
	int klasa;
	int hapsy;
	int interator;
	int gold = 0;
	int monster1hp = 200;
	// WYBOR POSTACI
	//std::cout << "Jesteście śmiałkami którzy trafili do legendarnego lochu Nexraxonu.Musiciepokonać Ahzoga plugawiciela dusz aby zdobyć legendarny skarb.Jednak droga nie jest łatwa, loch jest najeżony wieloma pułapkami, a dostępu do Ahzoga pilnują jego wierni słudzy których należy pokonać.Do dzieła i niech blask Aurory Wam sprzyja!!" << std::endl;
	std::cout << "1 = mag / 2 = ryczerz / 3 = nwm wybierz 1-2 prosze";
	std::cin >> klasa;
	switch (klasa) {

	case 1:
		std::cout << "\nJestes magiem teraz ok??";
		hapsy = 100;
		break;
	case 2:
		std::cout << "\nAle epik ryczerz";
		hapsy = 150;
		break;
	case 3:
		std::cout << "\nnot funni didnt laugh";
		break;
	default:
		std::cout << "\nnuh uh 1-2 plis";
		break;
	}

	std::cout << "\nAtakuje cie ((input_character_monster_name))! \nCo robisz??\n" << std::endl;
	srand(time(NULL));
	while (winner == false && hapsy >= 0) {
		std::cout << "\n1 - bajojajo (ucieczka) \n2 - epik fajty \n3 - sklep\n";
		int costam;
		int costamjeszcze;
		int skonczylymisiepomysly;
		std::cin >> costam;

		if (costam == 1)
			std::cout << "\nUciekles dostajesz zero golda i xp slabiak\n";
		else if (costam == 2) {
			if (monster1hp <= 0) {
				std::cout << "\nPokonales potwora!";
				winner = true;
			}
			int obrazenia = rand() % (40 - 10 + 1) + 10;
			std::cout << "\nObrywasz ale nie jest zle chyba\n";
			std::cout << "\ntracisz " << obrazenia << " hapsow!\n";
			hapsy -= obrazenia;

			interator = rand() % (200 - 10 + 1) + 10;
			if (interator >= 50) {
				std::cout << "\nZadales " << interator << " dmg" << std::endl;
				gold += interator;
			}
			else if (interator >= 199) {
				std::cout << "\nZa malo dmg git gud (rng cie nie lubi)\n";
			}
		}
		else if (costam == 3) {
			std::cout << "\nWitaj w sklepie!";
			std::cout << "\nMasz " << gold << " golda.";
			// switch case na przedmioty
		}
	}


}
