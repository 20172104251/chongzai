// chongzai.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;
class CTeet
{
private:
	int feet;
	int inch;
public:
	CTeet()
	{
		feet = 0;
		inch = 0;
	}
	void setvalue(int a, int b);
	void display();
	CTeet add(CTeet & obif);
	CTeet operator +(CTeet & ojbf);
};
void CTeet::setvalue(int a, int b)
{
	feet = a + b / 12;
	inch = b % 12;
}
void CTeet::display()
{
	cout << feet << "英尺" << inch << "英寸" << endl;
}
CTeet CTeet::add(CTeet & objf)
{
	CTeet temp;
	temp.setvalue(feet + objf.feet, inch + objf.inch);
	return temp;
}
CTeet CTeet::operator+(CTeet & ojbf)
{
	CTeet temp;
	temp.setvalue(feet + ojbf.feet, inch + ojbf.inch);
	return temp;
}
int main()
{
	CTeet a, b, c;
	a.setvalue(10, 8);
	b.setvalue(7, 6);
	c = a + b;
	c.display();
    return 0;
}

