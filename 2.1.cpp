#include <iostream>

using namespace std;

int ciecie(int k){
	long long i=0, a=0, b=0, kpot=0, kk=k, pom=0, pot=1;
	while(kk>0){
		kk/=10;
		kpot++;
	}
	kpot/=2;
	
	for(i=0; i<kpot; i++){
		pom=k%10;
		b+=pom*pot;
		pot*=10;
		k/=10;
	}
	a=k;
	cout<<a<<" "<<b;
	
	return 0;
}

int main(int argc, char** argv) {
	ciecie(123456);
	return 0;
}
