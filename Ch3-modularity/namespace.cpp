#include <iostream>

namespace test{
    class MyOutput{
    public:
        MyOutput(){
            std::cout<< "Construct MyOutput"<< "\n";
        }

        ~MyOutput(){
            std::cout<< "Deconstruct MyOutput"<< "\n";
        }

        template<typename T>
        MyOutput& operator<<(const T& value){
            std::cout<< "The test input is: "<< value<< "\n";
        }
    };

    MyOutput myout;

}

int main(){
    std::cout<< "begin of program"<< "\n";
    
    int a = 12345;
    test::myout<< a;
    test::myout<< "Hello myout";
    
    std::cout<< "end of program"<< "\n";
    return 0;
}
