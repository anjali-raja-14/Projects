
#include <iostream>
#include <conio.h>

using namespace std;

// Function declarations
float convertTemperature(float value, float multiplier, float constant, string fromUnit, string toUnit);
void displayMenu();
void performConversion();

// Colour codes
string reset = "\033[0m";
string red = "\033[1;31m";
string cyan = "\033[1;36m";
string bold = "\033[1;1m";
string yellow = "\033[1;33m";
string green = "\033[1;32m";

// Global variables
float degreeValue, result;
int choice;

int main() {
    displayMenu();
    cout << bold << yellow << "Enter your Choice: " << reset;
    cin >> choice;
    performConversion();
    getch;
    return 0;
}

void displayMenu() {
    cout << cyan << "************************************" << endl;
    cout << cyan << "*          TEMPERATURE CONVERTER   *" << endl;
    cout << cyan << "************************************" << endl << reset;
    cout << bold << green << "Conversion Options:" << endl << reset;
    cout << bold << "1. Celsius to Fahrenheit" << endl;
    cout << bold << "2. Celsius to Kelvin" << endl;
    cout << bold << "3. Fahrenheit to Celsius" << endl;
    cout << bold << "4. Fahrenheit to Kelvin" << endl;
    cout << bold << "5. Kelvin to Celsius" << endl;
    cout << bold << "6. Kelvin to Fahrenheit" << endl << reset;
}

float convertTemperature(float value, float multiplier, float constant, string fromUnit, string toUnit) {
    return value * multiplier + constant;
}

void performConversion() 
{
    switch (choice) {
        case 1:
            cout << bold << cyan << "Enter Degree in Celsius: " << reset;
            cin >> degreeValue;
            result = convertTemperature(degreeValue, 1.8, 32, "Celsius", "Fahrenheit");
            cout << bold << green << "Temperature from Celsius to Fahrenheit = " << result << endl << reset;
            break;
        case 2:
            cout << bold << cyan << "Enter Degree in Celsius: " << reset;
            cin >> degreeValue;
            result = convertTemperature(degreeValue, 1, 273.15, "Celsius", "Kelvin");
            cout << bold << green << "Temperature from Celsius to Kelvin = " << result << endl << reset;
            break;
        case 3:
            cout << bold << cyan << "Enter Degree in Fahrenheit: " << reset;
            cin >> degreeValue;
            result = convertTemperature(degreeValue, 0.555, -17.222, "Fahrenheit", "Celsius");
            cout << bold << green << "Temperature from Fahrenheit to Celsius = " << result << endl << reset;
            break;
        case 4:
            cout << bold << cyan << "Enter Degree in Fahrenheit: " << reset;
            cin >> degreeValue;
            result = convertTemperature(degreeValue, 0.555, 255.928, "Fahrenheit", "Kelvin");
            cout << bold << green << "Temperature from Fahrenheit to Kelvin = " << result << endl << reset;
            break;
        case 5:
            cout << bold << cyan << "Enter Degree in Kelvin: " << reset;
            cin >> degreeValue;
            result = convertTemperature(degreeValue, 1, -273.15, "Kelvin", "Celsius");
            cout << bold << green << "Temperature from Kelvin to Celsius = " << result << endl << reset;
            break;
        case 6:
            cout << bold << cyan << "Enter Degree in Kelvin: " << reset;
            cin >> degreeValue;
            result = convertTemperature(degreeValue, 1.8, -459.67, "Kelvin", "Fahrenheit");
            cout << bold << green << "Temperature from Kelvin to Fahrenheit = " << result << endl << reset;
            break;
    }
}


