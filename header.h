


#ifndef Header_h
#define Header_h

#include <iostream>
#include <string>
#include <fstream>
#include <typeinfo>
#include <iomanip>

using namespace std;

class student
{
private:
	string firstname;
	string lastname;
	string course;

public:
	student();
	void setfirstname(string);
	void setlastname(string);
	void setcourse(string);
	string returnfirstname();
	string returnlastname();
	string returncourse();
	virtual double returnfinalavg_d();
	virtual int returnfinalavg_i ();
	virtual char returngrade_d();
	virtual char returngrade_i ();
	virtual void print();
	virtual void print2();
	virtual double returnfinal_d();
	virtual int returnfinal_i ();
	virtual string check_type ();

};
///////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////

template <class T>
class english_student :public student
{
private:
	T attendance;
	T project;
	T midterm;
	T finals;


public:
	english_student();
	english_student(string, string, string, T, T, T, T);
	double returnfinalavg_d();
	int returnfinalavg_i();
	char returngrade_d();
	char returngrade_i ();
	void print();
	void print2();
	double returnfinal_d ();
	int returnfinal_i ();
	string check_type ();
};
///////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////

template <class T>
class history_student :public student
{
private:
	T termpaper;
	T midterm;
	T finals;
public:
	history_student();
	history_student(string, string, string, T, T, T);
	double returnfinalavg_d();
	int returnfinalavg_i();
	char returngrade_d();
	char returngrade_i();
	void print();
	void print2();
	double returnfinal_d ();
	int returnfinal_i ();
	string check_type ();
};
///////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////

template <class T>
class math_student :public student
{
private:
	T quiz1;
	T quiz2;
	T quiz3;
	double quizavg; ////check error might occur here. 
	T test1;
	T test2;
	T finals;

public:

	math_student();
	math_student(string, string, string, T, T, T, T, T, T);
	double returnfinalavg_d();
	int returnfinalavg_i ();
	char returngrade_d();
	char returngrade_i ();
	void print();
	void print2();
	double returnfinal_d ();
	int returnfinal_i ();
	string check_type ();
};
///////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////

class studentlist
{
private:
	student **S;
	int size;


public:
	studentlist();
	void importdata();
	void showstudentlist();
	void checkdata();
	void makeoutputfile();


};

#endif /* Header_h */


