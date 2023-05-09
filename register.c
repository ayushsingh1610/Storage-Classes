//The main difference is that variables of register storage are initialized inside a register of the CPU. Register variables come in handy if you want to access a variable frequently in the program; it cuts down the time required in memory access and results in faster access of the variable stored in the register.
//Initializing variables with register storage is just a suggestion to the compiler, by the user that to store the variable in the register. It depends on various parameters such as code optimization techniques of compiler or availability of registers decide whether to allocate register or not. If the register is not used the variable is stored in the main memory as in auto variable.
#include<stdio.h>
int main()
{
    register int a;
}