#include <iostream>
#include <vector>

template<typename T>
class Greater_than{
public:
    Greater_than(const T& v):val{v}{}
    bool operator()(const T& x)const{
        return x>val;
    }
private:
    const T val;
};

template<typename C, typename P>
int count(const C& c, P pred){
    int cnt = 0;
    for(auto& val:c){
        if(pred(val)){
            std::cout<< "Add count, val="<< val<< "\n";
            ++cnt;
        }
    }
    return cnt;
}

int main(){
    std::vector<int> vec = {10, 2, 3, 4, 5, 1, 6};
    int x = 3;
    std::cout<< count(vec, Greater_than{x})<< "\n";

    return 0;
}

