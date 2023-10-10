#include <iostream>
#define SIZE 5
using namespace std;

int Q_arr[SIZE],f=0,r=-1;
void enqueue(int v)
{
if(SIZE-1==r)
{
cout<<"OverFlow";
}
else
{
r++;
Q_arr[r]=v;

}
}

void dequee()
{
if(r==-1)
{
cout<<"UnderFlow";
}
else
{
cout<<"\n \t Element"<<Q_arr[f]<<"\t is deleted"<<endl;
f++;

}

}

void traverse()
{

for(int i=f;i<=r;i++)
{
cout<<Q_arr[i]<<"\t";
}

}

int main()
{
dequee();
traverse();

return 0;
}