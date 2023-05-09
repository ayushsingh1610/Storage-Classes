// 
#include<stdio.h>
int a; // A global variable with default value 0.
void main1();
void main() {
  printf("%d\n", a);
  a = 10;
  printf("%d",a);
  main1();
}
void main1() {
  extern int max;       //another methof calling
  max=5;
  printf("\n%d",max);
}
int max;
