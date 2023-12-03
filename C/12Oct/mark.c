#include <stdio.h>

int main() {
    int numStudents = 5;
    int marks[numStudents];
    int totalMarks = 0;
    
    printf("Enter the marks for 5 students:\n");

    
    for (int i = 0; i < numStudents; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &marks[i]);
        totalMarks += marks[i];
    }

    
    double averageMarks = (double)totalMarks / numStudents;

    
    printf("Average marks for 5 students: %.2lf\n", averageMarks);

    return 0;
}
