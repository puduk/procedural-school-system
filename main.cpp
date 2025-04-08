#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    string name, surname, group, char_input, student_number;
    int age, grade, option_numbers;
    char gender;
    string polish_citizen, europe_citizen;
    const int max_subject_count = 10;
    string subjects[max_subject_count];
    double subject_grades[max_subject_count];
    int subject_count;
    int best_index = 0;
    int absence_index = 0;
    int absence_count = 0;
    int new_absence = 0;
    double height, weight;
    string failed_subject;


    cout << "-------------------- School System -------------------- " << endl;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your surname: ";
    cin >> surname;
    cout << "Which group are you currently studying: ";
    cin >> group;
    cout << "Enter your student_number: ";
    cin >> student_number;
    cout << "How old are you: ";
    cin >> age;

    while (true) {
        cout << "Please enter your grade. (1-12): ";
        cin >> grade;
        if (grade >= 1 && grade <= 12)
            break;
    }

    while (true) {
        cout << "What's your group letter (A-Z): ";
        cin >> char_input;
        if (char_input.length() == 1 && isalpha(char_input[0])) {
            break;
        } else {
            cout << "Please enter ONLY SINGLE character." << endl;
        }
    }

    while (true) {
        cout << "Please enter your gender (M-F): ";
        cin >> gender;
        if (gender == 'M' || gender == 'm' || gender == 'F' || gender == 'f')
            break;
        else
            cout << "There are only 2 genders :)" << endl;
    }

    cout << "What is your height (meters): ";
    cin >> height;
    cout << "What is your weight (kg): ";
    cin >> weight;

    double bmi_score = weight / (height * height);
    bool isEligible = (age > 18);

    cout << "\nSystem Searching...\n-------------------" << endl;
    cout << "System Found The Student:\n-------------------" << endl;
    cout << "Welcome: " << name << " " << surname << endl;
    cout << "--------------------------------------" << endl;

    do {
        cout << "\nStudent Page" << endl;
        cout << "------------------------------" << endl;
        cout << "1 - Learn tuition fee" << endl;
        cout << "2 - Add new grades" << endl;
        cout << "3 - Show best grade" << endl;
        cout << "4 - Absence system" << endl;
        cout << "5 - Show failed subjects" << endl;
        cout << "6 - Student card" << endl;
        cout << "7 - Quit" << endl;
        cout << "------------------------------" << endl;
        cout << "Your choice: ";
        cin >> option_numbers;

        switch (option_numbers) {
            case 1:
                cout << "Are you a Polish citizen? ";
                cin >> polish_citizen;
                cout << "Do you have European citizenship? ";
                cin >> europe_citizen;

                if (polish_citizen == "yes" || polish_citizen == "Yes") {
                    cout << "Your tuition cost is $1000." << endl;
                } else if (europe_citizen == "yes" || europe_citizen == "Yes") {
                    cout << "Your tuition cost is $5000." << endl;
                } else {
                    cout << "Your tuition cost is $10000." << endl;
                }
                break;

            case 2:
                cout << "How many subjects do you want to enter (max 10): ";
                cin >> subject_count;

                while (subject_count < 1 || subject_count > max_subject_count) {
                    cout << "Please enter between 1 and 10 subjects: ";
                    cin >> subject_count;
                }

                for (int i = 0; i < subject_count; i++) {
                    while (true) {
                        cout << "Enter subject name: ";
                        cin >> subjects[i];
                        cout << "Enter grade for " << subjects[i] << ": ";
                        cin >> subject_grades[i];

                        if (subject_grades[i] < 0 || subject_grades[i] > 100) {
                            cout << "Please enter a valid grade (0-100)." << endl;
                        } else {
                            cout << subjects[i] << " Grade Updated: " << subject_grades[i] << endl;
                            break;
                        }
                    }
                }
                break;

            case 3:
                best_index = 0;
                for (int i = 1; i < subject_count; i++) {
                    if (subject_grades[i] > subject_grades[best_index]) {
                        best_index = i;
                    }
                }
                cout << "Your best grade is in " << subjects[best_index]
                     << " with a score of " << subject_grades[best_index] << endl;
                break;

            case 4:
                do {
                    cout << "\nAbsence System:\n";
                    cout << "1 - Show current absences" << endl;
                    cout << "2 - Add new absences" << endl;
                    cout << "3 - Go back to main menu" << endl;
                    cout << "Choice: ";
                    cin >> absence_index;

                    switch (absence_index) {
                        case 1:
                            cout << "You have " << absence_count << " absences." << endl;
                            break;
                        case 2:
                            while (true) {
                                cout << "How many new absences do you want to add? ";
                                cin >> new_absence;
                                if (new_absence > 5)
                                    cout << "You cannot add more than 5 at once." << endl;
                                else {
                                    absence_count += new_absence;
                                    cout << new_absence << " absences added." << endl;
                                    break;
                                }
                            }
                            break;
                    }
                } while (absence_index != 3);
                break;

            case 5:
                cout << "Failed Subjects (below 50):" << endl;
                for (int i = 0; i < subject_count; i++) {
                    if (subject_grades[i] < 50) {
                        cout << "- " << subjects[i] << " (" << subject_grades[i] << ")" << endl;
                        failed_subject = subjects[i];
                    }
                }
                break;

            case 6:
                cout << "\n------------- Student Card -------------" << endl;
                cout << "------------ Academic Info ------------" << endl;
                cout << left << setw(20) << "Name: " << name << endl;
                cout << left << setw(20) << "Surname: " << surname << endl;
                cout << left << setw(20) << "Group: " << group << endl;
                cout << left << setw(20) << "Grade: " << grade << endl;
                cout << left << setw(20) << "Group Letter: " << char_input << endl;
                cout << left << setw(20) << "Student Number: " << student_number << endl;
                cout << left << setw(20) << "Best Subject: " << subjects[best_index] << " (" << subject_grades[best_index] << ")" << endl;
                cout << left << setw(20) << "Absences: " << absence_count << endl;
                cout << left << setw(20) << "Last Failed Subject: " << failed_subject << endl;

                cout << "\n----------- Physical Info -------------" << endl;
                cout << left << setw(20) << "Age: " << age << endl;
                cout << left << setw(20) << "Gender: " << gender << endl;
                cout << left << setw(20) << "Height: " << height << " m" << endl;
                cout << left << setw(20) << "Weight: " << weight << " kg" << endl;
                cout << left << setw(20) << "BMI: " << fixed << setprecision(2) << bmi_score << endl;
                cout << left << setw(20) << "Is Eligible (18+): " << boolalpha << isEligible << endl;
                cout << "---------------------------------------\n" << endl;
                break;

            case 7:
                cout << "Quitting..." << endl;
                break;

            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }

    } while (option_numbers != 7);

    cout << "Goodbye, " << name << " " << surname << "!" << endl;
    return 0;


}
