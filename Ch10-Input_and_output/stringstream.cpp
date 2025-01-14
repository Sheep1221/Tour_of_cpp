#include <iostream>
#include <sstream>
#include <string>

struct Puton {
    std::string name;
    int birth;
};

std::ostream& operator<<(std::ostream& os, const Puton& p){
    return os<< "{"<< p.name<< ","<< p.birth<< "}";
}

int main(){
    Puton PT;
    PT.name = "Puntung";
    PT.birth = 20230614;
    
    std::stringstream oss;
    oss<< PT<< "\n";
    std::cout<< oss.str();
    
    // ostream has no attribute ".str()"
    //std::ostream os;
    //oss<< PT,, "\n";
    //std::cout<< oss.str()<< "\n";
}




