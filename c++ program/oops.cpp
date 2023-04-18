#include<iostream>
using namespace std;
class AbstractEmployee{
 virtual void promotion()=0;
};
class Employee : AbstractEmployee{
    private:
    string Name;
    string Company;
    int Age;    //encapsulation
    public:
    void setName(string name){
        Name = name;
    }
    string getname(){
        return Name;
    }
    void setCompany(string company){
        Company = company;
    }
    string getcompany(){
        return Company;
    }
    void setAge(int age){
        Age= age;
    }
     int getAge(){
         return Age;
     }
    void introduce(){
        cout<<"Name---"<<Name<<endl;
        cout<<"Company---"<<Company<<endl;
        cout<<"Age---"<<Age<<endl;

    }
    // CONSTRUCTOR
    Employee(string name, string company, int age){
         Name = name;
         Age= age;
         Company = company;
    }
void promotion(){
    if(Age>21)
    cout<<Name<<" get promated "<<endl;
    else
    cout<<Name<<" sorry No promotion "<<endl;
}
};
int main(){
    Employee teammember1 = Employee("ADARSH","OM SAI", 22);
    teammember1.introduce();
    Employee teammember2 = Employee("AYUSH","OM SAI",21);
    teammember2.introduce();
    //  teammember1.setAge(24);
    //  teammember2.setCompany("SHREE SAI");
    //  cout<<teammember1.getname()<<" is "<<teammember1.getAge()<<" years old"<<endl;
    //  cout<<teammember2.getname()<<" is "<<teammember2.getcompany()<<"this"<< endl;
    teammember1.promotion();
    teammember2.promotion();
}