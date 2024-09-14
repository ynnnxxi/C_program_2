#include <stdio.h>

void convolution(int first[], int second[]) {
    int save[11] = { 0, };
    int sum = 0;

    for (int i = -1; i < 10; i++) {
        sum = 0;
        if (i < 5) {
            for (int j = 0; j <= i; j++) {
                sum += (first[j] * second[4 - i + j]);
            }
        }
        else {
            for (int j = 4; j >= i - 4; j--) {
                sum += (first[j] * second[4 - i + j]);
            }
        }
        save[i + 1] = sum;
        printf("%d ", save[i + 1]);
    }

}

int main() {
    int first[5] = { 0, };
    int second[5] = { 0, };

    printf("Please, type the 1st 5-bit Binary number: ");
    for (int i = 0; i < 5; i++) {
        scanf_s("%1d", &first[i]);
    }
    printf("Please, type the 2nd 5-bit Binary number: ");
    for (int i = 0; i < 5; i++) {
        scanf_s("%1d", &second[i]);
    }
    printf("The results is :");
    convolution(first, second);

}