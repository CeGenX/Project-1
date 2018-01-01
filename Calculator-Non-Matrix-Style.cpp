#include <string>
#include <vector>
#include <iostream>
#include "Calculator.h"
using namespace std;
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
  int temp=0;
  double s = 0;
  int check = 0;
	getline(cin, v);
	v.push_back('+');
  int k=v.size();
	for(int i = 0; i<k; i++)
	{
		temp = i;
			if(v.at(check) == '-')
			{
				val*=-1;
			}
		while(isdigit(v.at(temp)))
			{
				s+=(v.at(temp)-'0');
				if(isdigit(v.at(temp+1)))
					{
					s*=10;
					}	
				temp++;
			}
			i = temp;
			check = temp;
			n.push_back(s*val);
			
			val = 1;
			s = 0;
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