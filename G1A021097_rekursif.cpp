#include <iostream>
using namespace std;

// Fungsi rekursif untuk mengurutkan array menggunakan
// insertion sort
void insertionSortRecursive(int arr[], int n)
{
	// Basis kasus: jika hanya ada satu elemen atau array kosong,
	// itu sudah diurutkan
	if (n <= 1)
		return;

	// Urutkan n-1 elemen pertama
	insertionSortRecursive(arr, n-1);

	// Ambil elemen terakhir
	int last = arr[n-1];
	int j = n-2;

	/* Pindahkan semua elemen yang lebih besar dari elemen terakhir
	   satu posisi ke depan dari posisi saat ini */
	while (j >= 0 && arr[j] > last)
	{
		arr[j+1] = arr[j];
		j--;
	}

	// Tempatkan elemen terakhir pada posisi yang benar
	arr[j+1] = last;
}

// Fungsi utilitas untuk mencetak array berukuran n
void printArray(int arr[], int n)
{
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
}

/* Program driver untuk menguji jenis penyisipan */
int main()
{
	int arr[] = {18, 3, 29, 12, 91, 4, 14};
	int n = sizeof(arr)/sizeof(arr[0]);

	insertionSortRecursive(arr, n);
	printArray(arr, n);

	return 0;
}
