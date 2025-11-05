
#include<iostream.h>
#include<string>
using namespace std;

struct student
{
    int id;
    float cgpa;
    string name;
};
int main()
{
    int n;
    cout<<"enter a no of students = ";
    cin>>n;
    student* s1 = new student[n];
    cout<<"student database"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"enter a student deatails "<<(i+1)<<endl;
        cout<<"student id = ";
        cin>>s1[i].id;
        cout<<"enter a student cgpa = ";
        cin>>s1[i].cgpa;
        cout<<"enter a student name = ";
        cin>>s1[i].name;
    }
    for(int i=0;i<n;i++)
    {
        cout<<"student deatails are"<<(i+1)<<endl;
       cout<<"student id = "<<s1[i].id<<endl;
       cout<<"student cgpa = "<<s1[i].cgpa<<endl;
       cout<<"student name = "<<s1[i].name<<endl;
    }
    return 0;
}