#ifndef SCOUT_H_
#define SCOUT_H_

class Scout : public Robot
{
public:
	Scout();
	Scout(uint16_t loc);
	virtual ~Scout();

	uint16_t Attack(uint16_t);
	uint16_t Defend(uint16_t);
	void Move(int8_t);

};


#endif //SCOUT_H_
