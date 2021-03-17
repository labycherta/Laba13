#include <iostream>
using namespace std;

void mes(int *mas,int &h,int &j){
	for (int k1=0;k1<j;k1++)
	for (int k=0;k<h;k++){
	*mas=rand()%9+1;mas++;
	}

}

void main(){
	int n=5,m=n,sum1=0,sum=0;

	int *lin=new int[n];

	int *mas = new int[n*m];
	int *mas1 = new int[n*m];

	mes(&mas[0],n,m);
	mes(&mas1[0],n,m);

	/////////////////////////////////////////////////////
	cout<<"First matrix "<<'\n'<<'\n';
	for(int k=0;k<n;k++){
		for (int k1=0;k1<m;k1++){
			cout<<mas[k*m+k1]<<'\t';}cout<<'\n';
	
	}cout<<'\n';
	cout<<"Second matrix "<<'\n'<<'\n';
		for(int k=0;k<n;k++){
		for (int k1=0;k1<m;k1++){
			cout<<mas1[k*m+k1]<<'\t';}cout<<'\n';
	
	}cout<<'\n';
		//////////////////////////////////////////////////////
		cout<<"Result "<<'\n'<<'\n';		
		for(int k=0;k<n;k++){
		for (int k1=0;k1<m;k1++){
		sum1+=mas1[k1*n+k];sum+=mas[k1*n+k];}
	if (sum>sum1)lin[k]=1;else lin[k]=0;sum=0;sum1=0;
	}
				for (int k=0;k<n;k++)cout<<lin[k]<<'\t';
	delete[] mas;
	delete[] mas1;
system("pause");}