#include <iostream>

using namespace std;

void printList(int nums[],int a,int b);
int findSum(int nums[], int a,int b);

int main()
{
    int n,a,b, nums[10001];
    cin>>n>>a>>b;

    for(int i=0;i<n;i++) cin>>nums[i];

    int Sum= findSum(nums,a,b);

    cout<<Sum<<endl;
    printList(nums,a,b);

    return 0;
}
int findSum(int nums[], int a,int b)
{
    if(b==a) return nums[b-1];

    return nums[b-1]+findSum(nums,a,b-1);
}
void printList(int nums[], int a,int b)
{
    if(a-1==b) return;

    cout<<nums[a-1]<< " ";
    printList(nums,a+1,b);
}