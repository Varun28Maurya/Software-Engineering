#include<iostream>
using namespace std;
int main()
{
    int arr[]={0,2,1,1,0,2,1,1};
    int n=sizeof(arr)/sizeof(int);
    int count0=0,count1=0,count2=0;

    //O(n)
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            count0++;
        }
        else if(arr[i]==1)
        {
            count1++;
        }
        else
        {
            count2++;
        }
    }
    int a=0;
    
    for(int i=0;i<count0;i++)
    {
        arr[a]=0;
        a++;
    }
    for(int i=0;i<count1;i++)
    {
        arr[a]=1;
        a++;
    }
    for(int i=0;i<count2;i++)
    {
        arr[a]=2;
        a++;
    }
    
    return 0;
}


/*
O(n)

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=size(nums);
        int count0=0,count1=0,count2=0;

    //O(n)
    for(int i=0;i<n;i++)
    {
        if(nums[i]==0)
        {
            count0++;
        }
        else if(nums[i]==1)
        {
            count1++;
        }
        else
        {
            count2++;
        }
    }
    int a=0;
    
    for(int i=0;i<count0;i++)
    {
        nums[a]=0;
        a++;
    }
    for(int i=0;i<count1;i++)
    {
        nums[a]=1;
        a++;
    }
    for(int i=0;i<count2;i++)
    {
        nums[a]=2;
        a++;
    }
    
    return;
    }
};


*/