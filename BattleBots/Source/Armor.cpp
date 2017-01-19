#include <assert.h>
#include <iostream>
#include "Armor.hpp"
#include "Defines.hpp"

using namespace std;

Armor::Armor() : uiDefenseModifier(0)
{

}

Armor::Armor(char_t* name, uint16_t modifier) : uiDefenseModifier(modifier)
{
	strcpy_s(sName,name);
}

Armor::~Armor()
{

}

void Armor::setDefenseModifier(uint16_t modifier)
{
	uiDefenseModifier = modifier +10;
}

uint16_t Armor::getDefenseModifier()
{
	return uiDefenseModifier;
}

void Armor::setName(char_t* name)
{
	strcpy_s(sName, name);
}

char_t* Armor::getName()
{
	return sName;
}


