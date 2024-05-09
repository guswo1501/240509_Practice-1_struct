#include <iostream>
#include <string>
using namespace std;

// 구조체 선언은 주로 main문 바깥에다가
struct Rectangle
{
	float width = 0;
	float height = 0;
};

int main()
{
	

	Rectangle square;

	cout << "가로 길이를 입력해주세요  ";
	cin >> square.width;

	cout << "세로 길이를 입력해주세요  ";
	cin >> square.height;

	float space = square.width * square.height;

	cout << endl;
	cout << "넓이는 " << space << "입니다." << endl;
	
}