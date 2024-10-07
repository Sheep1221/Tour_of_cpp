#include <iostream>

int main(){
    // We cannot use two different enum which enumerator have same name
    // We can use class or namespace as alternative
    enum Color {red, green, blue};
    //enum Traffic_light {yellow, red, green};
    int col = green;

    std::cout<< "col = "<< col<< "\n";
}
