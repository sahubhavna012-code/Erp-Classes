#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> arr={10,20,30,40};
    int element;

    cout<<"Enter the element to be inserted at the begining: ";
    cin>>element;

    arr.insert(arr.begin(),element);

    cout<<"The array after insertion is: ";
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}