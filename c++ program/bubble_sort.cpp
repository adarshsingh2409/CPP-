#include <iostream>
using namespace std;
bool flag;
void bubble_sort(int array[], int n)
{
    for (int i = 0; i <n-1; i++)
    {
        flag = 0;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (array[j] > array[j + 1])
            {
                swap(array[j], array[j + 1]);
                flag = 1;
            }
        }
        if (flag == 0)
            break;
    }
}

int main()
{
    int array[] = {2, 6, 8, -9, 21, 24, 0, 13, 27};
    int n = sizeof(array) / sizeof(int);

    bubble_sort(array, n);
    for(auto x : array){
        cout<<x<<",";
    }

    return 0;
}