#include<bits/stdc++.h>
using namespace std;

//3 函数模板案例
//案例描述：
//利用函数模板封装一个排序的函数，可以对不同数据类型数组进行排序
//排序规则从大到小，排序算法为选择排序
//分别利用char数组和int数组进行测试

template<class T>
void sort(T arr[],int len)
{
	for (int i = 0; i < len; i++) {
		int max = i;
		for (int j = i + 1; j < len; j++) {
			if (arr[max] > arr[j]) {
				max = j;
			}
		}

		if (max != i)
		{
			swap(arr[max], arr[i]);
		}
	}
}
template<class T>
void swap(T& a, T& b) {
	T temp = a;
	a = b;
	b = temp;
}
template<class T>
void printarr(T arr[], int len) {
	for (int i = 0; i < len; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

void test1() {
	//测试arr数组类型
	char arr[] =  "badce";
	int len = sizeof(arr) / sizeof(arr[0]);
	sort(arr, len);
	printarr(arr, len);
}
void test2() {
	//测试int数组类型
	int arr2[] = { 2,5,6,4,3,1 };
	int len2 = sizeof(arr2) / sizeof(arr2[0]);
	sort(arr2, len2);
	printarr(arr2, len2);
}
int main() {
	test1();
	test2();
	system("pause");
	return 0;
}
 
