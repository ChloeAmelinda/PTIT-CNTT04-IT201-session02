#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n=0;
    while (n<=0||n>100) {
        printf("Enter a number between 1 and 100: ");
        scanf("%d",&n);
    }
    int *arr=(int *)malloc(n*sizeof(int));
    if (arr==NULL) {
        printf("Memory allocation error");
        return 1;
    }

    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        printf("arr[%d]=",i+1);
        scanf("%d",&arr[i]);
    }
    int position =-1;
    while (position<0 || position>n) {
        printf("Enter a number between 1 and %d: ",n);
        scanf("%d",&position);
    }

    int value;
    printf("Array elements: ");
    scanf("%d",&value);

    arr=(int *)realloc(arr,n*sizeof(int));
    if (arr==NULL) {
        printf("Memory allocation error");
        return 1;
    }
    for (int i = n; i >position; i--) {
        arr[i]=arr[i-1];
    }
    arr[position]=value;
    n++;
    printf("array after add\t");
    for (int i = 0; i < n; i++) {
        printf("%d\t",arr[i]);
    }
    printf("\n");
    free(arr);
    return 0;
}