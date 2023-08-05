//  tim vi tri phan tu am lon nhat trong mang.

#include<iostream>
#include<time.h>
#define MAX 100
using namespace std;


void MangNgauNhien(int a[], int n)
{
	srand((unsigned)time(NULL));
	for(int i=0; i<n; i++)
		a[i]=rand() % 100 - rand() % 100;
}

void XuatMang(int a[], int n)
{
	for(int i=0; i<n; i++)
		cout<< a[i] <<"\t";
}

int VTPTAmDTien81(int a[], int n)
{
	{
		for (int i=0; i<n; i++)
		if (a[i]<0)
		return i; 
	} 
	return -1;
}

int VTPTAmLonNhat81(int a[], int n)
{
	int i;
	int vitrimin=VTPTAmDTien81(a,n);
	if(vitrimin!=-1)
	{
		for(i=vitrimin; i<n; i++)
			if(a[i]<0 && a[i]>a[vitrimin])
				vitrimin=i;
		return vitrimin;
	}
	return -1;
}

void main()
{
	int n, a[MAX];
	int AmLonNhat;

	cout<<"So luong phan tu thuc su: "; cin>>n;

	MangNgauNhien(a,n);
	XuatMang(a,n);

	AmLonNhat=VTPTAmLonNhat81(a,n);
	cout<<"\nSo Am Lon nhat mang nam o vi tri: "<< AmLonNhat;
	cout<<endl;
}