#include <stdio.h>
#include "Students_Grades.h"

void input_Scores(student_t *_s)
{
	printf("Language : ");
	scanf("%d", &(_s->languageScore));
	printf("Math : ");
	scanf("%d", &(_s->mathScore));
	printf("Science : ");
	scanf("%d", &(_s->scienceScore));
	printf("Literature : ");
	scanf("%d", &(_s->literatureScore));
	printf("Society : ");
	scanf("%d", &(_s->societyScore));
}

void calculate_Average(student_t *_s)
{
	double _sum, _average;

	_sum = (double)(_s->languageScore + _s->mathScore + _s->scienceScore + _s->literatureScore + _s->societyScore);
	_average = _sum / 5.0;
	_s->scoresAverage = _average;
}

void decide_Grade(student_t *_s)
{
	char _grade;

	if (((unsigned int)_s->scoresAverage <= 100) && ((unsigned int)_s->scoresAverage >= 80)) {
		_grade = 'A';
	} else if (((unsigned int)_s->scoresAverage < 80) && ((unsigned int)_s->scoresAverage >= 70)) {
		_grade = 'B';
	} else if (((unsigned int)_s->scoresAverage < 70) && ((unsigned int)_s->scoresAverage >= 60)) {
		_grade = 'C';
	} else if (((unsigned int)_s->scoresAverage < 60) && ((unsigned int)_s->scoresAverage >= 50)) {
		_grade = 'D';
	} else if ((unsigned int)_s->scoresAverage < 50) {
		_grade = 'F';
	} else {
		
	}

	_s->grade = _grade;
}
