#include <iostream>
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
    std::cout<< PT<< "\n";
}
