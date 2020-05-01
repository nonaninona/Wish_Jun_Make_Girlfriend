#include "functions.h"

int Update(Player* P1, Player* P2, Bullet* B1, Bullet* B2, int* menu, int* arrow) {

	int keepPlaying;

	switch (*menu) {
	case 0: keepPlaying = Update_MainMenu(menu, arrow);
	case 1: keepPlaying = Update_MainGame(P1, P2, B1, B2, menu);
	case 2: keepPlaying = Update_Ending(menu);
	}
	
	return keepPlaying
}

int Update_MainMenu(int* menu, int* arrow) {

}

int Update_MainGame(Player* P1, Player* P2, Bullet* B1, Bullet* B2, int* menu) {

}

int Update_Ending(int* menu) {

}