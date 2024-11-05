#include<iostream>
#include<set>
using namespace std;
class Person
{
public:
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	string m_Name;
	int m_Age;
};
//创建仿函数 定义规则
class mycompare {
public:
	bool operator()(const Person &p5, const Person& p6)const {
		return p5.m_Age < p6.m_Age;//按照年龄排序
	}
};
void test() {
	set<Person,mycompare>s;
	Person p1("刘备", 23);
	Person p2("关羽", 27);
	Person p3("张飞", 25);
	Person p4("赵云", 21);
	s.insert(p1);
	s.insert(p2);
	s.insert(p3);
	s.insert(p4);
	for (auto b : s) {
		cout << "姓名：" << b.m_Name << " 年龄:" << b.m_Age << endl;
	}
}
int main() {
	test();
	return 0;
	}
