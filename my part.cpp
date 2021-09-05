void search_record(student *s,int *total){
    int id;
cout<<"enter id of student to be searched: ";
cin>>id;
if(*total!=0){
for(int i=0;i<*total;i++){
    if(s[i].stud_id==id){
            cout<<"record found:"<<endl;
     cout<<s[i].stud_id<<"\t"<<s[i].name<<"\t"<<s[i].age<<"\t  "<<s[i].sex<<"\t"<<s[i].grade<<"\t"<<s[i].dob.dd<<" "<<s[i].dob.mm<<" "<<s[i].dob.yy<<endl;
    }
    else{
        cout<<"no student has this id"<<endl;}
}
}
else
    cout<<"no registered students yet"<<endl;
}

int main(){


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
         system("cls");
        set_capacity(&capacity,&ele,&high,&prep);
        cout<<endl;
        system("pause");

        break;

    case 2:
         system("cls");
set_expense(&expense);
 cout<<endl;
        system("pause");

break;
    case 3:
         system("cls");
        all_students(s,&total);
        cout<<endl;
        system("pause");
        break;

    }
    break;
case 2:
    cout<<"[1]-See intake capacity"<<endl;
    cout<<"[2]-register"<<endl;
    cout<<"[3]-payment"<<endl;
    cout<<"[4]-student who payed"<<endl;
    cout<<"[5]-See next payment "<<endl;
    cout<<"[6]-calculate profit"<<endl;
    cout<<"[7]-generate recipt"<<endl;
    cout<<"[8]-stat report"<<endl;
    cout<<"[9]-delete record"<<endl;
    cout<<"[10]-sort record"<<endl;
    cout<<"[11]-update record"<<endl;
    cout<<"[12]search record"<<endl;
    cin>>option2;
    switch(option2){
case 1:
     system("cls");
    cout<<"The intake capacity this is : "<<capacity<<endl;
    system("pause");
    break;

regstart:
case 2:
     system("cls");
    set_register(s,&capacity,&total);
 cout<<endl;
        system("pause");

    break;

case 3:
     system("cls");
    cout<<"Is the person registered?(yes/no) "<<endl;
    cin>>info;
    if(info=="yes"){
    payment(s,&total);
    }
else{
    cout<<"please register first"<<endl;
    goto regstart;}
     cout<<endl;
        system("pause");

    break;
case 4:
     system("cls");
    who_payed(s,&total);
     cout<<endl;
        system("pause");

    break;
case 5:
     system("cls");
    char check;
    cout<<"Please make sure that student has been registered"<<endl;
    cout<<"if not registered please press r to register/if registered press any other letter "<<endl;
    cin>> check;
    if(check=='r'){
        goto regstart;}
    else{
    nxt_payment(s,&total);}
     cout<<endl;
        system("pause");

break;
case 6:
    system("cls");
    cout<<"this year yearly profit = "<<endl;
    cout<<"\t"<<set_profit(s,&total,&expense);
    cout<<endl;
    system("pause");
break;
case 7:
    system("pause");
     system("cls");
    reciept(s,&total);
     cout<<endl;
        system("pause");

    break;
case 8:
     system("cls");
    stat_report(s,&total);
     cout<<endl;
        system("pause");

    break;
case 9:
     system("cls");
    delete_record(s,&total,&capacity);
     cout<<endl;
        system("pause");

    break;
case 10:
     system("cls");
    sort_record(s,&total);
     cout<<endl;
        system("pause");

    break;
case 11:
     system("cls");
    update_record(s,&total);
     cout<<endl;
        system("pause");

    break;
case 12:
     system("cls");
    search_record(s,&total);
     cout<<endl;
        system("pause");

    break;
}
}
}while(user!=3);
}
