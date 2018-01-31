
#include<iostream>
#include<cstdlib>
using namespace std;



int main()
{
	int num;

	for (int i = 0; i < 10; i++) {

		srand(i + 1); // using i to get different srand values
		num = rand();
		cout << num << endl;
	}
	getchar();
	return 0;
}