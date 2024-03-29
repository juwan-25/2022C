#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	// 크기가 10개씩 고정된 정적배열
	string s1[10];
	string* s2 = new string[10];

	// 크기 확장이 가능한 동적배열
	vector<string> s3;
	s3.reserve(10);

	for (int i = 0; i < 10; i++) {
		s3.push_back("ab");
	}

	// 기존 공간 크기를 확장해 삽입
	s3.push_back("ab");

	for (int i = 0; i < s3.size(); i++) {
		cout << s3[i] << " ";
	}
	cout << endl;

	//백터 아이템 수정
	s3[1] = "cd";
	s3.at(2) = "ef";

	for (int i = 0; i < s3.size(); i++) {
		cout << s3[i] << " ";
	}
	cout << endl;		
	return 0;
}