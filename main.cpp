#include "yamlparser.hpp"
#include <iostream>


int main() {
    
    YamlParser parser("yamlfile.yaml");

    std::string name = parser.getString("name");
    int age = parser.getInt("age"):
    std::vector<std::string> items = parser.getStringList("items");


    std::cout << "Name: " <<
    std::cout << age:


    for (const auto &item : items) {
        std::cout << " - " << item << std::endl;
    } 
}