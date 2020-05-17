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
	printf("请输入终止值：");
	scanf("%d",&n);
	int hck;
	printf("输出结果？\n");
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
	  printf("1和%d之间，共有%d个质数。\n最大的质数是%d\n",n,a,LastNum);
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
		printf("1和%d之间，共有%d个质数。\n",n,a);
	}
	printf("用时%d毫秒\n",t1-t0);
	system("pause");
	return 0;
}
