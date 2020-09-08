#include<iostream>
using namespace std;

struct employee
{
	int ecode;
	float ebasic,Net;
	char ename[20];
}e[5];
int da,hra,tax;
void accept()
{  cout<<"\n\nENTER DETAILS OF 5 EMPLOYEES PLEASE....\n\n";
  for (int i=0; i<5;++i)
	{cout<<"enter the employee code : ";
	cin>>e[i].ecode;
	cout<<"	enter the employee name : ";
	cin>>e[i].ename;
	cout<<"	enter the employee basic amount : ";
	cin>>e[i].ebasic;

	e[i].Net=e[i].ebasic+0.65*e[i].ebasic+0.15*e[i].ebasic-0.10*e[i].ebasic;
	
}
}
void display()
{   
  cout<<endl<<"ECODE\tNAME\tBASIC SALARY\tNETSALARY\n";
	for(int i=0;i<5;++i)
	{
	cout<<endl<<e[i].ecode<<"\t"<<e[i].ename<<"\t"<<e[i].ebasic<<"\t\t"<<e[i].Net;
	}
}
int main()
{
	accept();
	display();
	return 0;
}
