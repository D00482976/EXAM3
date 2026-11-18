#ifndef QUESTION_H
#define QUESTION_H

#include <iostream>
#include <string>
#include <vector>

class Question {
private:
    std::string questionText;
    std::vector<std::string> answers;
    int correctAnswer;

public:
    Question(const std::string& text,
             const std::vector<std::string>& choices,
             const int& correct);

    void askQuestion(int& score);
};

#endif
