/*
 * Defender.cpp
 *
 *  Created on: Oct 2, 2015
 *      Author: andy.kelsey
 */

#include "Defines.hpp"
#include "Robot.hpp"
#include "Defender.hpp"

using namespace std;

Defender :: Defender(uint16_t loc) : Robot(loc, 400, DEFENDER_ENUM)
{
	armor = new Armor("Titanium", 3);
	weapon = new Weapon(65, 150);
}

Defender :: ~Defender()
{
	delete weapon;
	delete armor;
}

uint16_t Defender :: Attack(uint16_t range)
{
	uint16_t attack = weapon->getAttackModifier();
	uint16_t inRange = weapon->getRange() / range;
	attack = attack * inRange;

	return attack;
}

uint16_t Defender :: Defend(uint16_t dmg)
{
	uint16_t defense = armor->getDefenseModifier();
	uint16_t dmgTaken = dmg / defense;

	Defender::setHealth(getHealth() - dmgTaken);

	return dmgTaken;
}

void Defender :: Move(int8_t steps)
{
	location = location + steps/armor->getDefenseModifier();
}

