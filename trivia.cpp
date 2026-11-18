
#include "trivia.h"

// Constructor
QuizGame::QuizGame() {
    playerName = "";
    score = 0;
}


// Start the game
void QuizGame::startGame() {

    std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
    std::cout << "    OPOSSUM TRIVIA!!! " << std::endl;
    std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;

    std::cout << "Welcome! What is your name? ";
    std::cin >> playerName;

    std::cout << "\nHi " << playerName << "!" << std::endl;
    std::cout << "Let's test your opossum knowledge!" << std::endl;

    // Create all questions
    createQuestions();

    // Play all three levels
    for (int level = 1; level <= 3; level++) {
        playLevel(level);
    }

    // Show final score
    displayScore();
}


// Create trivia questions
void QuizGame::createQuestions() {

//.push_back creates object and stores it in vector
    // Level 1 questions
    questions.push_back(Question(
        "What type of animal is an opossum?",
        {"Mammal", "Reptile", "Bird", "Fish"},
        1
    ));

    questions.push_back(Question(
        "What is a baby opossum called?",
        {"Puppy", "Joey", "Cub", "Kitten"},
        2
    ));

    questions.push_back(Question(
        "Where do opossums usually live?",
        {"The ocean", "The desert only", "Forests and wooded areas", "The Arctic"},
        3
    ));

    // Level 2 questions
    questions.push_back(Question(
        "What is special about an opossum's tail?",
        {"It can hold and carry things", "It can sting", "It changes color", "It is poisonous"},
        1
    ));

    questions.push_back(Question(
        "What does an opossum do when it plays dead?",
        {"Runs away", "Pretends to be dead", "Climbs a tree", "Makes a loud noise"},
        2
    ));

    questions.push_back(Question(
        "What do opossums typically eat?",
        {"Only plants", "Only meat", "Insects, fruits, and small animals", "Only fish"},
        3
    ));

    // Level 3 questions
    questions.push_back(Question(
        "What is the only marsupial native to North America?",
        {"Kangaroo", "Virginia opossum", "Koala", "Wombat"},
        2
    ));

    questions.push_back(Question(
        "Are opossums immune to all snake venom?",
        {"Yes, all venom", "No, they are not immune to all venom", "Only rattlesnake venom", "Only cobra venom"},
        2
    ));

    questions.push_back(Question(
        "How many teeth does an adult Virginia opossum have?",
        {"20", "32", "40", "50"},
        3
    ));
}


// Play a level
void QuizGame::playLevel(int level) {

    int startingScore = score;

    std::cout << "\n~.~.~.~.~.~.~.~.~.~.~.~.~.~.~" << std::endl;

    if (level == 1) {
        std::cout << "Level 1 - opposum curious?" << std::endl;
    }
    else if (level == 2) {
        std::cout << "Level 2: opposum lover!" << std::endl;
    }
    else {
        std::cout << "Level 3: opposum fanatic!!" << std::endl;
    }

    std::cout << "~.~.~.~.~.~.~.~.~.~.~.~.~.~.~\n" << std::endl;

    // Each level has 3 questions
    int start = (level - 1) * 3;

    for (int i = start; i < start + 3; i++) {
        questions[i].askQuestion(score);
    }

    std::cout << "You finished Level " << level << "!" << std::endl;
    std::cout << "Level score: " << score - startingScore << "/3" << std::endl;
}


// Display final score
void QuizGame::displayScore() const {

    std::cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
    std::cout << "       GAME COMPLETE!" << std::endl;
    std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;

    std::cout << "Player: " << playerName << std::endl;
    std::cout << "Final Score: " << score << "/9" << std::endl;

    if (score == 9) {
        std::cout << "You are a true Opposum lover! Good job!" << std::endl;
    }
    else if (score >= 5) {
        std::cout << "You know quite a bit about opossums!" << std::endl;
    }
    else {
        std::cout << "Time to open a book about opposums! Nice try!" << std::endl;
    }

    std::cout << "Thanks for playing!" << std::endl;
}

