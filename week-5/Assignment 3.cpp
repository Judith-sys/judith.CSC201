#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

void printList(const int list[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << list[i] << " ";
    }
    std::cout << std::endl;
}

void merge(const int list1[], int size1, const int list2[], int size2, int list3[]) {
    int i = 0;
    int j = 0;
    int k = 0;

    while (i < size1 && j < size2) {
        if (list1[i] <= list2[j]) {
            list3[k++] = list1[i++];
        } else {
            list3[k++] = list2[j++];
        }
    }

    while (i < size1) {
        list3[k++] = list1[i++];
    }

    while (j < size2) {
        list3[k++] = list2[j++];
    }
}

int main() {
    std::cout << "--- DEMO 1: Die Rolling Simulation (Exercise 3) ---" << std::endl;
    
    const int ROLLS = 10000;
    int counts[6] = {0}; 

    std::srand(std::time(0)); 

    for (int i = 0; i < ROLLS; ++i) {
        int face = (std::rand() % 6) + 1;
        counts[face - 1]++;
    }

    std::cout << "Die rolled " << ROLLS << " times." << std::endl;
    std::cout << "Face" << std::setw(10) << "Count" << std::endl;
    std::cout << "----" << std::setw(10) << "-----" << std::endl;

    for (int i = 0; i < 6; ++i) {
        std::cout << std::setw(4) << i + 1 << std::setw(10) << counts[i] << std::endl;
    }

    std::cout << "\n=================================================\n" << std::endl;

    std::cout << "--- DEMO 2: Merging Sorted Lists (Exercise 4) ---" << std::endl;
    
    const int listA[] = {2, 3, 8, 10};
    const int sizeA = 4;
    
    const int listB[] = {1, 7, 9, 11, 13};
    const int sizeB = 5;

    const int sizeC = sizeA + sizeB;
    int listC[sizeC];

    std::cout << "List 1: ";
    printList(listA, sizeA);
    std::cout << "List 2: ";
    printList(listB, sizeB);

    merge(listA, sizeA, listB, sizeB, listC);

    std::cout << "Merged List (List 3): ";
    printList(listC, sizeC); 

    return 0;
}