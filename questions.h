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

int getQuestionCount(void);
struct Question getQuestion(int index);

#endif