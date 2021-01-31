#include <iostream>
#include <stdio.h>

using namespace std;

int getArray(int x[]);


int main (){
  int a[5];

 	int e = getArray(a);


  return 0;
}
int getArray(int x[]){
	int userInput;

	for (int count = 0; count < 10; count ++){
		cout << "Please enter 10 numbers: ";
		cin >> userInput;

		userInput = x[10];
	}
}
