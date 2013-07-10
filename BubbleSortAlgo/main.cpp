#include <iostream>

using std::cin;
using std::cout;

template<typename T>
void BubbleSort(T* ArrayToSort, size_t SizeOfArray)
{
    for (size_t i = 0; i < SizeOfArray - 1; ++i)
    {
        for (size_t j = SizeOfArray - 1; j > i; --j)
        {
            if(ArrayToSort[j - 1] > ArrayToSort[j])
            {
                T temporary = ArrayToSort[j];
                ArrayToSort[j] = ArrayToSort[j - 1];
                ArrayToSort[j - 1] = temporary;
            }
        }
    }

    return;
}

int main()
{
    size_t ElementsCount = 0;
    cout << "Enter number of elements in the array:\n";
    cin >> ElementsCount;

    int ArrayToSort[ElementsCount];
    cout << "Enter elements:\n";

    for(size_t i = 0; i < ElementsCount; ++i)
    cin >> ArrayToSort[i];

    BubbleSort(ArrayToSort, ElementsCount);

    cout << "Sorted array:\n";
    for(size_t i = 0; i < ElementsCount; ++i)
    cout << ArrayToSort[i] << ' ';
    cout << "\n";
}
