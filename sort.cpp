#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int arraysize;
    std::cout << "Enter array size "; // ���� ������� � ��� ������ � ���������� 
    std::cin >> arraysize;
    std::vector<int> array(arraysize);
    std::cout << "Enter " << arraysize << " value's ";
for (int i = 0; i < arraysize; ++i) {
    std::cin >> array[i];
}
    sort(array.begin(), array.end());;      // ������� ���������� �� ����������� �� ���������� algorithm
    for (int ix = 0; ix < arraysize; ix++)
        std::cout << array[ix] << " ";
    return 0;
}