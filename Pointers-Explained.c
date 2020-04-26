#include <stdio.h>
#include <stdlib.h>

void main(){



int var = 10;

int *ptr;

ptr = &var; //Same As int *ptr = &var;

printf("d-var : ");
printf("%d", var);

printf("\nd-starPtr : ");
printf("%d", *ptr);

printf("\np-ANDVar : ");
printf("%p", &var);

printf("\np-Ptr : ");
printf("%p", ptr);

printf("\np-ANDptr : ");
printf("%p \n", &ptr);


}
