#include "yamlparser.hpp"
#include <iostream>


int main() {
    YamlParser parser("yamlfile.yaml");
    std::string school = parser.getString("School");
    std::string schoolClass = parser.getString("Class");
    std::string city = parser.getString("City");
    int yearStarted = parser.getInt("year_started");
    std::vector<std::string> courses = parser.getstringlist("courses");

    std::cout << "School: " << school      << "\n";
    std::cout << "Class: " << schoolClass << "\n";
    std::cout << "City: " << city        << "\n";
    std::cout << "yearStarted: " << yearStarted << "\n";
    std::cout << "Courses: " << "\n";
    for(const auto& item:courses) {
        std::cout << "   -" << item << "\n";
    }

}

    