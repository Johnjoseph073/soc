#include<iostream>
using namespacestd;

int digit(int n){
	int i=1;
	while(n-9*i>0){
		n=n-9*i;
		i*=10;
	}

}