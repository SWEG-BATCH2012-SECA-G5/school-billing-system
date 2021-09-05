void all_students(student *s,int *total){

if(*total==0){
    cout<<"No registerd students at this time"<<endl;
}
else{
    cout<<"CURRENT  STUDENTS ARE : \n";
cout<<"================================================================================================================="<<endl;
cout<<"ID     |     NAME        |      AGE         |      SEX        |       GRADE           |      DATE OF REGISTRY"<<endl;
 cout<<"-----------------------------------------------------------------------------------------------------------------"<<endl;
for(int i=0;i<*total;i++){
if(s[i].name!=NULL||s[i].age!=0){

cout<<s[i].stud_id<<"\t     "<<s[i].name<<"\t\t"<<s[i].age<<"\t\t  "<<s[i].sex<<"\t\t\t"<<s[i].grade<<"\t\t   "<<s[i].dob.dd<<" "<<s[i].dob.mm<<" "<<s[i].dob.yy<<endl;
}}
cout<<"================================================================================================================="<<endl;
  }
}

void delete_record(student *s,int *total,int *capacity){

string answer;
cout<<"do you want to delete a specific record or all the records? "<<endl;
cout<<"specific/all "<<endl;
cin>>answer;
int id_no;
if(answer=="specific"){
        cout<<"enter id: ";
cin>>id_no;
    for(int i=0;i<*total;i++){
        if((s[i]).stud_id==id_no){
                for(int j=i;j<*total;j++){

 strcpy(s[j].name,s[j+1].name);
    s[j].age=s[j+1].age;
    s[j].sex=s[j+1].sex;
    s[j].grade=s[j+1].grade;
    s[j].dob.dd=s[j+1].dob.dd;
    s[j].dob.mm=s[j+1].dob.mm;
    s[j].dob.yy=s[j+1].dob.yy;
s[j].stud_id=s[j+1].stud_id;


    }cout<<"Record deleted"<<endl;
    *capacity+=1;
                *total=*total-1;
        }
        else{
            cout<<"no student with that id no"<<endl;
        }

    }
}
   else if(answer=="all"){
    *capacity+=*total;
    *total=0;
    cout<<"All records deleted"<<endl;

   }
}

void sort_record(student *s,int *total){
bool swapped;
string option;
cout<<"Based on what would you like it to be sorted?  "<<endl;
cout<<"(name/grade)";
cin>>option;
if(option=="name"||option=="Name"){
        cout<<"sorting by name...."<<endl;
    do{
             swapped=false;
    for(int i=0;i<*total-1;i++){
        int sorter=strcmp(s[i].name,s[i+1].name);
    if(sorter>0){


        swap(s[i],s[i+1]);
        swapped=true;
    }
    cout<<"sorted"<<endl;
    }
      }while(swapped);
       cout<<"sorted"<<endl;
   }
   else{

cout<<"sorting by grade...."<<endl;
do{
    swapped=false;
    for(int i=0;i<*total-1;i++){
    if(s[i].grade>s[i+1].grade){
        swap(s[i],s[i+1]);
         swapped=true;
    }
    }

    }while(swapped);
    cout<<"sorted!"<<endl;
}
}
void update_record(student *s,int *total){
int id4,num;
char update2[50];
    string line,update,choice;
    cout<<"ID no. of record to be updated: ";
    cin>>id4;
    for(int i=0;i<*total;i++){
        if((s[i]).stud_id==id4){
                cout<<"What would you like to update? ";
        cin>>line;
        if(line=="name"){
            cout<<"enter new name: ";
            cin.ignore();
            cin.getline(update2,50);
            strcpy(s[i].name,update2);
        }
        else if(line=="age"){
           cout<<"enter new age: ";
           cin>>num;
            s[i].age=num;
        }
        else if(line=="grade"){
           cout<<"enter new grade: ";
           cin>>num;
            s[i].grade=num;
        }
        else if(line=="sex"){
           cout<<"enter new sex: ";
           cin>>update;
            s[i].sex=update;
        }
        else if(line=="date"){
                cout<<"what would you like to update (day ,month ,year):";
                cin>>choice;
        if(choice=="day"){
           cout<<"enter new date: ";
           cin>>num;
        s[i].dob.dd=num;
        }
             else
                if(choice=="month"){
           cout<<"enter new date: ";
           cin>>num;
            s[i].dob.mm=num;
                }
             if(choice=="year"){
           cout<<"enter new date: ";
           cin>>num;
            s[i].dob.yy=num;
             }
        }
    cout<<"record updated!"<<endl;
    }
    }
}
