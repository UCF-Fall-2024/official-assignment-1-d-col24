//******** 
// fracturing.c
// Author: Daniel Colunga
// Date: 9/8/24
// Class: COP 3223, Professor Parra
// Purpose: This program is used to calculate the diameter, radius, perimeter, and area of a circle.
//
// Input: Asks for points 4 times
//
// Output: (in terminal) Points, diameter, radius, perimeter, and area
// //*********** 


//include libaries & define pi
#include <stdio.h>
#include <math.h>
#define pi 3.14159

//******************************************* */
// double calculate_distance (double distance)
//
// Purpose: Calculates the diameter from a set of points
// Output: Prints the diameter from a set of points
// Precondition: Called in every function besides area and main
// Postcondition: Distance value will be stored
//************* */

double calculate_distance() {

double x1, y1, x2, y2;

//scanning for input and printing points
scanf("%lf %lf", &x1, &y1);
printf("Point #1 entered: x1 = %.2lf y1 = %.2lf\n", x1, y1);
scanf("%lf %lf", &x2, &y2);
printf("Point #2 entered: x2 = %.2lf y2 = %.2lf\n", x2, y2);

//distance formula to print the distance between two points
   double distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
   
    return distance;
}


//******************************************* */
// double calculate_radius (double radius)
//
// Purpose: Calculates the radius from a set of points
// Output: Prints the radius from a set of points
// Precondition: Called in every function besides distance, width, and main
// Postcondition: Radius value will be stored
//************* */

double calculate_radius() {
   double diameter = calculate_distance();
   double radius = diameter / 2.00;

   return radius;
}

//******************************************* */
// double calculate_perimeter (double perimeter)
//
// Purpose: Calculates the perimeter from a set of points
// Output: Prints the perimeter from a set of points
// Precondition: Called in every function besides distance, radius, area, and width
// Postcondition: Perimeter value will be stored
//************* */

double calculate_perimeter() {

//calling helper function
double diameter = calculate_distance();
printf("The distance between the two points is %.2lf\n", diameter);
double radius = calculate_radius();

double perimeter = 2 * pi * radius;
printf("The perimeter of the city encompassed by your request is %.2lf\n", perimeter);

return 5.00;

}

//******************************************* */
// double calculate_area (double area)
//
// Purpose: Calculates the area from a set of points
// Output: Prints the area from a set of points
// Precondition: Called in every function besides distance, radius, perimeter, and width
// Postcondition: Area value will be stored
//************* */

double calculate_area() {

//calling helper function
double radius = calculate_radius();

double area = pi * pow(radius, 2.00);
printf("The area of the city encompassed by your request is %.2lf\n", area);

return 5.00;
}

//******************************************* */
// double calculate_width (double width)
//
// Purpose: Calculates the width from a set of points
// Output: Prints the width from a set of points
// Precondition: Called in every function besides distance, radius, perimeter, and area 
// Postcondition: Width value will be stored
//************* */

double calculate_width() {

//calling helper function
double distance = calculate_distance();
double width = distance;
printf("The width between the two points is %.2lf\n", width);

return 5.00;
}

//******************************************* */
// int main (int main)
//
// Purpose: Calls functions to make program run
// Output: 
// Precondition: 
// Postcondition: 
//************* */
int main(int argc, char** argv) {


  //function calling
  calculate_perimeter();
  calculate_area();
 calculate_width();


    return 0;
}