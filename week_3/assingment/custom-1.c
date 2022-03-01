//  File with prefix custom are contain more 'proper' way of code the assignment/quiz

#include <stdio.h>
#include <math.h>

// Polynomial Equation : x^4 - 7x^3 + 14x^2 - 8x

double original_function(double x) {
    double gx;
    gx = x * x * x * x - 7.0 * x * x * x + 14.0 * x * x - 8.0*x;
    return gx;
}

double first_derivative_function(double x) {
    double hx;
    hx = 3.0 * x * x * x - 14.0 * x * x + 28.0 * x - 8.0;
    return hx;
}

int main ( ) {
    int n;
    double xold, xnew, dx, fx, fxx;
    double ep = 1.0E-08;
    xold = 3.5;

    for(n=0; n<100; n++) {
        fx = original_function(xold);
        fxx = first_derivative_function(xold);
        xnew = xold - fx / fxx;
        dx = fabs(xnew - xold);

        if (dx > ep * xold) {
            xold = xnew;
            printf("New x= %lf \n", xnew);
        } 
        else {
            printf("Solution is converged \n");
            printf("root= %lf \n", xnew);
            break;
        }
    }

    return 0;
}
