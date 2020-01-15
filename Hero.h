#include <iostream>

using namespace std;

class Hero {
public:
	Hero() {
		Name=" ";
		HP=0;
		Damage=0;
		Speed=0;
	}

	Hero(string Name,int HP,int Damage, int Speed){
		this->Name=Name;
		this->HP=HP;
		this->Damage=Damage;
		this->Speed=Speed;
	}

	string returnName() {
		return Name;
	}

	int returnHP() {
		return HP;
	}

	int returnDamage() {
		return Damage;
	}

	int returnSpeed() {
		return Speed;
	}

private:
	string Name;
	int HP;
	int Damage;
	int Speed;
};
