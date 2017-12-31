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
