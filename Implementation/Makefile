#all: run clean 
#all provides sequence of command
all: run test clean 


SRC = main.c\
src/add.c\
src/cuberoot.c\
src/divide.c\
src/exponential.c\
src/modular_division.c\
src/multiplication.c\
src/percentage.c\
src/squareroot.c\
src/subtraction.c\
test/test_functions.c\
 unity/unity.c \


BUILD=build

TEST_SRC=main.c\
src/add.c\
src/cuberoot.c\
src/divide.c\
src/exponential.c\
src/modular_division.c\
src/multiplication.c\
src/percentage.c\
src/squareroot.c\
src/subtraction.c\
test/test_functions.c \
unity/unity.c\

INC =  -Iheader -Iunity

PROJECT_NAME= Calculator.out

TEST_OUTPUT=$(BUILD)/Test_$(PROJECT_NAME).out

#-Iunity


$(PROJECT_NAME): $(SRC)
	gcc $(SRC) $(INC) -o $(PROJECT_NAME)


run: $(PROJECT_NAME)
	./$(PROJECT_NAME)

test: $(BUILD)
	gcc $(TEST_SRC) $(INC) -o $(TEST_OUTPUT) 

	./$(TEST_OUTPUT)


	
clean:
	rm -rf $(PROJECT_NAME) documentation/html

