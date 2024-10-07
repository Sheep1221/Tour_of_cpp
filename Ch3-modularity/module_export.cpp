module;
#include<iostream>

export module Test_module;

export class Test_module {
public:
    Test_module(int i);
    ~Test_module();
    int add(int i);
private:
    int sz;
};


Test_module::Test_module(int i): sz{i}{
    std::cout<< "Construct!!!"<< "\n";
    std::cout<< "Original value: "<< sz<< "\n";
}

Test_module::~Test_module(){
    std::cout<< "Deconstruct!!!"<< "\n";
}

export int Test_module::add(int i){
    std::cout<< "The value now is: "<< sz + i<< "\n"; 
}
