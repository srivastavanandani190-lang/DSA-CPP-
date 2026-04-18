#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    int age;
    string name;
    bool operator<(const Person &other) const
    {
        return age < other.age;
    }
};

int main()
{
    set<Person> s;
    Person p1, p2, p3;
    p1.age = 20, p1.name = "Honey";
    p2.age = 21, p2.name = "Bunny";
    p3.age = 22, p3.name = "Nilli";
    s.insert(p1);
    s.insert(p2);
    s.insert(p3);
    for(auto it:s){
    cout<<it.age<<" ";
    cout<<it.name<<" ";
    }
 

    return 0;
}