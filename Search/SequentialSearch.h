#pragma once
class SequentialSearch
{
	int* arr;
	int length;
public:
	SequentialSearch(int arr[], int length) : length(length)
	{
		this->arr = new int[length];
		for (int i = 0; i < length; i++)
		{
			this->arr[i] = arr[i];
		}
	}
	~SequentialSearch()
	{
		delete[] arr;
	}
	int Search(int x)
	{
		int index = -1;
		for (int i = 0; i < length; i++)
		{
			if (arr[i] == x)
			{
				index = i;
				break;
			}
		}
		return index;
	}
};
