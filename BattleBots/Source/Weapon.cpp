#include "Defines.hpp"
#include "Weapon.hpp"

using namespace std;

Weapon::Weapon() : uiAttackModifier(0), uiRangeModifier(0)
{

}

Weapon::Weapon(uint16_t attack, uint16_t range) : uiAttackModifier(attack), uiRangeModifier(range)
{

}

Weapon::~Weapon()
{

}

void Weapon::setAttackModifier(uint16_t modifier)
{
	uiAttackModifier = modifier;
}

uint16_t Weapon::getAttackModifier()
{
	return uiAttackModifier;
}

void Weapon::setRange(uint16_t range)
{
	uiRangeModifier = range;
}

uint16_t Weapon::getRange()
{
	return uiRangeModifier;
}


