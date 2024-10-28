#include <iostream>
#include <utility>

typedef std::pair<double, double> Point;
//using Point = std::pair<double, double>;

class Shape{
public:
    virtual Point Center() = 0;
    virtual double area() = 0;
    //virtual void move(Point t0) = 0;
};
         
// Shape - Circle - Coin
//       \ Triangle

class Circle: public Shape{
public:
    Circle(): c{0,0}, r{1}{}
    Circle(Point p, int radius): c{p}, r{radius}{}
    Point Center() override{
        return c;    
    }
    double area() override{
        return r*r*3.14;
    };
private:
    Point c;
    int r;
};

class Coin: public Circle{
public:
    Coin(int value): Circle{std::make_pair(0,0), 1}, val{value}{}
    Coin(Point p, int radius, int value): Circle{p, radius}, val{value}{}
    int value(){
        return val;
    }

private:
    int val;
};

class Triangle: public Shape{
public:
    Triangle(): p1{0,0}, p2{2,0}, p3{1,1}{}
    Triangle(Point point1, Point point2, Point point3): p1{point1}, p2{point2}, p3{point3}{}
    Point Center() override{
        double cx = (p1.first + p2.first + p3.first) / 3.0;
        double cy = (p1.second + p2.second + p3.second) / 3.0;
        return {cx, cy};
    }
    double area() override{
        double area = abs((p1.first * (p2.second - p3.second) +
                       p2.first * (p3.second - p1.second) +
                       p3.first * (p1.second - p2.second)) / 2.0);
        return area;
    };
private:
    Point p1;
    Point p2;
    Point p3;
};

int main(){
    Circle c1;
    Circle c2(std::make_pair(2,3), 5);
    std::cout<< "Area of c1: "<< c1.area()<<"\n";
    std::cout<< "Area of c2: "<< c2.area()<<"\n";

    Coin dollar(std::make_pair(0,0), 2, 10);
    std::cout<< "Area of dollar: "<< dollar.area()<< "\n";
    std::cout<< "Value of dollar: "<< dollar.value()<< "\n";

    Triangle t1(std::make_pair(2,3), std::make_pair(6,3), std::make_pair(4,6));
    std::cout<< "Area of t1: "<< t1.area()<<"\n";
    
    return 0;

}
