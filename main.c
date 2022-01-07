#include <stdio.h>
int division(int *p, int root, int degree, int row){
    int (*array)[degree] = p;
    int remainder = 0;
    for (int i = 0; i <= degree+1; i++)
    {
        *p[row][i] = 1;
    }
    
    return remainder;
}

int main(){
    int degree = 0;
    printf("Insert p(x) degree: ");
    scanf("%d", &degree);
    int p[degree+1][degree+1];
    int root[degree+1];
    printf("Inser p(x) coeficients, starting with the lowest\n");
    for (int i = 0; i < degree+1; i++)
    {
        printf("Insert a%d: ", i);
        scanf("%d", &p[0][i]);
    }

    int i = 0, j = 0;

    while (i <= degree+1)
    {
        printf("Insert the root you want to divide p(x): ");
        scanf("%d", &root[i]);
        int remainder;
        remainder = division(p, root[i], degree - i, i);
        if (remainder == 0)
        {
            i++;
        }else{
            continue;
        }
    }
}
