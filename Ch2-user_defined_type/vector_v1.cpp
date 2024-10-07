#include <iostream>

class Vector{
public:
    // construct via "c++ member initializer list"
    Vector(int s) :elem{new double[s]}, sz{s} {}
    
    double& operator[](int i){// reference for operator
        return elem[i];
    }
    
    int size(){
        return sz;
    }
private:
    double* elem;
    int sz;
};

int main(){
    Vector vec(10);
    for(int i=0; i< vec.size(); ++i){
        vec[i] = 2*i;
    }
    for(int i=0; i< vec.size(); ++i){
        std::cout << vec[i] << "\n";
    }
}
