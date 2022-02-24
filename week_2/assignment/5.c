// Use case of branching / conditional flow / Jump

#include <stdio.h>

int main()
{
    int x, y;
    x = 20;
    y = 10;

    if(x > y) {
        printf("X is larger than y");
    } else if (x == y) {
        printf("X is equal to y");
    } else {
        printf("X is smaller than y");
    }

    return 0;
}