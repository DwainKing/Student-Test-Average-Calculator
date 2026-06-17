// This program calculates an average test score given individual test scores.
// Input: Interactive - Student Test Scores
// Output: Number of Students taking the test and the test score average

#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Declare variables

    int testScore;
    int numStudents;
    double testTotal = 0; // Initialize accumulator variable to 0
    double average;


    // Get user input to control loop
    cout << "Enter Number of Students: ";
    cin >> numStudents;


    // Loop for each student
    for (int count = 1; count <= numStudents; count++)
    {
        // Input student test score
        cout << "Enter student test score: ";
        cin >> testScore;


        // Accumulate total of test scores
        testTotal += testScore;   
    }


    // Calculate average test score
    average = testTotal / numStudents;


    // Output number of students and average test score

    cout << "Number of students: " << numStudents << endl;
    cout << "Average test score: " << average << endl;

    return 0;
}