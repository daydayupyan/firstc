//============================================================================
// Name        : firstC.cpp
// Author      : upup
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

/**
 * 此方法無法交換值
 */
void test(int a, int b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
}

/**
 * 用指针变量可以交换值
 */
void test1(int *x, int *y) {
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

int main() {
//	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	printf("hehehehehe\n");

	printf("我是来学习c语言的呀");

	int c = 0;
	for(int a = 0; a<= 100; a++) {
		c+=a;
	}
	printf("1+2+。。。+ 100的结果是：%d", c);

	int putchar(int ch);
	putchar('A');

	int i, a[10];
	for(i = 0; i<=9;i++){
		a[i] = i;
	}
	printf("\n");
	for(i = 9; i>= 0 ;i--) {
		printf("%d\n", a[i]);
	}


	int x = 10,y = 20;
	test(x,y);
	printf("x=%d,y=%d\n",x,y);
	test1(&x,&y);

	printf("x=%d,y=%d\n",x,y);

	return 0;
}
