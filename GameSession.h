#include "Hero.h"
#include "Players.h"
#include "PlayersManager.h"
#include "TeamPart.h"
#include <iostream>
#include <vector>
#include <ctime>

using namespace std;

class Session{
	vector<TeamPart> Radiant;
	vector<TeamPart> Dire;
	time_t StartTime=0;

	int winner=-1;
	string arr[3]={"Draw", "Radiant", "Dire"};

	void Gameplay() {
		int HPRadiant=0, HPDire=0, damageRadiant=0, damageDire=0;

		for(int i=0;i<Radiant.size();i++){
			HPRadiant+=Radiant[i].hero.returnHP();
			damageRadiant+=Radiant[i].hero.returnDamage();
		}

		for(int i=0;i<Dire.size();i++){
			HPDire+=Dire[i].hero.returnHP();
			damageDire+=Dire[i].hero.returnDamage();
		}

		if(HPRadiant-damageDire>HPDire-damageRadiant){
			winner=1;
		}
		if (HPRadiant-damageDire==HPDire-damageRadiant){
			winner=0;
		}
		else{
			winner=2;
		}
	}

	void WinnerAnnouncement(){
		if(winner>0){
			cout<<arr[winner]<<" is a winner"<<endl;
		}
		else{
			cout<<arr[winner]<<endl;
		}
	}
};
