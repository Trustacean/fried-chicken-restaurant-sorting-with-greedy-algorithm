#ifndef QUICKSORT_H
#define QUICKSORT_H

#include <vector>
#include "Item.h"

int partition(std::vector<Item>& items, int low, int high)
{
    int pivot = items[high].price_distance;
    int i = low - 1;
    for (int j = low; j < high; j++)
    {
        if (items[j].price_distance < pivot)
        {
            i++;
            std::swap(items[i], items[j]);
        }
    }
    std::swap(items[i + 1], items[high]);
    return i + 1;
}

void quick_sort(std::vector<Item>& items, int low, int high)
{
    if (low < high)
    {
        int pi = partition(items, low, high);
        quick_sort(items, low, pi - 1);
        quick_sort(items, pi + 1, high);
    }
}


#endif // QUICKSORT_H
