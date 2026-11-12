#include<iostream>
using namespace std;
int main()
{
    int t; //Test case as "t".
    cin>>t; //Input "t" for test case.
    while(t>0) //Must be positive and natural number.
    {
        int a, b;
        cin>>a>>b;
        int sum=a+b;
        cout<<sum<<endl;
        
        //(Code)

        t--; //t=t-1, Current test case = Base test case - 1
    }
    return 0;
}

//Somewhat good for competitive programming :-)

/*
Example:

#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        int a, b;
        cin>>a>>b;
        int sum=a+b;
        cout<<sum<<endl;

        t--;
    }
    return 0;
}

Input:
3 = Number of test cases (main, Test case "t")
2 2 = Test case 1
4 4 = Test case 2
6 6 = Test case 3

Output:
4 = Test case 1
8 = Test case 2
12 = Test case 3

*/
