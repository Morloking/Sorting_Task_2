#include <iostream>

void quickSort(int* arr, int size) {
	if (size <= 1) return; //стандартный случай

	int pivot = arr[size - 1]; //опора

	int high = -1;
	for (int i = 0; i < size - 1; ++i) {
		if (arr[i] <= pivot) {
			++high;
			std::swap(arr[high], arr[i]);
		}
	}
	int position = high + 1;
	std::swap(arr[position], arr[size - 1]);


	quickSort(arr, position); //левая
	quickSort(arr+position+1, size - position - 1); //правая

}

void printArray(const int* arr, int size) {
	for (int i = 0; i < size; ++i) {
		std::cout << arr[i] << " ";
	}
	std::cout << "\n";
}

int main() {
	int arr1[] = { 3, 43, 38, 29, 18, 72, 57, 61, 2, 33 };
	int size1 = sizeof(arr1) / sizeof(arr1[0]);
	std::cout << "Исходный массив: ";
	printArray(arr1, size1);
	quickSort(arr1, size1);
	std::cout << "Отсортированный массив: ";
	printArray(arr1, size1);

	int arr2[] = { 88, 91, 87, 59, 53, 49, 29, 16, 4, 27, 28, 89, 2, 25, 74 };
	int size2 = sizeof(arr2) / sizeof(arr2[0]);
	std::cout << "Исходный массив: ";
	printArray(arr2, size2);
	quickSort(arr2, size2);
	std::cout << "Отсортированный массив: ";
	printArray(arr2, size2);

	int arr3[] = { 24, 66, 20, 79, 30, 16, 19, 62, 94, 59, 0, 7, 59, 90, 84, 60, 95, 62 };
	int size3 = sizeof(arr3) / sizeof(arr3[0]);
	std::cout << "Исходный массив: ";
	printArray(arr3, size3);
	quickSort(arr3, size3);
	std::cout << "Отсортированный массив: ";
	printArray(arr3, size3);



	return 0;
}




