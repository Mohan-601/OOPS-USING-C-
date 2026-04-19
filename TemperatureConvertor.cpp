// develop a temperature convertor using c++
#include <iostream>
using namespace std;

class Temperature {
private:
    float value;  // encapsulated data

public:
    // Setter
    void setValue(float v) {
        value = v;
    }

    // Conversion functions
    float celsiusToFahrenheit() {
        return (value * 9 / 5) + 32;
    }

    float fahrenheitToCelsius() {
        return (value - 32) * 5 / 9;
    }

    float celsiusToKelvin() {
        return value + 273.15;
    }

    float kelvinToCelsius() {
        return value - 273.15;
    }

    // Display menu
    void menu() {
        cout << "\n--- Temperature Converter ---\n";
        cout << "1. Celsius to Fahrenheit\n";
        cout << "2. Fahrenheit to Celsius\n";
        cout << "3. Celsius to Kelvin\n";
        cout << "4. Kelvin to Celsius\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
    }
};

int main() {
    Temperature t;
    int choice;
    float input;

    do {
        t.menu();
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter temperature in Celsius: ";
            cin >> input;
            t.setValue(input);
            cout << "Fahrenheit = " << t.celsiusToFahrenheit() << endl;
            break;

        case 2:
            cout << "Enter temperature in Fahrenheit: ";
            cin >> input;
            t.setValue(input);
            cout << "Celsius = " << t.fahrenheitToCelsius() << endl;
            break;

        case 3:
            cout << "Enter temperature in Celsius: ";
            cin >> input;
            t.setValue(input);
            cout << "Kelvin = " << t.celsiusToKelvin() << endl;
            break;

        case 4:
            cout << "Enter temperature in Kelvin: ";
            cin >> input;
            t.setValue(input);
            cout << "Celsius = " << t.kelvinToCelsius() << endl;
            break;

        case 5:
            cout << "Exiting program...\n";
            break;

        default:
            cout << "Invalid choice! Try again.\n";
        }

    } while (choice != 5);

    return 0;
}
