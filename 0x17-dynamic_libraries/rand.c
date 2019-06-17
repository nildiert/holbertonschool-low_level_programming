int rand()
{
	int static last = -1;
	int numbers[] = {9, 8, 10, 24, 75, 9};

	return(numbers[last++]);
}
