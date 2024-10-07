#include<iostream>
import Test_module;

int main(){
    Test_module test1(20);
    int i = 0;
    
    std::cout<< "Please input any number to add"<<"\n";
    std::cin>> i;
    test1.add(i);
}
