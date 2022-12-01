#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<dos.h>
#include<process.h>
#include <fstream>
using namespace std;

void welcome_screen();

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

