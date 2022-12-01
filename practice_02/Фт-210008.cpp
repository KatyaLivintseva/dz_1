#include <vector>
#include <iostream>

template<typename T>
void PrintVectorr(std::vector<T>& vectorr)
{   
    int len = vectorr.size();
    for (int i = 0; i < len; i++)  
    {
        std::cout << vectorr[i] << " ";
    }
	std::cout << std::endl;
}
template<typename T>
void BubbleSort(std::vector<T>& vectorr)
{
    bool swap = true;
    while (swap)
    {
        swap = false;
        for (int i = 0; i < vectorr.size() - 1; i++)
        {
            if (vectorr[i] > vectorr[i + 1])
            {
                std::swap(vectorr[i], vectorr[i + 1]);
                swap = true;
            }
        }
    }
}
int main()
{
	std::vector<char> chislo = { 'u', 'm', 'a', 'l', 'z', 'x', 'c'};
	std::cout << "Вектор до сортировки: ";
	PrintVectorr<char>(chislo);
    BubbleSort<char>(chislo);
	std::cout << "Вектор после сортировки: ";
	PrintVectorr<char>(chislo);
	
	std::cout << std::endl;

    std::vector<int> numsVec = {46, 1, 202, 23, 11, 78, 13};
	std::cout << "Вектор до сортировки: ";
	PrintVectorr<int>(numsVec);
    BubbleSort<int>(numsVec);
	std::cout << "Вектор после сортировки: ";
	PrintVectorr<int>(numsVec);
	
    return 0;
}
