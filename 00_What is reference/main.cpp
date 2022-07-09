#include<iostream>
#include <string>
#include <vector>
using namespace std;
vector<string> stooges{"Lary", "Moe", "Curly"};
int main()
{
    for(auto &str:stooges)
    {
        str= "tuanngoc";
    }
    for(auto str:stooges)
    {
        cout<< str<< endl;
    }
    return 0;
}