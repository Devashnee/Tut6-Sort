#include<iostream>

template <class name>
void sort(name a[],name b)
{
	int i, j;
	bool flag = 1;    // set flag to 1 to start first pass
	name temp;             // holding variable

	for (i = 1; (i <= b) && flag; i++)
	{
		flag = 0;
		for (j = 0; j < (b - 1); j++)
		{
			if (a[j + 1] > a[j])      // descending order
			{
				temp = a[j];             // swap elements
				a[j] = a[j + 1];
				a[j + 1] = temp;
				flag = 1;               // indicates that a swap occurred.
			}
		}
	}

}
using namespace std;
int main(){

	const int x = 10;
	int array[x] = { 25, 65, 32, 45, 12, 2, 36, 26, 3, 20 };
	sort(array, x);
	cout << "integer point values" <<endl;
	for (int i = 0; i < 10; i++){
		cout  << array[i] << endl;
	}
	const int y = 10;
	float arrays[y] = { 25.23, 65.22, 32.0, 45.55, 12.2, 2.00, 36.25, 26.2, 3.0, 20.56 };
	sort(arrays, float(y));
	cout << "floating point numbers"  << endl;
	for (int i = 0; i < 10; i++){
		cout << arrays[i] << endl;
	}

}