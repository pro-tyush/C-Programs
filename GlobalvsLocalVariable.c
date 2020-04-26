#include <stdio.h>

int global=1;

void main() {
int local=2;
printf("Local Variable = %d\n",local);
printf("Global Variable = %d\n",global);
}
