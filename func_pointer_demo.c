#include <stdio.h>
#include <stdint.h>
#define TASK(x, y)      x##y

void task1(void);
void task2(void);
void task3(void);

int main(void){
    /* Defining an array of function pointers that point at the tasks that are created for the operation */
    void (*task[3])(void);
    /* Assigning each function pointer of the pointer array to the function*/
    task[0] = task1;
    task[1] = task2;
    task[2] = task3;
    for(int i = 0; i < 6; i++){
        printf("Running task %d\n", ((i%3) + 1));
        task[(i%3)]();
    }
    return 0;
}

void task1(void){
    printf("This is task 1\n");
}

void task2(void){
    printf("This is task 2\n");
}

void task3(void){
    printf("This is task 3\n");
}