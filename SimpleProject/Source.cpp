#include <iostream>
using namespace std;

const int & returnTwelve(){
	const static int & twelve = 12;
	return twelve;
}

int main(int args, char ** cargs) {
	printf("Twelve is %d\n", returnTwelve());

	return 0;
}