#include <stdio.h>

int main()
{
    int sco[10] = {45,50,55,60,65,70,75,80,85,90};
    int sid[10]={2201, 2202, 2203, 2204, 2205, 2206, 2207, 2208, 2209, 2210};

    // CASE 1
    printf("EXCELLENT : \n");
    for (int i=0; i<10; i++) {
        if (sco[i] >= 80) {
            printf("%d \n", sid[i]);
        }
    }

    printf("GOOD JOB : \n");
    for (int i=0; i<10; i++) {
        if (sco[i] >= 60 && sco[i] < 80) {
            printf("%d \n", sid[i]);
        }
    }

    printf("REJECT : \n");
    for (int i=0; i<10; i++) {
        if (sco[i] < 60) {
            printf("%d \n", sid[i]);
        }
    }

    // CASE 2
    printf("A : \n");
    for (int i=0; i<10; i++) {
        if (sco[i] >= 80) {
            printf("%d \n", sid[i]);
        }
    }

    printf("B : \n");
    for (int i=0; i<10; i++) {
        if (sco[i] >= 70 && sco[i] < 80) {
            printf("%d \n", sid[i]);
        }
    }

    printf("C : \n");
    for (int i=0; i<10; i++) {
        if (sco[i] >= 60 && sco[i] < 70) {
            printf("%d \n", sid[i]);
        }
    }

    printf("D : \n");
    for (int i=0; i<10; i++) {
        if (sco[i] < 60) {
            printf("%d \n", sid[i]);
        }
    }

    return 0;
}