#include<iostream>
using namespace std;
main()
{
    int a,b,c;
    while(1){
    cout<<"Enter any two numbers: ";
    cin>>a>>b;
    cout<<endl;
    cout<<"Enter 1 for Addition"<<endl;
    cout<<"Enter 2 for Subtraction"<<endl;
    cout<<"Enter 3 for Multiplication"<<endl;
    cout<<"Enter 4 for Division"<<endl<<endl ;
    cout<<"Enter your choice: ";
    cin>>c;
    if(c==1){
        cout<<a+b<<endl;
    }
    else if (c==2){
        cout<<a-b<<endl;
    }
    else if(c==3){
        cout<<a*b<<endl;
    }
    else {
        cout<<a/b<<endl;
    }
    }
}