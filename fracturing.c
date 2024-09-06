// Armin Delmo 5624402

#include <stdio.h>
#include <math.h>
// defining pi for the assignment
#define PI 3.14159

double askForUserInput() { // ask and return double
    double enteredValue;

    printf("\nEnter value: ");
    scanf("%lf", &enteredValue);

    return enteredValue;
}

double calculateDistance() { // calculate the distance between two points with distance formula
    printf("\nEnter coordinates for the point, x first, y second.");
    double x1 = askForUserInput();
    double y1 = askForUserInput();
    
    // printing out point 1 coordinates
    printf("\nPoint 1: (%lf,%lf)", x1, y1);

    double x2 = askForUserInput();
    double y2 = askForUserInput();

    // printing out point 2 coordinates
    printf("\nPoint 2: (%lf,%lf)", x2, y2);
    
    // using the distance formula
    double distance = pow(pow(x2-x1, 2) + pow(y2-y1, 2), .5);

    printf("\nThe distance between point 1 and point 2 is: %lf", distance);

    return distance;
}
double calculatePerimeter() { // calculate the perimeter of a circle given diameter
    double diameter = calculateDistance();

    // 2PI diameter / 2 is circumference of circle
    double circumference = 2*PI*(diameter/2);
    printf("\nPerimeter of the circle is equal to: %lf", circumference);
    return 1;
}
double calculateArea() { // calculate area of a circle given diameter
    double diameter = calculateDistance();

    // PI (diameter / 2 )^2 is area of a circle formula
    double circleArea = PI * pow((diameter / 2), 2);
    printf("\nArea of the circle is equal to: %lf", circleArea);

    return 1;
}
double calculateWidth() { // circle has a same diameter / width everywhere, so calculatedistance is correct in answering this
    double width = calculateDistance();
    printf("\nThe width of the circle is: %lf", width);

    return 3;
}
double calculateHeight() { // circle has a same diameter / height everywhere, so calculatedistance is correct in answering this
    double height = calculateDistance();
    printf("\nThe width of the circle is: %lf", height);

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