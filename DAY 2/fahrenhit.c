#include <stdio.h>

// Function to convert Fahrenheit to Celsius
float fahrenheitToCelsius(float f) {
    return (f - 32) * 5 / 9;
}

// Function to convert Celsius to Fahrenheit
float celsiusToFahrenheit(float c) {
    return (c * 9 / 5) + 32;
}

int main() {
    float fahrenheit, celsius;

    // Fahrenheit to Celsius
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    celsius = fahrenheitToCelsius(fahrenheit);
    printf("%.2f Fahrenheit = %.2f Celsius\n", fahrenheit, celsius);

    // Celsius to Fahrenheit
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = celsiusToFahrenheit(celsius);
    printf("%.2f Celsius = %.2f Fahrenheit\n", celsius, fahrenheit);

    return 0;
}
