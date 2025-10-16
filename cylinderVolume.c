#include <stdio.h>
#include <math.h>

int main(){
    //Input side (for cube) or radius and height (for cylinder), then compute volume.
    double radius = 0.0;
    double height = 0.0;
    const double PI =  3.14159;
    double cylinderVolume = 0.0;

    printf("Enter the Radius of the Cylinder: ");
    scanf("%lf", &radius);

    printf("Enterl the Height of the Cylinder: ");
    scanf("%lf", &height);

    cylinderVolume = PI * pow(radius, 2) * height;

    printf("\nThe Volume of the Cylinder is: \33[32m%.2lf\33[0m", cylinderVolume);


    return 0;
}