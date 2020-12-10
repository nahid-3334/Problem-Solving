#include <stdio.h>

//infinity: actually a very large number
#define INF 999

//total different denominations of coins available
#define N 3

//amount for which we are making change
#define A 6

void display(int arr[A+1]);
void coinChange(int d[N+1], int C[A+1], int S[A+1]);
void coinSet(int d[N+1], int S[A+1]);

int main(void) {
	//denomination d of the coins
	//we will start from index 1
	//so, index 0 is set to 0
	int d[N+1] = {0, 1, 2, 5};

	//Minimum number of coins required to make change
	int C[A+1];

	//S contain the index of the coin to be included
	//in the optimal solution
	int S[A+1];

	//compute minimum number of coins required
	coinChange(d, C, S);

	//display the content of the C array
	printf("\nC[p]\n");
	display(C);

	//display the content of the S array
	printf("\nS[p]\n");
	display(S);

	//display the minimum number of coins required to
	//make change for amount A
	printf("\nMin. no. of coins required to make change for amount %d = %d\n", A, C[A]);

	//display the coins used in the optimal solution
	printf("\nCoin Set\n");
	coinSet(d, S);

	return 0;
}

void coinChange(int d[N+1], int C[A+1], int S[A+1]) {
	int i, p, min, coin;

	//when amount is 0
	//then min coin required is 0
	C[0] = 0;
	S[0] = 0;

	for(p = 1; p <= A; p++) {
		min = INF;
		for(i = 1; i <= N; i++) {
			if(d[i] <= p) {
				if(1 + C[p - d[i]] < min) {
					min = 1 + C[p - d[i]];
					coin = i;
				}
			}
		}
		C[p] = min;
		S[p] = coin;
	}
}

void coinSet(int d[N+1], int S[A+1]) {
	int a = A;
	while(a > 0) {
		printf("Use coin of denomination: %d\n", d[S[a]]);
		a = a - d[S[a]];
	}
}

void display(int arr[A+1]) {
	int c;
	for(c = 0; c <= A; c++) {
		printf("%5d", arr[c]);
	}
	printf("\n");
}
