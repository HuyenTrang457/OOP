class Vehicle {

};
class Engine { };
class Car {
private:
	Engine engine;
public:
	Car() {}
};
class Person {
public:
	void setVehicle(Vehicle* v) {
		vehicle = v;
	}
private:
	Vehicle* vehicle;
	string name;
};
int main() {
	Vehicle* vehicle = new Car();
	Person* person = new Person;
	person->setVehicle(vehicle); //comparison
	Car-> Engine //agree...
}
