#include<iostream>
using namespace std;
void selection_sort(int array[],int n){
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if (array[min]>array[j]){
                min=j;
            }
        }
        if(min!=i){
            swap(array[i],array[min]);
        }
    }
}
int main(){
int array[]={2, 6, 8, -9, 21, 24, 0, 13, 27};
int n =sizeof(array)/sizeof(int);
for(auto x : array){
    cout<<x<<"'";
}
    return 0;
}