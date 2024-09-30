#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <fstream>

class Rectangle {
public:
    Rectangle(double x, double y, double width, double height);
    void writeToFile(std::ofstream& file);
    
private:
    double x, y, width, height;
};

#endif
