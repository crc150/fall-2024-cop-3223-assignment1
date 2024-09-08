//********************************************************
// fracturing.c
// Author: Christopher Craig
// UCFID: 5650638
// Date: 9/4/2024
// Class: COP 3223, Professor Parra
// Purpose: display the distance between the two points, the perimeter of the city, the area of the city, the width of the city, and the height of the city using the two points given.
// Input: An x and y coordinate for the first point, and an x and y coordinate for the second point.
//
// Output: The distance between the two points, the perimeter of the city, the area of the city, the width of the city, and the height of the city
//********************************************************

#include <stdio.h>
 
// calculates the distance between two points using a^2 + b^2 = c^2,
double calculateDistance(x1, y1, x2, y2) {

    double distance = 0;
    
    distance = (x2 - x1)^2 + (y2 - y1)^2;
    sqrt(distance);

    printf("Point #1 entered: x1 = %lf; y1 = %lf\nPoint #2 entered: x2 = %lf; y2 = %lf\nThe distance between the two points is %.2lf", x1, y1, x2, y2, distance);

    return distance;
}

// calculates the perimeter by multiplying the width plus height by two.
double calculatePerimeter(x1, y1, x2, y2) {

    double perimeter = 0;
    double width = 0;
    double height = 0;

    width = calculateDistance(x1, 0, x2, 0);
    height = calculateDistance(0, y1, 0, y2);

    perimeter = (width + height) * 2;

    printf("Point #1 entered: x1 = %lf; y1 = %lf\nPoint #2 entered: x2 = %lf; y2 = %lf\The perimeter of the city encompassed by your request is %.2lf", x1, y1, x2, y2, perimeter);

    return 1;
}

// calculates the area by multiplying the width by the height.
double calculateArea(x1, y1, x2, y2) {

    double area = 0;
    double width = 0;
    double height = 0;

    width = calculateDistance(x1, 0, x2, 0);
    height = calculateDistance(0, y1, 0, y2);

    area = width * height;

    printf("Point #1 entered: x1 = %lf; y1 = %lf\nPoint #2 entered: x2 = %lf; y2 = %lf\The area of the city encompassed by your request is %.2lf", x1, y1, x2, y2, area);

    return 1;
}

// calculates width by subtracting the first x coordinate from the second and making it positive. 
double calculateWidth(x1, y1, x2, y2) {

    double width = 0;
    width = abs(x2 - x1);

    printf("Point #1 entered: x1 = %lf; y1 = %lf\nPoint #2 entered: x2 = %lf; y2 = %lf\The width of the city encompassed by your request is %.2lf", x1, y1, x2, y2, width);
    

    return 1;
}
// calculates height by subtracting the first x coordinate from the second and making it positive. 
double calculateHeight(x1, y1, x2, y2) {

    double height = 0;
    height = abs(y2 - y1);

    printf("Point #1 entered: x1 = %lf; y1 = %lf\nPoint #2 entered: x2 = %lf; y2 = %lf\The height of the city encompassed by your request is %.2lf", x1, y1, x2, y2, height);
    

    return 1;
}

// returns an inputted number to be put into a variable.
double askForUserInput() {

    double input = 0;
    scanf("%d", &input);

    return input;
}

int main()
{
    // the four coordinates for the two points used to plot the rectangle
    double x1 = 0;
    double y1 = 0;
    double x2 = 0;
    double y2 = 0;

    //inputs the four coordinates
    x1 = askForUserInput();
    y1 = askForUserInput();
    x2 = askForUserInput();
    y2 = askForUserInput();

    // displays the distance between the two points, the perimeter of the city, the area of the city, the width of the city, and the height of the city
    calculateDistance(x1, y1, x2, y2);
    calculatePerimeter(x1, y1, x2, y2);
    calculateArea(x1, y1, x2, y2);
    calculateWidth(x1, x2);
    calculateHeight(y1, y2);   
    
    return 0;
}