#include <iostream>

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

using namespace std;

int main(){
	int response;
	double n1, n2;
	
	cout << "[1] Addition\n[2] Subtraction\n[3] Multiplication\n[4] Division\nResponse: ";
	cin >> response;

	if (response == 1){
		cout << "Write one number: ";
		cin >> n1;
		
		cout << "Write one number: ";
		cin >> n2;

		cout << '\n' << n1 << " + " << n2 << " = " << addition(n1, n2);
	}
	else if (response == 2) {
		cout << "Write one number: ";
		cin >> n1;

		cout << "Write one number: ";
		cin >> n2;

		cout << '\n' << n1 << " - " << n2 << " = " << subtraction(n1, n2);
	}
	else if (response == 3) {
		cout << "Write one number: ";
		cin >> n1;
		
		cout << "Write one number: ";
		cin >> n2;

		cout << '\n' << n1 << " x " << n2 << " = " << multiplication(n1, n2);
	}
	else if (response == 4) {
		cout << "Write one number: ";
		cin >> n1;

		cout << "Write one number: ";
		cin >> n2;

		cout << '\n' << n1 << " : " << n2 << " = " << division(n1, n2) << "\n\n\n\n\n\n";
	}

	return 0;
}
