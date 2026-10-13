#include<iostream>
using namespace std;
int main()
{
    int arr[]={5,2,1,4,3};
    int target=1;
    bool found=false;
    for(int i=0;i<(sizeof(arr)/sizeof(int));i++)
    {
        if(arr[i]==target)
        {
            cout<<"The Target is at index "<<i;
            found=true;
            break;
        }
    }
    if(!found){
        cout << "Target not found.";
    }
    return 0;
}

