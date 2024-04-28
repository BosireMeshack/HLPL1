#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void print_matrix1(int *matrix, int rows, int cols)
{
    for (int row = 0; row < rows; row++)
    {
        printf("%d", matrix[row * cols + 0]);
        for (int col = 1; col < cols; col++)
        {
            printf(" %d", matrix[row * cols + col]);
        }
        putchar('\n');
    }
}


int main (int argc, char *argv[])
{

int rows = atoi(argv[1]);
int cols = atoi(argv[2]);

int matrix[rows][cols];

//seeding a random number generator dependent on the current time of executing the code
srand(time(NULL));

//generating the values
for(int row=0; row<rows; row++)
{
    for(int col=0; col<cols; col++)
    {
        matrix[row][col]= rand() %10;
    }
}

// printing one row/a row matrix

for(int row=0; row<rows;row++)
{
    printf(" %d",matrix[row][0]);
    for (int col=0; col<cols; col++)
    {
        printf(" %d", matrix[row][col]);
    }
    putchar('\n');
}

 // printing memory addresses of the matrix

    for(int row=0; row<rows; row++)
    {
        printf(" %p", &matrix[row][0]);
        for(int col=1;col<cols; col++)
        {
            printf(" %p", &matrix[row][col]);
        }
        putchar('\n');
    }

    print_matrix1(&matrix[0][0], rows, cols);


return EXIT_SUCCESS;
}