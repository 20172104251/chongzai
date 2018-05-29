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
//	CTeet add(CTeet & obif);
	CTeet operator +(CTeet & oj);
	CTeet operator -(CTeet & bf);
};
void CTeet::setvalue(int a, int b)
{
	int g,m;
	feet = a + b / 12;
	inch = b % 12;
	if (feet < 0)
	{
		if (inch > 0)
		{
			g = feet * 12 + inch;
			feet = g / 12;
			inch = g % 12;
		}
		else//(inch<0)
		{
			
		}
	}
	else//(feet>0)
	{
		if (inch > 0)
		{

		}
		else//(inch<0)
		{
			m = feet * 12 + inch;
			feet = m / 12;
			inch = m % 12;
		}
	}
}
void CTeet::display()
{
	cout << feet << "英尺" << inch << "英寸" << endl;
}
CTeet CTeet::operator+(CTeet & oj)
{
	CTeet temp;
	temp.setvalue(feet + oj.feet, inch + oj.inch);
	return temp;
}
CTeet CTeet::operator -(CTeet & bf)
{
	CTeet pow;
	pow.setvalue(feet - bf.feet, inch - bf.inch);
	cout << feet - bf.feet << "英尺" << inch - bf.inch << "英寸" << endl;
	return pow;
}
class CFeet
{
private:
	int feet;
	int inch;
public:
	CFeet()
	{
		feet = 0;
		inch = 0;
	}
	void setvalue(int a, int b);
	void display();
	CFeet operator -(CFeet & oj);
};
void CFeet::setvalue(int a, int b)
{
	feet = a + b / 12;
	inch = b % 12;
}
CFeet CFeet::operator-(CFeet & oj)
{
	CFeet sum;
	sum.setvalue(feet - oj.feet, inch - oj.inch);
	return sum;
}
void CFeet::display()
{
	cout << feet << "英尺" << inch << "英寸==>" << endl;
}
int main()
{
	CFeet q, w, e;
	q.setvalue(3, 5);
	w.setvalue(4, 4);
	e = q - w;
	e.display();
	CTeet a, b, c;
	a.setvalue(3, 5);
	b.setvalue(4, 4);
	c = a - b;
	c.display();
    return 0;
}

