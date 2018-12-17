CC=gcc

app : main.o generalised_branch_and_bound.o
	$(CC) $^ -o $@

.PHONY = clean
clean :
	-rm app *.o

