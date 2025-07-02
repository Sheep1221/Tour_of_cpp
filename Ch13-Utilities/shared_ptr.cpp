#include <iostream>
#include <memory>
#include <string>

int main(){
    std::shared_ptr<int> ptr1 = std::make_shared<int>(10);
    std::shared_ptr<int> ptr2 = ptr1;

    std::cout << "ptr1 addr: " << ptr1 << " ptr1 value: " << *ptr1 << std::endl;
    std::cout << "ptr2 addr: " << ptr2 << " ptr2 value: " << *ptr2 << std::endl;

    *ptr1 = 20;
    std::cout << "ptr1 value: " << *ptr1 << std::endl;
    std::cout << "ptr2 value: " << *ptr2 << std::endl;

    // try reset
    ptr2.reset();
    std::cout << "ptr1 value: " << *ptr1 << std::endl; // although ptr2 been reset, ptr1 still have ownership
    ptr1.reset();
    //std::cout << "ptr2 value: " << *ptr2 << std::endl; // ptr2 already reset -> segmentation fault


    // unique_ptr to shared_ptr
    std::unique_ptr<int> ptr3 = std::make_unique<int>(30);
    std::shared_ptr<int> ptr4 = std::move(ptr3);
    std::shared_ptr<int> ptr5 = ptr4;
    std::cout << "ptr4 addr: " << ptr4 << " ptr4 value: " << *ptr4 << std::endl;
    std::cout << "ptr5 addr: " << ptr5 << " ptr5 value: " << *ptr5 << std::endl;
    
    return 0;
}
