#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;


int findMin(int nums[], int n);
void readData(int nums[], int n);

ifstream fin("input.txt");
int main()
{
    int nums[10];

    readData(nums,10);

    int Min= findMin(nums,10);

    cout<<Min<<endl;

    return 0;
}
int findMin(int nums[], int n)
{
    if(n==1) return nums[0];

    return min(nums[n-1], findMin(nums,n-1));
}
void readData(int nums[], int n)
{
    for(int i=0;i<n;i++)
        fin>>nums[i];
}