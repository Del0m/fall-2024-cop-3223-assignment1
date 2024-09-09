// Armin Delmo 5624402

#include <stdio.h>
#include <math.h>
// defining pi for the assignment
#define PI 3.14159

double askForUserInput() { // ask and return double
    double enteredValue;
    scanf("%lf", &enteredValue);

    return enteredValue;
}

double calculateDistance() { // calculate the distance between two points with distance formula
    double x1 = askForUserInput();
    double y1 = askForUserInput();
    
    // printing out point 1 coordinates
    printf("Point #1 was entered: x1 = %lf; y1= %lf\n", x1, y1);

    double x2 = askForUserInput();
    double y2 = askForUserInput();

    // printing out point 2 coordinates
    printf("Point #2 was entered: x2 = %lf; y2= %lf\n", x2, y2);

    
    // using the distance formula
    double distance = pow(pow(x2-x1, 2) + pow(y2-y1, 2), .5);

    printf("The distance between the two points is %lf\n", distance);

    return distance;
}
double calculatePerimeter() { // calculate the perimeter of a circle given diameter
    double diameter = calculateDistance();

    // 2PI diameter / 2 is circumference of circle
    double circumference = 2*PI*(diameter/2);
    printf("The perimeter of the city encompassed by your request is %lf\n", circumference);
    return 1;
}
double calculateArea() { // calculate area of a circle given diameter
    double diameter = calculateDistance();

    // PI (diameter / 2 )^2 is area of a circle formula
    double circleArea = PI * pow((diameter / 2), 2);
    printf("The area of the city encompassed by your request is %lf\n", circleArea);

    return 1;
}
double calculateWidth() { // circle has a same diameter / width everywhere, so calculatedistance is correct in answering this
    double width = calculateDistance();
    printf("The width of the city encompassed by your request is %lf\n", width);

    return 3;
}
double calculateHeight() { // circle has a same diameter / height everywhere, so calculatedistance is correct in answering this
    double height = calculateDistance();
    printf("The height of the city encompassed by your request is %lf\n", height);

    return 3;
}


int main(void) { // running all functions

    calculateDistance();
    calculatePerimeter();
    calculateArea();

    calculateWidth();
    calculateHeight();
    
    return 0;
}