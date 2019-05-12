// 函数参数.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//测试将函数名作为参数传入另外一个函数

#include "pch.h"
#include <iostream>
using namespace std;

void sort(int a[], int n, int(*cmp)(int, int))
{
	//对数组进行排序
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (cmp(a[i], a[j]))
				swap(a[i], a[j]);
}

int CmpAsc(int x, int y)
{
	if (x > y)
		return 1;
	else return 0;
}

int CmpDec(int x, int y)
{
	if (x < y)
		return 1;
	else
		return 0;
}

int CmpAbsAsc(int x, int y)
{
	if (abs(x) > abs(y))
		return 1;
	else return 0;
}

int main()
{
	int a[10], i, n;
	int slt;
	cout << "请输入数组长度：(<=10)";
	cin >> n;
	cout << "请逐一输入：";
	for (i = 0; i < n; i++)
		cin >> a[i];
	cout << "\t menu:" << endl;
	cout << "1 \t 升序排序" << endl;
	cout << "2 \t 降序排序" << endl;
	cout << "3 \t 取绝对值升序排序" << endl;
	cout << "============================" << endl;
	cout << "请输入选择：";
	cin >> slt;
	switch (slt)
	{
	case 1:
		sort(a, n, CmpAsc); break;
	case 2:
		sort(a, n, CmpDec); break;
	case 3:
		sort(a, n, CmpAbsAsc); break;
	default:
		cout << "指令错误！" << endl;
	}
	cout << "after sorted:" << endl;
	for (i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;
	return 0;
}

