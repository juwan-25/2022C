#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
	//map은 key 값에 따라 자동 정렬됨 
	//지역별 맛집
	map<string, string> m;
	m["용산"] = "텐파";
	m["성수"] = "봄의 정원";
	m["강남"] = "정돈";

	//데이터 전체 출력
	map<string, string>::iterator iter;
	for (iter = m.begin(); iter != m.end(); iter++) {
		cout << iter->first << " " << iter->second << endl;
	}
	cout << endl;

	//용산 key 값을 가진 데이터 삭제
	m.erase("용산");

	//삭제 후 데이터 전체 출력
	for (iter = m.begin(); iter != m.end(); iter++) {
		cout << iter->first << " " << iter->second << endl;
	}
	cout << endl;

	return 0;
}