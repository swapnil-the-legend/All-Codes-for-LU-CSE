//Calculator Menu

#include<iostream>
using namespace std;

int a, b;

void add()
{
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    int sum=a+b;
    cout<<"Result: "<<sum<<endl<<endl;
}

void sub()
{
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    int sub=a-b;
    cout<<"Result: "<<sub<<endl<<endl;
}

void multi()
{
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    int multi=a*b;
    cout<<"Result: "<<multi<<endl<<endl;
}

void div()
{
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    int div;
    if(b==0)
    {
        cout<<"Cannot be divided by zero"<<endl<<endl;
    }
    else
    {
        div=a/b;
        cout<<"Result: "<<div<<endl<<endl;
    }
}

int main()
{
    while(1)
    {
        int choice;
        cout<<"=== Calculator Menu ==="<<endl;
        cout<<"1. Addition"<<endl;
        cout<<"2. Substraction"<<endl;
        cout<<"3. Muliplication"<<endl;
        cout<<"4. Division"<<endl;
        cout<<"5. Exit"<<endl;
        cout<<"Enter the choice: ";
        cin>>choice;
        switch(choice)
        {
            case 1:
                add();
                break;

            case 2:
                sub();
                break;

            case 3:
                multi();
                break;

            case 4:
                div();
                break;

            case 5:
                return 0;

            default:
                cout<<"Invalid choice"<<endl<<endl;
                break;
        }
    }
    return 0;
}
