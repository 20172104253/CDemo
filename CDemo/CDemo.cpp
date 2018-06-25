// CDemo.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
class CDemo
{
private:
	int id;
public:
	CDemo(int i)
	{
		id = i;
		cout << "id=" << id << "constructed" << endl;
	}
	~CDemo()
	{
		cout << "id=" << id << "destructed" << endl;
	}
	void haha()
	{
		cout << "id=" << id << "haha" << endl;
	}
	CDemo & display()
	{
		cout << "id=" << id << "hello" << endl;
		return *this;
	}
};
CDemo d1(1);
void Func()
{
	static CDemo d2(2);
	CDemo d3(3);
	cout << " func" << endl;
}

int main()
{
	CDemo d4(4);
	d4.display().haha();

	return 0;
}
