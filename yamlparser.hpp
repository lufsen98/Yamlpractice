#include <vector>
#include <string>
#include <iostream>



class YamlParser {
    private:
    std::unordered_map<std::string, std::variant<std::string, std::vector<std::string>>> data;


    public:
    //constructor which reads the file.
    YamlParser(std::unordered_map<std::string, std::variant<std::string, std::vector<std::string>>> data);

    std::string getstring();

    


};