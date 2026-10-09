#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> arr={1,1,2,2,2,3,3,4,4,5};
    int target=2;
    int n=arr.size();
    
    cout<< "Original Array: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;
    // Deleting the first occurrence of target

    for(int i=0;i<n;i++)
    {
        if(arr[i]==target)
        {
            arr.erase(arr.begin()+i);
            break;
        }
    }

    cout<< "Array after deleting first occurrence of " << target << ": ";
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
}