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
	ocout.open("�����б�.txt");
	cout<<"��ӭ����Ѱ����������\n\n"<<"���ߣ���������\n\n"; 
	cout<<"��������ֵֹ��";
	cin>>zzz;
	cout<<"��ѡ���Ƿ�����ı��ĵ���"<<endl<<"0:�������"<<endl<<"1�����"<<endl;
	bool txt;
	cin>>txt;
	bool hck;
	cout<<"��ѡ���Ƿ��ڴ˴�����������"<<endl<<"0:�������"<<endl<<"1�����"<<endl;
	cin>>hck;
	if(txt==1&&hck==1){
		for(m=2;m<=zzz;++m){
			if(pdzs(m)){
				cout<<m<<" ";
				ocout<<m<<" ";
				++a;
			} 
		}
		cout<<"\n\n����"<<a<<"������\n\n";	
		cout<<"�ı��ĵ������ϡ�"<<endl;
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
		cout<<"1~"<<zzz<<"֮�䣬����������"<<bei<<"\n\n����"<<a<<"��������\n\n"<<"�ı��ĵ������ϡ�\n\n";
	 
	}
	if(txt==0&&hck==0){
        for(m=2;m<=zzz;++m)
	        if(pdzs(m)) a++;
	    cout<<"1~"<<zzz<<"֮��,����"<<a<<"��������";
	}
	if(txt==0&&hck==1){
    	for(m=2;m<=zzz;++m){
		    if(pdzs(m)){
		    ++a;
			    cout<<m<<" ";
		    }
		}
		cout<<"1~"<<zzz<<"֮�䣬����"<<a<<"��������";
	}
	ocout.close();
	system("pause");
	return 0;
}
