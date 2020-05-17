#include<iostream>
#include <stdlib.h>
#include<cstdio>
#include<fstream>
using namespace std;
int main(){
	cout<<"欢迎来到寻找质数程序！"<<endl<<endl<<"作者：梁宇轩。"<<endl<<endl; 
	ofstream ocout;
	ocout.open("质数列表.txt");
	long long n,m,i,a;
	a=0;
	cout<<"请输入终止值："; 
	cin>>n;
	cout<<"请选择是否输出文本文档。"<<endl<<"0:不输出。"<<endl<<"1：输出"<<endl;
	bool b;
	cin>>b;
	bool c;
	cout<<"请选择是否在此窗口输出结果。"<<endl<<"0:不输出。"<<endl<<"1：输出"<<endl;
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
	cout<<"共有"<<a<<"个质数"<<endl;
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
			cout<<"目前已计算到："<<i<<endl;
			z=0;
		}
	
	}
	cout<<"共有"<<a<<"个质数"<<endl;
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
			cout<<"目前已计算到："<<i<<endl;
			z=0;
		}
	
	}
	cout<<"1~"<<n<<"内，最大的质数是"<<bei<<endl;
	cout<<"共有"<<a<<"个质数"<<endl;
    }
	ocout.close();
	cout<<"作者：梁宇轩。"<<endl; 
	system("pause");
	return 0;
} 

