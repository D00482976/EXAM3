
#ifndef QUIZGAME_H
#define QUIZGAME_H

#include <iostream>
#include <string>
#include <vector>
#include "Question.h"

class QuizGame {
private:
    std::string playerName;
    int score;
    std::vector<Question> questions;

public:
    QuizGame();

    void startGame();
    void createQuestions();
    void playLevel(int level);
    void displayScore() const;
};

#endif
