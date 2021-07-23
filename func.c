#include<stdio.h>

int fact(int z){
	int result1=1,i;
	for(i=1;i<=z;i++){
		result1 *=i;
	}
	return result1;
}
int func(int x,int y){
	int result2=fact(x)/(fact(x-y)*fact(y));
}

int main(void){
	int a,b;
	printf("please enter two integer:");
	scanf("%d%d",&a,&b);
	printf("combination of a with b : %d",func(a,b));
}
