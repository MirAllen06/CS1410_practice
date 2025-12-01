#include <iostream>
#include <stdexcept>

using namespace std;

class Calculator {
private:
	int a, b;
public:
	Calculator(int a, int b) : a(a), b(b) {}

	int add() const { return a + b; }

	int subtract() const { return a - b; }

	int multiply() const { return a * b; }

	double divide() const {
		if (b == 0) {
			throw runtime_error("Division by zero");
		}
		return a / b;
	}
};

int main() {

	try {
		Calculator c(10, 2);
		cout << c.add() << endl;
		cout << c.subtract() << endl;
		cout << c.multiply() << endl;
		cout << c.divide() << endl;

		Calculator c1(4, 0);
		cout << c1.add() << endl;
		cout << c1.subtract() << endl;
		cout << c1.multiply() << endl;
		cout << c1.divide() << endl;

	} catch (runtime_error& e) {
		cerr << "An exception happened: " << e.what() << endl;
	}

	return 0;
}