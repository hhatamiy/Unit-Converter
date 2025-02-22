#ifndef UC_H
#define UC_H

#include <stdio.h>

// #define MAX_STR_LEN (2)

#define INVALID_INT (-1)
#define INVALID_UNIT (-2)

extern int length_converter(int length, char input_unit, char output_unit);
extern int temperature_converter(int temp, char input_unit, char output_unit);
extern int weight_converter(int weight, char input_unit, char output_unit);
extern int volume_converter(int volume, char input_unit, char output_unit);
extern int speed_converter(int speed, char input_unit, char output_unit);
extern int area_converter(int area, char input_unit, char output_unit);
extern int time_converter(int time, char input_unit, char output_unit);

// test

#endif