#include<iostream>
#include<stdio.h>
using namespace std;
int main() {
    /*闰年产生原因：精准的情况下一年有365.24219天
    因此每四年一个闰年计算，平均每年就要多算出0.0078天，
    每128年就会多算出1天，经过400年就会多算出3天多
    所以公历规定：年份是整百数时，必须是400的倍数才是闰年；
    不是400的倍数的世纪年，即使是4的倍数也不是闰年。
    */
    int a;
    cin >> a;
    //闰年计算 四年一闰，百年不闰，四百年再闰
    for (int i = 1; i < a; i++) {
            if (i % 400 == 0 && i % 100 == 0) {//能被100整除 并且能被400整除 为闰年(世纪闰年)
                cout << i << endl;
            }
            else if (i % 100 != 0 && i % 4 == 0) {//不能被100整除 但被4整除 则为闰年(普通闰年)
                cout << i << endl;

            }
            else {
                continue;
            }
 
    }
    return 0;
}
