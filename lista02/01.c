#include<stdio.h>

int par(int n){
	if(n%2==0){
		return 0;
	}
	else
		return 1;	

}

int main(){
	int x;
	scanf("%d",&x);
	printf("%d \n",par(x));
	 
}
