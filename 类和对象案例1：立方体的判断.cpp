#include<bits/stdc++.h>
using namespace std;
//练习案例1：设计正立方体类
//设计正立方体类(Cube)
//求出正立方体的面积和体积
//分别用全局函数和成员函数判断两个立方体是否相等。
//全局函数：在class外面  成员函数：在class内部
class Cube {
private:
	int l;
	int s;
	int v;
public:
	void setl(int cl) {
		l = cl;
	}
	int getl() {//获取边长
		return l;
	}
	void gets() {//获取面积
		s = l * l;
		cout << "面积为" << s << endl;
	}
	void getv() {//获取体积
		v = s * l;
		cout << "体积为" << v << endl;
	}
	//成员函数：在class内部
	bool interisSame(Cube &c) {
		if (c.getl() == l) {//l为类内的数据  判断l是否等于传进来的l
			return true;
		}
		else { return false; }
	}
	
};
//全局函数：在class外面
bool isSame(Cube &c1, Cube &c2) {
	if (c1.getl() == c2.getl()) {
		return true;
	}
	else { return false; }
}
int main() {
	Cube c1;
	Cube c2;
	c1.setl(100);
	c2.setl(100);
	c1.gets();
	c1.getv();
	//全局函数：在class外面
	bool ret = isSame(c1, c2);
	if (ret) {
		cout << "全局函数判断为相等" << endl;
	}
	else {
		cout << "全局函数判断为不相等" << endl;
	}
	//成员函数：在class内部
	bool interret = c1.interisSame(c2);//判断在c1下与c2比较
	if (interret) {
		cout << "成员函数判断为相等" << endl;
	}
	else {
		cout << "成员函数判断为不相等" << endl;
	}
	system("pause");
	return 0;
}
