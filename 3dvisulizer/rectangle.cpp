#include "rectangle.h"

Rectangle::Rectangle(double x, double y, double width, double height) 
    : x(x), y(y), width(width), height(height) {}

void Rectangle::writeToFile(std::ofstream& file) {
    file << x << " " << y << "\n"
         << x + width << " " << y << "\n"
         << x + width << " " << y + height << "\n"
         << x << " " << y + height << "\n"
         << x << " " << y << "\n\n";  // Close the rectangle
}
