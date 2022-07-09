#include<iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
  int num =100;
  int num_2 =500;
  int &ref= num;

  cout<<"num = "<<num<<endl;
  cout<<"ref = "<<ref<<endl;

    num =200;

  cout<<"num = "<<num<<endl;
  cout<<"ref = "<<ref<<endl;

    ref=300;


  cout<<"num = "<<num<<endl;
  cout<<"ref = "<<ref<<endl;

}