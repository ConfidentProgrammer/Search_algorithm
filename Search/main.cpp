#include <iostream>
#include <stdlib.h>
using namespace std;


int main() {
	int i,age=100,size=100; 
	string find;
	string array[size], values[age];
	cout<<"How much values do you want to add: ";
	cin>>size;
	for (i=1; i<=size; ++i){
		system("cls");
		cout<<"Enter Value "<<i<<endl;
		cin>>array[i];
		cout<<"ENTER v : ";
		cin>>age;
		for(int x=1; x<=age; ++x){
			cout<<"ENter: ";
			cin>>values[x];
		}
		
	}
	
	cout<<"Enter Finding Value: ";
	cin>>find;
	
	for(i=1; i<=size; ++i){
		if(array[i]==find){
			cout<<array[i]<<" is at "<<i<<" position..";
		}
	}
	return 0;
}
