#include "functions.h"

int Render(Player** P1, Player** P2, Bullet** B1, Bullet** B2, int menu, int arrow) {

	switch (menu) {
	case 0: Render_MainMenu(arrow);
	case 1: Render_MainGame(P1, P2, B1, B2);
	case 2: Render_Ending(P1, P2);
	}

}

int Render_MainMenu(int arrow) {

}
int Render_MainGame(Player** P1, Player** P2, Bullet** B1, Bullet** B2) {

}
int Render_Ending(Player** P1, Player** P2) {

}