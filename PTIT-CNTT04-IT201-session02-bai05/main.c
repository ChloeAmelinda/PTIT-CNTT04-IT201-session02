#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n=0;
    while (n<=0|| n>100) {
        printf("Please input a number between 1 and 100\n");
        scanf("%d",&n);
    }
    int *arr = (int*)malloc(n*sizeof(int));
    if (arr==NULL) {
        printf("Memory allocation error\n");
        return 1;

    }
    printf("please input array elements\n");
    for (int i = 0; i < n; i++) {
        printf("please input number %d\n",i+1);
        scanf("%d",&arr[i]);
    }
    //xoa
    int position=-1;
    while (position<0 || position>=n) {
        printf("Please input a number between 1 and 100\n",n-1);
        scanf("%d",&position);
    }
    for (int i = position; i < n-1; i++) {
        arr[i]=arr[i+1];
    }
    n--;

    if (n>0) {
        arr=(int*)realloc(arr,n*sizeof(int));
        if (arr==NULL) {
            printf("Memory allocation error\n");
            return 1;
        }
    }else {
        free(arr);
        arr=NULL;
    }
    printf("arr after delete\n");
    if (n==0) {
        printf("Mang rong");

    }else {
        for (int i = 0; i < n; i++) {
            printf("%d ",arr[i]);

        }
        printf("\n");
    }
    free(arr);
    return 0;
}