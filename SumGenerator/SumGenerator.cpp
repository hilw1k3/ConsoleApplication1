// SumGenerator.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
#include <bitset>

using namespace std;

void generatePowerSet(const vector<int>& numbers, int index, vector<int>& currentSubset, vector<int>& sums) {
    int n = numbers.size();

    if (index == n) {
        int subsetSum = 0;
        for (const auto& number : currentSubset) {
            subsetSum += number;
        }
        sums.push_back(subsetSum);
        return;
    }

    // Include the current number in the subset
    currentSubset.push_back(numbers[index]);
    generatePowerSet(numbers, index + 1, currentSubset, sums);

    // Exclude the current number from the subset
    currentSubset.pop_back();
    generatePowerSet(numbers, index + 1, currentSubset, sums);
}

// int findSumOfCombinations(const vector<int>& numbers) {
//     vector<int> currentSubset;
//     vector<int> sums;

//     generatePowerSet(numbers, 0, currentSubset, sums);

//     int totalSum = 0;
//     for (const auto& sum : sums) {
//         totalSum += sum;
//     }

//     return totalSum;
// }

/*int main() {
    vector<int> numbers = { 1, 2, 3 };
    vector<int> currentSubset;
    vector<int> sums;

    generatePowerSet(numbers, 0, currentSubset, sums);
    for (const auto& sum : sums) {
        cout << sum << ' ';
    }

    return 0;
}
*/
int main()
{
    const int N = 5;
    int ticketPrice[N] = { 1, 2, 3, 5, 7 };
    for (auto el : ticketPrice) std::cout << el << '\t';
    std::cout << '\n';

    for (size_t i = 0; i < (1 << N); i++)
    {
        std::bitset<N> binary(i);
        //std::cout << binary << '\n';
        int sum = 0;
        for (size_t j = 0; j < N; j++)
        {
            sum += ticketPrice[j] * binary[j];
        }
        std::cout << sum << '\n';
    }
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
