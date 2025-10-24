#include <iostream>
#include <cmath>
using namespace std;

float sum(float a, float b) {
	return a + b;
}
float sub(float a, float b) {
	return a - b;
}
float div(float a, float b) {
	if (b != 0) {
		return a / b;
	}
	else {
		cout << "Error" << "\n";
		cout << "\n";
		return NAN;
	}

}
float mul(float a, float b) {
	return a * b;
}
int factorial_for_a(float a) {
	if (a > 1) {
		return a * factorial_for_a(a - 1);
	}
	else {
		return 1;
	}
}
int factorial_for_b(float b) {
	if (b > 1) {
		return b * factorial_for_b(b - 1);
	}
	else {
		return 1;
	}
}
float a_power_b(float a, float b) {
	float a_p_b = 1;
	for (int i = 1; i <= b; i++) {
		a_p_b *= a;
	}
	return a_p_b;
}
float sqrt1(float a) {
	if (a < 0) {
		return NAN;
	}
	else {
		return sqrt(a);
	}
}
float sqrt2(float b) {
	if (b < 0) {
		return NAN;
	}
	else {
		return sqrt(b);
	}
}
float square1(float a) {
	return a * a;
}
float square2(float b) {
	return b * b;
}

float cube1(float a) {
	return a * a * a;
}
float cube2(float b) {
	return b * b * b;
}
float function(float x) {
	return ((10 * (x * x * x)) + (3.1415 * (x * x))) * ((x / 3) - (1 / (x * x)));
}
float perimeter(float a, float b, float x) {
	if (a + b > x && a + x > b && b + x > a) {
		return a + b + x;
	}
	else {
		return 0;
	}
}
float area(float a, float b, float x) {
	float p = (a + b + x) / 2;
	if (a + b > x && a + x > b && b + x > a) {
		return sqrt(p * (p - a) * (p - b) * (p - x));
	}
	else {
		return 0;
	}
}


void kalkulator() {
	float x;
	float a;
	float b;
	int action;
	do {
		cout << "					      ####    ##    #       ####  \n";
		cout << "					     #       #  #   #      #      \n";
		cout << "					     #       ####   #      #      \n";
		cout << "					     #       #  #   #      #      \n";
		cout << "					      ####  #    #  #####   ####  \n";
		cout << "\n";
		cout << "\033[31m						     ---END(0)--- \033[0m\n" << "\n";
		cout << "\033[32m							SUM(1) \033[0m\n" << "\n";
		cout << "\033[33m							SUB(2) \033[0m\n" << "\n";
		cout << "\033[34m							DIV(3) \033[0m\n" << "\n";
		cout << "\033[35m							MUL(4) \033[0m\n" << "\n";
		cout << "\033[36m						 FACTORIAL for a,b(5) \033[0m\n" << "\n";
		cout << "\033[93m						     POWER a,b(6) \033[0m\n" << "\n";
		cout << "\033[91m						    SQRT of a,b(7) \033[0m\n" << "\n";
		cout << "\033[92m						     SQUARE a,b(8)	\033[0m\n" << "\n";
		cout << "\033[93m						     CUBE a,b(9) \033[0m\n" << "\n";
		cout << "\033[94m						     FUNCTION(10) \033[0m\n" << "\n";
		cout << "\033[95m					       PERIMETER OF TRIANGLE(11) \033[0m\n" << "\n";
		cout << "\033[96m						  AREA OF TRIANGLE(12) \033[0m\n" << "\n";
		cout << "Choose action: ";
		cin >> action;
		if (action == 0) {
			cout << "\n";
			cout << "\033[31mEND OF PROGRAM \033[0m" << "\n";
			break;
		}
		else {
			switch (action) {
			case 1:
				cout << "enter a: ";
				cin >> a;
				cout << "enter b: ";
				cin >> b;
				cout << "\n";
				cout << "SUM: " << sum(a, b) << "\n";
				cout << "\n";
				break;
			case 2:
				cout << "enter a: ";
				cin >> a;
				cout << "enter b: ";
				cin >> b;
				cout << "\n";
				cout << "SUB: " << sub(a, b) << "\n";
				cout << "\n";
				break;
			case 3:
				cout << "enter a: ";
				cin >> a;
				cout << "enter b: ";
				cin >> b;
				cout << "\n";
				cout << "DIV: " << div(a, b) << "\n";
				cout << "\n";
				break;
			case 4:
				cout << "enter a: ";
				cin >> a;
				cout << "enter b: ";
				cin >> b;
				cout << "\n";
				cout << "MUL: " << mul(a, b) << "\n";
				cout << "\n";
				break;
			case 5:
				cout << "enter a: ";
				cin >> a;
				cout << "enter b: ";
				cin >> b;
				cout << "\n";
				cout << "FACTORIAL for a: " << factorial_for_a(a) << "\n";
				cout << "\n";
				cout << "FACTORIAL for b: " << factorial_for_b(b) << "\n";
				cout << "\n";
				break;
			case 6:
				cout << "enter a: ";
				cin >> a;
				cout << "enter b: ";
				cin >> b;
				cout << "\n";
				cout << "POWER: " << a_power_b(a, b) << "\n";
				cout << "\n";
				break;
			case 7:
				cout << "enter a: ";
				cin >> a;
				cout << "enter b: ";
				cin >> b;
				cout << "\n";
				cout << "SQRT of a: " << sqrt1(a) << "\n";
				cout << "SQRT of b: " << sqrt2(b) << "\n";
				cout << "\n";
				break;
			case 8:
				cout << "enter a: ";
				cin >> a;
				cout << "enter b: ";
				cin >> b;
				cout << "\n";
				cout << "SQUARE a: " << square1(a) << "\n";
				cout << "SQUARE b: " << square2(b) << "\n";
				cout << "\n";
				break;
			case 9:
				cout << "enter a: ";
				cin >> a;
				cout << "enter b: ";
				cin >> b;
				cout << "\n";
				cout << "CUBE a: " << cube1(a) << "\n";
				cout << "CUBE b: " << cube2(b) << "\n";
				cout << "\n";
				break;
			case 10:
				cout << "enter x: ";
				cin >> x;
				cout << "\n";
				cout << "FUNCTION: " << function(x) << "\n";
				cout << "\n";
				break;
			case 11:
				cout << "enter a: ";
				cin >> a;
				cout << "enter b: ";
				cin >> b;
				cout << "enter x: ";
				cin >> x;
				if (a <= 0 || b <= 0 || x <= 0) {
					cout << "Sides gotta be >0";
				}
				else {
					cout << "\n";
					cout << "PERIMETER: " << perimeter(a, b, x) << "\n";
					cout << "\n";
				}
				break;
			case 12:
				cout << "enter a: ";
				cin >> a;
				cout << "enter b: ";
				cin >> b;
				cout << "enter x: ";
				cin >> x;
				if (a <= 0 || b <= 0 || x <= 0) {
					cout << "Sides gotta be >0";
				}
				else {
					cout << "\n";
					cout << "AREA: " << area(a, b, x) << "\n";
					cout << "\n";
				}
				break;
			}
		}
	} while (action != 0);
}

int main() {
	kalkulator();
}