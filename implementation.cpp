#include"header.h"


student::student()
{
	firstname = " ";
	lastname = " ";
	course = " ";

}


void student::setfirstname(string fname)
{
	firstname = fname;
}


void student::setlastname(string lname)
{
	lastname = lname;
}


void student::setcourse(string c)
{
	course = c;
}


string student::returnfirstname()
{
	return firstname;
}

string student::returnlastname()
{
	return lastname;
}


string student::returncourse()
{
	return course;
}


double student::returnfinalavg_d()
{
	return 0;
}

int student::returnfinalavg_i ()
{
	return 0;
}


void student::print()
{
	cout << firstname << "		" << lastname << "		" << course << endl;

}


void student::print2()
{
	cout << "no data" << endl;
}


double student::returnfinal_d()
{
	return 0;
}

int student::returnfinal_i ()
{
	return 0;
}

string student::check_type ()
{
	return 0;
}


char student::returngrade_d()
{
	return 'U';
}

char student::returngrade_i ()
{
	return 'U';
}


///////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////

template <class T>
english_student<T>::english_student()
{
	attendance = 0;
	project = 0;
	midterm = 0;
	finals = 0;

}

template <class T>
english_student<T>::english_student(string fn, string ln, string c, T a, T p, T m, T f)
{
	setfirstname(fn);
	setlastname(ln);
	setcourse(c);
	attendance = a;
	project = p;
	midterm = m;
	finals = f;
}

template <class T>
double english_student<T>::returnfinalavg_d()
{
	float a, p, m, f;
	a = (float (attendance) / 100);
	a = a * 10;
	p = (float (project) / 100) * 30;
	m = (float (midterm) / 100) * 30;
	f = (float (finals) / 100) * 30;

	return a + p + m + f;
}

template <class T>
int english_student<T>::returnfinalavg_i ()
{
	float a, p, m, f;
	a = (float(attendance) / 100);
	a = a * 10;
	p = (float(project) / 100) * 30;
	m = (float(midterm) / 100) * 30;
	f = (float(finals) / 100) * 30;

	return a + p + m + f;
}

template <class T>
void english_student<T>::print()
{
	cout << returnfirstname() << "		" << returnlastname() << "		" << returncourse() << endl;
}

template <class T>
void english_student<T>::print2()
{
	cout << attendance << " " << project << " " << midterm << " " << finals << endl;
}

template <class T>
char english_student<T>::returngrade_i()
{

	if (returnfinalavg_i() > 90)
	{
		return 'A';
	}

	else if (returnfinalavg_i () > 80 && returnfinalavg_i () < 91)
	{
		return 'B';
	}

	else if (returnfinalavg_i () > 70 && returnfinalavg_i () < 81)
	{
		return 'C';
	}
	else if (returnfinalavg_i () > 60 && returnfinalavg_i () < 71)
	{
		return 'D';
	}
	else
	{
		return 'F';
	}
		
}


template <class T>
char english_student<T>::returngrade_d ()
{

	if (returnfinalavg_d () > 90)
	{
		return 'A';
	}

	else if (returnfinalavg_d () > 80 && returnfinalavg_d () < 91)
	{
		return 'B';
	}

	else if (returnfinalavg_d () > 70 && returnfinalavg_d () < 81)
	{
		return 'C';
	}
	else if (returnfinalavg_d () > 60 && returnfinalavg_d () < 71)
	{
		return 'D';
	}
	else
	{
		return 'F';
	}

}


template <class T>
double english_student<T>::returnfinal_d()
{
	return finals;
}

template <class T>
int english_student<T>::returnfinal_i ()
{
	return finals;
}

template<class T>
string english_student<T>::check_type ()
{
	string a = typeid(finals).name ();
	return a;
}



///////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////

template <class T>
history_student<T>::history_student()
{
	termpaper = 0;
	midterm = 0;
	finals = 0;
}

template <class T>
history_student<T>::history_student(string fn, string ln, string c, T t, T m, T f)
{
	setfirstname(fn);
	setlastname(ln);
	setcourse(c);
	termpaper = t;
	midterm = m;
	finals = f;
}

template <class T>
double history_student<T>::returnfinalavg_d()
{
	float t, m, f;
	t = (float(termpaper) / 100) * 25;
	m = (float(midterm) / 100) * 35;
	f = (float(finals) / 100) * 40;

	return t + m + f;
}


template <class T>
int history_student<T>::returnfinalavg_i ()
{
	float t, m, f;
	t = (float (termpaper) / 100) * 25;
	m = (float (midterm) / 100) * 35;
	f = (float (finals) / 100) * 40;

	return t + m + f;
}


template <class T>
void history_student<T>::print()
{
	cout << returnfirstname() << "		" << returnlastname() << "		" << returncourse() << endl;
}

template <class T>
void history_student<T>::print2()
{
	cout << termpaper << " " << midterm << " " << finals << endl;
}

template <class T>
char history_student<T>::returngrade_d()
{

	if (returnfinalavg_d() > 90)
	{
		return 'A';
	}

	else if (returnfinalavg_d () > 80 && returnfinalavg_d () < 91)
	{
		return 'B';
	}

	else if (returnfinalavg_d () > 70 && returnfinalavg_d () < 81)
	{
		return 'C';
	}
	else if (returnfinalavg_d () > 60 && returnfinalavg_d () < 71)
	{
		return 'D';
	}
	else
	{
		return 'F';
	}

}


template <class T>
char history_student<T>::returngrade_i ()
{

	if (returnfinalavg_i () > 90)
	{
		return 'A';
	}

	else if (returnfinalavg_i () > 80 && returnfinalavg_i () < 91)
	{
		return 'B';
	}

	else if (returnfinalavg_i () > 70 && returnfinalavg_i () < 81)
	{
		return 'C';
	}
	else if (returnfinalavg_i () > 60 && returnfinalavg_i () < 71)
	{
		return 'D';
	}
	else
	{
		return 'F';
	}

}


template <class T>
double history_student<T>::returnfinal_d()
{
	return finals;
}

template <class T>
int history_student<T>::returnfinal_i ()
{
	return finals;
}

template<class T>
string history_student<T>::check_type ()
{
	string a = typeid(finals).name ();
	return a;
}


///////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////

template <class T>
math_student<T>::math_student()
{
	quiz1 = 0;
	quiz2 = 0;
	quiz3 = 0;
	test1 = 0;
	test2 = 0;
	finals = 0;

}

template <class T>
math_student<T>::math_student(string fn, string ln, string c, T q1, T q2, T q3, T t1, T t2,T f)
{
	setfirstname(fn);
	setlastname(ln);
	setcourse(c);
	quiz1 = q1;
	quiz2 = q2;
	quiz3 = q3;
	test1 = t2;
	test2 = t2;
	finals = f;
	quizavg = (q1 + q2 + q3) / 3;
}

template <class T>
double math_student<T>::returnfinalavg_d ()
{
	float qa, t1, t2, f;
	qa = (float(quizavg) / 100) * 40;
	t1 = (float(test1) / 100) * 25;
	t2 = (float(test2) / 100) * 25;
	f = (float(finals) / 100) * 40;

	return qa + t1 + t2 + f;
}


template <class T>
int math_student<T>::returnfinalavg_i ()
{
	float qa, t1, t2, f;
	qa = (float (quizavg) / 100) * 40;
	t1 = (float (test1) / 100) * 25;
	t2 = (float (test2) / 100) * 25;
	f = (float (finals) / 100) * 40;

	return qa + t1 + t2 + f;
}


template <class T>
void math_student<T>::print()
{
	cout << returnfirstname() << "		" << returnlastname() << "		" << returncourse() << endl;
}

template <class T>
void math_student<T>::print2()
{
	cout << quiz1 << " " << quiz2 << " " << quiz3 << " " << test1 << " " << test2 << " " << finals << endl;
}

template <class T>
char math_student<T>::returngrade_d()
{

	if (returnfinalavg_d() > 90)
	{
		return 'A';
	}

	else if (returnfinalavg_d () > 80 && returnfinalavg_d () < 91)
	{
		return 'B';
	}

	else if (returnfinalavg_d () > 70 && returnfinalavg_d () < 81)
	{
		return 'C';
	}
	else if (returnfinalavg_d () > 60 && returnfinalavg_d () < 71)
	{
		return 'D';
	}
	else
	{
		return 'F';
	}

}


template <class T>
char math_student<T>::returngrade_i ()
{

	if (returnfinalavg_i () > 90)
	{
		return 'A';
	}

	else if (returnfinalavg_i () > 80 && returnfinalavg_i () < 91)
	{
		return 'B';
	}

	else if (returnfinalavg_i () > 70 && returnfinalavg_i () < 81)
	{
		return 'C';
	}
	else if (returnfinalavg_i () > 60 && returnfinalavg_i () < 71)
	{
		return 'D';
	}
	else
	{
		return 'F';
	}

}


template <class T>
double math_student<T>::returnfinal_d()
{
	return finals;
}

template <class T>
int math_student<T>::returnfinal_i ()
{
	return finals;
}

template<class T>
string math_student<T>::check_type ()
{
	string a = typeid(finals).name ();
	return a;
}


///////////////////////////////////////////////////////////////////////////////////
//////////////////////!!STUDENT LIST!!////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////

studentlist::studentlist()
{

	S = NULL;
	size = 0;

}

void studentlist::importdata()
{

	ifstream in;
	ofstream out;

	string tfirst, tlast, tcourse;
	char space, enter;


	char name_of_file[20];
	cout << "Enter Filename:" << endl;
	cin >> name_of_file;

	in.open(name_of_file);

	if (in.fail())
	{
		cout << "Invalid Data. No Data imported." << endl;
	}

	in >> size;

	S = new student*[size];


	for (int i = 0; i < size; i++)
	{


		in.get(enter);
		getline(in, tlast, ',');
		in.get(space);
		getline(in, tfirst, '\n');
		in >> tcourse;
		
		

		if (tcourse == "Math")
		{
			bool check_math = false;
			string q1, q2, q3, t1, t2, f;
			in >> q1 >> q2 >> q3 >> t1 >> t2 >> f;

			for (int x = 0; x < q1.size() ; x++)
			{
				if (q1[x] == '.')
				{
					check_math = true;
					double variable_1, variable_2, variable_3, variable_4, variable_5, variable_6;

					variable_1 = stod (q1);
					variable_2 = stod (q2);
					variable_3 = stod (q3);
					variable_4 = stod (t1);
					variable_5 = stod (t2);
					variable_6 = stod (f);

					math_student<double> *M;

					M = new math_student<double>(tfirst, tlast, tcourse, variable_1, variable_2, variable_3, variable_4, variable_5, variable_6);


					S[i] = M;
				}
			}

			if (check_math == false)
			{
				int variable_7, variable_8, variable_9, variable_10, variable_11, variable_12;
				variable_7=stoi(q1) ; variable_8 = stoi (q2); variable_9 = stoi(q3); variable_10 = stoi (t1); variable_11 = stoi (t2); variable_12 = stoi (f);
				math_student<int> *M;

				M = new math_student<int> (tfirst, tlast, tcourse, variable_7, variable_8, variable_9, variable_10, variable_11, variable_12);


				S[i] = M;
			}



			

		}

		else if (tcourse == "History")
		{
			
			bool  check_history = false;

			string tm, m, f;
			in >> tm >> m >> f;

			for (int z = 0; z < tm.size(); z++)
			{
				if (tm[z] == '.')
				{
					check_history = true;

					double variable_13, variable_14, variable_15;
					history_student<double> *H;

					variable_13 = stod (tm); variable_14 = stod (m); variable_15 = stod (f);
					H = new history_student<double> (tfirst, tlast, tcourse, variable_13, variable_14, variable_15);

					S[i] = H;

				}
			}

			if (check_history == false)
			{
				history_student<int> *H;
				int variable_16, variable_17, variable_18;
				variable_16 = stoi (tm); variable_17 = stoi (m); variable_18 = stoi (f);


				H = new history_student<int> (tfirst, tlast, tcourse, variable_16, variable_17, variable_18);

				S[i] = H;
			}


		}

		else if (tcourse == "English")
		{
			bool  check_english = false;

			string a, p, m, f;
			in >> a >> p >> m >> f;

			for (int y = 0; y < a.size(); y++)
			{
				if (a[y] == '.')
				{
					check_english = true;

					double variable_19, variable_20, variable_21, variable_22;

					variable_19 = stod(a); variable_20 = stod (p); variable_21 = stod (m); variable_22 = stod (f);

					english_student<double> *E;
					E = new english_student<double> (tfirst, tlast, tcourse, variable_19, variable_20, variable_21, variable_22);

					S[i] = E;


				}
			}

			if (check_english == false)
			{
				english_student<int> *E;
				int variable_23, variable_24, variable_25, variable_26;

				variable_23 = stoi (a); variable_24 = stoi (p); variable_25 = stoi (m); variable_26 = stoi (f);
				E = new english_student<int> (tfirst, tlast, tcourse, variable_23, variable_24, variable_25, variable_26);

				S[i] = E;
			}


			

		}

	}

}


void studentlist::showstudentlist()
{
	cout << "First Name	Last Name	      Course" << endl;
	for (int i = 0; i < size; i++)
	{
		S[i]->print();

	}

}


void studentlist::checkdata()
{
	for (int i = 0; i < size; i++)
	{
		S[i]->print2();
	}
}


void studentlist::makeoutputfile()
{
	ofstream out;
	out.open("outputfile.txt");

	string temp_1;
	//calculating number for each grade//

	int A = 0, B = 0, C = 0, D = 0, F = 0;
	
	for (int i = 0; i < size; i++)
	{
		temp_1 = S[i]->check_type ();
		if (temp_1 == "double")
		{
			if (S[i]->returngrade_d () == 'A')
			{
				A++;
			}

			else if (S[i]->returngrade_d () == 'B')
			{
				B++;
			}

			else if (S[i]->returngrade_d () == 'C')
			{
				C++;
			}
			else if (S[i]->returngrade_d () == 'D')
			{
				D++;
			}
			else
			{
				F++;
			}
		}
		else
		{
			if (S[i]->returngrade_i () == 'A')
			{
				A++;
			}

			else if (S[i]->returngrade_i () == 'B')
			{
				B++;
			}

			else if (S[i]->returngrade_i () == 'C')
			{
				C++;
			}
			else if (S[i]->returngrade_i () == 'D')
			{
				D++;
			}
			else
			{
				F++;
			}
		}
		

	}

	int math = 0, history = 0, english = 0;


	//checking number of students per subject//

	for (int i = 0; i < size; i++)
	{
		if (S[i]->returncourse() == "Math")
		{
			math++;
		}

		else if (S[i]->returncourse() == "English")
		{
			english++;
		}

		else if (S[i]->returncourse() == "History")
		{
			history++;
		}

	}

	//finding index for each student//

	int *mathstudentsindex, *historystudentsindex, *englishstudentsindex;

	mathstudentsindex = new int[math];
	historystudentsindex = new int[history];
	englishstudentsindex = new int[english];


	int m = 0;
	int e = 0;
	int h = 0;
	string temp;

	for (int i = 0; i < size; i++)
	{
		if (S[i]->returncourse() == "Math")
		{
			mathstudentsindex[m] = i;
			m++;
		}

		else if (S[i]->returncourse() == "English")
		{
			englishstudentsindex[e] = i;
			e++;
		}

		else if (S[i]->returncourse() == "History")
		{
			historystudentsindex[h] = i;
			h++;
		}

	}

	out << "STUDENT GRADE SUMMARY" << endl;
	out << "----------------------------------------------------------------------------" << endl << endl << endl;
	out << "ENGLISH CLASS" << endl;

	out << "Student			Final	Final	Letter" << endl;
	out << "Name			Exam	Avg	Grade" << endl;
	
	out << "----------------------------------------------------------------------------" << endl;
	for (int i = 0; i < english; i++)
	{
		out << S[englishstudentsindex[i]]->returnfirstname () << " " << S[englishstudentsindex[i]]->returnlastname () << "		";
		
		temp = S[englishstudentsindex[i]]->check_type ();
		if (temp == "double")
		{
			out << S[englishstudentsindex[i]]->returnfinal_d ();
			out << "	" << S[englishstudentsindex[i]]->returnfinalavg_d () << "	" << S[englishstudentsindex[i]]->returngrade_d () << endl;
		}
		else
		{
			out << S[englishstudentsindex[i]]->returnfinal_i ();
			out << "	" << S[englishstudentsindex[i]]->returnfinalavg_i () << "	" << S[englishstudentsindex[i]]->returngrade_i () << endl;
		}
		
		
	}

	out << endl;
	out << endl;
	out << endl;

	out << "HISTORY CLASS" << endl;

	out << "Student			     Final	     Final	     Letter" << endl;
	out << "Name			     Exam	     Avg	     Grade" << endl;
	out << "----------------------------------------------------------------------------" << endl;
	
	for (int i = 0; i < history; i++)
	{
		out << S[historystudentsindex[i]]->returnfirstname () << " " << S[historystudentsindex[i]]->returnlastname () << "		";

		temp = S[historystudentsindex[i]]->check_type ();
		if (temp == "double")
		{
			out << S[historystudentsindex[i]]->returnfinal_d ();
			out << "		" << S[historystudentsindex[i]]->returnfinalavg_d () << "		" << S[historystudentsindex[i]]->returngrade_d () << endl;
		}
		else
		{
			out << S[historystudentsindex[i]]->returnfinal_i ();
			out << "		" << S[historystudentsindex[i]]->returnfinalavg_i () << "		" << S[historystudentsindex[i]]->returngrade_i () << endl;
		}	
		
		
	}

	out << endl;
	out << endl;
	out << endl;

	out << "MATHS CLASS" << endl;

	out << "Student				Final	Final	Letter" << endl;
	out << "Name				Exam	Avg	Grade" << endl;
	out << "----------------------------------------------------------------------------" << endl;
	for (int i = 0; i < math; i++)
	{
		out << S[mathstudentsindex[i]]->returnfirstname () << " " << S[mathstudentsindex[i]]->returnlastname () << "		";
		
		temp = S[mathstudentsindex[i]]->check_type ();

		if (temp == "double")
		{
			out << S[mathstudentsindex[i]]->returnfinal_d ();
			out << "		" << S[mathstudentsindex[i]]->returnfinalavg_d () << "  " << S[mathstudentsindex[i]]->returngrade_d () << endl;
		}
		else
		{
			out << S[mathstudentsindex[i]]->returnfinal_i ();
			out << "	" << S[mathstudentsindex[i]]->returnfinalavg_i () << "	" << S[mathstudentsindex[i]]->returngrade_i () << endl;
		}
		
		
	}


	out << endl;
	out << endl;
	out << endl;

	out << "OVERALL GRADE DISTRIBUTION" << endl;
	out << "A" << "	" << A << endl;
	out << "B" << "	" << B << endl;
	out << "C" << "	" << C << endl;
	out << "D" << "	" << D << endl;
	out << "F" << "	" << F << endl;




}


