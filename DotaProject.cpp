#include <iostream>
#include "PlayersManager.h"
#include "HeroManager.h"
#include "SessionPerforming.h"

using namespace std;

int main() {
	PlayersManager pm;
	HeroManager hm;
	SessionPerforming sp;

	pm.CreatePlayers();
	hm.CreateHeroes();


	return 0;
}
