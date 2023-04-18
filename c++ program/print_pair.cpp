// #include<iostream>
// using namespace std;
// int sub_array(int array[],int n){

// for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//         for(int k=i;k<=j;k++){
//             cout<<array[k]<<",";
//         }
//         cout<<endl;
//     }   
// }
// return 0;
// }
// int main(){
//     int array[]={10,20,30,40,50};
//     int n=sizeof(array)/sizeof(int);
//     // print_pair(array,n);
//     sub_array(array,n);
//     return 0;
// }
#include<iostream>
using namespace std; 
int print_pair(int array[],int n){
for(int i=0;i<n;i++){
    int x=array[i];
    for(int j=i+1;j<n;j++){
        int y= array[j];
        cout<<x<<" "<<y<<endl;
    }
    cout<<endl;
}

return 0;
}

int main(){
    int array[]={10,20,30,40,50};
    int n=sizeof(array)/sizeof(int);
    print_pair(array,n);
    return 0;
}