#include <iostream>
#include <string>

template <typename T>

class Vector{
public:
    explicit Vector(int s);
    ~Vector(){ delete[] elem;}
    T& operator[](int sz);
private:
    T* elem;
    int sz;
};

int main(){
    try{
        Vector<double> vec1(5);
        Vector<std::string> vec2(3);
        //Vector<int> vec3(-1);
        vec1[3] = 125.3;
        vec2[2] = "Hello";
        std::cout<< "vec1[3] = "<< vec1[3]<< "\n";
        std::cout<< "vec2[2] = "<< vec2[2]<< "\n";
    }
    catch(std::string& err){
        std::cout << err << "\n";
    }

    return 0;
}

template <typename T>
Vector<T>::Vector(int s){
    if(s<0)
        throw std::string("Error, the size should not in negative"); 
    elem = new T[s];
    sz = s;
}

template <typename T>
T& Vector<T>::operator[](int sz){
    return elem[sz];
}
