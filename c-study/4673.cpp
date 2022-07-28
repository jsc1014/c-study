#include <iostream>
using namespace std;

int d(int n);

int main()
{
	int n = 1;
	int arr[10001];

	for (int i = 0; i < 10000; i++) {
		arr[i] = i;
	}

	int j;
	while (1)
	{
		if (n > 10000)
			break;

		if (d(n) != 0)
		{
			if (d(n) > 10000) 
			{
				n++;
				continue;
			}

			j = d(n);
			arr[j] = 0;
		}
		n++;
	}

	for (int i = 0; i < 10000; i++)
	{
		if (arr[i] == 0)
			continue;
		else
			cout << arr[i] << endl;
	}
}

int d(int n) // n을 생성자로 하여 만들어지는 수
{

	int sum = 0;
	sum = n;

	while (1)
	{
		if (n / 10 == 0)
		{
			sum += n;
			break;
		}

		sum += n % 10;
		n /= 10;
	}

	return sum;
}
