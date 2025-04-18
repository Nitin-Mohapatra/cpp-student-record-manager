#include <iostream>
#include <string>  // Include string library to use the string data type
using namespace std;

// Defining a structure to store student information
typedef struct info{
    int roll;         // Roll number of the student
    string name;      // Name of the student
    double percent;   // Percentage of the student
} info;

int main(){
    int is_found = 0, rec_total;

    // Ask user to input the total number of records (students)
    cout << "Enter total no of record: ";
    cin >> rec_total;

    // Declaring an array of structure to store student data
    info arr[rec_total];
    
    // Loop to take input for each student's record
    for(int i = 0; i < rec_total; i++){
        cout << "------" << i+1 << "------" << endl;

        bool duplicate = false;
        int roll;

        // Loop to ensure roll number is not duplicated
        do{
            duplicate = false;
            cout << "Enter roll no: ";
            cin >> roll;

            // Check if the roll number already exists in the array
            for(int k = 0; k < i; k++){
                if(arr[k].roll == roll){
                    cout << "This roll already exists" << endl;
                    duplicate = true;
                    break;
                }
            }
        }while(duplicate);  // Repeat until a valid roll number is entered

        arr[i].roll = roll;  // Store the roll number

        // Take input for the student's name and percentage
        cout << "Enter name: ";
        cin >> arr[i].name;

        cout << "Enter percent: ";
        cin >> arr[i].percent;
    }

    // Search functionality to find a student by roll number
    int roll_serch;
    cout << "Enter the roll to find the info: ";
    cin >> roll_serch;

    // Loop through the array to find the student with the entered roll number
    for(int i = 0; i < rec_total; i++){
        if(arr[i].roll == roll_serch){
            cout << "Record Found" << endl;
            cout << "Name: " << arr[i].name << endl;
            cout << "Percent: " << arr[i].percent << endl;
            is_found = 1;  // Mark as found
        }
    }

    // If no record is found, print a message
    if(!is_found){
        cout << "No record found" << endl;
    }

    return 0;
}
