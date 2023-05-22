#include<iostream>
using namespace std;

class student
{
    string name;
    public:
    
    int age;
    bool gender;

void setname(string s)
{
    name = s;
}

void getname()
{
    cout<<name<<endl;
    cout<<age<<endl;
    cout<<gender<<endl;
}
student()
{
    cout<<"Default Constructor\n";
} // Default Constructor

student(string s, int a, bool g)
{
    name = s;
    age  = a;
    gender = g;
} // Parameterised Constructor

student(student &a)
{
    name = a.name;
    age = a.age;
    gender = a.gender;
} // Copy Constructor

~student()
{
    cout<<"Destructor Called"<<endl;
    // Destructor
}
    void print()
    {
        cout<<"Name:"<<" ";
        cout<<name<<endl;

        cout<<"Age: ";
        cout<<age<<endl;

        cout<<"Gender: ";
        cout<<gender<<endl;
    }

    bool operator == (student &a)
    {
        if(name == a.name && age == a.age && gender == a.gender)
        {
            return true;
        }
        else{
            return false;
        }
    }
};

int main()
{
    // int n;
    // cout<<"Enter the number of students: \n";
    // cin>>n;
    // student a[n];

    // for(int i=0;i<n;i++)
    // {
    //     string s;
    //     cout<<"Name: ";
    //     cin>>s;
    //     a[i].setname(s);
    //     cout<<"Age: ";
    //     cin>>a[i].age;
    //     cout<<"Gender: ";
    //     cin>>a[i].gender;
    //     cout<<endl;
    // }

    // for(int i=0;i<n;i++)
    // {
    //     a[i].print();
    //     cout<<endl;
    // }

    student a("ritik",19,1);
    student c("Rahul", 21, 0);
    student b = a;

    // a.getname();
    // // student b;

    if(c==a)
    {
        cout<<"same"<<endl;
    }
    else{
        cout<<"Different"<<endl;
    }
}