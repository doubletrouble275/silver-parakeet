#include<iostream>
using namespace std;
//cout << "привети!!";
//const int COUNT_DAYZ_IN_WEEK = 7;
// if() else else if()
//const char NEW_LINE = '\n';
//cout << COUNT_DAYZ_IN_WEEK << NEW_LINE;
//int Var,Var2;
//cout << "введи число: ";
//cin >> Var;
//a++;



	
	

void main()
{
	setlocale(LC_ALL, "Rus");
	char x;
	int a, b = 0;
	cout << 13 / 6;
	cout << "¬ведите 2 числа" << endl;
	cin >> a;
	cin >> b;
	cout << "¬ведите операцию" << endl;
	cin >> x;
	switch (x)
	{
	case '*':
		cout << a * b;
		break;
	case '/':
		cout << a / b;
		break;
	case '+':
		cout << a + b;
		break;
	case '-':
		cout << a - b;
		break;
	default:
		cout << "динаху";
		break;
	}

}   