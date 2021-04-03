#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>

using namespace std;

void MySort(int inArraySize, int* inArray) {
    for (int i = 0; i < inArraySize - 1; i++) {
        for (int j = 0; j < inArraySize - i - 1; j++) {
            if (inArray[j] > inArray[j + 1]) {
                // меняем элементы местами
                int temp = inArray[j];
                inArray[j] = inArray[j + 1];
                inArray[j + 1] = temp;
            }
        }
    }
}
int main()
{
    int arraysize;
    std::cout << "Enter array size "; 
    std::cin >> arraysize;
    std::vector<int> array(arraysize);
    std::cout << "Enter " << arraysize << " value's ";
    for (int i = 0; i < arraysize; ++i) {
        std::cin >> array[i];
    }
    MySort(arraysize, data(array));      
    for (int ix = 0; ix < arraysize; ix++)
        std::cout << array[ix] << " ";
    return 0;
}
