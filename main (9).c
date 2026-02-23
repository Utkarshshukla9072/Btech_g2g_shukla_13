#include <stdio.h>

int main() {
    float a, b, c;

    // Input three sides
    printf("Enter three sides of a triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    // Check for triangle validity using Triangle Inequality Theorem
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        printf("Valid triangle\n");

        // Determine the type of triangle
        if (a == b && b == c)
            printf("Equilateral triangle\n");
        else if (a == b || a == c || b == c)
            printf("Isosceles triangle\n");
        else
            printf("Scalene triangle\n");
    } else {
        printf("Not a valid triangle\n");
    }

    return 0;
}
