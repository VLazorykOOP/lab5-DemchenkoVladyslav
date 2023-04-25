#include <iostream>

// Ваші файли загловки 
//
#include "Lab5Exmaple.cpp"
int main()
{
	std::cout << " Lab #5  Tasks 1-2\n";
	Engine testEngine = Engine(8.94);
	Car testCar = Car("test car with engine", 8, 10.9, testEngine);
	Truck testTruck = Truck("test truck with engine", 8, 10.9, testEngine, 50.01);
	cout << "Engine object" << endl;
	testEngine.Show();
	cout << "Car object" << endl;
	testCar.Show();
	cout << "Truck object" << endl;
	testTruck.Show();
	cout << "Set carrying capacity for truck to 25.1" << endl;
	testTruck.setCarryingCapacity(25.1);
	testTruck.Show();
	cout << endl << endl << endl << "Task 3" << endl;
	Table t = Table();
	cout << "New table object << overload" << endl;
	cout << t << endl;
	cout << "Enter 3 parameters for table (>> overload)" << endl;
	cin >> t;
	cout << "Table object with your parameters (<< overload)" << endl;
	cout << t << endl << endl;
	Table t1 = t;
	cout << "New table (copy of previous)";
	cout << t1 << endl;
	t1 = t;
	cout << t1 << endl;
	cout << "Destructors from previous tasks work: " << endl;
}
