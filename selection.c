#include<stdio.h>
void solution();
int main(){
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	solution(a,n);
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
}
void solution(int x[],int n){
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
