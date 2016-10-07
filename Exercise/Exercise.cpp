// Exercise.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
int add(int a,int b) {
	int sum;
	sum = a + b;
	return sum;
}

int main()
{
	int z;
	z = add(1,2);
	printf("z=%d", z);

    return 0;
}

