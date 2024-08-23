#include<stdio.h>
void song();
void rev();
void print();
int main(){
	int i;
	int a[4]={99,149,349,299};
	int n=4;
	song(a,n);
	printf("\n Your sorted prices: \n");
		if(a[0]>=1&&a[0]<=100){
		rev(a,n);
		}
		else{
		print(a,n);
		}
}
void song(int x[],int n){
	int i,j,min,pos;
	for(i=(n-1);i>=1;i--)
	{
		min=x[0];
		pos=0;
		for(j=1;j<=i;j++)
		{
			if(min<x[j])
			{
				min=x[j];
				pos=j;
			}
		}
		x[pos]=x[i];
		x[i]=min;
	}
}
void rev(int x[],int n){
	int i;
	for(i=n-1;i>=0;i--){
		printf("%d\t",x[i]);
	}
}
void print(int x[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d\t",x[i]);
	}
}
