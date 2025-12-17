#include <iostream>

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

void printList(const int list[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << list[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::cout << "--- Summary Exercise 4: Merging Sorted Lists ---" << std::endl;
    
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