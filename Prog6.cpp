#include <iostream>
#include <iomanip>
#include <unordered_map>
#include <vector>

#define umap unordered_map<string, int>
#define vecs vector<string>

using namespace std;

int totalCredits(umap students){
    /*
     * Counts the number of credits in the students dict
     */

    int count = 0;
    for (auto x : students){
        count += x.second;
    }
    return count;
}

vecs classesByDept(umap students, string department){
    /*
     * Search for courses offered by a given department in a student dict
     */

    vecs courses;
    for (auto x : students){
        if (x.first.substr(0, 4) == department){
            courses.push_back(x.first);
        }
    }
    return courses;
}

vecs classesByCredits(umap students, int credits){
    /*
     * Return a list of classes that have X credits from the students dict.
     */

    vecs courses;
    for (auto x : students){
        if (x.second == credits){
            courses.push_back(x.first);
        }
    }
    return courses;
}

bool isPartTime(umap students){
    /*
     * Return a t/f value for if the student has less than 12 credits.
     */

    return totalCredits(students) < 12;
}

int numOfClasses(umap students){
    /*
     * Return the number of courses a student is taking given the students dict.
     */

    int count = 0;
    for (auto x : students) count++;
    return count;
}

int lowerLevelCredits(umap students){
    /*
     * Return the number of lower level courses given the students dict.
     */

    int count = 0;
    for (auto x : students) if (stoi(x.first.substr(5)) < 300) count += x.second;
    return count;
}

void printClasses(string title, umap students){
    /*
     * Print off a list of courses and their associated credit count
     */

    // Print title
    cout << title << endl;

    // Define some spacing and column header stuff
    string lcolhead = "Course";
    string rcolhead = "Credits";
    int lcollen = 8;
    int rcollen = rcolhead.length();
    
    // Get course names as array
    string* courses = new string[numOfClasses(students)];
    int counter = 0;
    for(auto x : students){
        courses[counter] = x.first;
        counter++;
    }
    
    // Insertion sort course names
    for (int i = 1; i < counter; i++){
        int j = i;
        while (j > 0){
            if (courses[j] < courses[j - 1]){
                string tmp = courses[j];
                courses[j] = courses[j - 1];
                courses[j - 1] = tmp;
                j = j - 1;
            }
            else j = -1;
        }
    }
    
    // Print the things
    cout << fixed << left << setfill(' ') << setw(lcollen) << lcolhead << " ";
    cout << fixed << right << setfill(' ') << setw(rcollen) << rcolhead << endl;
    for (int i = 0; i < counter; i++){
        cout << fixed << left << setfill(' ') << setw(lcollen) << courses[i] << " ";
        cout << fixed << right << setfill(' ') << setw(rcollen) << students[courses[i]] << endl;
    }
}

// Assuming that the same environment variable will be used
// to disable main() as assignment 4
#ifndef COMPILE_MAIN

int main(){
    cout << "Hello C++ ➕" << endl;
    umap students;
    students["CSCI 242"] = 3;
    students["CSCI 265"] = 3;
    students["CSCI 327"] = 3;
    students["PHYS 252"] = 4;
    students["MUSC 101"] = 3;
    students["MATH 207"] = 2;
    cout << "Total credits: " << totalCredits(students) << endl;

    vecs cbd = classesByDept(students, "CSCI");
    cout << "Courses in CSCI dept:";
    for(string course : cbd){
        cout << " " << course;
    }
    cout << endl;
    
    vecs cbc = classesByCredits(students, 3);
    cout << "Courses with three credits:";
    for(string course : cbc){
        cout << " " << course;
    }
    cout << endl;
    
    cout << "Student is part time: " << isPartTime(students) << endl;

    cout << "Number of courses: " << numOfClasses(students) << endl;

    cout << "Lower level credits: " << lowerLevelCredits(students) << endl;

    printClasses("Cooltitle :)", students);
}

#endif

