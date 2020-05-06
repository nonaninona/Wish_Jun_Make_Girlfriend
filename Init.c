#include "functions.h"
#include <stdlib.h>

int Init(Player** P1, Player** P2, Bullet** B1, Bullet** B2) {
	
	*P1 = (Player*)malloc(sizeof(Player));
	*P2 = (Player*)malloc(sizeof(Player));
	*B1 = (Bullet*)malloc(sizeof(Bullet));
	*B2 = (Bullet*)malloc(sizeof(Bullet));
	(*P1)->health = 1;
	(*P2)->health = 1;
	(*P1)->positionX = 1;
	(*P1)->positionY = 20;
	(*P2)->positionX = 40;
	(*P2)->positionY = 20;
	(*B1)->positionX = (*P1)->positionX+1;
	(*B1)->positionY = (*P1)->positionY;
	(*B2)->positionX = (*P2)->positionX-1;
	(*B2)->positionY = (*P2)->positionY;
	printf("%d",(*B2)->positionX);
	
}
