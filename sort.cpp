#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int arraysize;
    std::cout << "Enter array size "; // Ввод массива и его размер с клавиатуры
    std::cin >> arraysize;
    std::vector<int> array(arraysize);
    std::cout << "Enter " << arraysize << " value's ";
for (int i = 0; i < arraysize; ++i) {
    std::cin >> array[i];
}
    sort(array.begin(), array.end());;      // функция сортировки по возрастанию из библиотеки algorithm
    for (int ix = 0; ix < arraysize; ix++)
        std::cout << array[ix] << " ";
    return 0;
}
