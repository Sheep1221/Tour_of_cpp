#include <iostream>
#include <string>
// Concept -> type use the template must follow the concept

template<typename T, typename T2 =T> // set defalut template argument to T2 as T
concept Equality_comparable = 
    requires(T a, T2 b){
        {a==b} -> std::same_as<bool>;
        {a!=b} -> std::same_as<bool>;
        {b==a} -> std::same_as<bool>;
        {b!=a} -> std::same_as<bool>;
    };

// Use require to formulate condition on T1 and T2
template<typename T1,  typename T2>
    requires Equality_comparable<T1, T2>
bool compare(T1 a, T2 b){
    if(a >= b)
        return true;
    return false;
}

int main(){
    static_assert(Equality_comparable<int, double>);
    static_assert(Equality_comparable<int>);
    //static_assert(Equality_comparable<int, std::string>); //failed due to no comparable 
    static_assert(Equality_comparable<std::string>);

    std::cout<<compare(55, 20)<<"\n";

    return 0;
}
