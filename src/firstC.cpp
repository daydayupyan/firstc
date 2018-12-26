//============================================================================
// Name        : firstC.cpp
// Author      : upup
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

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
	return 0;
}
