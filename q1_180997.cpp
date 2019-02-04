// Q NO.1.cpp :for entering and checking qualification and institute name of user

//including header files
#include<iostream>
#include"githubuser.h"
#include<string>
#include<fstream>
using namespace std;


void readdatafromfile(githubuser* &user,string location)//function for reading data from file
{
	int no_of_users;//initializing the number of users
	int foldercount;//initialing to calculate how many folders are present
	ifstream read;
	read.open(location);//reading data from file
	read>>no_of_users;
	user=new githubuser[no_of_users];
	for(int a=0;a<no_of_users;a++)
	{
		read>>user[a].firstName;
		read>>user[a].userName;
		read>>user[a].emailid;
		read>>foldercount;
		user[a].FolderName = new string [foldercount];
		for(int s=0;s<foldercount;s++)
		{
			read>>user[a].FolderName[s];
		}
	}
}
//taking educational background and qualification level
void setEduBckGrnd(githubuser* &user)
{
	for(int a=0;a<2;a++)
	{
		user[a].institute_name=new string;
		user[a].qualification_level=new string;
	}
	for(int a=0;a<2;a++)
	{
		cout<<user[a].userName<<"enter the nme of institue : ";
	    cin>>*user[a].institute_name;
	    cout<<user[a].userName<<"Enter your level of qualification :";
	    cin>>*user[a].qualification_level;
	}
}
//printing information of users
void print(githubuser* &user)
{
	int z=0;
	for(int a=0;a<2;a++)
	{
		cout<<"first name of "<<a+1<<"user is :"<<user[a];//for checking firstname of user
		cout<<"User name of "<<a+1<<"user is :"<<user[a].userName<<endl;//for checking username of user
		cout<<"Emailid of "<<a+1<<"user is :"<<user[a].emailid<<endl;//for checking emailid of user
		for(int s=0;s<2;s++)
			{
				cout<<"folder name is : "<<user[a].FolderName[s]<<endl;
	        }
	    cout<<"Do you want to check the educational information of student"<<endl<<endl<<endl<<"If yes press 1 else press 0";
	    cin>>a;
	    if(a==1 && user[a].institute_name != nullptr)
		   {
			 cout<<"The name of institue is "<<*user[a].institute_name<<endl;
		     cout<<"Qualification level of user is"<<*user[a].qualification_level<<endl;
		   }
	}
}
void removing_data(githubuser* &user)
{
	for(int a=0;a<2;a++)
	{
		user[a].institute_name=nullptr;
	    user[a].qualification_level=nullptr;
	}
}
void backup(githubuser* &originalArry,githubuser* &backupArry,int userCount)
{
	backupArry =new githubuser[userCount];
	for(int a=0;a<userCount;a++)
		{
			backupArry[a].FolderName=new string [2];
        }
	for(int a=0;a<userCount;a++)
	   {
		   backupArry[a].firstName=originalArry[a].firstName;
		   backupArry[a].userName=originalArry[a].userName;
		   backupArry[a].emailid=originalArry[a].userName;
		   backupArry[a].Foldercount=originalArry[a].Foldercount;
		   backupArry[a].qualification_level=originalArry[a].qualification_level;
		   backupArry[a].institute_name=originalArry[a].institute_name;
		   for(int s=0;s<2;s++)
			   {
				   backupArry[a].FolderName[s]=originalArry[a].FolderName[a];
		       }
	   }
}
void end(githubuser* &p,githubuser* &q)
{
	for (int a = 0;a < 2;a++)
	{
		p[a].FolderName = nullptr;
		q[a].FolderName = nullptr;
	}
}
int menu()
{
	int z;
	cout << "                   ------------MENU------------     " << endl;
	cout <<"Press 1 to take input from the file : "<<endl;
	cout<<"Press 2 to add Eductional information : "<<endl;
	cout<<"Press 3 to print all the information of user : "<<endl;
	cout<<"Press 4 to delete the educational information : "<<endl;
	cout <<"press 5 to backup your data : "<<endl;
	cout<< "press 0 to exit the programme :"<<endl;
	cin >> z;
	return z;
}
int main()
{
	int z = 1;
	string location;
	cout << endl << "enter the location of your file" << endl;
	cin >> location;
	githubuser *Backup;
	githubuser *user;
	while (z != 0)
	{
		z = menu();
		if (z == 1)
		{
			cout << endl;
			readdatafromfile(user, location);
		}
		if (z == 2)
		{
			cout << endl;
			cout << "set the educational background" << endl;
			setEduBckGrnd(user);
			cout << endl;
		}
		if (z == 3)
		{
			cout << endl;
			print(user);
			cout << endl;
		}
		if (z == 4)
		{
			cout << endl;
			removing_data(user);
			cout << endl;
		}
		if (z == 5)
		{
			cout << endl;
			backup(user, Backup, 2);
			cout << endl;
		}
	}
	end(user, Backup);
	system("pause");
}

