#include<stdlib.h>
#include<cstdio>
#include<ctime>
using namespace std;

bool pdzs(unsigned long djcs){
	unsigned long long cs = 2;
	while(djcs%cs != 0 && cs*cs <= djcs) ++cs;
	if(cs*cs>djcs) return true;
	return false;
}

int main(){
	unsigned long n,a=0,m,t0,t1;
	printf("��������ֵֹ��");
	scanf("%d",&n);
	int hck;
	printf("��������\n");
	scanf("%d",&hck);
	if(hck==0){
    unsigned long LastNum;
    t0=clock();
    for(m=2;m<=n;++m)
      if(pdzs(m)){
        ++a;
		LastNum=m;
	  }
    t1=clock();
	  printf("1��%d֮�䣬����%d��������\n����������%d\n",n,a,LastNum);
	}
	else{
		t0=clock();
	  for(m=2;m<=n;++m){
      if(pdzs(m)){
        ++a;
        printf("%d ",m);
	    }
    }
		t1=clock();
		printf("1��%d֮�䣬����%d��������\n",n,a);
	}
	printf("��ʱ%d����\n",t1-t0);
	system("pause");
	return 0;
}
