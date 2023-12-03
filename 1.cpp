#include<iostream>
using namespace std;
int main() {
	int i, j;
	for (i = 1; i <= 9; i++)//外循环
	{
		for (j = 1; j <= i; j++)//内循环
		{
			cout << i<<"*"<<j<<"="<<i*j<<"  ";
		}
		cout << endl;
	}
}
