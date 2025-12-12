#include <iostream>
#include <fstream>

int main() {
    std::fstream inputfile("day2example.txt");
    std::string line;

    while(std::getline(inputfile, line)){
        for (char &c: line){
            if (c == ','){
                c = '\n';
            }
        }
        std::cout << line << std::endl;
    }
    return 0;
}