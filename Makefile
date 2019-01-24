CC=gcc
#CC_FLAGS= -Wall -Wextra -fsanitize=address -fsanitize=undefined
CC_FLAGS= -Wall -Wextra 

app : main.o generalised_branch_and_bound.o 
	$(CC) $^ -o $@ $(CC_FLAGS)

.PHONY = clean
clean :
	-rm app *.o

