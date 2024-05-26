#ifndef  STUDENTS_GRADES_H
#define  STUDENTS_GRADES_H

typedef  struct  STUDENT
{
	int languageScore;
	int mathScore;
	int scienceScore;
	int literatureScore;
	int societyScore;
	double scoresAverage;
	char grade;
} student_t;

void input_Scores(student_t *_s);
void calculate_Average(student_t *_s);
void decide_Grade(student_t *_s);

#endif
