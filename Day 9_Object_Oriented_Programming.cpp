#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    //void SetNewName(string s){
    //    Name = s;
    //}
    string Name;
    int Roll;
    bool Gender;
    Student(){
        cout << "Default Constructor" << endl;
    }
    
    Student(string n, int r, bool g){
        Name = n;
        Roll = r;
        Gender = g;
        cout << "Parameterized Constructor" << endl;
    }
    
    Student(Student &C){
        Name = C.Name;
        Roll = C.Roll;
        Gender = C.Gender;
        cout << "Copy Constructor" << endl;
    }
    
    ~Student(){
        cout << "Destructor Called" << endl;
    }
    
    void PrintInformation(){
        cout << "Name: " << Name << endl;
        cout << "Roll: " << Roll << endl;
        cout << "Gender: " << Gender << endl;
    }   
};

int main(){
    //Student A;
    //A.SetNewName("Raju");
    //A.Roll = 10;
    //A.Gender = false;
    
    
    //Student B;
    //B.SetNewName("Kaju");
    //B.Roll = 2;
    //B.Gender = false;
    //B.PrintInformation();
    
    //Student C;
    //C.SetNewName("Saheli");
    //C.Roll = 1;
    //C.Gender = true;
    //C.PrintInformation();
    
    Student A("Raju",10,false);
    A.PrintInformation();
    
    Student B("Kaju",2,false);
    Student C("Saheli",1,true);
    Student D;
    Student E = C;
    E.PrintInformation();
    return 0;
}
