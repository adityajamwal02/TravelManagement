#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<process.h>
#include<fstream>
#include<cctype>
#include<stdio.h>
#include<stdlib.h>
#include<iomanip>
using namespace std;
long int code;

class PersonalDetails //class for collecting the personal details
{
    int TravelCode,age[20],num,numppl;
    char Name[20][20], Address[50], PhoneNumber[15], gender[20], PassportNum[9][9],FamilyName[30];
    public:
        void p_input(int cd)
        {
            TravelCode = cd;
            num = 0;
            cout<<"\n\n:::::::::::::::::::::: PERSONAL DETAILS ::::::::::::::::::::::\n";
            cout<<"\n* Please fill in the details:\n1.Family Name: ";
            cin.ignore();
            cin.getline(FamilyName,30);
            cout<<"\n2.Address: ";
            cin.ignore();
            cin.getline(Address,50);
            cout<<"\n3.Contact Number(10 Digit Mobile Number) : ";
            cin.ignore();
            cin.getline(PhoneNumber,15);
            cout<<"\nEnter The No of People Travelling: ";
            cin>>numppl;
            system("cls");
            if(numppl>0)
            {
                cout<<"\nPlease Enter The Details of each Member/Members: "<<endl;
                for(int i=0;i<numppl;i++)
                {
                    cout<<endl<<"\nMember "<<i+1;
                    cout<<"\n~~~~~~~~~~~~~~~";
                    cout<<"\nFirst Name: ";
                    cin.ignore();
                    cin.getline(Name[i],20);
                    cout<<"\nAge: ";
                    cin>>age[i];
                    cout<<"\nSex (M/F): ";
                    cin>>gender[i];
                    cout<<"\nPassport Number: ";
                    cin.ignore();
                    cin.getline(PassportNum[i],9);
                    if(age[i]<5)
                    {
                        num++;    //to calculate no of travellers below 5 yrs
                    }
                }
            }
        }
        void p_output()
        {
            system("cls");
            cout<<"\n\n******* PERSONAL DETAILS *******"<<endl;
            cout<<"\nFamily Name: "<<FamilyName<<endl;
            cout<<"Address: "<<Address<<endl;
            cout<<"Phone Number: "<<PhoneNumber<<endl;
            cout<<"\nName\t\tAge\t\tSex\t\tPassport Number\n"<<endl;
            for(int i=0;i<numppl;i++)
            {
                cout<<"\t"<<Name[i]<<"\t\t"<<age[i]<<"\t\t"<<gender[i]<<"\t\t"<<PassportNum[i]<<endl;
            }
            getch();
        }
        void givefam();
        int givecode();
        int givenum();
}PD;
int PersonalDetails::givenum()
{
  return numppl-num;
}
void PersonalDetails::givefam()
{
  cout<<FamilyName;
}
int PersonalDetails::givecode()
{
  return TravelCode;
}

void boardpt(int c)  //for easy o/p
{
  if(c==1)
  cout<<"Mumbai\t";
  if(c==2)
  cout<<"Cochin\t";
  if(c==3)
  cout<<"Chennai\t";
}

void dest(int d)  //for easy o/p
{
  switch(d)
  {
    case 1:cout<<"New York";
       break;
    case 2:cout<<"Miami";
       break;
    case 3:cout<<"Rio De Janero";
       break;
    case 4:cout<<"Colombo";
       break;
    case 5:cout<<"Hong Kong";
       break;
    case 6:cout<<"Dubai";
       break;
    case 7:cout<<"Lisbon";
       break;
    case 8:cout<<"London";
       break;
    case 9:cout<<"Copenhagen";
       break;
   case 10:cout<<"Cape Town";
       break;
   case 11:cout<<"Antananriv";
       break;
   case 12:cout<<"Cairo";
       break;
   case 13:cout<<"Perth";
       break;
   case 14:cout<<"Sydney";
      break;
   case 15:cout<<"Willington";
     break;
  }
}

class TravelDetails
{
    int TravelCode, day,month,year,num1,BoardingPoint,DisembarkingPoint;
    int Class,pool,gym,sports,salon,spa;
    public:
        void initial()
        {
            pool=gym=sports=salon=0;
        }
        void t_input(int cd)
        {
            initial();
            TravelCode= cd;
            int i=1,opt;
            system("cls");
            do
            {
                system("cls");
                cout<<endl;
                cout<<"\nTRAVEL DETAILS\n";
                cout<<"~~~~~~~~~~~~~~~~~";
                cout<<"\nPlease enter the following details for your journey:";
                cout<<"\n*Note:Options marked with '*' are compulsory.\tPlease do select them.";
                cout<<"\n*1.Boarding and Destination\n*2.Date of Departure\n*3.Class\n4.Swimming Pool\n5.Gymnasuim\n6.Sports\n7.Salon\n8.Spa\n9.Back\n";
                cin>>opt;
                switch(opt)
                {
                    case 1:system("cls");
                        cout<<"\nSelect Boarding point:\n1.Mumbai\n2.Cochin\n3.Chennai";
                        cin>>BoardingPoint;
                        cout<<"\n*** Select Destination ***\n";
                        cout<<"1.New York\t\t6.Dubai\t\t\t11.Antananariv";
                        cout<<"\n2.Miami\t\t7.Lisbon\t\t12.Cairo";
                        cout<<"\n3.Rio De Janeiro\t8.London\t\t13.Perth";
                        cout<<"\n4.Colombo\t\t9.Copenhagen\t\t14.Sydney";
                        cout<<"\n5.Hong Kong\t\t10.Cape Town\t\t15.Wellington\n";
                        cin>>DisembarkingPoint;
                        break;
                    case 2:system("cls");
                        cout<<"\n\nEnter your preferred date(DD MM YYYY) of departure: ";
                        cin>>day>>month>>year;
                        break;
                    case 3:system("cls");
                        cout<<"\n\nEnter The Choice OF Class\n1.First Class\n2.Business Class\n3.Economy Class\n";
                        cin>>Class;
                        break;
                    case 4:system("cls");
                        cout<<"\n\nWould You Like To Avail The Facility Of A Swimming Pool\n0.No\n1.Yes\n";
                        cin>>pool;
                        break;
                    case 5:system("cls");
                        cout<<"\n\nWould You Like To Avail The Facility Of A Gymnasium\n0.No\n1.Yes\n";
                        cin>>gym;
                        break;
                    case 6:system("cls");
                        cout<<"\n\nWould You Like To Avail The Sports Facilities Offered\n0.No\n1.Yes\n";
                        cin>>sports;
                        break;
                    case 7:system("cls");
                        cout<<"\n\nWould You Like To Avail The Facility Of Beauty Salon\n0.No\n1.Yes\n";
                        cin>>salon;
                        break;
                    case 8:system("cls");
                        cout<<"\n\nWould You Like To Avail The Facility Of Spa\n0.No\n1.Yes\n";
                        cin>>spa;
                        break;
                    case 9:i=0;
                        break;
                }
            }while(i==1);
        }
        void t_output()
        {
            system("cls");
            cout<<"\n\n##############TRAVEL DETAILS##############";
            cout<<"\nBoarding Point: ";
            boardpt(BoardingPoint);
            cout<<"\nDestination: ";
            dest(DisembarkingPoint);
            cout<<"\nDate of departure: ";
            cout<<day<<"/"<<month<<"/"<<year;
            cout<<"\nClass: ";
            switch(Class)
            {
                case 1:cout<<"First Class";
                    break;
                case 2:cout<<"Business Class";
                    break;
                case 3:cout<<"Economy Clss";
                    break;
            }
            cout<<"\n\n\n\tFacilities availed for are:";
            if(pool==1)
            cout<<"\nSwimming Pool";
            if(gym==1)
            cout<<"\n";
            if(sports==1)
            cout<<"\n";
            if(spa==1)
            cout<<"\nSpa";
            if(salon==1)
            cout<<"\nBeauty Salon";
            getch();
        }
        void compute()
        {
            long int gttl=0,hr,dcst,cls,cabn,swpool=5000,gm=2000,spfts=7500,slon=6000,sp=20000,ttr=500;
            switch(DisembarkingPoint)
            {
                case 1:;
                case 2:;
                case 3:hr=30*24;
                    dcst=250000;
                    break;
                case 4:;
                case 5:;
                case 6:hr=7*24;
                    dcst=75000;
                    break;
                case 7:;
                case 8:;
                case 9:hr=24*24;
                    dcst=130000;
                    break;
                case 10:;
                case 11:;
                case 12:hr=15*24;
                    dcst=100000;
                    break;
                case 13:;
                case 14:;
                case 15:hr=12*24;
                    dcst=120000;
                    break;
            }
            switch(Class)
            {
                case 1:cls=1500;
                break;
                case 2:cls=7500;
                break;
                case 3:cls=5000;
            }
            system("cls");
            cout<<"\n\n:::::::::::::::::::::: BILL ::::::::::::::::::::::::::";
            cout<<"\nBoarding point: ";
            boardpt(BoardingPoint);
            cout<<"\nDestination: ";
            dest(DisembarkingPoint);
            cout<<"\nDate of Departure: ";
            cout<<day<<"/"<<month<<"/"<<year;
            hr=hr/24;         //to calculate date of arrival
            day=day+hr;
            if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
            {
                if(day>31)
                {
                month=month+1;
                day=day%31;
                }
            }
            if(month==4||month==6||month==9||month==11)
            {
                if(day>30)
                {
                month=month+1;
                day=day%30;
                }
            }
            if(month==2)
            {
                if(day>28)
                {
                month=month+1;
                day=day%28;
                }
            }
            if(month==13)
            {
                month=1;
                year++;
            }
            cout<<"\nDate of Arrival: ";
            cout<<day<<"/"<<month<<"/"<<year;
            cout<<"\n\nSubject\t\tCost(for 1)\tNo of ppl\tTotal";
            cout<<"\n\nTravel\t\t"<<dcst<<"\t\t   "<<num1<<"\t\t"<<num1*dcst;
            gttl+=num1*dcst;
            cout<<"\nClass\t\t"<<Class<<"\t\t   "<<num1<<"\t\t"<<Class*num1;
            gttl+=Class*num1;
            if(pool==1)
            {
                cout<<"\nSwimming Pool\t"<<swpool<<"\t\t   "<<num1<<"\t\t"<<swpool*num1;
                gttl+=swpool*num1;
            }
            if(gym==1)
            {
                cout<<"\nGym\t\t"<<gm<<"\t\t   "<<num1<<"\t\t"<<gm*num1;
                gttl+=gm*num1;
            }
            if(sports==1)
            {
                cout<<"\nSports\t\t"<<spfts<<"\t\t   "<<num1<<"\t\t"<<spfts*num1;
                gttl+=spfts*num1;
            }
            if(salon==1)
            {
                cout<<"\nSalon\t\t"<<slon<<"\t\t   "<<num1<<"\t\t"<<slon*num1;
                gttl+=slon*num1;
            }
            if(spa==1)
            {
                cout<<"\nSpa\t\t"<<sp<<"\t\t   "<<num1<<"\t\t"<<sp*num1;
                gttl+=dcst*num1;
            }
            cout<<"\nGrand Total:Rs ";
            if(gttl>100000)     //to provide comma's for grandtotal
            {
                cout<<gttl/100000<<",";
                gttl=gttl%100000;
            }
            if(gttl>1000)
            {
                cout<<gttl/1000<<",";
                gttl=gttl%1000;
            }
            cout<<gttl;
            if(gttl<10)
                cout<<"00";
            cout<<"\nAll Travellers below the age of 5 have not been charged";
            getch();
        }
        int gtcode();
        void accept(int);
}TD;
void TravelDetails::accept(int c)
{
  num1=c;
}
int TravelDetails::gtcode()
{
  return TravelCode;
}

void family(int c,int&flag)  //to display familyname+to check for record
{
  flag=0;
  system("cls");
  ifstream ifl("PersonalDetails.txt",ios::binary);
  if(!ifl)
    cout<<"\nError";
  ifl.read((char*)&PD,sizeof(PD));
  while(!ifl.eof())
  {
    if(PD.givecode()==c)
    {
      flag=1;
      break;
    }
    ifl.read((char*)&PD,sizeof(PD));
  }
  if(flag==1)
  {
    PD.givefam();
    cout<<"'s FAMILY DATABASE **";
  }
  else
  {
    cout<<"\nError in locating record!!";
  }
  ifl.close();
}

void editp(int c)  //to edit persdetails
{
  ofstream ofl2("temp1.txt",ios::binary);
  if(!ofl2)
  cout<<"Error While Opening File";
  ifstream ifl4("PersonalDetails.txt",ios::binary);
  if(!ifl4)
  cout<<"Error While Opening File";
  ifl4.read((char*)&PD,sizeof(PD));
  while(!ifl4.eof())
  {
    if(PD.givecode()==c)
    {
      system("cls");
      cout<<"Please Enter the New details of the record"<<endl;
      PD.p_input(c);
      ofl2.write((char*)&PD,sizeof(PD));
      cout<<"\nModification Succesful!!!";
      ifl4.read((char*)&PD,sizeof(PD));
    }
    else
    {
      ofl2.write((char*)&PD,sizeof(PD));
      ifl4.read((char*)&PD,sizeof(PD));
    }
  }
  remove("PersonalDetails.txt");
  rename("temp1.txt","PersonalDetails.txt");
  ifl4.close();
  ofl2.close();
  getch();
}

void editt(int c)  //to edit travdetails
{
  ofstream ofl2("temp1.txt",ios::binary);
  if(!ofl2)
  cout<<"Error While Opening File";
  ifstream ifl4("TravelDetails.txt",ios::binary);
  if(!ifl4)
  cout<<"Error While Opening File";
  ifl4.read((char*)&TD,sizeof(TD));
  while(!ifl4.eof())
  {
    if(TD.gtcode()==c)
    {
      system("cls");
      cout<<"Please Enter the New details of the record"<<endl;
      TD.t_input(c);
      ofl2.write((char*)&TD,sizeof(TD));
      cout<<"\nModification Succesful!!!";
      ifl4.read((char*)&TD,sizeof(TD));
    }
    else
    {
      ofl2.write((char*)&TD,sizeof(TD));
      ifl4.read((char*)&TD,sizeof(TD));
    }
  }
  remove("TravelDetails.txt");
  rename("temp1.txt","TravelDetails.txt");
  ifl4.close();
  ofl2.close();
  getch();
}

void deletion(int c)  //common delete func()
{
  ofstream ofl2("temp1.txt",ios::binary);
  if(!ofl2)
  cout<<"Error While Opening File";
  ifstream ifl4("PersonalDetails.txt",ios::binary);
  if(!ifl4)
  cout<<"Error While Opening File";
  ifl4.read((char*)&PD,sizeof(PD));
  while(!ifl4.eof())
  {
    if(PD.givecode()!=c)
    {
      ofl2.write((char*)&PD,sizeof(PD));
    }
    ifl4.read((char*)&PD,sizeof(PD));
  }
  remove("PersonalDetails.txt");
  rename("temp1.txt","PersonalDetails.txt");
  ofl2.close();
  ifl4.close();
  ofstream ofl3("temp2.txt",ios::binary);
  if(!ofl3)
  cout<<"\nError While Opening File";
  ifstream ifl5("TravelDetails.txt",ios::binary);
  if(!ifl5)
  cout<<"\nError While Opening File";
  ifl5.read((char*)&TD,sizeof(TD));
  while(!ifl5.eof())
  {
    if(TD.gtcode()!=c)
    {
      ofl3.write((char*)&TD,sizeof(TD));
    }
    ifl5.read((char*)&TD,sizeof(TD));
  }
  ofl3.close();
  ifl5.close();
  remove("TravelDetails.txt");
  rename("temp1.txt","TravelDetails.txt");
  cout<<"\n\nDeletion Completed!";
  getch();
}

int main()
{
  system("cls");

  ifstream fl("INITIAL.txt",ios::binary); //initialisation of code
  fl.read((char*)&code,sizeof(code));
  fl.close();
  int opt,opt1,opt2,opt3,opt4;
  int acceptcode,flag;
  system("cls");
  do
  {
    system("cls");
    cout<<"#######################################\n";
    cout<<"#######################################\n";
    cout<<"############   MAIN MENU   ############\n";
    cout<<"#######################################\n";
    cout<<"#######################################\n";

    cout<<"\nPlease Register Choice!\n";
    cout<<"\n1.New User\n2.Existing User\n3.Exit\n";
    cin>>opt;
    switch(opt)
    {
      case 1: do
            {
                system("cls");
                cout<<"\n\n    NEW USER\n";
                cout<<"*********\n\n";
                cout<<"\n\nChoose the type of details you want to enter:";
                cout<<"\n\n1.Personal Details\n2.Travel Details\n3.Back\n\n";
                cin>>opt1;
                if(opt1==1)
                {
                   code++;
                    PD.p_input(code);
                    ofstream ofl("PersonalDetails.txt",ios::binary|ios::app);
                    if(!ofl)
                        cout<<"\n\nSorry.The File Cannot Be Opened For Writing"<<endl;
                    ofl.write((char*)&PD,sizeof(PD));
                    ofl.close();
                }
                else if(opt1==2)
                {
                    TD.t_input(code);
                    ofstream ofl1("TravelDetails.txt",ios::binary|ios::app);
                    if(!ofl1)
                    cout<<"\n\n\t\tSorry.The File Cannot Be Opened For Writing"<<endl;
                    ofl1.write((char*)&TD,sizeof(TD));
                    ofl1.close();
                    system("cls");
                    cout<<"\n\n\n\n!!!!!Your Details Have Been Registered.Please Make A Note Of This Code: "<<code;
                    cout<<"\n\n* For modifications,Please visit 'existing user' section in the main screen";
                    getch();
                }
            }while(opt1!=3);
        break;
        case 2:system("cls");
            cout<<"\n\n** EXISTING USER **\n\nPlease Enter The Travel Code That Was Given To You\n\n";
            cin>>acceptcode;
            if(acceptcode>code)
            {
                cout<<"\nNo such record has been created!";
                break;
            }
            family(acceptcode,flag);
            cout<<endl<<endl<<"\t\t\t\tCode no:"<<acceptcode;
            getch();
            if(flag==1)
            {
                do
                {
                    system("cls");
                    cout<<"\n\n@@@@@@@@@Information Centre@@@@@@@@@";
                    cout<<"\n~~~~~~~";
                    cout<<"\n\nPlease select the type of operation that you would like to perform:";
                    cout<<"\n1.View Personal Details\n\n2.View Travel Details\n\n3.Edit Details\n\n4.Compute Bill\n\n5.Back\n";
                    cin>>opt2;
                    if(opt2==1)
                    {
                        ifstream ifl("PersonalDetails.txt",ios::binary);
                        if(!ifl)
                        cout<<"\nError";
                        ifl.read((char*)&PD,sizeof(PD));
                        while(!ifl.eof())
                        {
                        if(PD.givecode()==acceptcode)
                        {
                            break;
                        }
                        ifl.read((char*)&PD,sizeof(PD));
                        }
                        PD.p_output();
                        ifl.close();
                    }
                    else if(opt2==2)
                    {
                        ifstream ifl1("TravelDetails.txt",ios::binary);
                        if(!ifl1)
                        cout<<"\nError";
                        ifl1.read((char*)&TD,sizeof(TD));
                        while(!ifl1.eof())
                        {
                        if(TD.gtcode()==acceptcode)
                        {
                            break;
                        }
                        ifl1.read((char*)&TD,sizeof(TD));
                        }
                        TD.t_output();
                        ifl1.close();
                    }
                    else if(opt2==3)
                    {
                        do
                        {
                            system("cls");
                            cout<<"\n\n\n\t¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬ Edit Details ¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬";
                            cout<<"\n\n\t\tPlease select from among the editing options:\n\n";
                            cout<<"\t\t\t\t1.Modify\n\n\t\t\t\t2.Delete\n\n\t\t\t\t3.Back\n\n\t\t\t\t ";
                            cin>>opt3;
                            switch(opt3)
                            {
                                case 1:do
                                    {
                                        system("cls");
                                        cout<<"\n\n\t\t Modificaton \n";
                                        cout<<"\t\t               ~~~~~";
                                        cout<<"\n\n\tChoose The Type Of Details You Want To Modify:\n\n\t\t\t1.Personal Details\n\n\t\t\t2.Travel Details\n\n\t\t\t3.Back\n\n\t\t\t ";
                                        cin>>opt4;
                                        switch(opt4)
                                        {
                                        case 1:editp(acceptcode);
                                            break;
                                        case 2:editt(acceptcode);
                                            break;
                                        case 3:break;
                                        }
                                    }while(opt4!=3);
                                break;
                                case 2:deletion(acceptcode);
                                    opt3=3;
                                    opt2=5;
                                break;
                                case 3:break;
                            }
                        } while (opt3!=3);
                    }
                    else if(opt2==4)
                    {
                        ifstream ifl3("PersonalDetails.txt",ios::binary);
                        if(!ifl3)
                        cout<<"\nError";
                        ifl3.read((char*)&PD,sizeof(PD));
                        while(!ifl3.eof())
                        {
                        if(PD.givecode()==acceptcode)
                        {
                            break;
                        }
                        ifl3.read((char*)&PD,sizeof(PD));
                        }
                        ifstream ifl2("TravelDetails.txt",ios::binary);
                        if(!ifl2)
                        cout<<"\nError";
                        ifl2.read((char*)&TD,sizeof(TD));
                        while(!ifl2.eof())
                        {
                        if(TD.gtcode()==acceptcode)
                        {
                            break;
                        }
                        ifl2.read((char*)&TD,sizeof(TD));
                        }
                        TD.accept(PD.givenum());
                        TD.compute();
                        ifl2.close();
                    }
                    else if(opt2==5)
                        break;
                } while (opt3!=3);
            }
        break;
        case 3:ofstream fil("INITIALL.txt",ios::binary); //storing code value
            if(!fil)
            cout<<"\nError";
            fil.write((char*)&code,sizeof(code));
            fil.close();
            getch();
            exit(0);
        break;
    }
    getch();
  }while(1); //infinite loop till exit selected
  return 0;
}
