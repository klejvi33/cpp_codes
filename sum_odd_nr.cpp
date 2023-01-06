#include <iostream>

using namespace std;

int findSum(int a,int b);

int main()
{
    int a,b;
    cin>>a>>b;

    cout<<findSum(a,b)<<endl;

    return 0;
}
int findSum(int a,int b)
{
    if(a>b) return 0;
    if(a%2!=0) return a+findSum(a+2,b);
    else return (a+1) + findSum(a+3,b);
}
