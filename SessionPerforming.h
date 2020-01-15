#include <iostream>
#include <vector>
#include "GameSession.h"

class SessionPerforming{
	vector<Session> sessions;
	time_t time=0;
public:
	SessionPerforming() {}
	void PerformSession(vector<Player>&Players, vector<Hero>&Heroes, int num){
		for(int i=0;i<num;i++){
			Session session(Players, Heroes);
			session.Gameplay();
			session.WinnerAnnouncement();
		}
	}
};
