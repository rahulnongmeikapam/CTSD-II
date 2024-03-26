#include <stdio.h>
struct Complex {
    float real;
    float imag;
};
struct Complex readComplexNumber() {
    struct Complex num;
    printf("Enter real part: ");
    scanf("%f", &num.real);
    printf("Enter imaginary part: ");
    scanf("%f", &num.imag);
    return num;
}
int main() {
    struct Complex number;
    printf("Enter the complex number:\n");
    number = readComplexNumber();
    printf("The complex number entered is: %.2f + %.2fi\n", number.real, number.imag);
    return 0;
}

