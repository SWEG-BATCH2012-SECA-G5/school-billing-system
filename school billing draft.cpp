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
void payment(student s[],int *total){
    char method;
    int g,id;
    string proceed;
cout<<"Our option of payment\n";
cout<<"\t[A]-Monthly\n";
cout<<"\t[B]-Term wise\n";
cout<<"\t[C]-yearly\n";
cin>>method;
switch(method){
case 'A':
    cout<<"what grade is he/she in";
    cin>>g;
    if(g>=1&&g<=8){
        cout<<"your monthly payment is ="<<elepayment*30<<endl;
        cout<<"would you like to proceed ?"<<endl;
        cin>>proceed;
        if(proceed=="yes"){
            cout<<"enter id no.";
            cin>>id;
            for(int i=0;i<*total;i++){
                if(id==s[i].stud_id){
                    s[i].pay=true;
                    cout<<"you have successfully payed"<<endl;
                    cout<<"thank you"<<endl;
                }
            }
        }
        else
            cout<<"exiting process..."<<endl;
    }
    else if(g==9||g==10){
         cout<<"your monthly payment is ="<<highpayment*30<<endl;
        cout<<"would you like to proceed ?";
        cin>>proceed;
        if(proceed=="yes"){
            cout<<"enter id no.";
            cin>>id;
            for(int i=0;i<*total;i++){
                if(id==s[i].stud_id){
                    s[i].pay=true;
                    cout<<"you have successfully payed"<<endl;
                    cout<<"thank you"<<endl;
                }
            }
        }
        else
            cout<<"exiting process..."<<endl;
    }
    else if(g==11||g==12){
      cout<<"your monthly payment is ="<<preppayment*30<<endl;;
        cout<<"would you like to proceed ?";
        cin>>proceed;
        if(proceed=="yes"){
            cout<<"enter id no.";
            cin>>id;
            for(int i=0;i<*total;i++){
                if(id==s[i].stud_id){
                    s[i].pay=true;
                    cout<<"you have successfully payed"<<endl;
                    cout<<"thank you"<<endl;
                }
            }
        }
        else
            cout<<"exiting process..."<<endl;
    }
    break;
case 'B':
    cout<<"what grade is he/she in";
    cin>>g;
    if(g>=1&&g<=8){
        cout<<"your term payment is ="<<elepayment*100<<endl;
        cout<<"would you like to proceed ?"<<endl;
        cin>>proceed;
        if(proceed=="yes"){
            cout<<"enter id no.";
            cin>>id;
            for(int i=0;i<*total;i++){
                if(id==s[i].stud_id){
                    s[i].pay=true;
                    cout<<"you have successfully payed"<<endl;
                    cout<<"thank you"<<endl;
                }
            }
        }
        else
            cout<<"exiting process..."<<endl;
    }
    else if(g==9||g==10){
         cout<<"your term payment is ="<<highpayment*100<<endl;
        cout<<"would you like to proceed ?";
        cin>>proceed;
        if(proceed=="yes"){
            cout<<"enter id no.";
            cin>>id;
            for(int i=0;i<*total;i++){
                if(id==s[i].stud_id){
                    s[i].pay=true;
                    cout<<"you have successfully payed"<<endl;
                    cout<<"thank you"<<endl;
                }
            }
        }
        else
            cout<<"exiting process..."<<endl;
    }
    else if(g==11||g==12){
      cout<<"your term payment is ="<<preppayment*100<<endl;;
        cout<<"would you like to proceed ?";
        cin>>proceed;
        if(proceed=="yes"){
            cout<<"enter id no.";
            cin>>id;
            for(int i=0;i<*total;i++){
                if(id==s[i].stud_id){
                    s[i].pay=true;
                    cout<<"you have successfully payed"<<endl;
                    cout<<"thank you"<<endl;
                }
            }
        }
        else
            cout<<"exiting process..."<<endl;
    }
    break;
case 'C':
    cout<<"what grade is he/she in";
    cin>>g;
    if(g>=1&&g<=8){
        cout<<"your yearly payment is ="<<elepayment*300<<endl;
        cout<<"would you like to proceed ?"<<endl;
        cin>>proceed;
        if(proceed=="yes"){
            cout<<"enter id no.";
            cin>>id;
            for(int i=0;i<*total;i++){
                if(id==s[i].stud_id){
                    s[i].pay=true;
                    cout<<"you have successfully payed"<<endl;
                    cout<<"thank you"<<endl;
                }
            }
        }
        else
            cout<<"exiting process..."<<endl;
    }
    else if(g==9||g==10){
         cout<<"your yearly payment is ="<<highpayment*300<<endl;
        cout<<"would you like to proceed ?";
        cin>>proceed;
        if(proceed=="yes"){
            cout<<"enter id no.";
            cin>>id;
            for(int i=0;i<*total;i++){
                if(id==s[i].stud_id){
                    s[i].pay=true;
                    cout<<"you have successfully payed"<<endl;
                    cout<<"thank you"<<endl;
                }
            }
        }
        else
            cout<<"exiting process..."<<endl;
    }
    else if(g==11||g==12){
      cout<<"your yeraly payment is ="<<preppayment*300<<endl;
        cout<<"would you like to proceed ?";
        cin>>proceed;
        if(proceed=="yes"){
            cout<<"enter id no.";
            cin>>id;
            for(int i=0;i<*total;i++){
                if(id==s[i].stud_id){
                    s[i].pay=true;
                    cout<<"you have successfully payed"<<endl;
                    cout<<"thank you"<<endl;
                }
            }
        }
        else
            cout<<"exiting process..."<<endl;
    }
    break;
    }
}
void who_payed(student s[],int *total){
cout<<"people who have paid are : ";
for(int i=0;i<*total;i++){
    if(s[i].pay==true){
       cout<<s[i].name;
   cout<<" \tstud_id no. :"<<s[i].stud_id;
   cout<<"\tage:"<<s[i].age<<endl;
   cout<<"\tsex:"<<s[i].sex<<endl;
   cout<<"\tgrade:"<<s[i].grade<<endl;
   cout<<"\nregistered on:"<<s[i].dob.dd<<" "<<s[i].dob.mm<<" "<<s[i].dob.yy<<endl;
    }
  }
}
void nxt_payment(student s[],int *total){
int id_1;
string method_1;
cout<<"enter student id of student"<<endl;
cin>>id_1;
for(int i=0;i<*total;i++){
  if(id_1==s[i].stud_id){
    cout<<"please enter the method you chose previously"<<endl;
    cout<<"monthly,term wise or yearly"<<endl;
    cin>>method_1;
    if(method_1=="monthly"){
        cout<<"your due date is : "<<endl;
        cout<<"\t"<<s[i].dob.dd<<" "<<s[i].dob.mm+1<<" "<<s[i].dob.yy<<endl;
    }
    else if(method_1=="term wise"){
         cout<<"your due date is : "<<endl;
        cout<<"\t"<<s[i].dob.dd+10<<" "<<s[i].dob.mm+3<<" "<<s[i].dob.yy<<endl;
    }
    else if(method_1=="yearly"){
         cout<<"your due date is : "<<endl;
        cout<<"\t"<<"you have paid for full year"<<endl;
        cout<<"\t we will notify you when calendar for next year is set thank you\n";
    }
    else
        cout<<"invalid method entered\n";
    }
  }
}
int set_profit(student s[],int *total,int *expense){
int stud_payment=0,profit;
for(int i=0;i<*total;i++){
    if(s[i].grade>=1 && s[i].grade<=8){
      stud_payment=stud_payment+(elepayment*300);
    }
    else
        if(s[i].grade==9||s[i].grade==10){
        stud_payment=stud_payment+(highpayment*300);
    }
    else
    if(s[i].grade==11||s[i].grade==12){
        stud_payment=stud_payment+(preppayment*300);
    }
}
profit=stud_payment-*expense;
return profit;

}
void reciept(student s[],int *total){
   int id_3;
   cout<<"enter student id :";
   cin>>id_3;
    for(int i=0;i<*total;i++){
        if(s[i].stud_id==id_3){
            if(s[i].pay==true){
   cout<<"_ _ _ _ _ _ _ _ _"<<endl;
   cout<<"|  name :"<<s[i].name<<"\t|"<<endl;;
   cout<<"|  stud_id no.:"<<s[i].stud_id<<"|"<<endl;
   cout<<"|  age:"<<s[i].age<<"\t|"<<endl;
   cout<<"|  sex:"<<s[i].sex<<"\t|"<<endl;
   cout<<"|  grade:"<<s[i].grade<<"\t|"<<endl;
   cout<<"|  PAID"<<"\t\t|"<<endl;
   cout<<"|_ _ _ _ _ _ _ _| "<<endl;

            }
           else
                    cout<<"Cant issue reciept student hasnt payed yet"<<endl;
        }
    }
}
void stat_report(student s[],int *total){
    int eletotal=0,hightotal=0,preptotal=0;
 cout<<"\t\tSTATISTICAL REPORT"<<endl;
 cout<<"\t\t=========================="<<endl;
 for(int  i=0;i<*total;i++){
    if(s[i].grade>=1 && s[i].grade<=8){
        eletotal++;
    }
    else if(s[i].grade==9 || s[i].grade==10){
        hightotal++;
    }
    else if(s[i].grade==11 || s[i].grade==12){
        preptotal++;
    }
 }
 int eleboy=0,elegirl=0,highboy=0,highgirl=0,prepboy=0,prepgirl=0;
 for(int i=0;i<*total;i++){
    if(s[i].grade>=1 && s[i].grade<=8){
      if(s[i].sex=="male"){
        eleboy++;
        }
        else{
            elegirl++;}
    }
    else if(s[i].grade==9 || s[i].grade==10){
      if(s[i].sex=="male"){
        highboy++;
        }
        else{
            highgirl++;}
    }
    else if(s[i].grade==11 || s[i].grade==12){
      if(s[i].sex=="male"){
        prepboy++;
        }
        else{
            prepgirl++;}
    }

 }

cout<<"Grades\tno.students\tno.boys\t\tno.girls"<<endl;
cout<<"1-8\t "<<eletotal<<"\t\t"<<eleboy<<"\t\t"<<elegirl<<endl;
cout<<"9-10\t "<<hightotal<<"\t\t"<<highboy<<"\t\t"<<highgirl<<endl;
cout<<"11-12\t "<<preptotal<<"\t\t"<<prepboy<<"\t\t"<<prepgirl<<endl;
cout<<"TOTAL\t "<<*total<<"\t\t"<<(prepboy+highboy+eleboy)<<"\t\t"<<(prepgirl+highgirl+elegirl)<<endl;
cout<<"Percentage-"<<"100%"<<"\t\t"<<((prepboy+highboy+eleboy)*100)/(*total)<<"%"<<"\t\t"<<((prepgirl+highgirl+elegirl)*100)/(*total)<<"%"<<endl;

}
void all_students(student s[],int *total){
if(*total==0){
    cout<<"No registerd students at this time"<<endl;
}
else{
cout<<"registered students  are : \n";
for(int i=0;i<*total;i++){
     cout<<"------------------------------"<<endl;
     cout<<s[i].name;
   cout<<" \tstud_id no. :"<<s[i].stud_id;
   cout<<"\tage:"<<s[i].age<<endl;
   cout<<"\tsex:"<<s[i].sex<<endl;
   cout<<"\tgrade:"<<s[i].grade<<endl;
   cout<<"\nregistered on:"<<s[i].dob.dd<<" "<<s[i].dob.mm<<" "<<s[i].dob.yy<<endl;
   cout<<"--------------------------------"<<endl;
    }
  }
}

int main(){
    student s[1000];

    int user,option1,option2,capacity=0,expense;
    int ele,high,prep;
    int total=0;
    string info;
    do{
         //system("cls");
menu();
cin>>user;
switch(user){
case 1:
    cout<<"[1]-Set School in take capacity."<<endl;
    cout<<"[2]-register school expense."<<endl;
    cout<<"[3]-see all registered students"<<endl;
    cin>>option1;
    switch(option1){
    case 1:
        set_capacity(&capacity,&ele,&high,&prep);
        break;
    case 2:
set_expense(&expense);
break;
    case 3:
        all_students(s,&total);
        break;

    }
    break;
case 2:
    cout<<"[1]-See intake capacity"<<endl;
    cout<<"[2]-register"<<endl;
    cout<<"[3]-payment"<<endl;
    cout<<"[4]-studetn who payed"<<endl;
    cout<<"[5]-See next payment "<<endl;
    cout<<"[6]-calculate profit"<<endl;
    cout<<"[7]-generate recipt"<<endl;
    cout<<"[8]-stat report"<<endl;
    cin>>option2;
    switch(option2){
case 1:
    cout<<"The intake capacity this is : "<<capacity<<endl;
    break;
regstart:
case 2:
    set_register(s,&capacity,&total);

    break;

case 3:
    cout<<"Is the person registered? "<<endl;
    cin>>info;
    if(info=="yes"){
    payment(s,&total);
    }
else{
    cout<<"please register first"<<endl;
    goto regstart;}
    break;
case 4:
    who_payed(s,&total);
    break;
case 5:
    char check;
    cout<<"Please make sure that student has been registered"<<endl;
    cout<<"if not registered please press r to register/if rgistered press any other letter "<<endl;
    cin>> check;
    if(check=='r'){
        goto regstart;}
    else{
    nxt_payment(s,&total);}
break;
case 6:
    cout<<"this year yearly profit = "<<endl;
    cout<<"\t"<<set_profit(s,&total,&expense);
break;
case 7:
    reciept(s,&total);
    break;
case 8:
    stat_report(s,&total);
    break;
}
}
}while(user!=3);
}
