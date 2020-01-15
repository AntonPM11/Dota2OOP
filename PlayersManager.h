#include "Players.h"
#include <iostream>
#include <vector>
#include <ctime>

using namespace std;

class PlayersManager {
	vector<Player> Players;

	void CreatePlayers() {
		vector<string> Names={"Buster", "Edith", "Kitty", "Stan", "Walter", "Benjamin", "Francis", "Steve", "Morty", "Rick", "Alfred", "Henry"};

		srand(time(NULL));
		for(int i=0;i<=Players.size();i++){
			int rank=rand()%1500+500;
			int idp=rand()%Name.size();
			Player player=Player(Names[idp],rank);
			Players.push_back(player);
		}
	}
		void SortPlayers() {
			for(int i=0;i<=Players.size();i++){
				cout<<"Players: "<<Players[i].returnName()<<endl;
			}
		}
		Player GetPlayerByName(string name){
			for(int i=0;i<=Players.size();i++){
				if(Players[i].returnName!=name){
					cout<<"Player do not exist"<<endl;
				}
				if(Players[i].returnName==name){
					return Players[i];
				}
			}
		}
		Player GetPlayerByID(int id){
			for(int i=0;i<=Players.size();i++){
				if(Players[i].returnid!=id){
					cout<<"Player do not exist"<<endl;
				}
				if(Players[i].returnid==id){
					return Players[i];
				}
			}
		}
		void AddNewPlayer(string name, int id, int rank){
			for(int i=0;i<=Players.size();i++){
				if(Players[i].returnName==name){
					cout<<"Player is already exist. Choose another name"<<endl;
					return 0;
				}
			}
		}
		void RemovePlayer(int id){
			for(int i=0;i<=Players.size();i++){
				if(Players[i].returnid==id){
					Players.erase(Players.begin()+i)
							break;
				}
			}
		}
	};
