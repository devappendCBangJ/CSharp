#include <stdio.h>

void FindNumberOfPrimeNumber(int nMax, int* nprime);

/////////////////////////////////////////////////////////////
//  Export functions
/////////////////////////////////////////////////////////////
extern "C" __declspec(dllexport) void dllFindNumberOfPrimeNumber(int nMax, int* nprime)	// dll�� �Լ� export ��
{
	FindNumberOfPrimeNumber(nMax, nprime);
}