#include <stdio.h>
#include <stdint.h>

#define NO_OF_EMPLOYEES 3

typedef struct{
    uint8_t day:5;
    uint8_t month:4;
    uint16_t year:12;
}Date_Of_Joining;
