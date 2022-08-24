#include<iostream>
using namespace std;
int count=0;
class Test
{
public:
Test()
{
count++;
cout<<"\n no.of objects created:\t"<<count;
}
~Test()
{
cout<<"no.of objects created:\t"<<count;
--count;
}
};
int main()
{Test t,t1,t2,t3;
return 0;
}