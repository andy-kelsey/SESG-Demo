/*
 * Defender.hpp
 *
 *  Created on: Nov 17, 2015
 *      Author: andy.kelsey
 */


#ifndef DEFENDER_H_
#define DEFENDER_H_

class Defender : public Robot
{
public:
	Defender();
	Defender(uint16_t loc);
	virtual ~Defender();

	uint16_t Attack(uint16_t);
	uint16_t Defend(uint16_t);
	void Move(int8_t);
};




#endif
