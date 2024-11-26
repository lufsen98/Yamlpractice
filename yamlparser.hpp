#include <vector>
#include <string>
#include <iostream>



class YamlParser {
    private:
    std::string file;
    std::unordered_map<std::string, std::variant<std::string, std::vector<std::string>>> data;

    public:
    //constructor which reads the file.
    YamlParser(std::string newFile);

    std::string getstring();
    //
    int getInt();
    //spara 
    std::string getstringlist();

    


};