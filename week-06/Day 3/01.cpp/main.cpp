#include <iostream>
#include <vector>

using namespace std;

// Create a Shape class, inherit two derived class from it
class Shape {

    protected:

        float area;

    public:

        virtual float calc_area() = 0;

        float get_area(){
            return area;
        }

};

class Circle: public Shape{

    private:
        int radius;

    public:
        Circle(int radius){
            this->radius = radius;
        }

        float calc_area(){
            area = 3.14 * (float)radius * (float)radius;

            return area;
        }

};

class Triangle: public Shape{

    protected:
        int a;
        int b;

    public:
        Triangle(int a, int b){
            this-> a = a;
            this-> b = b;
        }

        float calc_area(){
            area = (float)a * (float)b * 0.5;
            return area;
        }

};
// One should be Circle, and the other one is Triangle
// For each derived class, implement a calc_area() method
// which calculates the area of the shape and stores it inside the class (so it is a private field)

int main()
{
    Circle cl(5);
    cl.get_area();
    cout << "The circle's area is " << cl.calc_area() << endl;

    Triangle tr(8, 12);
    tr.get_area();
    cout << "The triangle's area is " << tr.calc_area() << endl;

    return 0;
}
