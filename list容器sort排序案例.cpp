#include<iostream>
#include<list>
using namespace std;
class Person {
public:
	Person(string name, int age, int height) {
		this->myage = age;
		this->myname = name;
		this->myheight = height;
	}
	int myage;
	string myname;
	int myheight;
};
//指定排序规则
bool ComparePerson1(Person& p1, Person& p2) {
	//按照年龄升序
	return p1.myage < p2.myage;
}
bool ComparePerson2(Person& p1, Person& p2) {
	//相同年龄 按照身高降序序
	if (p1.myage == p2.myage) {
		return p1.myheight > p2.myheight;
	}
	else {
		return 0;
	}
}
void test() {

	list<Person> L;
	Person p1("刘备", 35, 175);
	Person p2("曹操", 45, 180);
	Person p3("孙权", 40, 170);
	Person p4("赵云", 25, 190);
	Person p5("张飞", 35, 160);
	Person p6("关羽", 35, 200);
	L.push_back(p1);
	L.push_back(p2);
	L.push_back(p3);
	L.push_back(p4);
	L.push_back(p5);
	L.push_back(p6);
	cout << "排序前：" << endl;
	for (auto b : L) {
		cout << "姓名:" << b.myname << " 年龄:" << b.myage << " 身高:" << b.myheight << endl;
	}
	cout << "按年龄初步排序：" << endl;
	L.sort(ComparePerson1);
	for (auto b : L) {
		cout << "姓名:" << b.myname << " 年龄:" << b.myage << " 身高:" << b.myheight << endl;
	}
	cout << "相同年龄下按身高进一步排序：" << endl;
	L.sort(ComparePerson2);
	for (auto b : L) {
		cout << "姓名:" << b.myname << " 年龄:" << b.myage << " 身高:" << b.myheight << endl;
	}
}
int main() {
	test();
	return 0;
	}
