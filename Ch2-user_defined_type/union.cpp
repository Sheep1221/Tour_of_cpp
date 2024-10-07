#include <iostream>
#include <string.h>

// union is use to store members with different data type in a memory
// we can only use one members of it at the same time
// the size of union will be the size of its lagest member
union student{
    int id = 0;
    char name[20];
};

int main(){
    student s1;

    s1.id = 40134;
    std::cout<< "size of s1 is "<< sizeof(s1)<< "\n";

    // Not able to redeclare a union variable
    /*
    union student s1;

    strcpy(s1.name, "Sheep");
    std::cout<< "size of s1 is "<< sizeof(s1)<< "\n";
    */

    student s2;

    strcpy(s2.name, "Sheep");
    std::cout<< "size of s2 is "<< sizeof(s2)<< "\n";
}
