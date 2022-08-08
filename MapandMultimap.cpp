/* map */
#include<iostream>
#include<map>
using namespace std;
int main()
{
map<const char*,const char*>v1;
v1.insert(pair<const char*,const char*>("Age","23"));
v1.insert(pair<const char*,const char*>("Name","Vrushabh"));
v1.insert(pair<const char*,const char*>("City","Mumbai"));
map<const char*,const char*>::iterator ptr;
for(ptr=v1.begin();ptr!=v1.end();ptr++)
cout<<ptr->first<<" " <<ptr->second<<endl;
}

/* Multi map */

#include<iostream>
#include<map>
using namespace std;
int main()
{
multimap<int>v1;
v1.insert(pair<const char*,const char*>("Age","23"));
v1.insert(pair<const char*,const char*>("Name","Vrushabh"));
v1.insert(pair<const char*,const char*>("City","Mumbai"));
multimap<const char*,const char*>::iterator ptr;
for(ptr=v1.begin();ptr!=v1.end();ptr++)
cout<<ptr->first<<" " <<ptr->second<<endl;
}