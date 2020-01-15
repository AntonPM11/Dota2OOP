#include "Hero.h"
#include <iostream>
#include <ctime>
#include <vector>

using namespace std;

class HeroManager {
public:
	vector<Hero> Heroes;

	void CreateHeroes() {
		vector<string> Names={"Pudge", "Sniper", "Rubick", "Huskar", "Luna", "Templar Assasin", "Zeus", "Juggernaut", "Puck", "Windranger", "Ember Spirit", "Storm Spirit"};

		srand(time(NULL));
		for(int i=0;i<=Heroes.size();i++){
			int hp=rand()%1000+800;
			int damage=rand()%50+10;
			int speed=rand()%40+10;
			int rname=rand()%Names.size();

			Hero hero=Hero(Names[rname],hp,damage,speed);
			Heroes.push_back(hero);
		};
	}
	Hero GetHeroByName(string name){
		for(int i=0;i<=Heroes.size();i++){
			if(Heroes[i].returnName()!=name){
				cout<<"Hero do not exist"<<endl;
			}
			if(Heroes[i].returnName()==name){
				return Heroes[i];
			}
		}
	}
	void ListOfHeroes() {
		for(int i=0;i<=Heroes.size();i++){
			cout<<"Heroes: "<<Heroes[i].returnName()<<endl;
		}
	}
	void AddNewHero(string name, int hp, int damage, int speed) {
		for(int i=0;i<=Heroes.size();i++){
			if(Heroes[i].returnName()==name){
				cout<<"This hero is already exist. Please choose another name."<<endl;
				return;
			}
		}
	}
};
