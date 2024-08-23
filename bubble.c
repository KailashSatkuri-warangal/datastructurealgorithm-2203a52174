#include<stdio.h>
void solution();
int main(){
	int n,i;
	printf("enter a number: ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	solution(a,n);
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
void solution(int x[],int n){
	int i,j,t;
	for(i=0;i<(n-1);i++){
		for(j=0;j<(n-1-i);j++){
			if(x[j]>x[j+1])
			{
				t=x[j];
				x[j]=x[j+1];
				x[j+1]=t;
			}
		}
	}
}
