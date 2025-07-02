#include <iostream>
#include <memory>
#include <string>

int main() {
    // Creating a shared_ptr and initializing it with a dynamically allocated integer
    std::unique_ptr<int> ptr1(new int (5)); // not suggested
    std::unique_ptr<std::string> ptr2 = std::make_unique<std::string>("Hello"); // suggested

    // Creating another shared_ptr that shares ownership
    //std::unique_ptr<int> ptr3 = ptr1;  --> segmentation fault, unique_ptr can't be copied directly
    std::unique_ptr<int> ptr3 = std::move(ptr1);

    // Using the uniqued_ptrs
    //std::cout << "ptr1 value: " << *ptr1 << std::endl;  --> unique_ptr ptr1 can't be used after move to ptr3
    std::cout << "ptr2 value: " << *ptr2 << std::endl;
    std::cout << "ptr3 value: " << *ptr3 << std::endl;

    // Reset ptr1 manually (release before end of section)
    ptr1.reset();

    return 0;
}
