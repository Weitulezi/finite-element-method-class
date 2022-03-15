// NIM : 190401069
// Dixon Andrew Vande Star Simbolon

#include <stdio.h>

int main(void) {

    int i, j, k, sum;

    int x[3][3] = {{1,0,2}, {4,5,6}, {7,8,9}};
    int y[3][3] = {{9,8,7}, {6,5,4}, {3,2,1}};

    int c[3][3];

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            sum = 0;
            for (k = 0; k < 3; k++) {
                sum = sum + x[i][k] * y[k][j];
            }
            c[i][j] = sum;
        }
   }

    printf("\nMultiplication Of Two 3x3 Matrices : \n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }


	return 0;
}