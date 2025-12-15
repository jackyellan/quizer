#ifndef QUESTIONS_H
#define QUESTIONS_H

#define MAX_QUESTIONS 10
#define MAX_OPTION_LENGTH 150 //maximum number of characters for 
                              //each option (like "A. Travis Scott")

struct Question {
    char questionText[200];
    char options[4][MAX_OPTION_LENGTH];
    char correctAnswer;
};

int getQuestionCount(void); //returns how many questions in quiz
struct Question getQuestion(int index); //returns question at specific index in array

#endif