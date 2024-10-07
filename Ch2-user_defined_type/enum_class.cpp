#include <iostream>

//"enum class" is different from "class"
// It has no member function
enum class Color {red, blue, green};
enum class Traffic_light {yellow, red, green};

Color& operator++(Color& c){
    switch(c){
        case Color::red:
            return c = Color::blue;
        case Color::blue:
            return c = Color::green;
        case Color::green:
            return c = Color::red;
    }
}



int main(){
    Color c = Color::red;
    Traffic_light t = Traffic_light::red;
    std::cout<< "c = "<< static_cast<int>(c)<< "\n";
    std::cout<< "t = "<< static_cast<int>(t)<< "\n";
    
    ++c; ++c;
    std::cout<< "c = "<< static_cast<int>(c)<< "\n";
}
