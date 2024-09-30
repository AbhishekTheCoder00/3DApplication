#include "triangle.h"

Triangle::Triangle(double x1, double y1, double x2, double y2, double x3, double y3)
    : x1(x1), y1(y1), x2(x2), y2(y2), x3(x3), y3(y3) {}

void Triangle::writeToFile(std::ofstream& file) {
    file << x1 << " " << y1 << "\n"
         << x2 << " " << y2 << "\n"
         << x3 << " " << y3 << "\n"
         << x1 << " " << y1 << "\n\n";  // Close the triangle
}
