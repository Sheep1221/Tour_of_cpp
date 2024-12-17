#include <iostream>
#include <string>

template<typename... T>
void print(T&&... Args){
    (std::cout << ... << Args) << '\n';
}

int main(){
    print("Hello!",' ',"World ",2017); // (((((std::cout << "Hello!"s) << ’ ’) << "Wor ld ") << 2017) << ’\n’);
}
