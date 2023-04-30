// power of a no
#include<iostream>

using namespace std;

int main()
{
    int a,b;
    cout<<"enter 2 numbers in the form x^n"<<endl;
    cin>>a>>b; 
    int ans=1;
    for(int i=1;i<=b;i++)
    {
        ans=ans*a;
    }
    cout<<"answer is "<<ans<<endl;;
    return 0;
}