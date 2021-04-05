#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>

using namespace std;

void MySort(int inSize, int* inArray) {
    for (int i = 0; i <= inSize - 2; ++i) {
        for (int j = 1; j <= inSize - 1 - i; ++j) {
            if (inArray[i + j] > inArray[i])
                std::swap(inArray[i + j], inArray[i]);
        }
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
    MySort(arraysize, MyArray.data());
    for (int ix = 0; ix < arraysize; ix++)
        std::cout << MyArray[ix] << " ";
    return 0;
}
