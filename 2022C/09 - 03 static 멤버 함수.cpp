#include <iostream>
#include <string>

using namespace std;

class Champ {
public:
	Champ(int age, const string& name)
		:mAge(age), mName(name)
	{
		mCount++;
	}
	static int getCount() {
		return mCount;
	}

private:
	int mAge;
	string mName;
	static int mCount;

};

int Champ::mCount = 0;

int main()
{
	Champ* teemp = new Champ(15, "Æ¼¸ð");
	cout << Champ::getCount() << endl;

	return 0;
}