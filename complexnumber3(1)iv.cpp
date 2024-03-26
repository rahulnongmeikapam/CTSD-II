#include <stdio.h>
struct Complex {
    float real;
    float imag;
};
struct Complex multiplyComplex(struct Complex num1, struct Complex num2) {
    struct Complex result;
    result.real = (num1.real * num2.real) + (num1.imag * num2.imag);
    return result;
}
struct Complex readComplexNumber() {
    struct Complex num;
    printf("Enter real part: ");
    scanf("%f", &num.real);
    printf("Enter imaginary part: ");
    scanf("%f", &num.imag);
    return num;
}
void writeComplexNumber(struct Complex num) {
    printf("The complex number is: %.2f + %.2fi\n", num.real, num.imag);
}
int main() {
    struct Complex number1, number2, product;
    printf("Enter the first complex number:\n");
    number1 = readComplexNumber();
    printf("Enter the second complex number:\n");
    number2 = readComplexNumber();
    product = multiplyComplex(number1, number2);
    printf("The product of the complex numbers is: %.2f + %.2fi\n", product.real, product.imag);

    return 0;
}


