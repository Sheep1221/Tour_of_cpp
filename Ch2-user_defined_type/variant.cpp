#include <iostream>
#include <string>
#include <variant>

// by using variant, we can share a variable in different types

int main(){
    std::variant<int, double, std::string> s1;

    s1 = 1221;
    std::cout<< "size of s1 is "<< sizeof(s1)<< "\n";

    s1 = "sheep";
    std::cout<< "size of s2 is "<< sizeof(s1)<< "\n";
}
