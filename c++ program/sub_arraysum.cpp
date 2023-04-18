// #include<iostream>
// using namespace std;
// int subarray_sum (int array[],int n){
// int largest_sum=0;

// for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//         int sum_subarray=0;
//         for(int k=i;k<=j;k++){
//          // cout<<array[k]<<",";
//             sum_subarray+=array[k];
//         }
//         cout<<endl;
//    largest_sum= max(largest_sum,sum_subarray);
//     }
// }
// return largest_sum;
// }
// int main(){

// int array[]={-2,3,4,-1,5,-12,6,1,3};
// int n=sizeof(array)/sizeof(int);
// cout<<subarray_sum(array,n);
//     return 0;
// }

//********************KADAEN'S ALGORITHM********************
#include<iostream>
using namespace std;
int sum_subarray(int array[],int n){
int current_sum=0;
int largest_sum=0;
for(int i=0;i<n;i++){
    current_sum=current_sum+array[i];
    if(current_sum<0){
        current_sum=0;
    }
    largest_sum=max(current_sum,largest_sum);
}
return largest_sum;
}
int main(){
int array[]={-2,3,4,-1,5,-12,6,1,3};
int n=sizeof(array)/sizeof(int);
cout<<sum_subarray(array,n)<<endl;
    return 0;
}