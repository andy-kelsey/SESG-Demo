#include <iostream>
#include "Battle.hpp"
#include "Defines.hpp"
#include "Robot.hpp"
#include "Scout.hpp"
#include "Warrior.hpp"
#include "Defender.hpp"

using namespace std;

extern void main(void)
{
	char_t botInput1[ARRAY_SIZE];
	char_t botInput2[ARRAY_SIZE];
	Robot* robot1;
	Robot* robot2;
	Battle* battle;

	//player one robot selection
	cout << "Player 1 Choose Your Battle Bot! (Scout, Warrior, or Defender)" << endl;
	cin >> botInput1;

	if(strcmp(botInput1, "Scout") == 0)
	{
		robot1 = new Scout(STARTING_LOCATION_1);
	}
	else if(strcmp(botInput1, "Warrior") == 0)
	{
		robot1 = new Warrior(STARTING_LOCATION_1);
	}
	else if(strcmp(botInput1, "Defender") == 0)
	{
		robot1 = new Defender(STARTING_LOCATION_1);
	}
	else
	{
		cout << "ERROR: Player 1 is set to Scout by Default" << endl;
		robot1 = new Scout(STARTING_LOCATION_1);
	}

	//player two robot selection
	cout << "Player 2 Choose Your Battle Bot! (Scout, Warrior, or Defender)" << endl;
	cin >> botInput2;
	if(strcmp(botInput2, "Scout") == 0)
	{
		robot2 = new Scout(STARTING_LOCATION_2);
	}
	else if(strcmp(botInput2, "Warrior") == 0)
	{
		robot2 = new Warrior(STARTING_LOCATION_2);
	}
	else if(strcmp(botInput2, "Defender") == 0)
	{
		robot2 = new Defender(STARTING_LOCATION_2);
	}
	else
	{
		cout << "ERROR: Player 2 is set to Scout by Default" << endl;
		robot1 = new Scout(STARTING_LOCATION_2);
	}

	//create battle object
	battle = new Battle(robot1, robot2);
	//continue to execute battle until it completes.
	while(battle->runBattle());
	
}

