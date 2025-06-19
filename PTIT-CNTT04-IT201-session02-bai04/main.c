#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n=0;
    while (n<=0|| n>100) {
        printf("Please input a number between 1 and 100\n");
        scanf("%d",&n);
    }
    int *arr = (int*)malloc(n*sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed for arr\n");
        return 1;

    }
    //nhap tung phan tu
    //printf("Please input array elements\n");
    for (int i = 0; i < n; i++) {
        printf("Please input number %d\n",i+1);
        scanf("%d",&arr[i]);
    }
    //nhap cho sua
    int position=-1;
    while (position<0 || position>n) {
        printf("Please input a number between 1 and %d\n",n);
        scanf("%d",&position);
    }
    int value ;
    printf("new value is ");
    scanf("%d",&value);

    arr[position] = value;
    for (int i = 0; i < n; i++) {
        printf("%d ",arr[i]);
    }
    printf("\n");
    free(arr);

    return 0;
}