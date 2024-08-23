#include<stdio.h>
void song();
void rev();
void print();
int main(){
	int i,n;
	//scanf("%d",&n);
	n=4;
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	song(a,n);
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
		printf("%03d\n",x[i]);
	}
}
void print(int x[],int n){
	int i;
	for(i=0;i<n;i++){
		if (i < n) {
        printf("\n");
    }
		printf("%d\n",x[i]);
	}
}
