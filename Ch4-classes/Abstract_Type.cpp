#include <iostream>

class Container {
public:
    // Set = 0 to the function 
    // -> indicate that it is a pure virtual function
    virtual void greeting() = 0;
    virtual ~Container(){};
};

class Test1: public Container{
public:
    void greeting() override{
        std::cout<< "Hello from Test1"<< "\n";
    }
};

class Test2: public Container{
public:
    void greeting() override{
        std::cout<< "Hello from Test2"<< "\n";
    }
};

void use(Container &c){
    c.greeting(); 
}

int main(){
    Test1 t1;
    Test2 t2;

    use(t1);
    use(t2);

    return 0;
}
