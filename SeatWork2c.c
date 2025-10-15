#include <stdio.h>

int main(){
    const int length = 12;
    const int width = 7;
    double areaOfRectangle = length * width;

    printf("The area of the rectangle is: %.2lf\n", areaOfRectangle);
    printf(" ---------------\n|      Area     |\n|     %.2lf     |\n ---------------", areaOfRectangle);
    
    return 0;
}