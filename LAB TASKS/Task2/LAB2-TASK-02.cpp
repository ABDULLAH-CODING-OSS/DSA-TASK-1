

#include <iostream>
#include<string>
using namespace std;
class Engine {
private:
    string type;
    int horsepower;
public:
    Engine(string type, int horsepower) :type(type), horsepower(horsepower) {

    }
    Engine(const Engine&obj) :type(obj.type), horsepower(obj.horsepower) {

    }

    void displayEngine() {
        cout << "The engine is " << type << " " << "The horse power is " << horsepower << endl;
    }




};
class Car {
private:
    string make;
    int model;
    Engine engine;
public:
    Car(string make, int model, Engine engine) :make(make), model(model),engine(engine) {

    }
    Car(const Car &obj1) :make(obj1.make), model(obj1.model), engine(obj1.engine) {

    }

    void displayCar() {
        cout << "The make is of  " << make << " " << "The model year is " << model << endl;
        engine.displayEngine();
    }




};
int main()
{
    Engine engine ("V12", 750);
    Car car ("Ford", 2024,engine);
    cout << "Car details" << endl;
    car.displayCar();
    Car car2 = car;
    cout << "copied the data " << endl;
    car2.displayCar();


    


}

