#include<iostream>

class Time{
public:
    // we can only use unsigned lon long if we would like to use literal
    explicit Time(unsigned long long s):sec{s}{}

    unsigned long long get_sec(){
        return sec;
    }
    Time operator+(const Time& t){
        return Time(sec + t.sec);
    }
private:
    unsigned long long sec = 0;
};

// need to use _ for self-defined literal
Time operator""_s(unsigned long long s){
    return Time(s);        
}
Time operator""_min(unsigned long long s){
    return Time(s*60);        
}

int main(){
    Time t1 = 45_s;
    Time t2 = 2_min + 20_s;
    std::cout<< "The t1 is :"<< t1.get_sec()<< "s\n";
    std::cout<< "The t2 is :"<< t2.get_sec()<< "s\n";
    
    return 0;
}
