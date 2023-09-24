#pragma once

#include <iostream>

void welcomeMessage()
{
	std::cout << "**************************************" << std::endl;
	std::cout << "*  Bem Vindo ao Jogo da Adivinhacao  *" << std::endl;
	std::cout << "**************************************" << std::endl;
	std::cout << std::endl;
}

void setDifficulty(char* _difficulty, int* _maxTries)
{
	std::cout << std::endl;
	std::cout << "Escolha a dificuldade do jogo." << std::endl;
	std::cout << "[F]acil - [M]edio - [D]ificil" << std::endl;

	bool checkInput = true;
	while (checkInput)
	{
		std::cin >> *_difficulty;

		switch (*_difficulty)
		{
		case ('f'):
		case ('F'):
		{
			*_maxTries = 10;
			checkInput = false;
			break;
		}

		case ('m'):
		case ('M'):
		{
			*_maxTries = 6;
			checkInput = false;
			break;
		}

		case ('d'):
		case ('D'):
		{
			*_maxTries = 4;
			checkInput = false;
			break;
		}

		default:
		{
			std::cout << "Opcao incorreta." << std::endl;
			std::cout << std::endl;

			std::cout << "Escolha uma das opcoes a seguir." << std::endl;
			std::cout << "[F]acil - [M]edio - [D]ificil" << std::endl;
			break;
		}
		}
	}
}

void playingGame(int* _choice, int _randNumber, int* _tries, int _maxTries)
{
	std::cout << std::endl;
	std::cout << "Tentativa " << *_tries << " de " << _maxTries << "." << std::endl;
	std::cout << "Escolha um numero: ";
	std::cin >> *_choice;

	if (*_choice > _randNumber)
	{
		std::cout << "O numero que voce escolheu e maior que o numero secreto." << std::endl;
	}
	else if (*_choice < _randNumber)
	{
		std::cout << "O numero que voce escolheu e menor que o numero secreto." << std::endl;
	}
	else
	{
		std::cout << std::endl;
		std::cout << "Parabens! Voce ganhou!" << std::endl;
		std::cout << "Voce precisou de " << *_tries << " tentativas para acertar o numero secreto." << std::endl;
		*_tries = _maxTries++;
	}

	if (*_tries == _maxTries)
	{
		std::cout << std::endl;
		std::cout << "Voce perdeu." << std::endl;
		std::cout << "Infelizmente voce ficou sem tentativas." << std::endl;
	}
}