#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
        string list[5]; //array of 5 strings
        int numItems = 0;
        char input;
        string item;
        vector<string> newitem;


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

                        newitem.push_back(item);
                        numItems++;
                }


        }
        while (!(input =='Q' || input =='q'));
        if (newitem.empty() == true)
        {
                cout<<"No items to buy!"<<endl;
        }
        else
        {
        cout<<"==ITEMS TO BUY=="<<endl;
                for (int x=0; x<numItems; x++)
                {
                        cout<<x+1<<" "<<newitem[x]<<endl;
                }
        }
        return 0;
}
