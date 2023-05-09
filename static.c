// Static variables are initialized inside static memory during compile time of the program and are independent of the function call stack in which they are defined which makes them alive even after the function’s activation record is destroyed.

// Once a static variable is defined it lives until the end of the program.

// Static variables in C are initialized with ‘0’ by default and their scope is limited within the parent block which are local static variables.

// You can create global static variables by defining them at the start of the program which can be accessed anywhere in the program.
#include<stdio.h>
static int out =5;
void main()
{
    static int in=10;
    printf("Global variable - %d\nLocal variable - %d",out,in);
}
