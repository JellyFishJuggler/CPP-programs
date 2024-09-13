#include<bits/stdc++.h>
using namespace std;

class Student{
private:
    string name;
    int fees, rollno;
    
public:
    
    Student(string n, int f, int rll) :  name(n), fees(f), rollno(rll){}

    Student(Student &t){
        name = t.name;
        fees = t.fees;
        rollno = t.rollno;
        cout << "Copy Constructor Called" << endl;
    }   

    void display(){
        cout << "Name of Student : " << name << endl;
        cout << "Fees : " << fees << endl;
        cout << "Roll No. : " << rollno << endl; 
    }
};


int main(){

    Student s1("Maulik", 117000, 30, "male", 25.73);
    Student s2 = s1;

    s1.display();
    //s2.display();
    return 0;
}