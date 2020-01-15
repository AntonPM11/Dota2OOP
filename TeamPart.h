#include "Players.h"
#include "Hero.h"
#include <iostream>

using namespace std;

class TeamPart {
public:
	Hero hero;
	Player player;

	TeamPart(){
		this->player=player;
		this->hero=hero;
	}
};
