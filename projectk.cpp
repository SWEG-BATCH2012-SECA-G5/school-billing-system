#include <iostream>

using namespace std;
int i,s;
const int hl=50;
const int pr=60;
const int el=40;
int elm=el*30;
int elt=el*100;
int ely=el*300;
int hlm=hl*30;
int hlt=hl*100;
int hly=hl*300;
int prm=pr*30;
int prt=pr*100;
int pry=pr*300;

void addstud();
void school_expense();
void reciept();
void ext();

struct date{
    int day;
    int month;
    int year;
};

struct student
{
    int id;
    char name[50];
    int age;
    int grade;
    char sex;
    date Dor;

};
student stud[10000];

void addstud()
{
    int n,m,elnm,t,elnt,y,elny,hm,hlnm,hlnt,hlny,ht,k,pm,pt,pnm,pnt,pny,school_profit;
    char an;
//do{
    int p,i;
    cout<<"How many students do you wish to register:- "<<endl;
    cin>>s;
    for (int i=0; i<s; i++){
    cout<<"Enter name:-"<<endl;
    //cin.get(stud[i].name,50);
    cin>>stud[i].name;
    cout<<"Enter ID:-"<<endl;
    cin>>stud[i].id;
    cout<<"Enter Age:- "<<endl;
    cin>>stud[i].age;
    cout<<"Enter grade:-"<<endl;
    cin>>stud[i].grade;
    cout<<"Enter gender(m or f):-"<<endl;
    cin>>stud[i].sex;
    a:
    cout<<"Enter the date in dd/mm/yy format"<<endl;
    cin>>stud[i].Dor.day;
    cin>>stud[i].Dor.month;
    cin>>stud[i].Dor.year;
    if(stud[i].Dor.day>30 && stud[i].Dor.month>12){

    cout<<"Please enter a valid date"<<endl;
    goto a;
}
    cout<<"\nWhat is the form of payment"<<endl;
    cout<<"1. Monthly"<<endl;
    cout<<"2. Term"<<endl;
    cout<<"3. Yearly"<<endl;
    cin>>p;

    switch(p)
    {
    case 1:
        if (stud[i].grade>0 && stud[i].grade<9)


      {
          cout<<"How many month? ";
          cin>>m;
          elnm=m*elm;
          cout<<"total would be: "<<elnm<<endl;
      }
      else if (stud[i].grade>8 && stud[i].grade<11)
        {
          cout<<"How many month? ";
          cin>>hm;
          hlnm=hm*hlm;
          cout<<"total would be: "<<hlnm<<endl;
           }
      else if (stud[i].grade>10 && stud[i].grade<13)
        {
          cout<<"How many month? ";
          cin>>pm;
          pnm=pm*prm;
          cout<<"total would be: "<<pnm<<endl;
           }
        break;
    case 2:
        if (stud[i].grade>0 && stud[i].grade<9)
        {
        cout<<"For How many terms do u want to pay";
          cin>>t;
          elnt=t*elt;
          cout<<"total would be: "<<elnt<<endl;
        }

        else if (stud[i].grade>8 && stud[i].grade<11)
        {
        cout<<"For How many terms do u want to pay";
          cin>>ht;
          hlnt=ht*hlt;
          cout<<"total would be: "<<hlnt<<endl;
        }
        else if (stud[i].grade>10 && stud[i].grade<13)
        {
        cout<<"For How many terms do u want to pay";
          cin>>pt;
          pnt=pt*prt;
          cout<<"total would be: "<<pnt<<endl;
        }
        break;
    case 3:
        if (stud[i].grade>0 && stud[i].grade<9)
        {
         cout<<"For choosing the yearly payment we would offer 10% discount offer"<<endl;
         elny=ely-1200;
          cout<<"your new total would be: "<<elny<<endl;
        }

        else if (stud[i].grade>8 && stud[i].grade<11)
        {
         cout<<"For choosing the yearly payment we would offer 15% discount offer"<<endl;
         hlny=hly-2250;
          cout<<"your new total would be: "<<hlny<<endl;
        }
        else if (stud[i].grade>10 && stud[i].grade<13)
        {
         cout<<"For choosing the yearly payment we would offer 20% discount offer"<<endl;
         pny=pry-3600;
          cout<<"your new total would be: "<<pny<<endl;
          cout<<"press '4' to add another student";
        }
        break;

    }
}
system("pause");
system("cls");
    /*i+1;
    cout<<"do you want to add another student"<<endl;
    cin>>an;*/

//}while(an='y');
}

void school_expense()
{
    char b;
    int elet,hilt,pret,epp,hpp,ppp,eppy,hppy,pppy,rent,sts,qt,total;
    const int ep=2500;
    const int hp=4500;
    const int pp=6500;
    cout<<"-------------------------------------------------------------------------------"<<endl;
    cout<<"How many elementary school teachers do u have within the school? "<<endl;
    cin>>elet;
    epp=ep*elet;
    eppy=12*epp;
    cout<<"salary per individual is "<<ep<<endl<<"The total per month would be "<<epp<<endl<<"annual:"<<eppy<<endl;
    cout<<"\nHow many High school teachers do u have within the school? "<<endl;
    cin>>hilt;
    hpp=hp*hilt;
    hppy=12*hpp;
    cout<<"Salary per individual is "<<hp<<endl<<"The total per month would be "<<hpp<<endl<<"annual:"<<hppy<<endl;
    cout<<"\nHow many Preparatory school teachers do u have within the school? "<<endl;
    cin>>pret;
    ppp=pp*pret;
    pppy=12*ppp;
    cout<<endl<<"Salary per individual is "<<pp<<endl<<"The total per month would be "<<ppp<<endl<<"annual: "<<pppy<<endl;
    cout<<"***********************************************************************"<<endl;
    cout<<"Is the compound rented?('Y'for yes and 'N' for no)"<<endl;
    cin>>b;
     if(b=='Y'|| b=='y')
     {
         cout<<"how much is the annual rent: ";
         cin>>rent;
     }
      cout<<"************************************************************************"<<endl;
      cout<<"How much is the annual office and compound expense?\n ";
      cin>>sts;
      cout<<"The rest of expense including security,cleaning,maintenance,transport and such values?\n";
      cin>>qt;
      cout<<"******************************************************************************\n";
      total=eppy+hppy+pppy+rent+sts+qt;
      cout<<"Your total annual expense is: "<<total;
      system("pause");
      system("cls");



}

void reciept(){
int id;
cout<<"Enter the id of the student"<<endl;
cin>>id;
for(int i=0; i<s; i++)
{
if(id == stud[i].id)
{
	cout<<"Date of registration"<<stud[i].Dor.day<<" "<<stud[i].Dor.month<<" "<<stud[i].Dor.year<<endl;
	cout<<"\nPaid----Registered";
	cout<<"\nName--"<<stud[i].name<<endl;
	cout<<"Age--"<<stud[i].age<<endl;
	cout<<"Gender--"<<stud[i].sex<<endl;
	cout<<"Grade--"<<stud[i].grade<<endl;
	cout<<"Date of registration--"<<stud[i].Dor.day<<" "<<stud[i].Dor.month<<" "<<stud[i].Dor.year<<endl;
	}
	else
cout<<"Please register ";	
}
system("pause");
system("cls");

}
void ext(){
cout<<"Thanks for using our billing system!"<<endl;
system("pause");
system("cls");
}




int main()
{
	int k;
	do{
	cout<<"  \n\n\n       WELCOME TO SCHOOL's BILLING SYSTEM !!!!";
	cout<<"  \n\n\n       This program provides you with the following services---------"<<endl;
	cout<<"  \n\n\n         Press 1 to add a student"<<endl<<"         Press 2 to calculate and view the school expenses"<<endl<<"         Press 3 to have a reciept"<<endl<<"         Press 4 to exit"<<endl;
	cin>>k;
	switch(k){
		case 1:
			addstud();
			break;
		case 2:
			school_expense();
			break;
		case 3:
		    reciept();
		    break;
        case 4:
            ext();
            break;


//addstud();
	}
	}while(k!=4);
}


