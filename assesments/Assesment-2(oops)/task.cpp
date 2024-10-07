#include <iostream>
using namespace std;

class Lecture {
private:
    string lecturerName;  // Name of the lecturer
    string subjectName;    // Name of the subject
    string courseName;     // Name of the course
    int numLectures;       // Number of lectures

public:
    // Constructor to initialize default values
    Lecture() {
        lecturerName = "";
        subjectName = "";
        courseName = "";
        numLectures = 0;
    }

    //here we used function to assign values
    Lecture(string lecturer, string subject, string course, int lectures) {
        lecturerName = lecturer;
        subjectName = subject;
        courseName = course;
        numLectures = lectures;
    }

    // Function to add details
    addDetails(string lecturer, string subject, string course, int lectures) {
        lecturerName = lecturer;
        subjectName = subject;
        courseName = course;
        numLectures = lectures;
    }

    // Function to display
    displayDetails() {
        cout << "Lecturer Name: " << lecturerName << endl;
        cout << "Subject Name: " << subjectName << endl;
        cout << "Course Name: " << courseName << endl;
        cout << "Number of Lectures: " << numLectures << endl;
    }
};

main() {
    //array of 5 lectures
    Lecture lectures[5];
    string lecturer, subject, course;
    int numLectures;
    // Loop to input details for 5 lecturers
    for (int i = 0; i < 5; i++) {
        cout << "Enter details for lecturer " << i + 1<< endl;
        cout << "Enter Lecturer Name: ";
        cin >> lecturer;
        cout << "Enter Subject Name: ";
        cin >> subject;
        cout << "Enter Course Name: ";
        cin >> course;
        cout << "Enter Number of Lectures: ";
        cin >> numLectures;
        lectures[i].addDetails(lecturer, subject, course, numLectures);
        cout<<endl;
    }
    cout << "\nDisplay all lecture details: \n";
    for (int i = 0; i < 5; i++) {
        cout << "Details of Lecturer "<<i + 1<< endl;
        lectures[i].displayDetails();
        cout << endl;
    }
}
