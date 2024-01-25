/*
    * Define a function to push elements in the stack
    * Define a function to pop elements in the stack
    * Define a function to create the stack
    * Define the functions to execute
    * Define the main function where:
        * stack is created, filled up with function pointers
        * each function pointer is called following LIFO pattern
        * after each function call, maintain a delay
        * ensure the called functions variables retain the values even after exiting for reuse.
*/

#include <stdint.h>
#include <stdio.h>

#define STACK_SIZE                  (4)

void (*func_ptr[STACK_SIZE])(void);
uint32_t stack_ptr = 0;

/* Task functions task1, task2, task3, task4 */
void task1(void);
void task2(void);
void task3(void);
void task4(void);
