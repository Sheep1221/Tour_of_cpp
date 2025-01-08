#include <iostream>
#include <vector>

int main(){
    std::vector v1(5,20);
    std::vector v2(200, 60);
    std::cout<< "Initialize v1(5,20)"<< "\n";
    std::cout<< "capacity: "<< v1.capacity()<< "\n\n";
    
    std::cout<< "v1[100]: "<< v1[100]<< "\n";
    std::cout<< "capacity: "<< v1.capacity()<< "\n";
    std::cout<< "size: "<< v1.size()<< "\n\n";

    v1.reserve(100);
    std::cout<< "reserve the v1 with capacity 100"<< "\n";
    std::cout<< "v1[100]: "<< v1[100]<< "\n";
    std::cout<< "capacity: "<< v1.capacity()<< "\n";
    std::cout<< "size: "<< v1.size()<< "\n\n";

    
    // By using "at()", the program will terminated when we call an index higher than the size of vector
    std::cout<< "Try to call v1.at(100)"<< "\n";
    std::cout<< "v1.at(100): "<< v1.at(100)<< "\n";
    std::cout<< "capacity: "<< v1.capacity()<< "\n";
    
    //If we want to call v1.at(100), we need to resize the v1 by resize()
}
