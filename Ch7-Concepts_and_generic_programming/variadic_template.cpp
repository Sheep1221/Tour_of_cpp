#include <iostream>
#include <string>
#include <vector>

// This is also a fold expression
template<typename... T>
auto sum(T... v){
    return (0+...+v);
}


//T sum(T... v){  --> // Not allow to used
// In alternative, use the "normal" variadic template 
template<typename F, typename... Args>
F accumulate(F first, Args... rest){
    return (first + ... + rest);
}


int main(){
    //std::vector<int> vec = {1, 2, 3, 4};
    std::cout<< sum(1, 2, 3, 4, 5)<< "\n";
    std::cout<< sum('H', 'e', 'l', 'l', 'o')<< "\n";
    // The operator+ for stream is not allowed here
    //std::cout<< sum("H", "e", "l", "l", "o")<< "\n";
    std::cout<< accumulate(10, 20, 30, 40, 50) << "\n";
    // The operator+ for vector also not allowed here
    //std::cout<< sum(vec)<< "\n";
    return 0;
}
