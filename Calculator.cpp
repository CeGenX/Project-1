#include <string>
#include <vector>
#include <iostream>
#include <Calculator.h>

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
	getline(cin, string& v);
	for(int i = 0; v.size() > i; i++)
	{
		if( (v.at(i) <= '9' || v.at(i) <= '0'))
		{
			if( i >= 1 && v.at(i-1) == '-')
				{
					val*=-1;
				}
			n.at(m) = (v.at(i))*val;
			m++:
		}
	summation(v,0,m);
	
}


void summation(vector<double> x,int beg,int end)
{
	int sum = 0;
	for (int i = 0; x.size() > i; i++)
	{
		sum += x.at(i);
	}
	cout<< sum;
}
