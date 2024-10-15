#include<iostream>
using namespace std;
struct hero {
	string name;
	int age;
	string sex;
};
//冒泡排序数组
void BubbleSort(hero HeroArr[], int len) 
{
	for (int i = 0; i < len - 1; i++) 
	{
		for (int j = 0; j < len - 1 - i; j++) 
		{
			//如果j下标元素年龄 大于j+1下标元素年龄 则交换两个元素
			if (HeroArr[j].age > HeroArr[j + 1].age) 
			{
				struct hero temp = HeroArr[j];
				HeroArr[j] = HeroArr[j + 1];
				HeroArr[j + 1] = temp;
			}
		}
	}
}

//打印函数
void printof(hero HeroArr[], int len) {
	for (int i = 0; i < 5; i++) {
		cout << "英雄昵称:" << HeroArr[i].name << " 年龄:" 
			<< HeroArr[i].age << " 性别:" << HeroArr[i].sex << endl;
	}
}
int main() {
	//创建英雄数组HeroArr
	struct hero HeroArr[5] = {
		{"刘备",23,"男"},
		{"关羽",22,"男"},
		{"张飞",20,"男"},
		{"赵云",21,"男"},
		{"貂蝉",19,"女"},
	};
	int len = sizeof(HeroArr) / sizeof(HeroArr[0]);
	cout << "排序前:" << endl;
	printof(HeroArr, len);
	BubbleSort(HeroArr, len);
	cout << "排序后:" << endl;
	printof(HeroArr, len);
	system("pause");
	return 0;
}
