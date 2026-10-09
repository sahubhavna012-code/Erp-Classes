#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> arr={10,20,30,40};
    int element;
    int position;

    cout<<"Enter the element to be inserted: ";
    cin>>element;
    cout<<"Enter the position where the element is to be inserted: ";
    cin>>position;

    arr.insert(arr.begin()+position-1,element);

    cout<<"The array after insertion is: ";
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}