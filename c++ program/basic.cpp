#include<iostream>
using namespace std;
 typedef struct employee
{
    /* data */
    int id;
    string department ;
    float salary;
}ep;
int main(){
    struct employee ayush;
    ep adarsh;
    ayush.id=00013;
    ayush.department="software";
    ayush.salary=450000;
    cout<<"the value "<<ayush.id<<endl;
    cout<<"the value "<<ayush.department<<endl;
    cout<<"the value "<<ayush.salary<<endl;
    cout<<"enter value"<<endl;
    int n;
    cin>>n;
    cout<<"value is "<<n;
    return 0;
} 

