#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> v;
	int input, tot = 0;
	double avg;

	for (int i = 0; i < 5; i++) {
		cin >> input;
		v.push_back(input);
		tot += v[i];
	}
	avg = (double)tot / v.size();
	cout << "�հ� : " << tot << endl;
	cout << "��� : " << avg << endl;
}