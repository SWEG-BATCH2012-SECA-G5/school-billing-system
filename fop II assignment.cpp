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
    if(method_1=="monthly"||method_1=="Monthly"){
        cout<<"your due date is : "<<endl;
        cout<<"\t"<<s[i].dob.dd<<" "<<s[i].dob.mm+1<<" "<<s[i].dob.yy<<endl;
    }
    else if(method_1=="term wise"||method_1=="Term wise"){
         cout<<"your due date is : "<<endl;
        cout<<"\t"<<s[i].dob.dd+10<<" "<<s[i].dob.mm+3<<" "<<s[i].dob.yy<<endl;
    }
    else if(method_1=="yearly"||method_1=="Yearly"){
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
cout<<"Percentage-"<<(*total*100)/(*total)<<"\t\t"<<((prepboy+highboy+eleboy)*100)/(*total)<<"%"<<"\t\t"<<((prepgirl+highgirl+elegirl)*100)/(*total)<<"%"<<endl;

}
