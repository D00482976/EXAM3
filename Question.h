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
    Question();
    Question(const std::string& text,
             const std::vector<std::string>& choices,
             const int& correct);

    std::string getQuestionText() const;
    std::vector<std::string> getAnswers() const;
    int getCorrectAnswer() const;

    void setQuestionText(const std::string& text);
    void setAnswers(const std::vector<std::string>& choices);
    void setCorrectAnswer(const int& correct);

    void askQuestion(int& score);
};

#endif
