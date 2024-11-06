#include<iostream>
#include<map>
#include<vector>
#include<ctime>
using namespace std;
#define CEHUA  0
#define MEISHU 1
#define YANFA  2
class worker {
public:
	string wname;
	int wsalary;
};
void createworker(vector<worker>&v) {
	string nameseed = "ABCDEFGHIJ";
	for (int i = 0; i < 10; i++) {
		worker Worker;
		Worker.wname = "员工";
		Worker.wname += nameseed[i];
		Worker.wsalary = rand() % 10001 + 10000;
		//产生随机数 10000~19999 
		v.push_back(Worker);
	}
}
void AssignGroup(vector<worker>& v,multimap<int, worker>& mp) {
	for (auto b : v) {
		//id为编号 b为员工
		int id = rand() % 3;//随机编号0 1 2共三个部门
		mp.insert(make_pair(id,b));
	}
}
void ShowWorker(multimap<int,worker>&m) {
	cout << "策划部门：" << endl;
	multimap<int, worker>::iterator it = m.find(CEHUA);
	int total = m.count(CEHUA);
	for (int i = 0; it != m.end() && i < total; it++, i++) {
		cout << "姓名:" << it->second.wname << "工资：" << it->second.wsalary << endl;
	}
	cout << "-----------------------------" << endl;
	cout << "美术部门：" << endl;
	it = m.find(MEISHU);
	total = m.count(MEISHU);
	for (int i = 0; it != m.end() && i < total; it++, i++) {
		cout << "姓名:" << it->second.wname << "工资：" << it->second.wsalary << endl;
	}
	cout << "-----------------------------" << endl;
	cout << "研发部门：" << endl;
	it = m.find(YANFA);
	total = m.count(YANFA);
	for (int i = 0; it != m.end() && i < total; it++, i++) {
		cout << "姓名:" << it->second.wname << "工资：" << it->second.wsalary << endl;
	}
}
int main() {
	srand((unsigned int)time(NULL));
	//1.创建员工
	vector<worker>v;
	createworker(v);
	//2.员工分组
	multimap<int,worker>mp;
	AssignGroup(v,mp);
	//3.分组显示员工
	ShowWorker(mp);
	return 0;
	}
