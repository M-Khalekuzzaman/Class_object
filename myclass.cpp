#include<iostream>
#include<conio.h>
using namespace std;
class Student
{
public :
    char name[20];
    int id;
    double cgpa;
};
int main()
{

    int num;
    cout<<"Enter number of student details store : " ;
    cin>>num;
    Student student[num];

    FILE *file;
    file = fopen("student_details.txt","a");
    if(file == NULL)
    {
        cout<<"File does not exist "<<endl;
    }
    else
    {
        cout<<"File is successfully opened"<<endl;
        for(int i = 0; i<num ; i++)
        {
            cout<<"Student info is  "<<i+1<<" : "<<endl;
            cout<<"Enter student name : ";
            fflush(stdin);
            gets(student[i].name);
            cout<<"Enter student id number :  ";
            cin>>student[i].id;
            cout<<"Enter student cgpa is :  ";
            cin>>student[i].cgpa;
            fprintf(file,"%s        %d          %.2lf\n",student[i].name,student[i].id,student[i].cgpa);

        }
        cout<<"File written successfully"<<endl;
        fclose(file);
    }

    getch();
}
