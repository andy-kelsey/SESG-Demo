/*
 * Battle.hpp
 *
 *  Created on: Dec 10, 2015
 *      Author: andy.kelsey
 */

#ifndef BATTLE_H_
#define BATTLE_H_

#include "Defines.hpp"
#include "Robot.hpp"

class Battle
{
public:
	Battle();
	Battle(Robot* Robot1, Robot* Robot2);
	~Battle();

	bool_t runBattle(void);
private:
	Robot* Robot1;
	Robot* Robot2;
	uint16_t turn;
	uint16_t getRange(uint16_t loc1, uint16_t loc2);
	void moveRobot(Robot* robot, int16_t steps, uint16_t range);
	void suddenDeath(Robot* robot);
	static uint16_t turnNumer;
};



#endif //BATTLE_H_


