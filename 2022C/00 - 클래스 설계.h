#include <string>
using namespace std;

class Person
{
public:
	void like_act(); //좋아하는 활동
protected:
	int height;
	int weight;
private :
	string name;
	int age;
};

class Trainee : public Person
{
public:
	void sing();
	void dance();
protected:
	string agency;
private:
	int pr_period; //연습생 기간
	int visual;
	int skill;
};

class Idol : public Trainee
{
public :
	void broadcast(); //방송 출연
	void concert();
	void communicate(); //팬들과의 소통
private :
	int year; //데뷔 년도
	int record; //음원 성적
	string group_name;
};