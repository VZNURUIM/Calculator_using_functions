#include <iostream>

using namespace std;

double addition(double a, double b) {
	return a + b;
}	

double subtraction(double a, double b) {
	return a - b;
}

double multiplication(double a, double b) {
	return a * b;
}

double division(double a, double b) {
	return a / b;
}

int main() {
	int response;
	double n1, n2;

	cout << "[1] Addition\n[2] Subtraction\n[3] Multiplication\n[4] Division\n\nResponse: ";
	cin >> response;

	if (response == 1){
	cout << "\nWrite one number: ";
	cin >> n1;

	cout << "\nWrite one number: ";
	cin >> n2;

	double formula_addition = addition(n1, n2);

	cout << "\n" << n1 << " + " << n2 << " = " << formula_addition;
	}
	else if (response == 2) {
		cout << "\nWrite one number: ";
		cin >> n1;

		cout << "\nWrite one number: ";
		cin >> n2;

		double formula_subtraction = subtraction(n1, n2);

		cout << "\n" << n1 << " - " << n2 << " = " << formula_subtraction;
	}
	else if (response == 3) {
		cout << "\nWrite one number: ";
		cin >> n1;

		cout << "\nWrite one number: ";
		cin >> n2;

		double formula_multiplication = multiplication(n1, n2);

		cout << "\n" << n1 << " x " << n2 << " = " << formula_multiplication;
	}
	else if (response == 4) {
		cout << "\nWrite one number: ";
		cin >> n1;

		cout << "\nWrite one number: ";
		cin >> n2;

		double formula_division = n1 / n2;

		cout << "\n" <<  n1 << " / " << n2 << " = " << formula_division;
	}
	cout << "\n\n\n";
	system("PAUSE");
	return 0;
}
