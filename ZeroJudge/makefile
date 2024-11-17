CC = g++

all: compile run clean

compile:
	@$(CC) -o $(FILENAME:.cpp=) $(FILENAME)

run:
	@./$(FILENAME:.cpp=)

clean:
	@rm -f ./$(FILENAME:.cpp=)
