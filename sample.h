// Travel Management System
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
    
class Human{
    int age; string name;
public :
    Human(int a, string n) : age(a), name(n){}

    void getHuman(){
        cout<<"Hello, "<<name<<endl;
    }
};