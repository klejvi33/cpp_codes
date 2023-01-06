#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int findMax(int nums[], int n);
void readData(int nums[], int &n);

ifstream fin("input.txt");

int main()
{
    int nums[101];
    int n;

    readData(nums,n);

    int Max= findMax(nums,n);

    cout<<Max<<endl;

    return 0;
}
int findMax(int nums[], int n)
{
    if(n==1) return nums[0];

    return max(nums[n-1], findMax(nums,n-1));
}
void readData(int nums[], int &n)
{

    fin>>n;
    for(int i=0;i<n;i++)
        fin>>nums[i];
}