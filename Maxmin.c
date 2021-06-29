_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MIN(x,y) ((x<y)?x:y)
#define MAX(x,y) ((x>y)?x:y)
void enterData(float first[][10], float second[][10], int r1, int c1, int r2, int c2) {
    int i, j;
    printf("\nEnter elements of matrix 1:\n");

    for (i = 0; i < r1; ++i) {
        for (j = 0; j < c1; ++j) {
            printf("Enter a%d%d: ", i + 1, j + 1);
            scanf("%f", &first[i][j]);
        }
    }
    printf("\nEnter elements of matrix 2:\n");

    for (i = 0; i < r2; ++i) {
        for (j = 0; j < c2; ++j) {
            printf("Enter b%d%d: ", i + 1, j + 1);
            scanf("%f", &second[i][j]);
        }
    }
}

void maxmin(float first[][10], float second[][10], float result[][10], int r1, int c1, int r2, int c2) {
    int i, j, k, c = 0;
    float mm[5];
    for (i = 0; i < r1; ++i) {
        for (j = 0; j < c2; ++j) {
            result[i][j] = 0;
        }
    }


    for (i = 0; i < r1; ++i) {
        for (j = 0; j < c2; ++j) {
            for (k = 0; k < c1; ++k) {
                mm[c] = MIN(first[i][k], second[k][j]);
                c++;
                if (c == 2)
                {
                    c = 0;
                    result[i][j] = MAX(mm[0], mm[1]);
                }
            }
        }
    }
}
void max(float first[][10], float second[][10], float result1[][10], int r1, int c1, int r2, int c2) {
    int i, j, k, c = 0;
    float mm[5];
    for (i = 0; i < r1; ++i) {
        for (j = 0; j < c2; ++j) {
            result1[i][j] = 0;
        }
    }


    for (i = 0; i < r1; ++i) {
        for (j = 0; j < c2; ++j) {
            for (k = 0; k < c1; ++k) {
                mm[c] = first[i][k] * second[k][j];
                c++;
                if (c == 2)
                {
                    c = 0;
                    result1[i][j] = MAX(mm[0], mm[1]);
                }
            }
        }
    }
}

void display(float result[][10], int r1, int c2) {
    int i, j;
    printf("\nOutput Matrix:\n");
    for (i = 0; i < r1; ++i) {
        for (j = 0; j < c2; ++j) {
            printf("%f ", result[i][j]);
            if (j == c2 - 1)
                printf("\n");
        }
    }
}
int main() {
    float first[10][10], second[10][10], result[10][10], result1[10][10];
    int r1, c1, r2, c2;
    printf("Enter rows and column for the first matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and column for the second matrix: ");
    scanf("%d %d", &r2, &c2);
    enterData(first, second, r1, c1, r2, c2);
    maxmin(first, second, result, r1, c1, r2, c2);
    max(first, second, result1, r1, c1, r2, c2);
    display(result, r1, c2);
    display(result1, r1, c2);

    return 0;
}
