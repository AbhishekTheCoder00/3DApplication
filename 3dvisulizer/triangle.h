#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <fstream>

class Triangle {
public:
    Triangle(double x1, double y1, double x2, double y2, double x3, double y3);
    void writeToFile(std::ofstream& file);

private:
    double x1, y1, x2, y2, x3, y3;
};

#endif
