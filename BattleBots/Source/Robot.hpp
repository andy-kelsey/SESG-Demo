#ifndef ROBOT_H_
#define ROBOT_H_

#include "Armor.hpp"
#include "Defines.hpp"
#include "Weapon.hpp"
#include <string>

// Robot is an abstract class and cannot be instantiated
class Robot
{
private:

protected:
	Armor *armor;				// armor uses composition
	Weapon *weapon;				// weapon uses composition
	_robot type;
	int16_t location;			// current location on the battlefield
	uint16_t health;			// health remaining
public:
	Robot();
	Robot(uint16_t, uint16_t, _robot);
	static uint16_t robotCount;
	static string robotNames[NO_TYPE_ENUM];
	virtual ~Robot();
	virtual uint16_t Attack(uint16_t) = 0;
	virtual uint16_t Defend(uint16_t) = 0;
	virtual void Move(int8_t) = 0;

	_robot getType(void);
	uint16_t getLocation(void);
	uint16_t getHealth(void);
	void setHealth(int16_t);

	friend class Battle;
};

#endif //ROBOT_H_
