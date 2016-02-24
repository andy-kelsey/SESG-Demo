/*
 * Sniper.cpp
 *
 *  Created on: Oct 2, 2015
 *      Author: andy.kelsey
 */

#include "Defines.hpp"
#include "Robot.hpp"
#include "Sniper.hpp"

using namespace std;

Sniper :: Sniper(uint16_t loc) : Robot(loc, 200, SNIPER_ENUM)
{
	armor = new Armor("Leather", 1);
	weapon = new Weapon(30, 1000);
}

Sniper :: ~Sniper()
{
	delete weapon;
	delete armor;
}

uint16_t Sniper :: Attack(uint16_t range)
{
	uint16_t attack = weapon->getAttackModifier();
	uint16_t inRange = weapon->getRange() / range;
	attack = attack * inRange;

	return attack;
}

uint16_t Sniper :: Defend(uint16_t dmg)
{
	uint16_t defense = armor->getDefenseModifier();
	uint16_t dmgTaken = dmg / defense;

	Sniper::setHealth(getHealth() - dmgTaken);

	return dmgTaken;
}

void Sniper :: Move(int8_t steps)
{
	location = location + steps/armor->getDefenseModifier();
}




