// A basic calculator program used through terminal.
#include <iostream>

using namespace std;

// Inputs
int message			(int&);
int numbers			(int&, int&, int&);
int postmessage		(int&, int&, int&, int&);

// Functions
int addition 		(int&, int&, int&);
int subtraction 	(int&, int&, int&);
int multiplication 	(int&, int&, int&);
int divison 		(int&, int&, int&);

// System message
void error();

/*-------------------------------------------------------------------------------------*/

int main(){
	int choice, num1, num2, sum;
	
	message(choice);
	
	while(true){
		numbers(num1, num2, sum);	
		switch(choice){
			case 1:
				addition(num1, num2, sum);
				break;
			case 2:
				subtraction(num1, num2, sum);
				break;
			case 3:
				multiplication(num1, num2, sum);
				break;
			case 4:
				divison(num1, num2, sum);
				break;
			}
		postmessage(choice, num1, num2, sum);
	}
}

/*-------------------------------------------------------------------------------------*/

int message(int& choice){
	cout << "Welcome to the terminal Calculator" << endl;
	cout << "Choose an option from below" 		 << endl;
	cout << " 1. Addition \n 2. Subtraction \n 3. Multiplication \n 4. Divison " << endl;
	
	cin  >> choice;
	cout << endl << endl;
}

int postmessage(int& choice, int& a, int& b, int& c){
	system("CLS");
	cout << " 1. Addition \n 2. Subtraction \n 3. Multiplication \n 4. Divison " << endl;
	
	cin  >> choice;
	cout << endl << endl;
}

/*-------------------------------------------------------------------------------------*/

int numbers(int& a, int& b, int& c){
	cout << "Please choose two number you want to compute" << endl;
	
	cout << "Number 1: ";
	cin >> a;
	
	cout << "Number 2: ";
	cin >> b;
}

int addition(int& a, int& b, int& c){
	c = a + b;
	cout << c << endl;
}

int subtraction(int& a, int& b, int& c){
	c = a - b;
	cout << c << endl;
}

int multiplication(int& a, int& b, int& c){
	c = a * b;
	cout << c << endl;
}

int divison(int& a, int& b, int& c){
	c = a / b;
	cout << c << endl;
}

/*-------------------------------------------------------------------------------------*/
