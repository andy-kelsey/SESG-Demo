#ifndef SNIPER_H_
#define SNIPER_H_

class Sniper : public Robot
{
public:
	Sniper();
	Sniper(uint16_t loc);
	virtual ~Sniper();

	uint16_t Attack(uint16_t);
	uint16_t Defend(uint16_t);
	void Move(int8_t);

};


#endif //SCOUT_H_
