#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n;
    while (n<=0 ||n > 100) {
        printf("Please input a number between 1 and 100\n");
        scanf("%d",&n);
    }
    int *arr = (int*)malloc(n*sizeof(int));
    if (arr == NULL) {
        printf("malloc failed\n");
        return 1;
    }
    //nhap tung phan tu
    printf("Nhap phan tu thu %d cua mang");
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ",i+1);
        scanf("%d",&arr[i]);
    }
    //dao nguoc mang
    for (int i = 0; i < n/2; i++) {
        int temp = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = temp;
    }
    for (int i = 0; i < n; i++) {
        printf("%d ",arr[i]);
    }
    printf("\n");
    free(arr);
    return 0;
}