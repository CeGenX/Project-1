#include <string>
#include <vector>
#include <iostream>
#include "Calculator.h"

int main()
{
  firstrun();
  menu();
  return 0;
}


void firstrun()
{
  cout <<"Calculator Version 0.01a Last Edited 31/12/2017"<<endl;
}

void menu()
{
  while(1)
  {
    cout <<"Please input your desired summation:"<<endl;
    readinput();
  }
}

void readinput()
{
	string v;
	vector<double> n;
	int val = 1;
	int m = 1;
  int temp=0;
	getline(cin, v);
  int k=v.size();
	for(int i = 0; i<k; i++)
	{
    if(v.at(i)=='-')
    {
      val=-1;
      continue;
      m++;
    }
    if(v.at(i)=='+')
    {
      val=1;
      continue;
      m++;
    }
		if( (v.at(i) <= '9' && v.at(i) >= '0'))
		{
      n.push_back((v.at(i)-'0')*val);
		}
  }
	sum(n);
}

void sum(vector<double> x)
{
  int k=x.size();
	double sum = 0;
	for (int i = 0; i<k; i++)
	{
		sum += x.at(i);
	}
	cout<< sum<<endl;
}
