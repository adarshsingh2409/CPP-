// #include<iostream>
// using namespace std;
// void insertion_sort(int array[],int n){
//     for(int i=1;i<n;i++){
//         int current =array[i];
//         int previous=i-1;
//         while (previous>=0 && current < array[previous]){
//             array[previous +1]=array[previous];
//             previous=previous-1;
//         }
        
//     array[previous+1]=current;
//     }

// }
// int main(){

//     int array[] = {2, 6, 8, -9, 21, 24, 0, 13, 27};
//     int n = sizeof(array) / sizeof(int);
//     insertion_sort(array,n);
//     for(auto x: array){
//         cout<<x<<",";
//     }


//     return 0;
// }

 #include<iostream>
 using namespace std;
 void insertion_sort(int array[],int n){
 for(int i=1;i<n;i++){
     int temp;
     temp=array[i];
     int j =i-1;
     while(j>=0 && array[j]>temp){
         array[j+1]=array[j];
        j--;
     }
     array[j+1]=temp;
 }
 }
 int main(){

    int array[] = {2, 6, 8, -9, 21, 24, 0, 13, 27};
    int n = sizeof(array) / sizeof(int);
    insertion_sort(array,n);
    for(auto x: array){
        cout<<x<<",";
    }


    return 0;
}