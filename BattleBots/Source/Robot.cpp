/*
 * Robot.cpp
 *
 *  Created on: Oct 2, 2015
 *      Author: andy.kelsey
 */

#include "Defines.hpp"
#include "Robot.hpp"

using namespace std;

string Robot::robotNames[] =
{
	"Scout",
	"Warrior",
	"Defender",
};


Robot :: Robot(uint16_t loc, uint16_t health, _robot type) :
		location(loc), health(health), type(type)
{
	armor = 0;
	weapon = 0;
}
Robot :: ~Robot()
{

}

_robot Robot :: getType()
{
	return type;
}

uint16_t Robot :: getLocation()
{
	return location;
}

uint16_t Robot :: getHealth()
{
	return health;
}

void Robot :: setHealth(int16_t health)
{
	if (health <= 0)
	{
		Robot::health = 0;
	}
	else
	{
		Robot::health = health;
	}
}

