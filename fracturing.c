// libraries
#include <stdio.h>
#include <math.h>

// defines pi
#define PI 3.14159

// Function calculation for distance
double calculateDistance(float x1, float y1, float x2, float y2)
{
  printf("Point 1# entered: x1 = %.3f, y1 = %.3f\n", x1, y1);
  printf("Point 2# entered: x2 = %.3f, y2 = %.3f\n", x2, y2);
double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
  printf("The distance of the points are %.3f\n\n", distance);
  return distance;
}


// Function calculation for perimeter of circle

double calculatePerimeter(float x1, float y1, float x2, float y2) {
    printf("Point 1# entered: x1 = %.3f, y1 = %.3f\n", x1, y1);
    printf("Point 2# entered: x2 = %.3f, y2 = %.3f\n", x2, y2);
    double perimeter = 2 * PI * sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));
    printf("The perimeter of the circle is: %.3f\n\n", perimeter);
    return 3;
}

// Calculation for area of a circle
double calculateArea(float x1, float y1, float x2, float y2){
  printf("Point 1# entered: x1 = %.3f, y1 = %.3f\n", x1, y1);
  printf("Point 2# entered: x2 = %.3f, y2 = %.3f\n", x2, y2);
  double Area = PI * pow(sqrt(pow(x2-x1, 2) + pow(y2-y1, 2)), 2);
  printf("The area of the circle is: %.3f\n\n", Area);
    return 3;
}

// Calculation for the width
double caulateWidth(float x1, float y1, float x2, float y2){
  printf("Point 1# entered: x1 = %.3f, y1 = %.3f\n", x1, y1);
  printf("Point 2# entered: x2 = %.3f, y2 = %.3f\n", x2, y2);
  double width = abs(x2-x1);
  printf( "The width of the circle is: %.3f\n\n", width);
  return 3;
}

// Calculations for the height
double calculateHeight(float x1, float y1, float x2, float y2){
  printf("Point 1# entered: x1 = %.3f, y1 = %.3f\n", x1, y1);
  printf("Point 2# entered: x2 = %.3f, y2 = %.3f\n", x2, y2);
  double height = abs(y2-y1);
  printf( "The height of the circle is: %.3f\n\n", height);
  return 3;
}

// Main function and used to call the functions, also for x and y values
int main (int argc, char** argv) {
float x1, y1, x2, y2;
scanf("%f %f %f %f", &x1, &y1, &x2, &y2);
  
double distance = calculateDistance(x1, y1, x2, y2);
double perimeter = calculatePerimeter(x1, y1, x2, y2);
double area = calculateArea(x1, y1, x2, y2);
double width = caulateWidth(x1, y1, x2, y2);
double height = calculateHeight(x1, y1, x2, y2);
return 0;
}