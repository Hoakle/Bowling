#include "stdafx.h"
#include "Game.h"
using namespace std;

Game::Game()
{
}

Game::Game(score sc)
{
	s = sc;
}


Game::~Game()
{
}

int Game::calculScore()
{
	int somme = 0;
	for (unsigned int i = 0; i<s.size(); ++i) {
		somme += get<0>(s.at(i)) + get<1>(s.at(i));

	}
	return somme;
}

void Game::addTuple(tuple<int, int> t)
{
	if (s.size() < 10 && get<0>(t)+get<1>(t) > 10 && get<0>(t) < 0 && get<0>(t) > 10 && get<1>(t) < 0 && get<0>(t) > 10) {
		s.push_back(t);
	}
	if (s.size() == 10 && get<0>(t) < 0 && get<0>(t) > 10 && get<1>(t) < 0 && get<0>(t) > 10) {
		s.push_back(t);
	}

	return;
}
