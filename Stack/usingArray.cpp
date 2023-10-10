#include <iostream>
#define SIZE 5
using namespace std;
int stack_ar[SIZE],tos=-1;
void Push(int v)
{
if(tos>=SIZE-1)
{
cout<<"\n STACK OVERFLOW";
}
else
{
tos++;
stack_ar[tos]=v;

}
}

void Pop()
{
if(tos==-1)
{
cout<<"STACK UNDERFLOW";
}
else
{
cout<<"\n"<<stack_ar[tos]<<"\t Element is deleted"<<endl;
tos--;
}
}

void Peek()
{
cout<<"\n"<<stack_ar[tos]<<"\t Peek Element "<<endl;

}

void traverse()
{
for(int i=0;i<=tos;i++)
{
cout<<stack_ar[i]<<"\t";
}
}

int main()
{
Push(1);
Push(2);
Push(3);
Push(4);
Push(5);
Push(6);
Push(7);

cout<<endl;
traverse();
//Peek();

Pop();

traverse();

return 0;

}