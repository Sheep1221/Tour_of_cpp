#include <iostream>
#include <vector>

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
    std::cout<< count(vec, [&](int x){return x>3;})<< "\n";

    return 0;
}

