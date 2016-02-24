/*
 * Scout.cpp
 *
 *  Created on: Oct 2, 2015
 *      Author: andy.kelsey
 */

#include "Defines.hpp"
#include "Robot.hpp"
#include "Scout.hpp"

using namespace std;

Scout :: Scout(uint16_t loc) : Robot(loc, 200, SCOUT_ENUM)
{
	armor = new Armor("Tin", 2);
	weapon = new Weapon(30, 500);
}

Scout :: ~Scout()
{
	delete weapon;
	delete armor;
}

uint16_t Scout :: Attack(uint16_t range)
{
	uint16_t attack = weapon->getAttackModifier();
	uint16_t inRange = weapon->getRange() / range;
	attack = attack * inRange;

	return attack;
}

uint16_t Scout :: Defend(uint16_t dmg)
{
	uint16_t defense = armor->getDefenseModifier();
	uint16_t dmgTaken = dmg / defense;

	Scout::setHealth(getHealth() - dmgTaken);

	return dmgTaken;
}

void Scout :: Move(int8_t steps)
{
	location = location + steps/armor->getDefenseModifier();
}




