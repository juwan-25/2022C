#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
	//map은 key 값에 따라 자동 정렬됨 
	map<string, string> m;
	m["김신"] = "공유";
	m["지은탁"] = "김고은";
	m["저승사자"] = "이동욱";
	m["써니"] = "유인나";

	map<string, string>::iterator iter;
	for (iter = m.begin(); iter != m.end(); iter++) {
		cout << iter->first << "역 " << iter->second << endl;

	}
	cout << endl; 

	map<string, string>::iterator actor = m.find("김신");
	if(actor != m.end())
		cout << "주인공은 " << actor->second << endl;

	return 0;
}