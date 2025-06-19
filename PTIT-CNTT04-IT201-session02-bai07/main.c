#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n=0;
    //nhap so luong phan tu
    while (n<=0 || n>100) {
        printf("Please input a number between 1 and 100\n");
        scanf("%d",&n);

    }
    //cap phat dong
    int *arr=(int*)malloc(n*sizeof(int));
    if (arr==NULL) {
        printf("Memory allocation error\n");
        return 1;
    }

    //nhap tung phan tu
    printf("Please input array elements\n");
    for (int i=0;i<n;i++) {
        printf("Please input number %d\n",i+1);
        scanf("%d",&arr[i]);
    }
    //nhap so can tim
    int target;
    printf("Please input target number\n");
    scanf("%d",&target);
    int found =0;
    for (int i=0;i<n-1;i++) {
        for (int j=i+1;j<n;j++) {
            if (arr[i]+arr[j]==target) {
                printf("%d+%d=%d\n",arr[i],arr[j],target);
                found=1;
            }
        }
    }
    if (!found) {
        printf("No solution\n");
    }
    free(arr);
    return 0;
}