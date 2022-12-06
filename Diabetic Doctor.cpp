#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<dos.h>
#include<process.h>
#include <fstream>
using namespace std;

void welcome_screen();
void getvalue();
void diagnosis();
void getlevel1_symptoms();
void getlevel2_symptoms();
void getlevel3_symptoms();
char display_message(int n,int m);
int analyse_symptoms(int n);
int choose();
void all_option();
void show_record();
void delete_record();
void search_record();

char s[10];

int main()
	{

		welcome_screen();

	}


void welcome_screen()
	 {
	   system("cls");
	   int choice_input;


	   printf("\t\t\t\t********* W E L C O M E ********* \n" );
       printf("\n\n");
	   printf(" \t\t\t\t\t\tT O\n"  );
       printf("\n\n");
	   printf(" \t\t\t\tSOFTWARE DEVLOPMENT CAPSTONE PROJECT  \n");
       printf("\n\n");

       printf("1.Check Diabetic\t\t\t  2.View All Records\n" );
       printf("3.Search Record\t\t\t\t  4.Delete Record\n" );
       printf("\n\n");
       printf("Enter Your Choice : " );
       cin>>choice_input;
       printf("\n\n\n\n");
	   printf("\t\t\t******** PRESS ANY KEY TO CONTINUE ********* \n");
	   getch();
	   return;
	}

void getvalue()
	{
    system("cls");
    string name,sex;
    int age,wt,ht,id;
    fstream file;

	 printf(" P E R S O N A L   I N F O R M A T I O N\n");
	 printf("I D        : ");
     cin>>id;
     cout<<endl;
	 printf("N A M E        : ");
     cin>>name;
     cout<<endl;
     printf("A G E          : ");
     cin>>age;
     cout<<endl;
	 printf("W E I G H T    : ");
     cin>>wt;
     cout<<endl;
	 printf("H E I G H T    : ");
     cin>>ht;
     cout<<endl;
	 printf("S E X (M/F)    : ");
     cin>>sex;
     cout<<endl;
     file.open("D://patientlist.txt",ios::out | ios::app);
     file << " " << id << " "<< name << " " << wt<< " " << sex << "\n";
	 file.close();
	 getch();
	 return;
	}
void diagnosis(void)
     {
     //system("cls");

     printf("\t\t\t\t **  D I A G N O S I S   W I N D O W **   ");
     cout<<"\n\n\n";
     printf(" \t\t\t\tLet's have alook at  symptoms.........");
     cout<<"\n\n\n";
     printf(" \t\t\t\tPlease enter the form in next page .");
     cout<<"\n\n\n\n\n\n\t\t\t ";

     printf("\t\t***** PRESS ANY KEY ***** ");
     getch();
     }
void getlevel1_symptoms(void)
    {
        //char s[10];
     system("cls");
     int i=0;

     printf( "\t\t\t *** MEDICAL DIAGONOSIS FORM *** \n\n\n\n\n");

     printf("\t\tAPPETITE (H(HIGH),/L(LOW),/N(NORMAL): ") ;

     cin>>s[i];
     s[i]=toupper(s[i]);
     ++i;
     cout<<endl;

     printf("\t\tFREQUENCY OF THIRST(H(HIGH),/L(LOW)/N(NORMAL): ");

     cin>>s[i];
     s[i]=toupper(s[i]);
     ++i;
     cout<<endl;

     printf("\t\tFREQUENCY OF URINATION(H(HIGH),/L(LOW),/N(NORMAL): ");

     cin>>s[i];
     s[i]=toupper(s[i]);
     ++i;
     cout<<endl;

     printf("\t\tVISION (I(IMPAIRMENT),/N(NORMAL) : ");

     cin>>s[i];
     s[i]=toupper(s[i]);
     ++i;
     cout<<endl;

     printf("\t\tURINE SUGAR(P(PASSIVE)/A(ACTIVE) : ");

     cin>>s[i];
     s[i]=toupper(s[i]);
     ++i;
     cout<<endl;

     printf("\t\tKETONUREA(P(PASSIVE)/A(ACTIVE) : ");

     cin>>s[i];
     s[i]=toupper(s[i]);
     ++i;
     cout<<endl;

     printf("\t\tFASTING BLOOD SUGAR(H(HIGH)/L(LOW)/N(NOMAL) : ");

     cin>>s[i];
     s[i]=toupper(s[i]);
     ++i;
     cout<<endl;

     printf("\t\tR B S (H(HIGH)/L(LOW)/N(NORMAL) : ");

     cin>>s[i];
     s[i]=toupper(s[i]);
     ++i;
     cout<<endl;

     printf("\t\tFAMILY HISTORY OF DIABETES(P(PASSIVE)/A(ACTIVE) : ");

     cin>>s[i];
     s[i]=toupper(s[i]);
     ++i;
     cout<<endl;

     printf("\t\tOGTT(D/N) : ");

     cin>>s[i];
     s[i]=toupper(s[i]);
     ++i;

    }

void getlevel2_symptoms()
	       {

		system("cls");
		int j=0;
		//char s[7];
 		  printf("PANCREATITIS(P/A)  : ");
 		  cin>>s[j];
		  s[j]=toupper(s[j]);
		  j++;
		  printf("\n");
 		  printf("CARCINOMA(P/A)  : ");
 		  cin>>s[j];
		  s[j]=toupper(s[j]);
		  ++j;
		  printf("\n");
 		  printf("CIRHHOSIS(P/A)     : ");
 		  cin>>s[j];
		  s[j]=toupper(s[j]);
		  ++j;
		  printf("\n");
 		  printf(" HCTS  (H/L/N)     : ");
 		  cin>>s[j];
		  s[j]=toupper(s[j]);
		  ++j;
		  printf("\n");
 		  printf("HEPATITIS(P/A)    : ");
 		  cin>>s[j];
		  s[j]=toupper(s[j]);
		  ++j;
		  printf("\n");
 		  printf(" HORMONAL DISORDER(P/A): ");
 		  cin>>s[j];
		  s[j]=toupper(s[j]);
		  ++j;
		  printf("\n");
 		  printf(" PANCREATECTOMY(P/A) : ");
 		  cin>>s[j];
		  s[j]=toupper(s[j]);
		  ++j;
		  printf("\n");
		  return;
	      }

