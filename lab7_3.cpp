#include<iostream>
using namespace std;

char before(char x){
	if(x > 'A' and x <= 'Z'){
		return x - 1;
	}else if(x == 'A'){
	    return 'Z';
	}else{
		return '0';
	}
	  
}
