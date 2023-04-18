#include <iostream>
using namespace std;
int linear_search(int array[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (array[i] == key)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int array[] = {5, 6, 8, 6, 12, 45, 69, 32, 78};
    int n = sizeof(array)/sizeof(int);
    cout << "Enter key" << endl;
    int key;
    cin >> key;
    int index;
    index = linear_search(array, n, key);
    if (index != -1)
    {
        cout << "key is at index" << index << endl;
    }
    else
    {
        cout << "key is not found" << endl;
    }
    return 0;
    // int size;
    // int a[]={};
    // cout<<"size"<<endl;
    // cin>> size;
    // for(int i=0;i<size;i++){
    //     cin>>a[i];
    // }
    // for(int i=0;i<size;i++){
    //     cout<<a[i];
    // }

    return 0;
}