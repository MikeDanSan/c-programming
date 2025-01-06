#include <stdio.h>

void convertToFeet(double meters);
void convertToPounds(double grams);
void convertToFahrenheit(double celsius);

int main(void)
{

    int nConversions;
    scanf("%d", &nConversions);

    // Loop through the number of conversions
    for (int i = 0; i < nConversions; i++) {
        
        double value;
        char conversionType;
        
        // Get the value and conversion type
        scanf("%lf %c", &value, &conversionType);

        // Check the conversion type
        switch (conversionType) {
            case 'm':
                convertToFeet(value);
                break;
            case 'g':
                convertToPounds(value);
                break;
            case 'c':
                convertToFahrenheit(value);
                break;
            default:
                break;
        }

    }

    return 0;
}

// 1 meter = 3.2808 feet;
void convertToFeet(double meters) {
    double feet = meters * 3.2808;
    printf("%.6f ft\n", feet);
}
    
// 1 gram = 0.002205 pounds;
void convertToPounds(double grams) {
    double pounds = grams * 0.002205;
    printf("%.6f lbs\n", pounds);
}

// temperature in degrees Fahrenheit = 32 + 1.8 × temperature in degrees Celsius.
void convertToFahrenheit(double celsius) {
    double fahrenheit = 32 + 1.8 * celsius;
    printf("%.6f f\n", fahrenheit);
}