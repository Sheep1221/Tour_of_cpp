#include<iostream>

int main(){
    // The use of manipulator will effect to all stream after it
    std::cout<< 1234<< ','<< std::hex<< 1234<< ','<< std::oct<< 1234<< ','<< 1000<< "\n";
    std::cout<< std::scientific<< 123.123<< "\n";
}
