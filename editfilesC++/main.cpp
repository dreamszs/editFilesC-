#include <iostream>
#include <string>
#include <fstream>

void readFile(const std::string& filename) {
    std::ifstream file(filename);
    if (file.is_open()) {
        std::cout << "File info was found.\n";
        std::string line;
        while (std::getline(file, line)) {
            std::cout << line << std::endl;
        }
        file.close();
    } else {
        std::cerr << "Couldn't find file information.\n";
    }
}

int main() {

    std::string FileName = "";

    std::cout << "Type In Your File Name!" << std::endl;
    std::cin >> FileName;

    readFile(FileName);

    return 0;
}
