#include<iostream>
#include<stdlib.h>
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
string name;
date dob;
int grade;
bool pay;
};
void menu(){
cout<<"\t\t=========================================================="<<endl;
cout<<"\t\t=================SCHOOL BILLING SYSTEM===================="<<endl;
cout<<"\t\t=========================================================="<<endl;
cout<<"USER:";
cout<<"\t[1]-ADMIN"<<endl;
cout<<"\t[2]-REGISTRAR"<<endl;
cout<<"\t[3]-EXIT"<<endl;
}
void set_capacity(int *capacity,int *ele,int *high,int *prep){
    cout<<"What is the school capacity for this year ?"<<endl;
cout<<"for elementary(1-8) : ";
cin>>*ele;
cout<<"for high school(9-10) : ";
cin>>*high;
cout<<"for preparatory(11-12) : ";
cin>>*prep;
*capacity=*ele+*high+*prep;
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
cout<<"Any other expense?";
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
if((*total+num)<=(*capacity)){
if(*total==0){
 *total=(*total+num);
       for(int i=0;i<(*total+num);i++) {
          cout<<"Enter data of student\n";
          cout<<"\tname of student :";
    cin>>s[i].name;
    cout<<"\tage of student :";
    cin>>s[i].age;
    cout<<"\tsex of student :";
    cin>>s[i].sex;
    cout<<"\tgrade of student :";
    cin>>s[i].grade;
    cout<<"\tdate of registry :";
    cin>>s[i].dob.dd>>s[i].dob.mm>>s[i].dob.yy;
    s[i].stud_id=i+s[i].stud_id;
    *capacity=*capacity-1;

        }
    }
    else
    for(int i=*total;i<*total+num;i++){
        cout<<"Enter data of student\n";
          cout<<"\tname of student :";
    cin>>s[i].name;
    cout<<"\tage of student :";
    cin>>s[i].age;
    cout<<"\tsex of student :";
    cin>>s[i].sex;
    cout<<"\tgrade of student :";
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

int main()
{
menu();

}
