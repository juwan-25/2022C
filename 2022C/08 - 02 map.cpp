#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
	int arr[] = { 10, 20, 30, 40 };
	for (auto x : arr){
		x = x + 1;
	}
	for (auto x : arr) {
		cout << x << endl;
	}
}