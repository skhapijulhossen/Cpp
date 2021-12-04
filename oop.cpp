#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <map>
#include <sstream>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::stringstream;

class Account
{
private:
    long int acc_no;
    long double balance;
    string password, gender, ph, email;
    int age;
    bool valid[5];

public:
    string name;
    Account(string name, int age, string gender, string ph, string email)
    {
        this->name = name;
        this->age = age;
        this->gender = gender;
        this->ph = ph;
        this->email = email;
        cout << "Object Initialized!" << endl;
    }

    bool validate()
    {
        valid[0] = (name.length() != 0) && (name.length() <= 30) ? true : false;
        valid[1] = (age > 12) && (age < 60) ? true : false;
        transform(gender.begin(), gender.end(), gender.begin(), ::toupper);
        valid[2] = gender == "MALE" || gender == "FEMALE" ? true : false;
        valid[3] = (ph.length() == 10) ? true : false;
        valid[4] = (email.substr(email.length() - 10) == "@gmail.com") ? true : false;
        return (valid[0] && valid[1] && valid[2] && valid[3] && valid[4]);
    }

    bool create()
    {
        if (validate())
        {
            cout << "Successfull!";
            return true;
        }
        return false;
    }

    ~Account();
};

// Main Function
int main()
{
    // Account *acc = new Account("Happy Smith", 24, "Male", "9002801732", "happy@gmail.com");
    // cout << acc->name <<endl;
    // cout << acc->validate();
    string s = "24";
    stringstream integer(s);
    int age;
    integer<<"333";
    integer >> age;
    cout << age;
    return 0;
}
