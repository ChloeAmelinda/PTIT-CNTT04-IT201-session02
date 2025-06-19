#include <stdio.h>
#include <stdlib.h>
int main(void) {
    //nhap so luong phan tu
    int n=0;
    while (n<=0 || n>100) {
        printf("Nhap so luong phan tu:\n");
        scanf("%d", &n);
    }
    //cap phat bo nho
    int *arr = (int*)malloc(n*sizeof(int));
    if (arr == NULL) {
        printf("ko the cap phat bo nho\n");
        return 1;
    }
//nhap tung phan tu
    printf("nhap phan tu:\n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d]= ", i+1);
        scanf("%d", &arr[i]);
    }
//tim phan tu lon hon
    int result[100] ;
    int count=0;
    int max=arr[n-1];
    result[count++]=arr[max];
    for (int i = n-2; i >= 0; i--) {
        if (arr[i] > max) {
            result[count++]=arr[i];
            max=arr[i];
        }
    }
    //in
    printf("so luong phan tu:\n");
    for (int i = count-1; i >=0; i--) {
        printf("%d ", result[i]);

    }

    free(arr);
    return 0;
}