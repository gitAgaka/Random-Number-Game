#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "functions.h"

int main()
{
	char difficulty;
	int tries = 1;
	int maxTries = 0;
	int choice;

	srand((int)time(NULL));
	const int randomNumber = rand() % 100;

	welcomeMessage();
	setDifficulty(&difficulty, &maxTries);

	for (tries; tries <= maxTries; tries++)
	{
		playingGame(&choice, randomNumber, &tries, maxTries);
	}

	return 0;
}