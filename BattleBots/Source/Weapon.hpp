#ifndef WEAPON_H_
#define WEAPON_H_

#include "Defines.hpp"

using namespace std;

class Weapon
{
private:
	uint16_t uiAttackModifier;
	uint16_t uiRangeModifier;
public:
	Weapon();
	Weapon(uint16_t, uint16_t);
	~Weapon();

	void setAttackModifier(uint16_t);
	uint16_t getAttackModifier(void);
	void setRange(uint16_t);
	uint16_t getRange(void);

	friend Battle;
};


#endif //WEAPON_H_
