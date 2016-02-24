#ifndef ARMOR_H_
#define ARMOR_H_

#include "Defines.hpp"

using namespace std;

class Armor
{
private:
	uint16_t uiDefenseModifier;
	char_t sName[ARRAY_SIZE];
public:
	Armor();
	Armor(char_t*, uint16_t);
	~Armor();

	void setDefenseModifier(uint16_t);
	uint16_t getDefenseModifier(void);
	void setName(char_t*);
	char_t* getName(void);
};


#endif //ARMOR_H_