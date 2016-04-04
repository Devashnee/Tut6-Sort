#include<iostream>

template <class name>
void sort(name a[],name b)
{
	name i, j;
	bool flag = 1;    // set flag to 1 to start first pass
	name temp;             // holding variable

	for (i = 1; (i <= b) && flag; i++)
	{
		flag = 0;
		for (j = 0; j < (b - 1); j++)
		{
			if (a[j + 1] > a[j])      // ascending order simply changes to <
			{
				temp = a[j];             // swap elements
				a[j] = a[j + 1];
				a[j + 1] = temp;
				flag = 1;               // indicates that a swap occurred.
			}
		}
	}
	//return a[];
}
using namespace std;
int main(){
	int array[10] = { 25, 65, 32, 45, 12, 2, 36, 26, 3, 20 };
	const int x = 10;
	sort(array, x);
	for (int i = 0; i < 10; i++){
		cout << array[i] << endl;
	}

}