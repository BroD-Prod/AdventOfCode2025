#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>

int main(){
    std::fstream inputFile("adventofcodeday1input.txt");
    std::string line;
    int startingNum = 50;
    int roationsToZero = 0;
    
    while(std::getline(inputFile, line)){
        for(int i = 0; i < line.length(); i++){
            if(line[i] == 'R' || line[i] == 'L'){
                char direction = line[i];
                std::string numberStr = line.substr(i + 1);
                int value = std::stoi(numberStr);
                std::cout << "Direction: " << direction << ", Value: " << value << std::endl;
                if(direction == 'R'){
                    startingNum += value;
                    if(startingNum > 100){
                        startingNum = 0;
                    }
                } else if(direction == 'L'){
                    startingNum -= value;
                    if(startingNum < 0){
                        startingNum = 0;
                }
            if(startingNum == 0){
                roationsToZero++;
            }
        }
    }
    }
    }
    std::cout << "Total rotations to zero: " << roationsToZero << std::endl;
    return 0;
}
