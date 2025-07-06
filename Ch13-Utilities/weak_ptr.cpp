#include <iostream>
#include <memory>
#include <string>

int main(){
    std::shared_ptr<int> ptr1 = std::make_shared<int>(10);
    std::weak_ptr<int> ptr2;
    std::shared_ptr<int> ptr3;
    *ptr1 = 20;

    // weak_ptr
    std::cout<< "weak_ptr test"<< std::endl;
    std::cout<< "[Before]ptr1 use count: "<< ptr1.use_count()<< std::endl;
    ptr2 = ptr1;
    std::cout<< "ptr1 value: "<< *ptr1<< std::endl;
    std::cout<< "ptr2 value: "<< *ptr2.lock()<< std::endl;
    std::cout<< "[After]ptr1 use count: "<< ptr1.use_count()<< "\n";
    std::cout<< "[After]ptr2 use count: "<< ptr2.use_count()<< "\n\n";
    
    
    // reset weak_ptr
    //std::cout<< "Reset ptr1"<< "\n";
    //ptr1.reset();
    //std::cout<< "ptr2 value: "<< *ptr2.lock()<< std::endl; --> ptr1 already reset, ptr2 can't get the lock


    // shared_ptr
    std::cout<< "shared_ptr test"<< std::endl;
    std::cout<< "[Before]ptr1 use count: "<< ptr1.use_count()<< std::endl;
    ptr3 = ptr1;
    std::cout<< "ptr1 value: "<< *ptr1<< std::endl;
    std::cout<< "ptr3 value: "<< *ptr3<< std::endl;
    std::cout<< "[After]ptr1 use count: "<< ptr1.use_count()<< "\n";
    std::cout<< "[After]ptr3 use count: "<< ptr3.use_count()<< "\n\n";

    
    // reset weak_ptr
    std::cout<< "reset weak_ptr test"<< "\n";
    ptr2 = ptr1;
    std::cout<< "lock ptr2 before reset ptr1 \n";
    std::shared_ptr<int> ptr2_lock = ptr2.lock();
    ptr1.reset();
    std::cout<< "[After reset ptr1]ptr2_lock value: "<< *ptr2_lock<< "\n";
    std::cout<< "[After reset ptr1]ptr3 value: "<< *ptr3<< "\n";
    std::cout<< "[After reset ptr1]ptr1 use count: "<< ptr1.use_count()<< "\n";
    std::cout<< "[After reset ptr1]ptr2_lock use count: "<< ptr2_lock.use_count()<< "\n";
    std::cout<< "[After reset ptr1]ptr3 use count: "<< ptr3.use_count()<< "\n\n";

    return 0;
}
