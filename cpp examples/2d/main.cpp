#include <iostream>
using namespace std;

const int NUM_CAR_TYPES = 6;
const int NUM_COLORS = 5;

int main() {
    // Initialize a 2D array to store the number of cars for each type and color
    int carsInStock[NUM_CAR_TYPES][NUM_COLORS] = {
        {10, 5, 2, 8, 3},  // Type 1: Red, Blue, Green, Black, White
        {4, 7, 1, 6, 9},   // Type 2
        {3, 3, 5, 2, 8},   // Type 3
        {6, 4, 9, 1, 7},   // Type 4
        {2, 6, 3, 8, 5},   // Type 5
        {5, 2, 7, 4, 6}    // Type 6
    };

    // Array of car type names
    string carTypes[NUM_CAR_TYPES] = {"Sedan", "SUV", "Truck", "Coupe", "Convertible", "Minivan"};

    // Array of color names
    string colors[NUM_COLORS] = {"Red", "Blue", "Green", "Black", "White"};

    // Display the number of cars in stock
    cout << "Cars in stock by type and color:" << endl;
    for (int i = 0; i < NUM_CAR_TYPES; ++i) {
        cout << carTypes[i] << ": ";
        for (int j = 0; j < NUM_COLORS; ++j) {
            cout << colors[j] << "(" << carsInStock[i][j] << ") ";
        }
        cout << endl;
    }

    return 0;
}
