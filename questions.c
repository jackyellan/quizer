#include <string.h>
#include "questions.h"

// Store all questions here
static struct Question questionBank[MAX_QUESTIONS] = {
    {
        "What is Travis Scott's real name?",
        {"A. Jacques Webster", "B. Christopher Brown", "C. Kanye West", "D. Shawn Carter"},
        'A'
    },
    {
        "Which album features 'Sicko Mode'?",
        {"A. Rodeo", "B. Astroworld", "C. Birds in the Trap", "D. Birds"},
        'B'
    },
    // Add more questions as needed
};



// Return total number of questions
int getQuestionCount(void) {
    return 2;  // update as you add more
}

// Return a question by index
struct Question getQuestion(int index) {
    return questionBank[index];
}
