#include "func_ptr_and_stack.h"

int main(void){
    /* Define the super loop, where:
     * The stack will be filled up first
     * Then each element will be poped out following LIFO strategy, along with a small time delay
     */
    while(1){
        /* Fill up stack */
        func_ptr[stack_ptr] = task1;
        stack_ptr++;
        func_ptr[stack_ptr] = task2;
        stack_ptr++;
        func_ptr[stack_ptr] = task3;
        stack_ptr++;
        func_ptr[stack_ptr] = task4;
        /* Pop out each element and wait for some time */
        while(1){
            /* Pop out the last added element, i.e. "Last In, First Out", and execute*/
            func_ptr[stack_ptr]();
            func_ptr[stack_ptr] = (size_t)0;
            /* Wait for some time */
            for(int j = 1; j <= 100; j++);
            /* Decrement the stack pointer by 1 place, until the start of stack */
            if (!stack_ptr)
                break;
            else
               stack_ptr--;
        }
    }
}

void task1(void){
    static int i = 0;
    printf("Task 1: Value: %d\n", i);
    i++;
    i %= 50;    
}

void task2(void){
    static int i = 0;
    printf("Task 2: Value: %d\n", i);
    i++;
    i %= 50;
}

void task3(void){
    static int i = 0;
    printf("Task 3: Value: %d\n", i);
    i++;
    i %= 50;
}

void task4(void){
    static int i = 0;
    printf("Task 4: Value: %d\n", i);
    i++;
    i %= 50;    
}