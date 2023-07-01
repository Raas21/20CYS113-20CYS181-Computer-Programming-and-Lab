// This program calculates the area of a circle or rectangle.
#include <stdio.h>

// The struct shape structure stores the type of shape and its dimensions.
struct shape {
    union dimensions {
	// The union dimensions union stores the length and radius of the shape.
        float length;
        float radius;
    } d;
    enum type {
	// The enum type enum defines the two types of shapes: Circle and Rectangle.
        Circle = 1,
        Rectangle
    } t;
} s;

int main() {
    float length, area;
    // This line prompts the user to enter the type of shape.
    scanf("%d", &s.t);
    switch (s.t) {
        case 1:
            // This case calculates the area of a circle.
            scanf("%f", &s.d.radius);
            area = 3.14 * s.d.radius * s.d.radius;
            printf("Area of the circle: %.4f units\n", area);
            break;
        case 2:
            // This case calculates the area of a rectangle.
            scanf("%f", &s.d.length);
            length = s.d.length;
            scanf("%f", &s.d.radius);
            printf("Area of the rectangle: %.4f units", length * s.d.radius);
            break;
        default:
            // This case handles invalid inputs.
            printf("Invalid choice!");
    }
    return 0;
}
