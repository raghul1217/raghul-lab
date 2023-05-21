#include <iostream>
#include <cmath>
using namespace std;
const double PI = 3.14159;

// Function to calculate the volume of a cube
double calculateVolume(double sideLength) {
    return pow(sideLength, 3);
}

// Function to calculate the volume of a rectangular box
double calculateVolume(double length, double width, double height) {
    return length * width * height;
}

// Function to calculate the volume of a cylinder
double calculateVolume(double radius, double height) {
    return PI * pow(radius, 2) * height;
}

int main() {
    double sideLength, length, width, height, radius, cylinderHeight;

    // Calculate volume of a cube
    cout << "Enter the side length of the cube: ";
    cin >> sideLength;
    double cubeVolume = calculateVolume(sideLength);
    cout << "Volume of the cube: " << cubeVolume << std::endl;

    // Calculate volume of a rectangular box
    cout << "\nEnter the length, width, and height of the rectangular box: ";
    cin >> length >> width >> height;
    double boxVolume = calculateVolume(length, width, height);
    cout << "Volume of the rectangular box: " << boxVolume << std::endl;

    // Calculate volume of a cylinder
    cout << "\nEnter the radius and height of the cylinder: ";
    cin >> radius >> cylinderHeight;
    double cylinderVolume = calculateVolume(radius, cylinderHeight);
    cout << "Volume of the cylinder: " << cylinderVolume << std::endl;

    return 0;
}

