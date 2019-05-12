// ��������.cpp : ���ļ����� "main" ����������ִ�н��ڴ˴���ʼ��������
//���Խ���������Ϊ������������һ������

#include "pch.h"
#include <iostream>
using namespace std;

void sort(int a[], int n, int(*cmp)(int, int))
{
	//�������������
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
	cout << "���������鳤�ȣ�(<=10)";
	cin >> n;
	cout << "����һ���룺";
	for (i = 0; i < n; i++)
		cin >> a[i];
	cout << "\t menu:" << endl;
	cout << "1 \t ��������" << endl;
	cout << "2 \t ��������" << endl;
	cout << "3 \t ȡ����ֵ��������" << endl;
	cout << "============================" << endl;
	cout << "������ѡ��";
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
		cout << "ָ�����" << endl;
	}
	cout << "after sorted:" << endl;
	for (i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;
	return 0;
}