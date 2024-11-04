#include<iostream>
#include<deque>
#include<algorithm>
#include<vector>
#include<ctime>
using namespace std;
class person {
public:
	person(string name, int score) {
		this->pname = name;
		this->pscore = score;
	}
	int pscore;//平均分
	string pname;//姓名
};
//封装创建选手函数
void createperson(vector<person>& v) {
	string nameseed = "ABCDE";
	for (int i = 0; i < 5; i++) {
		string name = "选手";
		name += nameseed[i];
		int score = 0;
		person p(name,score);
		//将创建的person对象放入到容器中
		v.push_back(p);
	}
}
//封装打分 算分函数
void setshowscore(vector<person>& v) {
	for (auto b : v) {
		deque<int>d;
		for (int i = 0; i < 10; i++) {
			int score = rand() % 41 + 60; //随机分数 60 ~ 100
			d.push_back(score);
		}
		cout<< b.pname << "打分:" << endl;
		for (auto f : d) {
			cout << f << " ";
		}
		cout << endl;
		//排序以进行最高最低分去除
		sort(d.begin(), d.end());
		//去除最低最高分
		d.pop_back();
		d.pop_front();
		//算平均分
		int sum = 0;
		for (auto a : d) {
			sum += a;
		}
		int average = sum / d.size();
		//将平均分赋值到选手上
		b.pscore = average;
		//3.显示最后得分	
			cout << b.pname << "最终得分分数:" << b.pscore << endl;
			cout << endl;
	}
}
int main() {
	srand((unsigned int)time(NULL));
	//注意随机数种子要写在远离随机数命令的位置 
	//否则随机数会因为 时间变化短 而会容易重复
	//1.创建5名选手
	vector<person>v;
	createperson(v);
	//2.给5名选手打分
	setshowscore(v);

		return 0;
	}
