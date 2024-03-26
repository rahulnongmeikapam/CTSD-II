#include <stdio.h>
struct Complex {
    float real;
    float imag;
};
struct Complex addComplex(struct Complex num1, struct Complex num2) {
    struct Complex result;
    result.real = num1.real + num2.real;
    result.imag = num1.imag + num2.imag;
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
    printf("The complex number is: %.2f + %.2f i \n", num.real, num.imag);
}
int main() {
    struct Complex number1, number2, sum;
    printf("Enter the first complex number:\n");
    number1 = readComplexNumber();
    printf("Enter the second complex number:\n");
    number2 = readComplexNumber();
    sum = addComplex(number1, number2);
    printf("The sum of the complex numbers is: %.2f + %.2fi\n", sum.real, sum.imag);
    return 0;
}

