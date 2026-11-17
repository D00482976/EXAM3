
ALL_THE_OS = Question.o trivia.o

THE_DOT_HS = Question.h trivia.h


all: opossum_trivia

%.o: %.cpp
	g++ -g -Wall -std=c++17 -Wpedantic -Wextra -Werror -c $<

opossum_trivia: main.o $(ALL_THE_OS) $(THE_DOT_HS)
	g++ -o opossum_trivia main.o $(ALL_THE_OS)


.PHONY: clean

clean:
	rm -f *.o opossum_trivia
