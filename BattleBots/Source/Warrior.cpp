/*
 * Warrior.cpp
 *
 *  Created on: Nov 17, 2015
 *      Author: andy.kelsey
 */

#include "Defines.hpp"
#include "Robot.hpp"
#include "Warrior.hpp"

using namespace std;

Warrior :: Warrior(uint16_t loc) : Robot(loc, 300, WARRIOR_ENUM)
{
	armor = new Armor("Steel", 2);
	weapon = new Weapon(40, 255);
}

Warrior :: ~Warrior()
{
	delete weapon;
	delete armor;
}

uint16_t Warrior :: Attack(uint16_t range)
{
	uint16_t attack = weapon->getAttackModifier();
	uint16_t inRange = weapon->getRange() / range;
	attack = attack * inRange;

	return attack;
}

uint16_t Warrior :: Defend(uint16_t dmg)
{
	uint16_t defense = armor->getDefenseModifier();
	uint16_t dmgTaken = dmg / defense;

	setHealth(getHealth() - dmgTaken);

	return dmgTaken;
}

void Warrior :: Move(int8_t steps)
{
	location = location + steps/armor->getDefenseModifier();
}
