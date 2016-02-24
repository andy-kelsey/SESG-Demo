/*
 * Warrior.hpp
 *
 *  Created on: Nov 17, 2015
 *      Author: andy.kelsey
 */

#ifndef WARRIOR_H_
#define WARRIOR_H_

class Warrior : public Robot
{
public:
	Warrior();
	Warrior(uint16_t loc);
	virtual ~Warrior();

	uint16_t Attack(uint16_t);
	uint16_t Defend(uint16_t);
	void Move(int8_t);
};




#endif //WARRIOR_H_
