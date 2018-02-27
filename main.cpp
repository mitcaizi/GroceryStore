#include<iostream>
#include<string>
using namespace std;

int main()
{
  string list[5]; //array of 5 strings
  int numItems = 0;
  char input;
  string item;
  

//while (numItems !=Q || numItems !=q)
do 
{
  cout<<"\n==GROCERY LIST MANAGER==";
  cout<<"\nEnter your choice: ";
  cout<<"\n (A)dd an item";
  cout<<"\n (Q)uit";
  cout<<"\nYour choice (A/Q): ";
  cin>>input;
if (input == 'a' || input == 'A')
{
cout<<"What is the item?"<<endl;
cin>>item;
if (numItems !=5)
{
list[numItems]=item;
numItems++;
}
else
{
cout<<"You'll need a bigger list!"<<endl;
}
}
}
while (!(input =='Q' || input =='q'));
cout<<"==ITEM TO BUY=="<<endl;
for (int x=0; x<5; x++)
{
cout<<x+1<<" "<<list[x]<<endl;
}
  return 0;
}
