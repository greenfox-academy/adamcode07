#include <iostream>
#include <string>

using namespace std;

class Car {
        private:
            string type;
            int km;

        public:
            Car (string type, int km){
                this->type = type;
                this->km = km;
            }

            int run(int num){
                return (num + km);
            }
            string greet(){

            return type;
            }
};

int main() {

    Car cr ("Toyota", 25);
    // Create a class called "Car"
    // It should have a "type" property that stores the car's type in a string eg: "Mazda"
    // It should have a "km" property that stores how many kilometers it have run
    // The km and the type property should be a parameter in the constructor
    // It should have a method called "run" that takes a number and increments the "km" property by it
    cout << cr.greet() << cr.run(15) << endl;

  return 0;
}
