#include <iostream>

int main(){
    // basic of pointer
    int v[6] = {11, 12, 13, 14, 15, 16};
    int* p = &v[3];

    std::cout<< *p <<"\n";
    std::cout<< *p+1 <<"\n";


    // reference
    /*
    r=88 r2=92     r=88 r2=92
     |     |        |     |
     |     |        |     |
     |     |        |     |
    x=2   y=3      x=2   y=3
                           */

    {
        std::cout<< "\n"<< "By reference"<< "\n";
        int x = 2;
        int y = 3;
        int& r = x;
        int& r2 = y;
        std::cout<< "Before assign r2 to r\n";
        std::cout<< "r="<< r<< "  r2="<< r2<<"\n";
        std::cout<< "&r="<< &r<< "  &r2="<< &r2<<"\n";
        std::cout<< "x="<< x<< "  y="<< y<<"\n";
    
        r=r2;
        std::cout<< "After assign r2 to r\n";
        std::cout<< "r="<< r<< "  r2="<< r2<<"\n";
        std::cout<< "&r="<< &r<< "  &r2="<< &r2<<"\n";
        std::cout<< "x="<< x<< "  y="<< y<<"\n";
    }

    // pointer
    /*
    r=88 r2=92
     \     |
      \    |
       \   |
        \  |
         \ | 
          \|
    x=2   y=3
               */
    {
        std::cout<< "\n"<< "By pointer"<< "\n";
        int x = 2;
        int y = 3;
        int* p = &x;
        int* q = &y;
        std::cout<<"Before assign q to p\n";
        std::cout<< "p="<< p<<"  q="<< q<<"\n";
        std::cout<< "*p="<< *p<<"  *q="<< *q<<"\n";
        std::cout<< "x="<< x<<"  y="<< y<<"\n";

        p=q;
        std::cout<<"After assign q to p\n";
        std::cout<< "p="<< p<<"  q="<< q<<"\n";
        std::cout<< "*p="<< *p<<"  *q="<< *q<<"\n";
        std::cout<< "x="<< x<<"  y="<< y<<"\n";
    }
}
