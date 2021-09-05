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
case ('A'|  'a'):
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
case ('B'|'b'):
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
case ('C'|'c'):
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
cout<<"people who have paid are : "<<endl;
for(int i=0;i<*total;i++){
    if(s[i].pay==true){
       cout<<"\tName :"<<s[i].name;
   cout<<" \tstud_id no. :"<<s[i].stud_id<<endl;
   cout<<"\tage:"<<s[i].age<<endl;
   cout<<"\tsex:"<<s[i].sex<<endl;
   cout<<"\tgrade:"<<s[i].grade<<endl;
   cout<<"\nregistered on:"<<s[i].dob.dd<<" "<<s[i].dob.mm<<" "<<s[i].dob.yy<<endl;
    }
  }
}
