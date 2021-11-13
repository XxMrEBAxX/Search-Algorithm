// Search.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include "SequentialSearch.h"
#include "BinarySearch.h"

using namespace std;
int main()
{
    const int length = 10;
    int arr[length] = {1,2,3,4,5,6,7,8,9,10};
    BinarySearch sS(arr, length);
    cout << sS.NSearch(10) + 1 << "번째 있습니다." << endl;
}
