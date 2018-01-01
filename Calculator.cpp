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
	int m = 0;
  int j= 0;
  int i=0;
  int q=0;
	getline(cin, v);
  v.push_back('+');
  int k=v.size();
  n.resize(k);
	for(i = 0; i<k; i++)
	{
    if(isdigit(v.at(i)))
    {
      j++;
    }
    else
    {
      q=j;
      while(q)
      {
          n.at(m)+=(v.at(i-q)-'0')*pow(10,q-1);
          q--;
      }
      n.at(m)=n.at(m)*val;
      if(v.at(i)=='+')
      {
        val=1;
      }
      if(v.at(i)=='-')
      {
        val=-1;
      }
      m++;
      j=0;
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
