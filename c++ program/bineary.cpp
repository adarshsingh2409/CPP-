#include<iostream>
using namespace std;
int bineary_search(int array[],int n, int key){
int start=0;
int end= n-1;
while(start<=end){
    int mid=(start+end)/2;
    if(array[mid]==key){
        return mid;
    }
    else if(array[mid]<key){
        start=mid+1;
    }
    else{
        end=mid-1;
    }
}
return -1;
}
int  main (){
int array[]={5,8,9,12,18,19,63,78,98};
int n=sizeof(array)/sizeof(int);
int key;
cout<<"Enter key"<<endl;
cin>>key;
int index= bineary_search(array,n,key);
if(index!=key){
    cout<<"key is at index"<<index<<endl;
}
else{
    cout<<"key is not found"<<endl;
}
    return 0;
}