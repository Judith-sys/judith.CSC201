#include <iostream>
#include <vector>
#include <algorithm> 

// Function to get the grade based on score and best score
char getGrade(int score, int best) {
    if (score >= best - 10) {
        return 'A';
    } else if (score >= best - 20) {
        return 'B';
    } else if (score >= best - 30) {
        return 'C';
    } else if (score >= best - 40) {
        return 'D';
    } else {
        return 'F';
    }
}

int main() {
    std::cout << "--- Summary Exercise 2: Student Grading Program ---" << std::endl;
    
    int numStudents;
    std::cout << "Enter the total number of students: ";
    if (!(std::cin >> numStudents) || numStudents <= 0) {
        std::cerr << "Invalid number of students." << std::endl;
        return 1;
    }

   
    std::vector<int> scores(numStudents);
    
    std::cout << "Enter " << numStudents << " scores: ";
    
    
    int bestScore = 0;
    for (int i = 0; i < numStudents; ++i) {
        if (!(std::cin >> scores[i]) || scores[i] < 0) {
            std::cerr << "Invalid score entered." << std::endl;
            return 1;
        }
        if (scores[i] > bestScore) {
            bestScore = scores[i];
        }
    }

    std::cout << "\nBest score is: " << bestScore << std::endl;
    std::cout << "--- Grades ---" << std::endl;

    // Display the grades
    for (int i = 0; i < numStudents; ++i) {
        char grade = getGrade(scores[i], bestScore);
        std::cout << "Student " << i << " score is " << scores[i] << " and grade is " << grade << std::endl;
    }

    return 0;
}