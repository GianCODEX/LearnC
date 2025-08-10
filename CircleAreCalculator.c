#include <stdio.h>
#include <math.h>

double radius = 0.0;
double area = 0.0;
double surfaceArea = 0.0;
double volume = 0.0;
double centimeters = 0.0;
const double PI = 3.14159; 

int main() {
    printf("Enter the radius: ");
    scanf("%lf", &radius);

    area = PI * pow(radius, 2);
    surfaceArea = 2 * PI * pow(radius, 2);
    volume = 4.0 / 3.0 * PI * pow(radius, 3);
    centimeters = area * 10000;
    
    printf("Radius: %lf\n", radius);
    printf("Area: %lf\n", area);
    printf("Surface Area: %lf\n", surfaceArea);
    printf("Volume: %lf\n\n", volume);
    
    printf("Area in centimeters: %.2lfcm", centimeters);
    
    return 0;
}