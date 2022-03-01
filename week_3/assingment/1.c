#include <stdio.h>
#include <math.h>

// Polynomial Equation : x^4 - 7x^3 + 14x^2 - 8x

double funcx(double x) {
    double gx;
    gx = x * x * x * x - 7.0 * x * x * x + 14.0 * x * x - 8.0*x;
    return gx;
}
double funcxx(double xx) {
    double hx;
    hx = 3.0 * xx * xx * xx - 14.0 * xx * xx + 28.0 * xx - 8.0;
    return hx;
}

int main ( ) {
    int n;
    double xold, xnew, dx, fx, fxx;
    double ep=1.0E-08;
    xold=3.5;

    for(n=0; n<100; n++) {
        fx=funcx(xold);
        fxx=funcxx(xold);
        xnew=xold-fx/fxx;
        dx=fabs(xnew-xold);

        if (dx>ep*xold) {
            xold=xnew;
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
