/*
 * Unit Converter
 * Hossein Hatami
 * Personal Project
 */

#include "uc.h"

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

int length_converter(int length, char input_unit, char output_unit) {
   
    if (length == 0) {
        return 0;
    }
    else if (length > INT_MAX) {
        return INVALID_INT;
    }
    else if (length < INT_MIN) {
        return INVALID_INT;
    }
    
    if (input_unit == output_unit) {
        return length;
    }

    switch (input_unit) {
        case ('m'):
            switch (output_unit) {
                case 'm':
                    return length;
                case 'c':
                    return length * 100;
                case 'k':
                    return length / 1000;
                case 'i':
                    return length * 39.3701;
                case 'f':
                    return length * 3.28084;
                case 'y':
                    return length * 1.09361;
                default:
                    return INVALID_UNIT;
            }
        case ('c'):
            switch (output_unit) {
                case 'm':
                    return length / 100;
                case 'c':
                    return length;
                case 'k':
                    return length / 1000000;
                case 'i':
                    return length * 0.393701;
                case 'f':
                    return length * 0.0328084;
                case 'y':
                    return length * 0.0109361;
                default:
                    return INVALID_UNIT;
            }

        case ('k'): 
            switch (output_unit) {
                case 'm':
                    return length * 1000;
                case 'c':
                    return length * 1000000;
                case 'k':
                    return length;
                case 'i':
                    return length * 39370.1;
                case 'f':
                    return length * 3280.84;
                case 'y':
                    return length * 1093.61;
                default:
                    return INVALID_UNIT;
            }
        case ('i'):
            switch (output_unit) {
                case 'm':
                    return length / 39.3701;
                case 'c':
                    return length / 0.393701;
                case 'k':
                    return length / 39370.1;
                case 'i':
                    return length;
                case 'f':
                    return length / 12;
                case 'y':
                    return length / 36;
                default:
                    return INVALID_UNIT;
            }
        case ('f'):
            switch (output_unit) {                case 'm':
                    return length / 3.28084;
                case 'c':
                    return length / 0.0328084;
                case 'k':
                    return length / 3280.84;
                case 'i':
                    return length * 12;
                case 'f':
                    return length;
                case 'y':
                    return length / 3;
                default:
                    return INVALID_UNIT;
            }
        case ('y'):
            switch (output_unit) {
                case 'm':
                    return length / 1.09361;
                case 'c':
                    return length / 0.0109361;
                case 'k':
                    return length / 1093.61;
                case 'i':
                    return length * 36;
                case 'f':
                    return length * 3;
                case 'y':
                    return length;
                default:
                    return INVALID_UNIT;
            }
        default:
            return INVALID_UNIT;
        }
    }
        