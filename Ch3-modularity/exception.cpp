#include <iostream>
#include <string>

class Test{
public:
    Test(int s){
        if(s < 0)
            throw std::string("Please use positive value");
        std::cout<<"The input value is: "<< s<< "\n";
    }
};


int main(){
    try{
        Test t(-1);
    }
    catch(std::string& err){
        std::cout<< "something wrong happened, err = "<< err<< "\n";
    }
}
