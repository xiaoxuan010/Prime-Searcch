#include <cstdlib>
#include <cstdio>
#include <fstream>
#include <ctime>
using namespace std;

bool testPrime(unsigned long long num){
	unsigned int div = 2;
	while (div*div < num){
		if( num%div==0)
			return false;
		++div;
	}
	return true;
}

int main(){
	unsigned long long endNum,priCon=0,m;
	unsigned int txt,hck;

	printf("\nWelcome to Prime Number Searcher by LiangYuxuan\n\n");
	do{
		printf("Please enter a termination value(2-2^64):\n");
		scanf("%d",&endNum);
	}while( endNum<2);
	do{
		printf("\nDo you want to output a file containing the results of the operation?(0/1):\n");
		scanf("%d",&txt);
	}	while(txt>1);
	do{
		printf("\nWould you like to print the results here?(0/1):\n");
		scanf("%d",&hck);
	}while(hck>1);
	system("cls");
	unsigned long long startTime,endTime;
	startTime = clock();
	if( txt==1){
		ofstream ocout;
		ocout.open("Primes.txt");
		if( hck==1){
			for( m=2; m<=endNum; ++m){
			  if( testPrime(m)){
				  printf("%d\t",m);
				  ocout<<m<<endl;
				  ++priCon;
			  }
			}
			printf("\n\nThere are %d prime numbers.\nFile Output Completed.\n",priCon);
		}
		else{
    	for(m=2;m<=endNum;++m){
			  if(testPrime(m)){
			    ocout<<m<<endl;
			    ++priCon;
		    }
		  }
			printf("There are %d prime numbers between 0 and %d. \nFile Output Completed.\n",priCon,endNum);
		}
		ocout.close();
	}
	else{
		if( hck==1){
			for( m=2; m<=endNum; ++m){
		    if(testPrime(m)){
					++priCon;
			    printf("%d\t",m);
		    }
			}
			printf("\n\nThere are %d prime numbers between 0 and %d.\n",priCon,endNum);
		}
		else{
			for( m=2; m<=endNum; ++m)
			  if( testPrime(m))
			  	++priCon;
  			printf("There are %d prime numbers between 0 and %d.\n",priCon,endNum);
		}
	}
	endTime = clock();
	printf("Time:%dms\n",endTime-startTime);
	system("pause");
	return 0;
}
