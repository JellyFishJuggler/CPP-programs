#include<bits/stdc++.h>
using namespace std;

class Student{
private:
    string name;
    int fees, rollno;
    string gender;
    float rating;
public:
    
    Student(string n, int f, int rll, string g, float r) :  name(n), fees(f), rollno(rll), gender(g), rating(r){}

    Student(Student &t){
        name = t.name;
        fees = t.fees;
        rollno = t.rollno;
        gender = t.gender;
        rating = t.rating;
        cout << "Copy Constructor Called" << endl;
    }   

    void display(){
        cout << "Name of Student : " << name << endl;
        cout << "Fees : " << fees << endl;
        cout << "Roll No. : " << rollno << endl; 
        cout << "Gender : " << gender << endl;
        cout << "GB road ke Rate : " << rating << endl;
    }
};


int main(){

    Student s1("Maulik", 117000, 30, "male", 25.73);
    Student s2 = s1;

    s1.display();
    //s2.display();
    return 0;
}