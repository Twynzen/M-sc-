#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	
	int num1;
	
	do{
	
	cout<<"Digite el numero del que desea la tabla de multiplicar:  ";cin>>num1;
}while((num1<1)||(num1>10));

for(int i=1;i<=20;i++){
	cout<<num1<<" * "<<i<<" = "<<num1*i<<endl;
}
	cout<<"\n\n";
	system("pause;");
	return 0;
}
