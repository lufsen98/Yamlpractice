#include "yamlparser.hpp"
#include <vector>
#include <variant>
#include <string>
#include <fstream>
#include "iostream"


YamlParser::YamlParser(const std::string newFile) {
    std::string line;
    std::string key;
    std::string value;
    std::ifstream readfile;
    std::vector<std::string> subvector;
    readfile.open("yamlfile.yaml");

    if(readfile.fail()) {
        std::cout << "Error file didn't open\n";
    }
    while(std::getline(readfile,line)) {
        if(line.empty()||line[0] == '#') {
            continue;
        }
        //find the : char store position in variable
        //if colonposistion is in string. save string from posistion 0 to colon in key variabel
        // substr the value on the right side of the colonposition to the end of the string.
        size_t colonposition = line.find(':');
        if(colonposition != std::string::npos){
            key = line.substr(0,colonposition); 
            value = line.substr(colonposition + 1);        
            data[key] = value;
        }
        //find the dash and store the position.
        //check if value is empty if so its a lis
        //substract string to vector from the dashposition
        size_t dashPosition = line.find('-');
        if(value.empty()) { 
            if(dashPosition != std::string::npos){
                subvector.push_back(line.substr(dashPosition + 1));
                data[key] = subvector;
            }
        }
    }
    readfile.close();
}
//getter which takes key as parameter and returns value
std::string YamlParser::getString(const std::string key) {
    return std::get<std::string>(this->data[key]);
}
//getter which takes string key as parameter but returns int value
int YamlParser::getInt(const std::string key) {
    return std::stoi(std::get<std::string>(this->data[key]));
}
//getter which takes string key and returns elements to store in vector
std::vector<std::string> YamlParser::getstringlist(const std::string key) {
    return std::get<std::vector<std::string>>(this->data[key]);
}
