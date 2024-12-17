#include <iostream>
#include <vector>
#include <string>
#include <map>

// use string_Map as alias for any map using string as index here
template<typename C>
using string_Map = std::map<std::string, C>;

template <typename T>
class Vector{
public:
    explicit Vector(int s);
    ~Vector(){ delete[] elem;}
    T& operator[](int sz);
private:
    T* elem;
    int sz;
};

using string_vector = std::vector<std::string>;

int main(){
    string_Map<int> str_map_i;
    string_vector str_vec;
    
    str_map_i ["Index_1"] = 123;
    std::cout<< str_map_i["Index_1"]<< "\n";
    
    str_vec.push_back("Hello");
    str_vec.push_back("World");
    
    for(auto& str:str_vec){
        std::cout<< str<< "\n";
    }

    return 0;
}
