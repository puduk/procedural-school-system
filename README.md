# 🏫 Procedural School System (C++)

Terminal-based school management system written in pure procedural C++.  
(Second C++ project — focus on input validation, menus, and basic logic flow.)

---

## ⚙️ Features

- 🎓 Student profile creation (name, age, grade, gender, etc.)
- 🧮 BMI calculation and eligibility check (age > 18)
- 🇵🇱 Tuition fee calculation based on citizenship
- 📚 Add and track up to 10 subject grades
- 🏆 Identify best subject grade
- ❌ Display failed subjects (<50)
- 📆 Absence tracking system with limits
- 🪪 Student ID card output (with formatting)
- 🔁 Menu-based navigation using loops and switch-case

---

## 🧪 Technologies & Concepts Used

- ✅ Pure procedural programming  
- 🔄 switch-case, while, do-while, if-else, for loops  
- 🛡️ Input validation (type, range, single character checks)  
- 📏 BMI formula and formatted output with `iomanip`  
- 📚 Arrays and basic data storage  
- 🧾 Console output formatting with `setw`

---

## 📌 Notes

- 📘 This is my second C++ project, created to strengthen understanding of conditionals, loops, and real-world input handling.
- 🧱 A future version using Object-Oriented Programming (OOP) is planned.
- 🎯 Focused on terminal I/O and logic flow, not modularization (yet).

---

## 🖥️ Sample Program Output
```
-------------------- School System -------------------- 
Enter your name: Mert
Enter your surname: Demir
Which group are you currently studying: A1
Enter your student_number: 1020
How old are you: 21
Please enter your grade. (1-12): 12
What's your group letter (A-Z): B
Please enter your gender (M-F): M
What is your height (meters): 1.80
What is your weight (kg): 70

System Searching...
-------------------
System Found The Student:
-------------------
Welcome: Mert Demir
--------------------------------------

Student Page
------------------------------
1 - Learn tuition fee  
2 - Add new grades  
3 - Show best grade  
4 - Absence system  
5 - Show failed subjects  
6 - Student card  
7 - Quit  
------------------------------
Your choice: 2
How many subjects do you want to enter (max 10): 3
Enter subject name: Math
Enter grade for Math: 90
Math Grade Updated: 90
Enter subject name: Physics
Enter grade for Physics: 75
Physics Grade Updated: 75
Enter subject name: Art
Enter grade for Art: 35
Art Grade Updated: 35

Student Page
------------------------------
Your choice: 3
Your best grade is in Math with a score of 90

Student Page
------------------------------
Your choice: 5
Failed Subjects (below 50):
- Art (35)

Student Page
------------------------------
Your choice: 6

------------- Student Card -------------
------------ Academic Info ------------
Name:                Mert
Surname:             Demirk
Group:               A1
Grade:               12
Group Letter:        B
Student Number:      1020
Best Subject:        Math (90)
Absences:            0
Last Failed Subject: Art

----------- Physical Info -------------
Age:                 21
Gender:              M
Height:              1.80 m
Weight:              70 kg
BMI:                 21.6
Is Eligible (18+):   true
---------------------------------------

Student Page
------------------------------
Your choice: 7
Quitting...
Goodbye, Mert Demir!
```

## 🪪 License

This project is licensed under the [MIT License](https://github.com/puduk/procedural-school-system/blob/main/LICENSE) © 2025 [puduk](https://github.com/puduk)

