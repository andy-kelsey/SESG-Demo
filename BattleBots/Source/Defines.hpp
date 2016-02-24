#ifndef DEFINES_H_
#define DEFINES_H_

typedef char			char_t;
typedef signed char		int8_t;
typedef unsigned char	uint8_t;
typedef signed short	int16_t;
typedef unsigned short	uint16_t;
typedef signed long		int32_t;
typedef unsigned long	uint32_t;
typedef float			float32_t;
typedef double			float64_t;
typedef bool			bool_t;

typedef enum{
	SCOUT_ENUM,
	WARRIOR_ENUM,
	DEFENDER_ENUM,
	SNIPER_ENUM,
	NO_TYPE_ENUM
}_robot;


#define STARTING_LOCATION_1 0
#define STARTING_LOCATION_2 500
#define ARRAY_SIZE 20

#define dendl	endl << endl

#endif
