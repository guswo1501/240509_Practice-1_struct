#include <iostream>
#include <string>
using namespace std;

// ����ü ������ �ַ� main�� �ٱ����ٰ�
struct Rectangle
{
	float width = 0;
	float height = 0;
};

int main()
{
	

	Rectangle square;

	cout << "���� ���̸� �Է����ּ���  ";
	cin >> square.width;

	cout << "���� ���̸� �Է����ּ���  ";
	cin >> square.height;

	float space = square.width * square.height;

	cout << endl;
	cout << "���̴� " << space << "�Դϴ�." << endl;
	
}