#include <iostream>
#pragma comment (lib,"mathDLL")
using namespace std;
#include "../mathDLL/mathlib.h"
int main() {
	int a, b;
	char Choose;
	while (true) {
		system("cls");
		cout << "enter a: " << endl;
		cin >> a;
		cout << "enter b: " << endl;
		cin >> b;
		cout << "enter operation: +,-,/,* " << endl;
		cin >> Choose;
		switch (Choose) {
		case '+':
			cout<<Sum(a, b)<<endl;
			system("pause");
			break;
		case '-':
			cout<<Min(a, b)<<endl;
			system("pause");
			break;
		case '/':
			cout<<Div(a, b)<<endl;
			system("pause");
			break;
		case '*':
			cout<<Mult(a, b)<<endl;
			system("pause");
			break;
		default:
			break;
		}

	}
}