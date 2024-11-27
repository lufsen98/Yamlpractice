#include <vector>
#include <unordered_map>
#include <fstream>
#include <variant>
#include <string>



class YamlParser {
    private:
    std::unordered_map<std::string, std::variant<std::string, std::vector<std::string>>> data;

    public:
    //constructor which opens and reads the file and saves it in unordered_map
    YamlParser(const std::string newFile);
    //getter which takes key as parameter and returns value
    std::string getString(const std::string key);
    //getter which takes string key as parameter but returns int value
    int getInt(const std::string key);
    //getter which takes string key and returns elements to store in vector
    std::vector<std::string> getstringlist(const std::string key);

    


};