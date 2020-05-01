#pragma once
#include "struct.h"
#include <stdio.h>

int Init(Player** P1, Player** P2, Bullet** B1, Bullet** B2);
int Update(Player* P1, Player* P2, Bullet* B1, Bullet* B2, int* menu, int* arrow);
int Render(Player* P1, Player* P2, Bullet* B1, Bullet* B2, int menu, int arrow);
int Release(Player** P1, Player** P2, Bullet** B1, Bullet** B2);