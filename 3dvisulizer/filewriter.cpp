#include "filewriter.h"

FileWriter::FileWriter(const std::string& filename) {
    file.open(filename);
}

FileWriter::~FileWriter() {
    if (file.is_open()) {
        file.close();
    }
}

std::ofstream& FileWriter::getStream() {
    return file;
}
