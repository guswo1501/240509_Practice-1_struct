#include <iostream>
#include <string>
using namespace std;

int main()
{
	struct Rectangle
	{
		float width = 0;
		float height = 0;
	};

	Rectangle square;

	cout << "���� ���̸� �Է����ּ���  ";
	cin >> square.width;

	cout << "���� ���̸� �Է����ּ���  ";
	cin >> square.height;

	float space = square.width * square.height;

	cout << endl;
	cout << "���̴� " << space << "�Դϴ�." << endl;
	
}