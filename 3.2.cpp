#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int const n=10000;

int main(int argc, char** argv) {
	ifstream we("C:/cpp/dane.txt");
	int i=0, j=0, pom1=0, max=0, maxi=0;
	int cyfry[10];
	string a="";
	char pom=0;
	
	for(i=0; i<10; i++){
		cyfry[i]=0;
	}
	
	we>>a;

	for(i=0; i<n; i++){
		pom=a[i];
		if(pom>=48 && pom<=57){
			pom-='0';
			cyfry[pom]++;
		}	
	}
	
	for(i=0; i<10; i++){
		if(cyfry[i]>max){
			max=cyfry[i];
			maxi=i;
		}
	}
	
	cout<<maxi<<" "<<cyfry[maxi];
	
	return 0;
}
