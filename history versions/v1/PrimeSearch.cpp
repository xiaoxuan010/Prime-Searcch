//shouldn't be used
#include <iostream>
#include <stdlib.h>
#include <cstdio>
#include <fstream>
using namespace std;
int main(){
	cout<<"\nWelcome to Prime Number Searcher\n"; 
	ofstream ocout;
	ocout.open("Primes.txt");
	long long n,m,i,a;
	a=0;
	cout<<"Please enter a termination value"; 
	cin>>n;
	cout<<"��ѡ���Ƿ�����ı��ĵ���"<<endl<<"0:�������"<<endl<<"1�����"<<endl;
	bool b;
	cin>>b;
	bool c;
	cout<<"��ѡ���Ƿ��ڴ˴�����������"<<endl<<"0:�������"<<endl<<"1�����"<<endl;
	cin>>c;
	if ((b==1) && (c==1)){
	for(m=2;m<=n;m++)
	{
		i=2;
		while (m%i!=0 && i<=m-1)
		    i++;
		if(i>m-1)
		{
			cout<<i<<" ";
			ocout<<i<<" "; 
			a++;
		}
	
	}
	
    }
    if ((b==0)&&(c==1)){
    	for(m=2;m<=n;m++)
	{
		i=2;
		while (m%i!=0 && i<=m-1)
		    i++;
		if(i>m-1)
		{
			cout<<i<<" ";
			a++;
		}
	
	}
	cout<<"����"<<a<<"������"<<endl;
    }
    if ((b==1) && (c==0)){
    	int z=0;
    	for(m=2;m<=n;m++)
	{
		i=2;
		while (m%i!=0 && i<=m-1)
		    i++;
		if(i>m-1)
		{
			ocout<<i<<" ";
			a++;
			z++;
		}
		if(z==1000){
			cout<<"Ŀǰ�Ѽ��㵽��"<<i<<endl;
			z=0;
		}
	
	}
	cout<<"����"<<a<<"������"<<endl;
    }
    if ((b==0) && (c==0)){
    	int bei;
    	int z=0;
    	for(m=2;m<=n;m++)
	{
		i=2;
		while (m%i!=0 && i<=m-1)
		    i++;
		if(i>m-1)
		{
			a++;
			z++;
			bei=i;
		}
		if(z==1000){
			cout<<"Ŀǰ�Ѽ��㵽��"<<i<<endl;
			z=0;
		}
	
	}
	cout<<"1~"<<n<<"�ڣ�����������"<<bei<<endl;
	cout<<"����"<<a<<"������"<<endl;
    }
	ocout.close();
	cout<<"���ߣ���������"<<endl; 
	system("pause");
	return 0;
} 

