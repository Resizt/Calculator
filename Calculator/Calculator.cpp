// A basic calculator program used through terminal.
#include <iostream>

using namespace std;

// Inputs
int numbers			(int&, int&, double&);
void message		(int&);
void postmessage	(int&, int&, int&, double&);
void trigfunctions	(int&, double&);

// Functions
int addition		(int&, int&, double&);
int subtraction		(int&, int&, double&);
int multiplication	(int&, int&, double&);
int divison			(int&, int&, double&);

// System message
void error();

/*-------------------------------------------------------------------------------------*/

int main() {
	int choice, num1, num2;
	double sum;

	message(choice);

	while (true) {
		switch (choice) {
		case 1:
			numbers(num1, num2, sum);
			addition(num1, num2, sum);
			break;
		case 2:
			numbers(num1, num2, sum);
			subtraction(num1, num2, sum);
			break;
		case 3:
			numbers(num1, num2, sum);
			multiplication(num1, num2, sum);
			break;
		case 4:
			numbers(num1, num2, sum);
			divison(num1, num2, sum);
			break;
		case 5:
			trigfunctions(choice, sum);
			break;
		}
		postmessage(choice, num1, num2, sum);
	}
}

/*-------------------------------------------------------------------------------------*/

void message(int& choice) {
	cout << "Welcome to the terminal Calculator" << endl;
	cout << "Choose an option from below" << endl;
	cout << " 1. Addition \n 2. Subtraction \n 3. Multiplication \n 4. Divison \n 5. Trig Functions" << endl;

	cin >> choice;

	// Input Validator
	while (0 > choice || choice > 5) {
		error();
		cin >> choice;
	}

	cout << endl << endl;
}

void trigfunctions(int& choice, double& sum){
	system("CLS");
	cout << "Choose an trig function from below" << endl;
	cout << " 1. Sin \n 2. Cos \n 3. Tan \n 4. ArcSin \n 5. ArcCos \n 6. ArcTan" << endl;
	int x;
	cin >> choice;

	switch (choice) {
	case 1:
		cout << "Input the sin function" << endl;
		cin >> x;
		sum = sin(x);
		break;
	case 2:
		cout << "Input the Cos function" << endl;
		cin >> x;
		sum = cos(x);
		break;
	case 3:
		cout << "Input the Tan function" << endl;
		cin >> x;
		sum = tan(x);
		break;
	case 4:
		cout << "Input the ArcSin function" << endl;
		cin >> x;
		sum = asin(x);
		break;
	case 5:
		cout << "Input the ArcCos function" << endl;
		cin >> x;
		sum = acos(x);
		break;
	case 6:
		cout << "Input the ArcTan function" << endl;
		cin >> x;
		sum = atan(x);
		break;
	}
}

void postmessage(int& choice, int& a, int& b, double& c) {
	system("CLS");
	cout << "Your Answer: " << c << endl;
	cout << "---------------------------------" << endl;
	cout << " 1. Addition \n 2. Subtraction \n 3. Multiplication \n 4. Divison \n 5. Trig Functions" << endl;

	cin >> choice;

	// Input Validator
	while (0 > choice || choice > 5) {
		error();
		cin >> choice;
	}

	cout << endl << endl;
}

/*-------------------------------------------------------------------------------------*/

int numbers(int& a, int& b, double& c) {
	cout << "Please choose two number you want to compute" << endl;

	cout << "Number 1: ";
	cin >> a;

	cout << "Number 2: ";
	cin >> b;

	return c;
}

int addition(int& a, int& b, double& c) {
	c = a + b;
	cout << c << endl;
	return c;
}

int subtraction(int& a, int& b, double& c) {
	c = a - b;
	cout << c << endl;
	return c;
}

int multiplication(int& a, int& b, double& c) {
	c = a * b;
	cout << c << endl;
	return c;
}

int divison(int& a, int& b, double& c) {
	c = a / b;
	cout << c << endl;
	return c;
}

/*-------------------------------------------------------------------------------------*/

void error() {
	cout << "Your input is invalid, please try again" << endl;
}

/*-------------------------------------------------------------------------------------*/