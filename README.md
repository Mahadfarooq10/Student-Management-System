# Student-Management-System
A set of classes for storing student information, along with a class that will manage a list of students. Data can be imported from files for storage in the list, and summary reports with computed final grades will be printed to output files.

Sample input file:
test1.txt
4
Bunny, Bugs
Math 90.1 86.2 80.3 99.5 96.7 93.2
Schmuckatelli, Joe
History 88 75 90
Dipwart, Marvin
English 95 76 72 88
Crack Corn, Jimmy
Math 44 58 23 59 77 68
test2.txt
2
Kirk, James T.
English 40 100 68 88
Lewinsky, Monica
History 60.5 72.5 78


Corresponding output file (outfile1.txt): 
Student Grade Summary
---------------------

ENGLISH CLASS

Student                                   Final Final   Letter
Name                                      Exam  Avg     Grade
----------------------------------------------------------------------
Marvin Dipwart                            88    80.30   B
James T. Kirk                             88    80.80   B


HISTORY CLASS

Student                                   Final Final   Letter
Name                                      Exam  Avg     Grade
----------------------------------------------------------------------
Joe Schmuckatelli                         90    84.25   B
Monica Lewinsky                           78    71.40   C


MATH CLASS

Student                                   Final Final   Letter
Name                                      Exam  Avg     Grade
----------------------------------------------------------------------
Bugs Bunny                                93    94.83   A
Jimmy Crack Corn                          68    65.33   D


OVERALL GRADE DISTRIBUTION

A:   1               
B:   3
C:   1       
D:   1
F:   0
![image](https://user-images.githubusercontent.com/71365705/129263688-3611926b-2fdc-4906-a87f-9677986ced62.png)


