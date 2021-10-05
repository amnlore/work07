#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void arrPrint(int* arr, int l) {
    printf("[ ");
    int i;
    for (i = 0; i < l; i++) {
        printf("%d ", *(arr + i));
    }
    printf("]\n");
}

double arrAvg(int* arr, int l) {
    int i;
    double sum = 0;
    for (i = 0; i < l; i++) {
        sum += *(arr + i);
    }
    double avg = sum / l;
    return avg;
}

void arrCopy(int* arr1, int* arr2, int l) {
    int i;
    for (i = 0; i < l; i++) {
        *(arr2 + i) = *(arr1 + i);
    }
}

int main() {
    int arr1[10];
    int arr2[10];

    srand(time(NULL));

    int i;

    for (i = 0; i < 10; i++) {
        arr1[i] = i * 3 - 7;
        arr2[i] = rand();
    }

    printf("arr1: ");
    arrPrint(arr1, 10);

    printf("arr2: ");
    arrPrint(arr2, 10);

    printf("arr1 avg: ");
    printf("%0.2f\n", arrAvg(arr1, 10));

    printf("arr2 avg: ");
    printf("%0.2f\n", arrAvg(arr2, 10));

    arrCopy(arr1, arr2, 10);
    printf("arr2 after copied from arr1: ");
    arrPrint(arr2, 10);
}
