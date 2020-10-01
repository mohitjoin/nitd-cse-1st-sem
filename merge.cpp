#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int l, int m, int r)
{
	int i, j, k;
	int n1 = m - l + 1;
	int n2 = r - m;

	int L[n1], R[n2];

	for (i = 0; i < n1; i++)
		L[i] = arr[l + i];
	for (j = 0; j < n2; j++)
		R[j] = arr[m + 1 + j];

	i = 0;
	j = 0;
	k = l;
	while (i < n1 && j < n2)
	{
		if (L[i] <= R[j])
		{
			arr[k] = L[i];
			i++;
		}
		else
		{
			arr[k] = R[j];
			j++;
		}
		k++;
	}

	while (i < n1)
	{
		arr[k] = L[i];
		i++;
		k++;
	}

	while (j < n2)
	{
		arr[k] = R[j];
		j++;
		k++;
	}
}

void mergeSort(vector<int> &arr, int l, int r)
{
	if (l < r)
	{

		int m = l + (r - l) / 2;

		mergeSort(arr, l, m);
		mergeSort(arr, m + 1, r);

		merge(arr, l, m, r);
	}
}

void printArray(vector<int> &arr, int n)
{
	int i;
	for (i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
}

//This function exports input and out to csv file directly.
void writeItM(int n, double t)
{
	fstream fout;
	fout.open("mergeSort_report.csv", ios::out | ios::app);
	// // Insert the data to file
	fout << n << ", " << t << "\n";
}

int main()
{
	int n;
	vector<int> arr;
	for (n = 1; n <= 100000; n = n + 5000)
	{

		for (int i = 0; i < n; i++)
		{
			arr.push_back(rand() % 1000);
		}

		cout << "Elements of array are:" << endl;
		printArray(arr, n);

		clock_t time_req;

		time_req = clock();
		mergeSort(arr, 0, n - 1);
		time_req = clock() - time_req;

		double time_taken_merge = (double)time_req / CLOCKS_PER_SEC;

		writeItM(n, time_taken_merge);

		cout << "Sorted array: \n";
		printArray(arr, n);
		cout << "Time taken by quick sort is " << fixed << setprecision(9) << time_taken_merge << endl;
	}
	return 0;
}
