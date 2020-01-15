#include <iostream>

using namespace std;

class Player{
private:
	string name;
	int rank;
	int id;
public:
	void SetName(string name){
		this->name=name;
	}
	string returnName(){
		return name;
	}

	void PlusRank(){
		rank +=25;
	}
	void MinusRank(){
		if(rank>=25) rank-=25;
	}
	int returnRank(){
		return rank;
	}
	int returnid(){
		return id;
	}
	Player(){
		name=" ";
		rank=1000;
		id=0;
	}
	Player(string name,int rank,int id){
		this->name=name;
		this->rank=rank;
		this->id=id;
	}
};
