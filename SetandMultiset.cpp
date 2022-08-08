/* Set */
#include<iostream>
#include<set>
using namespace std;
int main()
{
set<int>v1;
v1.insert(10);
v1.insert(20);
v1.insert(30);
v1.insert(40);
set<int>::iterator ptr;
for(ptr=v1.begin();ptr!=v1.end();ptr++)
cout<<*ptr<<endl;
}

/* Multi Set */

#include<iostream>
#include<set>
using namespace std;
int main()
{
multiset<int>v1;
v1.insert(90);
v1.insert(10);
v1.insert(10);
v1.insert(40);
set<int>::iterator ptr;
for(ptr=v1.begin();ptr!=v1.end();ptr++)
cout<<*ptr<<endl;
}