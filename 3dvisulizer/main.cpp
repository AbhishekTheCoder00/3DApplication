#include <iostream>
#include "rectangle.h"
#include "triangle.h"
#include "square.h"
#include "circle.h"
#include "filewriter.h"

int main() {
    int choice;
    double x, y, width, height, side, radius;
    
    std::cout << "Choose a shape to create:\n";
    std::cout << "1. Rectangle\n";
    std::cout << "2. Triangle\n";
    std::cout << "3. Square\n";
    std::cout << "4. Circle\n";
    std::cout << "Enter your choice (1-4): ";
    std::cin >> choice;

    FileWriter writer("output.dat");

    switch (choice) {
        case 1:
            std::cout << "Enter rectangle's x, y, width, height: ";
            std::cin >> x >> y >> width >> height;
            {
                Rectangle rect(x, y, width, height);
                rect.writeToFile(writer.getStream());
            }
            break;

        case 2:
            std::cout << "Enter triangle's three points (x1, y1, x2, y2, x3, y3): ";
            double x1, y1, x2, y2, x3, y3;
            std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
            {
                Triangle tri(x1, y1, x2, y2, x3, y3);
                tri.writeToFile(writer.getStream());
            }
            break;

        case 3:
            std::cout << "Enter square's x, y, side length: ";
            std::cin >> x >> y >> side;
            {
                Square sq(x, y, side);
                sq.writeToFile(writer.getStream());
            }
            break;

        case 4:
            std::cout << "Enter circle's x, y, radius: ";
            std::cin >> x >> y >> radius;
            {
                Circle circ(x, y, radius);
                circ.writeToFile(writer.getStream());
            }
            break;

        default:
            std::cout << "Invalid choice! Please choose between 1 and 4.\n";
            break;
    }

    std::cout << "Data written to output.dat. Use the following command to plot:\n";
    std::cout << "plot 'output.dat' with lines\n";

    return 0;
}
