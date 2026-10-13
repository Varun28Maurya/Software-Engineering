#include<iostream>
using namespace std;
int main()
{
    int nums[]={0,2,1,1,2,0};
    int n=sizeof(nums)/sizeof(int);
    int mid=0,low=0,high=n-1;
    while(mid<=high)
    {
        if(nums[mid]==0)
        {
            swap(nums[low],nums[mid]);
            mid++;
            low++;
        }
        else if(nums[mid]==1)
        {
            mid++;
        }
        else{
            swap(nums[high],nums[mid]);
            high--;
        }
    }

    for(int i=0;i<n;i++)
    {
        cout<<nums[i];
    }
    return 0;
}

//O(n) with one pass only

/*

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=size(nums);
        int mid=0,low=0,high=n-1;
    while(mid<=high)
    {
        if(nums[mid]==0)
        {
            swap(nums[low],nums[mid]);
            mid++;
            low++;
        }
        else if(nums[mid]==1)
        {
            mid++;
        }
        else{
            swap(nums[high],nums[mid]);
            high--;
        }
    }
    return;
    }
};

*/