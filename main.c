#include <stdio.h>
//https://www.google.com/search?q=c+2d+array+modify+on+function&sxsrf=ALeKk024UN17c_Jqq90fLkXiglDulsHVCw%3A1619325681105&ei=8fKEYLrjBbSe5OUPmraswAk&oq=c+2d+array+modify+on+function&gs_lcp=Cgdnd3Mtd2l6EAM6BwgjELADECc6BwgAEEcQsAM6BggjECcQEzoICAAQBxAeEBM6BggAEB4QEzoICAAQCBAeEBM6BAgAEBM6CggAEAgQBxAeEBM6CggAEAgQDRAeEBM6CAgAEAgQBxAeOgYIABAIEB5Q4NoBWK3pAWDb6wFoBnACeACAAX-IAbkJkgEEMC4xMZgBAKABAaoBB2d3cy13aXrIAQnAAQE&sclient=gws-wiz&ved=0ahUKEwj6n_2fypjwAhU0D7kGHRobC5gQ4dUDCA4&uact=5
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