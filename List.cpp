/* list */
#include<iostream>
#include<list>
using namespace std;
int main()
{
list<int>v1;
v1.insert(10);
v1.insert();
v1.insert();
list<int>::iterator ptr;
for(ptr=v1.begin();ptr!=v1.end();ptr++)
cout<<*ptr<<endl;
}

