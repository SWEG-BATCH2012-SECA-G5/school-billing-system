#include <iostream>

using namespace std;
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
struct date {
    int dd,mm,yy;
};
struct student_reg
{
    int id;
    string name;
    int age;
    int grade;
    int sex;
    date dop;
};

void stu_reg()
{ int n,m,elnm,t,elnt,y,elny,hm,hlnm,hlnt,hlny,ht,k,pm,pt,pnm,pnt,pny,school_profit;

    cout<<"------------------------------------------------------------------------\n";
    cout<<"How many student do you want to register: ";
    cin>>n;
    student_reg stud[n];

  for(int i=0; i<n; i++)
{
    cout<<"student name: ";
    cin>>stud[i].name;
    cout<<"student age: ";
    cin>>stud[i].age;
    cout<<"Grade to be registered in: ";
    cin>>stud[i].grade;

}


for(int i=0; i<n; i++)
{


    if (stud[i].grade>0 && stud[i].grade<9)

  { int b;
      cout<<"-------------------------------------------------------------------";
      cout<<endl<<"student "<<stud[i].name<<" monthly  wage would be "<<elm<<endl;
      cout<<"How do you want to complete the payment "<<endl;
      cout<<"1) monthly"<<endl<<"2) By term"<<endl<<"3) Yearly"<<endl;
      cin>>b;

      if (b==1)
      {
          cout<<"How many month? ";
          cin>>m;
          elnm=m*elm;
          cout<<"total would be: "<<elnm<<endl;
      }

      else if (b==2)
      {
          cout<<"For How many terms do u want to pay";
          cin>>t;
          elnt=t*elt;
          cout<<"total would be: "<<elnt<<endl;
      }


    else if (b==3)
      {
          cout<<"For choosing the yearly payment we would offer 10% discount offer"<<endl;
         elny=ely-1200;
          cout<<"your new total would be: "<<elny<<endl;
      }
      }

      if(stud[i].grade>8 && stud[i].grade<11)
      {
          int c;
      cout<<"-----------------------------------------------------------------";
      cout<<endl<<"student "<<stud[i].name<<" monthly  wage would be "<<hlm<<endl;
      cout<<"How do you want to complete the payment "<<endl;
      cout<<"1) monthly"<<endl<<"2) By term"<<endl<<"3) Yearly"<<endl;
      cin>>c;

      if (c==1)
           {
          cout<<"How many month? ";
          cin>>hm;
          hlnm=hm*hlm;
          cout<<"total would be: "<<hlnm<<endl;
           }

      else if (c==2)
            {
          cout<<"For How many terms do u want to pay";
          cin>>ht;
          hlnt=ht*hlt;
          cout<<"total would be: "<<hlnt<<endl;
            }


    else if (c==3)
         {
          cout<<"For choosing the yearly payment we would offer 15% discount offer"<<endl;
         hlny=hly-2250;
          cout<<"your new total would be: "<<hlny<<endl;
           }
     }

      if(stud[i].grade>10 && stud[i].grade<13)
      {
          int v;
      cout<<"---------------------------------------------------------------------";
      cout<<endl<<"student "<<stud[i].name<<" monthly  wage would be "<<prm<<endl;
      cout<<"How do you want to complete the payment "<<endl;
      cout<<"1) monthly"<<endl<<"2) By term"<<endl<<"3) Yearly"<<endl;
      cin>>v;

      if (v==1)
           {
          cout<<"How many month? ";
          cin>>pm;
          pnm=pm*prm;
          cout<<"total would be: "<<pnm<<endl;
           }

      else if (v==2)
            {
          cout<<"For How many terms do u want to pay";
          cin>>pt;
          pnt=pt*prt;
          cout<<"total would be: "<<pnt<<endl;
            }


    else if (v==3)
         {
          cout<<"For choosing the yearly payment we would offer 20% discount offer"<<endl;
         pny=pry-3600;
          cout<<"your new total would be: "<<pny<<endl;
           }
     }





  }


}





void payment_info()
{
  cout<<"---------------------------------------------------------------------------------"<<endl;
  cout<<"we have different payment and payment structure for the level of education we give"<<endl;
  cout<<"They are the following :"<<endl;
  cout<<"for elementary school(from grade 1-8) our price is 1200 birr per month"<<endl;
  cout<<"For high school(from grade 9-10) our price is 1500 birr per month"<<endl;
  cout<<"For preparatory(from grade 11-12 our price is 1800 birr per month)"<<endl;

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



}
void reicept()
{
    int n;
    student_reg stud[n];

  for(int i=0; i<n; i++)
{
    cout<<"student name: ";
    cout<<stud[i].name;
    cout<<"student age: ";
    cout<<stud[i].age;
    cout<<"Grade  registered in: ";
    cout<<stud[i].grade;


}




}



int main()
{  int menu;
 do{
  cout<<"---------------------------------------------------------------------------------------------------------------";
  cout<<"\nwelcome to the school billing system\n";
  cout<<"\n What do you want to perform: \n 1) register students\n 2) calculate school expenses\n 3) reicept\n 4)quit\n";
  cin>>menu;
  if(menu==1)
  {
      stu_reg();
  }
  else if (menu==2)
  {
      school_expense();
  }
  else if(menu==3)
  {
      reicept();
 //reicept isnt workin
  }
   else if(menu==4)
   {
       cout<<"Thank you for choosing our program we would like to see you back again!\n";
       cout<<"---------------------------------------------------------------------------";
   }
 } while(menu!=4);







  }



