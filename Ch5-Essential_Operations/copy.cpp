#include <iostream>

class Vector{
public:
    explicit Vector(int s):elem{new double[s]}, sz{s}{}
    Vector(Vector& a):elem{new double[a.sz]}, sz{a.sz}{
        for(int i=0; i<sz; ++i)
            elem[i] = a.elem[i];
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
    Vector& operator=(const Vector& a){
        double* p = new double[a.sz];
        for(int i=0; i<a.sz; ++i){
            p[i] = a.elem[i];
        }
        delete[] elem;
        elem = p;
        sz = a.sz;
        return *this;
    }
private:
    int sz;
    double* elem;
};

int main(){
    Vector vec1(20);
    Vector vec2(vec1);
    Vector vec3 = vec1;
    vec1[5] = 25;
    vec2[5] = 99;
    vec3[5] = 123;

    std::cout<< "vec1[5]= "<< vec1[5]<< "\n";
    std::cout<< "vec2[5]= "<< vec2[5]<< "\n";
    std::cout<< "vec3[5]= "<< vec3[5]<< "\n";
    std::cout<< "size of vec1 = "<< vec1.size()<< "\n";
    std::cout<< "size of vec2 = "<< vec2.size()<< "\n";
    std::cout<< "size of vec3 = "<< vec3.size()<< "\n";
}
