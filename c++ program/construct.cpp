#include<iostream>
using namespace std;
class employee{
    public:
    string  Name;
    string Company;
    int Age;
    void introduce(){
        cout<<"Name-"<<Name<<endl;
        cout<<"Company-"<<Company<<endl;
        cout<<"Age-"<<Age<<endl;
    }
    employee(string name, string company, int age){
        Name = name;
        Company= company;
        Age = age;
    }
};
int main(){
    employee teammember1 = employee("ADARSH","OM SAI", 22);
    teammember1.introduce();
    employee teammember2 = employee("AYUSH","OM SAI",21);
    teammember2.introduce();
}