#ifndef FILEWRITER_H
#define FILEWRITER_H

#include <string>
#include <fstream>

class FileWriter {
public:
    FileWriter(const std::string& filename);
    ~FileWriter();
    std::ofstream& getStream();

private:
    std::ofstream file;
};

#endif
