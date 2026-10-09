#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> arr={10,20,30,40};
    arr.erase(arr.begin());

    cout<<"The array after deletion is: ";
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}