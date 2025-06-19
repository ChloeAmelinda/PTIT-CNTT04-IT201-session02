#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int staticArr[] = { -1,5,-3,2, 10,19};
    int n = sizeof(staticArr) / sizeof(staticArr[0]);
     //cap phat dong
    int *arr = (int*) malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("malloc failed\n");
        return 1;
    }
    for (int i = 0; i < n; i++) {
        arr[i]= staticArr[i];
    }
    int max =arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }

    }
    printf("max = %d\n", max);
    free(arr);

    return 0;
}