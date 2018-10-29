#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, const char * argv[]) {
    int sizeOfFirstArray,*firstArray,*secondArray;
    printf("enter size of first array: ");
    scanf("%d",&sizeOfFirstArray);
    firstArray=malloc(sizeOfFirstArray*sizeof(int));
    for(int i=0;i<sizeOfFirstArray;i++){
        firstArray[i]=i*2;
    }
    printf("first array\n");
    for (int i=0;i<sizeOfFirstArray;i++) {
        printf("%d ",firstArray[i]);
    }
    printf("\n");
    secondArray=realloc(firstArray, sizeOfFirstArray*sizeof(int));
    for(int i=sizeOfFirstArray;i<2*sizeOfFirstArray;i++){
        secondArray[i]=i*2;
    }
    printf("second array\n");
    for (int i=0;i<2*sizeOfFirstArray;i++) {
        printf("%d ",secondArray[i]);
    }
    printf("\n");
    return 0;
}
