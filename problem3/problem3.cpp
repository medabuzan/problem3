// problem3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>

using namespace std;
int A[31];
int B[30], C[30];
//int notPermanent[31];
int i,n=1 ;
int x;
int matrix[10][10];
int important[100000];
int* p = &important[0];

int sum;

void sums(int A[], int l, int r, int sum, int *p)
{
	int ss;
	int i = 0;
	if (l > r) {
		cout << sum << " ";
		ss = sum / l;
		p = &ss;
		p++;
		
		return ;
		
	}

	sums(A, l + 1, r, sum + A[l],p);

	sums(A, l + 1, r, sum,p);
}

int main()
{

	while (scanf_s("%d", &x)) {
		
		A[n] = x;

		n++;
		A[n] = -1;
		int m = n - 1;
		if (getchar() == '\n')
			break;
	}
	n--;

	for (i = 1; i <= n; i++)
		cout << A[i] << ' ';
	cout << '\n';

	for (i = 1; i <= n; i++)
		cout << important[i] << ' ';
	cout << '\n';



	sums(A, 0, n,0,p);
	return 0;
}
