#include <iostream>
#include <fstream>
using namespace std;

class Customer
{
private:
    int id, age;
    string name, address;

public:
    void setDetails()
    {
        cout << "Enter customer id:" << endl;
        cin >> id;

        cout << "Enter customer name:" << endl;
        cin.ignore();
        getline(cin, name);

        cout << "Enter customer age:" << endl;
        cin >> age;

        cout << "Enter customer address:" << endl;
        cin.ignore();
        getline(cin, address);
        ofstream outdata;
        outdata.open("customer.txt", ios::app);
        outdata << "Customer ID: " << id << endl;
        outdata << "Customer Name: " << name << endl;
        outdata << "Customer Address: " << address << endl;
        outdata << "Customer Age: " << age << endl;
        outdata.close();
    }
    void getDetails()
    {
        cout << "Customer ID: " << id << endl;
        cout << "Customer Name: " << name << endl;
        cout << "Customer Address: " << address << endl;
        cout << "Customer Age: " << age << endl;
    }
};