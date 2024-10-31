#include <iostream>

class Vector{
public:
    // By using the keyword "explicit", we are not allow to create a obj with "implicit"
    explicit Vector(int s):elem{new double[s]}, sz{s}{}
    double& operator[](int i){
        return elem[i];
    }
    int size(){
        return sz;
    }
private:
    int sz;
    double* elem;
};

int main(){
    Vector vec1(20);
    //Vector vec2 = 15; -> Implicit, it is not allowed here 

    std::cout<< "size of vec1 = "<< vec1.size()<< "\n";
    //std::cout<< "size of vec2 = "<< vec2.size()<< "\n";
}
