//1. 考虑下面两个无限序列：
//1.0 + 1.0 / 2.0 + 1.0 / 3.0 + 1.0 / 4.0 + ...
//1.0 - 1.0 / 2.0 + 1.0 / 3.0 - 1.0 / 4.0 + ...
//编写一个程序计算这两个无限序列的总和，直到到达某次数。
//提示：奇数个 - 1 相乘得 - 1，偶数个 - 1 相乘得 1。
//让用户交互地输入指定的次数，当用户输入 0 或负值时结束输入。
//查看运行 100 项、1000 项、10000 项后的总和，是否发现每个序列都收敛于某值？收敛于2.00000
#include<stdio.h>
int main() {
	int n;
	double  a = 1.0;
	double  b = 1.0;
	double  r1 = 1.0;
	double  r2 = 1.0;
	while (1) {//让用户交互地输入指定的次数，当用户输入 0 或负值时结束输入。
		scanf_s("%d", &n);
		if (n <= 0) {
			break;
		}
		else {
			for (int i = 1; i < n; i++) {
				r1 += 1.0 / (i + 1);
			}
			printf("r1 = %f\n", r1);
			for (int i = 1; i < n; i++) {
				r2 -= 1.0 / (i + 1);
			}
			printf("r2 = %f\n", r2);
			double r3 = r1 + r2;
			printf("r3 = %f\n", r3);
		}
	}
	return 0;
}

//2. 编写一个程序，创建一个包含 8 个元素的 int 类型数组，
// 分别把数组元素设置为 2 的前 8 次幂。
// 使用 for 循环设置数组元素的值，使用 do while 循环显示数组元素的值
#include<stdio.h>
int main() {
	int arr[8] = {1,1,1,1,1,1,1,1};
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j <= i; j++) {
			arr[i] *= 2;
		}
	}
	int p = -1;
	do { 
		p++;
		printf("%d\n", arr[p]); 
	} 
	while (p < 7);
	//for (int i = 0; i < 8; i++) {
	//	printf("%d\n", arr[i]);
	//}

	return 0;
}
