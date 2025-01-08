#include <iostream>
#include <string>

template <typename T>

class Vector{
public:
    explicit Vector(int s);
    ~Vector(){ delete[] elem;}
    T& operator[](int sz);
    void push_back(T t);
    void reserve(int s);
    int get_size();
    int get_capacity();
private:
    T* elem;
    int sz;
    int capacity;
};

int main(){
    Vector<double> vec1(5);
    std::cout<< vec1.get_size() << "\n";
    std::cout<< vec1.get_capacity()<< "\n\n";

    vec1.push_back(20.0);
    std::cout<< vec1.get_size() << "\n";
    std::cout<< vec1.get_capacity()<< "\n\n";

    vec1.push_back(20.9);
    std::cout<< vec1.get_size() << "\n";
    std::cout<< vec1.get_capacity()<< "\n\n";
    
    return 0;
}

template <typename T>
Vector<T>::Vector(int s){
    if(s<0)
        throw std::string("Error, the size should not in negative"); 
    elem = new T[s];
    sz = s;
    capacity = s;
}

template <typename T>
T& Vector<T>::operator[](int sz){
    return elem[sz];
}

template <typename T>
void Vector<T>::reserve(int s){
    T* new_elem = new T[s];
    for(int i=0; i<sz; ++i){
        new_elem[i] = elem[i];
    }
    delete[] elem;
    elem = new_elem;
    capacity = s;
}

template <typename T>
void Vector<T>::push_back(T val){
    if(capacity < sz+1){
        reserve(sz+10);
    }
    elem[sz++] = val;
}

template <typename T>
int Vector<T>::get_size(){
    return sz;
}

template <typename T>
int Vector<T>::get_capacity(){
    return capacity;
}
