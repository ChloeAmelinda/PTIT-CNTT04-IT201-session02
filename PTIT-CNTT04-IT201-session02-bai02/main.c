#include <stdio.h>
#include <stdlib.h>

int main(void) {
     int n ;
    while (n<=0 || n>100) {
        printf("Please input a number between 1 and 100\n");
        scanf("%d",&n);
    }
    // cap phat bo nho dong
    int *arr = (int*)malloc(n*sizeof(int));
    if (arr== NULL) {
        printf("Memory allocation failed for arr\n");
        return 1;
    }
    //nhap tung phan tu
    printf("Nhap phan tu thu %d cua mang:", n);
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i+1);
        scanf("%d",&arr[i]);
    }
    //nhap so can dem
    int x;
    int count = 0;
    printf("Nhap so can dem:");
    scanf("%d",&x);
    for (int i = 0; i < n; i++) {
        if (arr[i]==x) {
            count++;
        }
    }
    printf("so %d xuat hien %d lan",x,count);
    free(arr);
    return 0;
}