
#include "Question.h"

// Constructor
Question::Question(const std::string& text,
                   const std::vector<std::string>& choices,
                   const int& correct) {
    questionText = text;
    answers = choices;
    correctAnswer = correct;
}

// Get question text
std::string Question::getQuestionText() const {
    return questionText;
}

// Get answers
std::vector<std::string> Question::getAnswers() const {
    return answers;
}

// Ask the question
void Question::askQuestion(int& score) {
    int answer;

    std::cout << questionText << std::endl;

    // Display answer choices
    for (std::size_t i = 0; i < answers.size(); i++) {
      std::cout << i + 1 << ". " << answers[i] << std::endl;
}

    // Get player's answer
    std::cout << "Your answer: ";
    std::cin >> answer;

    // Check answer
    if (answer == correctAnswer) {
        std::cout << "Correct!" << std::endl;
        score++;
    }
    else {
        std::cout << "Wrong! The correct answer was: "
                  << answers[correctAnswer - 1] << std::endl;
    }

    std::cout << std::endl;
}

