#include<iostream>

long int compute(long int, long int);
using namespace std;
int j;
struct GEN {
	long int a[2] = {0,0}, b[2] = { 0,0 }, ans[100], d[100], num = 1, bigA = 0;
};
int main() {
	GEN N;
	cout << "Enter number : ";
	cin>>N.a[1];
	N.b[1] = N.a[1];
	N.b[0] =compute(N.a[1],N.b[0]);
	
	for (j=0;j< N.b[0]; j++) {
		N.d[j] = N.b[1] % 10;
		N.ans[j] = 0;
		
		for (int i = 1;i <=N.num;i++) {
			N.ans[j] = N.ans[j] + N.d[j];
			
		}
		N.b[1] = N.b[1] / 10;
		N.num = N.num + 1;
	}
	for (int i = 0; i < N.b[0]; i++)
	{
		N.bigA = N.bigA + N.ans[i];
	}
	cout << "SUMMARY : "<<N.bigA;
	return 0;
}

long int compute(long int x, long int y) {
	while (x != 0) {
		x = x / 10;
		y = y + 1;
	}
	return y;
}