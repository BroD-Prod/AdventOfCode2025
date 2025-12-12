#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>

int main(){
    std::fstream inputFile("adventofcodeday1example.txt");
    std::string line;
    int startingNum = 50;
    int rotationsToZero = 0;
    int numOfRotationsPastZero = 0;
    
    while(std::getline(inputFile, line)){
        for(int i = 0; i < line.length(); i++){
            if(line[i] == 'R' || line[i] == 'L'){
                char direction = line[i];
                std::string numberStr = line.substr(i + 1);
                int value = std::stoi(numberStr);
                std::cout << "Direction: " << direction << ", Value: " << value << std::endl;
                if(direction == 'R'){
                    if(startingNum > 100){
                        numOfRotationsPastZero += value / 100;
                    }
                    startingNum = (startingNum + value) % 100;
                } else if(direction == 'L'){
                    if(startingNum > 100){
                        numOfRotationsPastZero += value / 100;
                    }
                    startingNum = (startingNum - value) % 100;
                        if(startingNum < 0){
                            startingNum += 100;
                    }
                }
                std::cout << "Current position: " << startingNum << std::endl;
                    if(startingNum == 0){
                        rotationsToZero++;
                }
                break; // Move to the next line after processing one command
            }
        }
    }
    std::cout << "Total rotations to and past zero: " << numOfRotationsPastZero + rotationsToZero << std::endl;
    return 0;
}
