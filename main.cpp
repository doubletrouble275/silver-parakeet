#include<iostream>
using namespace std;
//cout << "�������!!";
//const int COUNT_DAYZ_IN_WEEK = 7;
// if() else else if()
//const char NEW_LINE = '\n';
//cout << COUNT_DAYZ_IN_WEEK << NEW_LINE;
//int Var,Var2;
//cout << "����� �����: ";
//cin >> Var;
//a++;



	
	

void main()
{
	setlocale(LC_ALL, "Rus");
	char x;
	int a, b = 0;
	cout << 13 / 6;
	cout << "������� 2 �����" << endl;
	cin >> a;
	cin >> b;
	cout << "������� ��������" << endl;
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
		cout << "������";
		break;
	}

}   