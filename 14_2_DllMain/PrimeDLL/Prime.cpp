#include <stdio.h>

bool is_prime_number(int num)						// num�� �Ҽ��ΰ�?
{
	bool isprime = true;
	for (int i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			isprime = false;
			break;
		}
	}
	return isprime;
}

void FindNumberOfPrimeNumber(int nMax, int* nprime)	// nMax���� �Ҽ� ����?
{
	*nprime = 0;
	for (int i = 2; i <= nMax; i++)
	{
		bool isprime = is_prime_number(i);
		if (isprime) (*nprime)++; // ��
	}
}