#include <stdio.h>

#define AREA(length, width) ((length) * (width))

int main() {
    int length = 5;
    int width = 4;
    int area = AREA(length, width);

    printf("The area of the rectangle is: %d\n", area);
    
    return 0;
}
