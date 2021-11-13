#pragma once
class BinarySearch
{
	int* arr;
	int length;
public:
	BinarySearch(int arr[], int length) : length(length)
	{
		this->arr = new int[length];
		for (int i = 0; i < length; i++)
		{
			this->arr[i] = arr[i];
		}
	}
	~BinarySearch()
	{
		delete[] arr;
	}
	int Search(int x)
	{
		return BinSearch(arr, x, 0, length - 1);
	}
	int BinSearch(int arr[], int x, int low, int high)
	{
		int mid;
		if (low > high)
			return -1;
		else
		{
			mid = (low + high) / 2;
			if (x == arr[mid])
				return mid;
			else if (x < arr[mid])
				return BinSearch(arr, x, low, mid - 1);
			else
				return BinSearch(arr, x, mid + 1, high);
		}
	}
	int NSearch(int x)
	{
		return NBinSearch(arr, x, 0, length - 1);
	}
	int NBinSearch(int arr[], int x, int low, int high)
	{
		int result = -1;
		int mid;
		while (low <= high)
		{
			mid = (low + high) / 2;
			if (x == arr[mid])
			{
				result = mid;
				break;
			}
			else if (x < arr[mid])
				high = mid - 1;
			else if (x > arr[mid])
				low = mid + 1;
		}
		return result;
	}
};

