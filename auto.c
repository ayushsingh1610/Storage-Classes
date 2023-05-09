//Objects of the auto storage class are initialized with random(garbage) values by default. Auto is the default storage class for the variables defined inside a function or a block, those variables are also called local variables. As the name suggests ‘local’, variables defined with auto are accessible within the function boundary or the block in which they are defined.
#include<stdio.h>
int main()
{
    auto int a;  //explicit declaration
    int b;       //By default
}
