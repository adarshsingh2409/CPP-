#include<iostream>
using namespace std;
#include <vector>
void display(vector<int>  &v){
for (int i = 0; i < v.size(); i++)
{
    cout<<v[i]<<" ";
}
cout<<endl;
}
int main(){
    vector<int> vec1;
    int element;
    int size;
    cout<<"enter the size"<<endl;
    cin >>size;
 
    for (int  i = 0; i < size; i++)
    {
        cout<<"enter an element to add to this vector ";
        cin >>element;
        // vec1.push_back(element);
    }
     display(vec1);
    // vector<int> :: iterator iter = vec1.begin();
    // vec1.insert(iter,234);
    // display (vec1);

    return 0;
}