#ifndef CIRCLE_H
#define CIRCLE_H

#include <fstream>

class Circle {
public:
    Circle(double x, double y, double radius);
    void writeToFile(std::ofstream& file, int numPoints = 100);

private:
    double x, y, radius;
};

#endif
