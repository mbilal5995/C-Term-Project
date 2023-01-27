#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<cstring>
#include<cmath>
using namespace std;
void show();
void show()
{
	cout<<"\n\n\t\t\t*******************************************************";
	cout<<"\n\n\t\t\t    ---------------------------\n";
    cout<<"\n\n\t\t\t    |STUDENT MANAGEMENT SYSTEM|\n";
    cout<<"\n\n\t\t\t    ---------------------------\n";
    cout<<"\n\n\t\t\t********************************************************";
}

struct students
{
	int roll_no,marks;
	string name,address;
};

int main()
{
	system("cls");
	show();
	system("color 0b");
	cout<<"\n\n\n\t\t\t\tPlease wait while loading\n\n";
	char aa=177,bb=219;
	cout<<"\t\t\t\t";
	for(int i=0;i<=15;i++)
	cout<<aa;
	cout<<"\r";
	cout<<"\t\t\t\t";
	for(int i=0;i<=15;i++)
	{
		cout<<bb;
		for(int j=0;j<=1e8;j++);// you can also use sleep function instead of for loop
	}
	{
		int i=0,j=0,k=4;
		do
		{
			system("cls");
			show();
			opass:
			int i=0;
			char ch;
			char cpass[15],a[15];
			char pass[15]={"bilal"};
			cout<<"\n\n\n\n\n\n\t\t\tPlease Enter Your Password"<<endl;
			
			while((ch=getch())!='\r')
			{
				if(ch=='\b')
				{
					i--;
					cout<<"\b\b";
				}
				else
				{
					cout<<"*";
					cpass[i]=ch;
					i++;
				}
			}
			cpass[i]='\0';
			int m=(strcmpi(pass,cpass));
			system("cls");
			if(m==0)
			{
				system("cls");
				
				char mp_switch,sr_switch;
				int p,a,c,h,b,f,i,no_of_students,roll_no_temp;
				students s[1000];
				system("cls");
				show();
				cout<<"\n\n\n ENTER NO OF STUDENTS\n";
				cin>>no_of_students;
				for(i=0;i<no_of_students;i++)
				{
					cout<<"\n STUDENTS #"<<(i+1);
					cout<<"\n\n ENTER ROLL NUMBER\t";
					cin>>s[i].roll_no;
					cin.ignore();
					cout<<"\n Enter Name\t";
					getline(cin,s[i].name);
					cout<<"\n Enter Marks\t";
					cin>>s[i].marks;
				}
				system("cls");
				show();
				
				main_program:
				system("cls");
				show();
				cout<<"\n\n1. SEARCH RECORDS\n\n2. VIEW RECORDS\n\n3. UPDATE RECORDS\n\n4. DELETE RECORDS\n\n5. EXIT PROGRAM";
				mp_switch=getch();
				switch(mp_switch)
				{
					case '1':
					{
						system("cls");
						show();
						search_record:
							cout<<"\n\nSEARCH RECORD";
							cout<<"\n\nENTER ROLL NO OF STUDENT TO SEARCH RECORD\t";
							cin>>roll_no_temp;
							for(i=0;i,no_of_students;i++)
							{
								if(s[i].roll_no==roll_no_temp)
								{
									cout<<"\n\n NAME:"<<s[i].name;
									cout<<"\n\nMARKS:"<<s[i].marks;
									searching: 
									cout<<"\n1. SEARCH AGAIN";
									cout<<"\n2. MAIN MENU";
									sr_switch=getch();
									if(sr_switch=='1')
									goto search_record;
									if(sr_switch=='2')
									goto main_program ;
									                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         
								}
								else
								{
									cout<<"\nINVALID CHOICE|PRESS ANY KEY TO CONTINUE\n";
									getch();
									goto searching;
								}
							}
							break;
					}
					case'2':
						{
							system("cls");
							show();
							view_record:
								for(i=0;i<no_of_students;i++)
								{
									cout<<"\n ROLL NO.\t\tNAME\t\tMARKS"<<endl;
									for(i=0;i<no_of_students;i++)
									{
										cout<<s[i].roll_no<<"\t\t\t"<<s[i].name<<"\t\t"<<s[i].marks<<"\t"<<endl;
									}
									cout<<"\nPRESS ANT KEY TO GOTO MAIN MENU\n";
									getch();
									goto main_program;
									
								}
								break;
						
						}
						case '3':
						{
							system("cls");
							show();
							p=0;
							update_records:
								cout<<"\nENTER ROLL NO TO UPDATE RECORD\n";
								cin>>c;
								for(i=0;i<no_of_students;i++)
								{
									if(c==s[i].roll_no)
									{
										cout<<c<<endl;
										cout<<s[i].roll_no;
										cout<<"RECORD FOUND UPDATE NOW";
										cin.ignore();
										cout<<"\nENTER NAME\t";
										getline(cin,s[i].name);
										cout<<"\nENTER MARKS\t";
										cin>>s[i].marks;
										++p;
										
									}
								}
								if(p==0)
								{
									cout<<"\n\nRECORD NOT FOUND|PRESS ANY KEY TO GO TO MAIN MENU\n";
									getch();
									system("cls");
									goto main_program;
									
								}
								if(p!=0)
								{
									cout<<"\n1. MAIN MENU";
									cout<<"\n2. UPDATE MORE RECORDS";
									cin>>f;
									if(f==1)
									{
										goto main_program;
									}
									if(f==2)
									{
										goto update_records;
									}
						}
						break;
			
				
				case '4':
					{
						system("cls");
						show();
						cout<<"\n\nENTER ROLL NO TO DELETE RECORD";
						cin>>h;
						for(i=0;i<no_of_students;i++)
						{
							if(h==s[i].roll_no)
							{
								s[i]=s[i+1];
							}
						}
						break;
					}
				case '5':
					{
						cout<<"\n\n Program is Ended\n\n GOD BLESS YOU!!!!!!!!";
						exit(1);
					}
					break;
					default:
						cout<<"\nINVALID CHOICE PLEASE RUN THE PROGRAM AGAIN";
					}
						
		
			}
		}
			else
			{
					cout<<"\n Please try again"<<endl;
					cout<<"\n";
					system("pause");
			}
			j++;
			cout<<"YOU HAVE"<<k<<"more attempts"<<endl;
			k--;	
		}
		while(j<3);
		cout<<"\n YOU ENTER WRONG PASSWORD";
		cout<<"\n\nCoded by\\Muhammad Bilal\\"<<"endl";
	}
}
