#include <string>
using namespace std;

class Person
{
public:
	void like_act(); //�����ϴ� Ȱ��
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
	int pr_period; //������ �Ⱓ
	int visual;
	int skill;
};

class Idol : public Trainee
{
public :
	void broadcast(); //��� �⿬
	void concert();
	void communicate(); //�ҵ���� ����
private :
	int year; //���� �⵵
	int record; //���� ����
	string group_name;
};