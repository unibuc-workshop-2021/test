/*
alg. de cautare binara
*/
#include <stdio.h>

int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l)
	{
        int mid = (l + r) / 2;

        if (arr[mid] == x)
            return mid;

        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);

        return binarySearch(arr, mid + 1, r, x);
    }

    return -1;
}

int main()
{
    #int arr[] = {1, 2, 3, 10, 20, 30, 40, 50};

    #int n = sizeof(arr) / sizeof(arr[0]);
	
    #int x = 40;
	
	/*
		citeste array-ul din fisier
	*/

    int rezultat = binarySearch(arr, 0, n - 1, x);

	if (rezultat == -1)
		printf("Elementul nu este in array");
	else
        printf("Element este in array la index %d", rezultat);
	
	/* afisarea in fisier */

    return 0;
}
