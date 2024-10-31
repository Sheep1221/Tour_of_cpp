#include <iostream>
#include <string>

class Complex{
public:
    Complex(int re1, int img1): re{re1}, img{img1}{}
    Complex(Complex& c):re{c.re}, img{c.img}{}
    int real(){
        return re;
    }
    int image(){
        return img;
    }
    void show(){
        if(re&&img){
            std::cout<< re<< "+i"<< img<< "\n";
        }
        else{
            std::cout<< "Already Null"<< "\n";
        }
    }
private:
    int re = 0;
    int img = 0;

};

int main(){
    Complex c1(5, 6);
    Complex c2(std::move(c1));
    std::cout<<"c1: ";
    c1.show();
    std::cout<<"c2: ";
    c2.show();
    //std::cout<<"c1: "<< c1.real()<< "+i"<< c1.image()<< "\n";
    //std::cout<<"c2: "<< c2.real()<< "+i"<< c2.image()<< "\n";
    
    return 0;
}
