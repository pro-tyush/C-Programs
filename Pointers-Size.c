#include <stdio.h>
#include <stdlib.h>

void main(){
	int *ptr;
	printf("\nSize Of Ptr(const) : %ld\n",sizeof(ptr));
	printf("\nSize Of &Ptr(const): %ld\n",sizeof(&ptr));
	printf("\nSize Of *Ptr(Depends on Datatype) : %ld\n\n\n",sizeof(*ptr));

	
	int arr[] = {1,2,3,4,5};
	int *ptr2 = arr;
	printf("\n Size Of Array With 5 Elements : %ld \n", sizeof(arr));
	printf("\n Size Of Ptr2 : %ld \n", sizeof(ptr2));
	printf("\n Size Of &Ptr2 : %ld \n", sizeof(&ptr2));
	printf("\n Size Of *Ptr2 : %ld \n", sizeof(*ptr2));
	printf("\n Hence ADDRESS Size Is Always 8 Byte");
	printf("\n Hence *ptr Size Is Always Based On Datatype even if it has arr(int) it is 4 bytes \n");


}
