#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, discriminant, root1, root2, real_part, imaginary_part;
    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Two distinct real roots: %.2lf and %.2lf\n", root1, root2);
    } else if (discriminant == 0) {
        root1 = -b / (2 * a);
        printf("One real root: %.2lf\n", root1);
    } else {
        real_part = -b / (2 * a);
        imaginary_part = sqrt(-discriminant) / (2 * a);
        printf("Two distinct complex roots: %.2lf + %.2lfi and %.2lf - %.2lfi\n", real_part, imaginary_part, real_part, imaginary_part);
    }
    return 0;
}