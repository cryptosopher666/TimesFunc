#include<iostream>
#include<conio.h>
using namespace std;

int times(int,int);

int main(){
	int a , b;
	cout<<"Enter two numbers: "<<endl;
	cin>>a>>b;
	cout<<times(a,b);
	getch();
	return 0;
}
int times(int a , int b){
	if(b==1)
	return a;
	else if(b==-1)
	return -a;
	else if(b>1)
	return times(a,b-1)+a;
	else
	return times(a,b+1)-a;
}


