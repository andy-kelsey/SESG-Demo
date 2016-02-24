/*
 * Battle.cpp
 *
 *  Created on: December 31, 2015
 *      Author: andy.kelsey
 */

#include "Defines.hpp"
#include "Battle.hpp"
#include <iostream>


/////////////////////////////
// Static Declarations
/////////////////////////////
uint16_t moveNumber = 0;


Battle::Battle() : turn(0)
{
	Robot1 = 0;
	Robot2 = 0;
}

Battle::Battle(Robot* Robot1, Robot* Robot2) : turn(0)
{
	Battle::Robot1 = Robot1;
	Battle::Robot2 = Robot2;
}

Battle::~Battle()
{
	delete Robot2;
	delete Robot1;
}

bool_t Battle::runBattle()
{
	bool_t rv = true;
	uint16_t dmg;
	uint16_t range = getRange(Robot1->getLocation(), Robot2->getLocation());

	if (turn == 0)
	{
		moveRobot(Robot1, 20, range);
		dmg = Robot2->Defend(Robot1->Attack(range));
		cout << "Robot1: "<< Robot::robotNames[Robot1->getType()] << " attacks "
				<< "Robot2: "<< Robot::robotNames[Robot2->getType()] << " for " << dmg <<" damage. "
				<< "Robot2's health is now " << Robot2->getHealth() << endl;
		turn = 1;
	}
	else
	{
		moveRobot(Robot2, -20, range);
		dmg = Robot1->Defend(Robot2->Attack(range));
		cout << "Robot2: "<< Robot::robotNames[Robot2->getType()] << " attacks "
						<< "Robot1: "<< Robot::robotNames[Robot1->getType()] << " for " << dmg <<" damage. "
						<< "Robot1's health is now " << Robot1->getHealth() << endl;
		turn = 0;
	}

	if((Robot1->getHealth() > 0) && (Robot2->getHealth() > 0))								// battle isn't finished
	{
		rv = true;
	}
	else 																					// battle is complete
	{
		if (Robot1 -> getHealth() == 0)
		{
			cout << "Robot2: "<< Robot::robotNames[Robot2->getType()] << " wins!" <<endl;
		}
		else
		{
			cout << "Robot1: "<< Robot::robotNames[Robot1->getType()] << " wins!" <<endl;
		}
		rv = false;
	}

	return rv;
}

uint16_t Battle::getRange(uint16_t loc1, uint16_t loc2)
{
	return (loc1 >= loc2) ? loc1 - loc2 : loc2 - loc1;
}

void Battle::moveRobot(Robot* robot, int16_t steps, uint16_t range)
{
	char_t input[ARRAY_SIZE];

	cout << "Range is:"<< range << " Would you like to move closer? (y/n)" << endl;
	cin >> input;

	if (strcmp(input, "y") == 0)
	{
		robot->Move(steps);
		++moveNumber;
		if (moveNumber > 20)
		{
			suddenDeath(robot);
		}
	}
	else
	{
		// intentionally do nothing
	}

}

void Battle::suddenDeath(Robot* robot)
{
	robot->weapon->uiAttackModifier += 100;
	cout << "Sudden Death!  Robot's power boosted by 100" << endl;
}



