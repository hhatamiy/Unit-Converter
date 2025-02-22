#ifndef UC_H
#define UC_H

#include <stdio.h>

#define INVALID_INT (-1)
#define INVALID_UNIT (-2)

extern int length_converter(int length, char unit);
extern int temperature_converter(int temp, char unit);
extern int weight_converter(int weight, char unit);
extern int volume_converter(int volume, char unit);
extern int speed_converter(int speed, char unit);
extern int area_converter(int area, char unit);
extern int time_converter(int time, char unit);


#endif