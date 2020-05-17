#include<iostream>
#include <stdlib.h>
#include<cstdio>
#include<fstream>
using namespace std;

bool pdzs(unsigned long long djcs){
	unsigned long long cs = 2;
	
	while (djcs%cs != 0 && cs*cs < djcs)
	    ++cs;
	if(cs*cs>djcs)
		return 1;
		
	return 0;
}

int main(){
	unsigned long long zzz,a=0,m;
	ofstream ocout;
	ocout.open("质数列表.txt");
	cout<<"欢迎来到寻找质数程序！\n\n"<<"作者：梁宇轩。\n\n"; 
	cout<<"请输入终止值：";
	cin>>zzz;
	cout<<"请选择是否输出文本文档。"<<endl<<"0:不输出。"<<endl<<"1：输出"<<endl;
	bool txt;
	cin>>txt;
	bool hck;
	cout<<"请选择是否在此窗口输出结果。"<<endl<<"0:不输出。"<<endl<<"1：输出"<<endl;
	cin>>hck;
	if(txt==1&&hck==1){
		for(m=2;m<=zzz;++m){
			if(pdzs(m)){
				cout<<m<<" ";
				ocout<<m<<" ";
				++a;
			} 
		}
		cout<<"\n\n共有"<<a<<"个质数\n\n";	
		cout<<"文本文档输出完毕。"<<endl;
	}
	if(txt==1&&hck==0){
		int bei,z=0; 
    	for(m=2;m<=zzz;++m){
		if(pdzs(m)){
			ocout<<m<<endl;
			++a;
			++z;
			bei=m;
		}
		}
		cout<<"1~"<<zzz<<"之间，最大的质数是"<<bei<<"\n\n共有"<<a<<"个质数。\n\n"<<"文本文档输出完毕。\n\n";
	 
	}
	if(txt==0&&hck==0){
        for(m=2;m<=zzz;++m)
	        if(pdzs(m)) a++;
	    cout<<"1~"<<zzz<<"之间,共有"<<a<<"个质数。";
	}
	if(txt==0&&hck==1){
    	for(m=2;m<=zzz;++m){
		    if(pdzs(m)){
		    ++a;
			    cout<<m<<" ";
		    }
		}
		cout<<"1~"<<zzz<<"之间，共有"<<a<<"个质数。";
	}
	ocout.close();
	system("pause");
	return 0;
}
