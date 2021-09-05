#include<iostream>
#include<stdlib.h>
#include<cstring>
#include<string.h>
using namespace std;
const int elepayment=40;
const int highpayment=50;
const int preppayment=70;

struct date{
int dd,mm,yy;
};

struct student{
int stud_id=1;
string sex;
int age;
char name[50];
date dob;
int grade;
bool pay;
};
 student s[1000];
void menu(){

    cout<<"\n";
    cout<<"\n";
    cout<<"\n";
    cout<<"\n";
    cout<<"                    \t**********************************************************\n";
    cout<<"                    \t*                                                        *\n";
    cout<<"                    \t***             WELCOME TO NAHOM SCHOOL                ***\n";
    cout<<"                    \t*                  >>Billing System<<                    *\n";
    cout<<"                    \t*                    Nahom School                        *\n";
    cout<<"                    \t*                    Address:Mebrat Haile                *\n";
    cout<<"                    \t*                    Tel.0114769043                      *\n";
    cout<<"                    \t*                                                        *\n";
    cout<<"                    \t**********************************************************\n";
    cout<<"\n";
    cout<<"\n";
    cout<<"\n";
cout<<"\t\t=============================================================================================="<<endl;
cout<<"\t\t===========================SCHOOL BILLING MANAGMENT SYSTEM===================================="<<endl;
cout<<"\t\t==============================================================================================="<<endl;
cout<<"USER:";
cout<<"\t[1]-ADMIN"<<endl;
cout<<"\t[2]-REGISTRAR"<<endl;
cout<<"\t[3]-EXIT"<<endl;
}
void set_capacity(int *capacity,int *ele,int *high,int *prep){
    cout<<"What is the school capacity for this year ?"<<endl;

cin>>*capacity;
cout<<"The total capacity is: "<<*capacity<<endl;
}
void set_expense(int *expense){
    int teacher,staff,water,office,other;
    string choice;
cout<<"Expense of:\n";
cout<<"\tTeachers total salary= ";
cin>>teacher;
cout<<"\tStaff salary= ";
cin>>staff;
cout<<"\tElectricity and water total expense";
cin>>water;
cout<<"\tOffice material expense= ";
cin>>office;
cout<<"Any other expense?(yes/no)";
cin>>choice;
if(choice=="yes"){
    cout<<"\tOther expense= ";
    cin>>other;
    *expense=teacher+staff+water+office+other;
    cout<<"The total expense ="<<*expense;
}
else{
    *expense=teacher+staff+water+office;
    cout<<"The total expense ="<<*expense;
}
}
void set_register(student s[],int *capacity,int *total){
int num;
cout<<"How many student are you registering?";
cin>>num;
if((*total+num)<=(*capacity))

{
        for(int i=*total;i<*total+num;i++)
 {
        cout<<"Enter data of student\n";
            cout<<"\tname of student :";
            cin.ignore();
            cin.getline(s[i].name,20);
        cout<<"\tage of student :";
            cin>>s[i].age;
        cout<<"\tsex of student(male/female :";
            cin>>s[i].sex;
        cout<<"\tgrade of student (1-12):";
            cin>>s[i].grade;
        cout<<"\tdate of registry :";
            cin>>s[i].dob.dd>>s[i].dob.mm>>s[i].dob.yy;
    s[i].stud_id+=i;
    *capacity=*capacity-1;
 }
    *total=(*total)+num;
}
else{
    cout<<"sorry intake capacity full try again next year"<<endl;
    cout<<"thank you"<<endl;
}

}

