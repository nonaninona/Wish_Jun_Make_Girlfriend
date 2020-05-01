#pragma once
#include "functions.h"

int main() {

	Player* P1;
	Player* P2;
	Bullet* B1;
	Bullet* B2;
	int keepPlaying = 1;
	int arrow = 0;
	int menu = 0;

	Init(&P1, &P2, &B1, &B2);
	while (keepPlaying) {
		keepPlaying = Update(P1, P2, B1, B2, &menu, &arrow);
		Render(P1, P2, B1, B2, menu, arrow);
	}
	Release(&P1, &P2, &B1, &B2);

}