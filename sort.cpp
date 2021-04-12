#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>

using namespace std;

void MySort(int* arr, long size) {
    int i = 0, j = 0;
    int x;
    for (i = 0; i < size; i++) {
        x = arr[i];
        for (j = i - 1; j >= 0 && arr[j] > x; j--) {
            arr[j + 1] = arr[j];
        }
        arr[j + 1] = x;
    }
}

int main()
{
    int i;
    int arraysize;
    std::vector<int> MyArray;
    std::cout << "Enter value's (enter 'stop' if you end) ";
    while (std::cin >> i) {
        MyArray.push_back(i);
        if (i == char("stop"))
            break;
    }
    arraysize = size(MyArray);
    MySort(MyArray.data(), arraysize);
    for (int ix = 0; ix < arraysize; ix++)
        std::cout << MyArray[ix] << " ";
    return 0;
}
