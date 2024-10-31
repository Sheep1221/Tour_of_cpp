#include <iostream>

class Vector{
public:
    explicit Vector(int s):elem{new double[s]}, sz{s}{}
    Vector(Vector&& a):elem{a .elem}, sz{a.sz}{
        // If we don't set a.elem to nullptr, the vec1 will use same memory with vec2
        a.elem = nullptr;
        a.sz = 0;
    }
    ~Vector(){
        delete[] elem;
    }
    double& operator[](int i){
        return elem[i];
    }
    int size(){
        return sz;
    }
    Vector& operator=(Vector&& a){
        elem = a.elem;
        sz = a.sz;
        a.elem = nullptr;
        a.sz = 0;
        return *this;
    }
private:
    int sz;
    double* elem;
};

int main(){
    Vector vec1(20);
    //Vector vec2(vec1);
    Vector vec2(std::move(vec1));
    Vector vec3 = std::move(vec2);
    //vec1[5] = 25;
    //vec2[5] = 999;
    vec3[5] = 123;
    
    
    
    //std::cout<< "vec1[5] = "<< vec1[5]<< "\n";
    //std::cout<< "vec2[5] = "<< vec2[5]<< "\n";
    std::cout<< "vec3[5] = "<< vec3[5]<< "\n";
    std::cout<< "size of vec1 = "<< vec1.size()<< "\n";
    std::cout<< "size of vec2 = "<< vec2.size()<< "\n";
    std::cout<< "size of vec3 = "<< vec3.size()<< "\n";
}
