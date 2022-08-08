#include<iostream>
#include<vector>
using namespace std;
int main()
{
vector<int>v1;
v1.push_back(10);
v1.push_back(20);
v1.push_back(30);
v1.push_back(40);
vector<int>::iterator ptr;
for(ptr=v1.begin();ptr!=v1.end();ptr++)
cout<<*ptr<<endl;
}