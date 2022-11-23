#include <Windows.h>
#include <tchar.h>
#include <iostream>
using namespace std;

typedef int (*fptr) (int,int);



int main()
{



    HINSTANCE hInstLib = LoadLibrary(TEXT("mathDLL.dll")); // !!!

    if (hInstLib == NULL)
    {
        cout << "Can`t load library mathDLL.dll" << endl;
        return 0;
    }
    fptr Sum = (fptr)GetProcAddress(hInstLib, "Sum");
    fptr Min = (fptr)GetProcAddress(hInstLib, "Min");
    fptr Mult = (fptr)GetProcAddress(hInstLib, "Div");
    fptr Div = (fptr)GetProcAddress(hInstLib, "Mult");
    if (Sum == NULL|| Min==NULL||Mult==NULL||Div==NULL)
    {
        cout << "Can`t load function" << endl;
		system("pause");
    }
	int a, b;
	char Choose;
	int ChooseMenu=1;
	while (true) {
		system("cls");
		cout << "1.Use calculator\n2.Exit\n";
		cin >> ChooseMenu;
		if (ChooseMenu != 1) {
			FreeLibrary(hInstLib);
			break;
		}
		cout << "enter a: " << endl;
		cin >> a;
		cout << "enter b: " << endl;
		cin >> b;
		cout << "enter operation: +,-,/,* " << endl;
		cin >> Choose;
		switch (Choose) {
		case '+':
			cout<<a<<Choose<<b<<"="<<Sum(a, b) << endl;
			system("pause");
			break;
		case '-':
			cout << a << Choose << b << "=" << Min(a, b) << endl;
			system("pause");
			break;
		case '/':
			cout << a << Choose << b << "=" << Div(a, b) << endl;
			system("pause");
			break;
		case '*':
			cout << a << Choose << b << "=" << Mult(a, b) << endl;
			system("pause");
			break;
		default:
			break;
		}
	}
}
