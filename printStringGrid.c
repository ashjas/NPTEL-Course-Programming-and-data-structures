#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int count = 0,M,N;
char **ARR;
typedef struct nodeStr
{
    char * str;
    struct nodeStr* next;
}nodeStr;
typedef struct coeff
{
    int x,y;
}coeff;
coeff A[9] ={
            {-1,-1},//0
            {-1,0},//1
            {-1,1},//2
            {0,-1},//3
            {0,0},//4
            {0,1},//5
            {1,-1},//6
            {1,0},//7
            {1,1},//8
            };

int PATH[8][8]={
                {1,2,5,8,7,6,3,0},//UR
                {1,0,3,6,7,8,5,2},//UL
                {3,0,1,2,5,8,7,6},//LU
                {5,2,1,0,3,6,7,8},//RU
                {7,8,5,2,1,0,3,6},//DR
                {7,6,3,0,1,2,5,8},//DL
                {3,6,7,8,5,2,1,0},//LD
                {5,8,7,6,3,0,1,2},//RD
                };

int valid(int i, int j)
{
    if(i >= 0 && i <M && j >= 0 && j < N)
        return 1;
    else return 0;
}
void UR(int i, int j)
{
    char  buff[10];
    buff[0]=ARR[i][j];
    buff[1]='\0';
    int m,n;
    for(m=0; m<8; m++)
    {
        if(valid(i + A[PATH[0][m]].x , j + A[PATH[0][m]].y))
        {
            char c = ARR[i + A[PATH[0][m]].x]  [j + A[PATH[0][m]].y];
            if(buff[strlen(buff) - 1] == c)
                break;
            sprintf(buff + strlen(buff),"%c",c );
        }
        else break;
    }
    printf("\nUR:%s",buff);
}
void UL(int i, int j)
{
    char  buff[10];
    buff[0]=ARR[i][j];
    buff[1]='\0';
    int m,k;
    for(m=0; m<8; m++)
    {
        if(valid(i + A[PATH[1][m]].x , j + A[PATH[1][m]].y))
        {
            char c = ARR[i + A[PATH[1][m]].x]  [j + A[PATH[1][m]].y];
            if(buff[strlen(buff) - 1] == c)
                break;
            sprintf(buff + strlen(buff),"%c",c );
        }
        else break;
    }
    printf("\nUL:%s",buff);
}
void LU(int i, int j)
{
    char  buff[10];
    buff[0]=ARR[i][j];
    buff[1]='\0';
    int m,k;
    for(m=0; m<8; m++)
    {
        if(valid(i + A[PATH[2][m]].x , j + A[PATH[2][m]].y))
        {
            char c = ARR[i + A[PATH[2][m]].x]  [j + A[PATH[2][m]].y];
            if(buff[strlen(buff) - 1] == c)
                break;

            sprintf(buff + strlen(buff) ,"%c",c );
        }
        else break;
    }
    printf("\nLU:%s",buff);
}
void RU(int i, int j)
{
    char  buff[10];
    buff[0]=ARR[i][j];
    buff[1]='\0';
    int m,k;
    for(m=0; m<8; m++)
    {
        if(valid(i + A[PATH[3][m]].x , j + A[PATH[3][m]].y))
        {
            char c = ARR[i + A[PATH[3][m]].x]  [j + A[PATH[3][m]].y];
            if(buff[strlen(buff) - 1] == c)
                break;

            sprintf(buff + strlen(buff),"%c",c );
        }
        else break;
    }
    printf("\nRU:%s",buff);
}
void DR(int i, int j)
{
    char  buff[10];
    buff[0]=ARR[i][j];
    buff[1]='\0';
    int m,k;
    for(m=0; m<8; m++)
    {
        if(valid(i + A[PATH[4][m]].x , j + A[PATH[4][m]].y))
        {
            char c = ARR[i + A[PATH[4][m]].x]  [j + A[PATH[4][m]].y];
            if(buff[strlen(buff) - 1] == c)
                break;

            sprintf(buff + strlen(buff),"%c",c );
        }
        else break;
    }
    printf("\nDR:%s",buff);
}
void DL(int i, int j)
{
    char  buff[10];
    buff[0]=ARR[i][j];
    buff[1]='\0';
    int m,k;
    for(m=0; m<8; m++)
    {
        if(valid(i + A[PATH[5][m]].x , j + A[PATH[5][m]].y))
        {
            char c = ARR[i + A[PATH[5][m]].x]  [j + A[PATH[5][m]].y];
            if(buff[strlen(buff) - 1] == c)
                break;
            sprintf(buff + strlen(buff),"%c",c );
        }
        else break;
    }
    printf("\nDL:%s",buff);
}
void LD(int i, int j)
{
    char  buff[10];
    buff[0]=ARR[i][j];
    buff[1]='\0';
    int m,k;
    for(m=0; m<8; m++)
    {
        if(valid(i + A[PATH[6][m]].x , j + A[PATH[6][m]].y))
        {
            char c = ARR[i + A[PATH[6][m]].x]  [j + A[PATH[6][m]].y];
            if(buff[strlen(buff) - 1] == c)
                break;
            sprintf(buff + strlen(buff),"%c",c );
        }
        else break;
    }
    printf("\nLD:%s",buff);
}
void RD(int i, int j)
{
    char  buff[10];
    buff[0]=ARR[i][j];
    buff[1]='\0';
    int m,k;
    for(m=0; m<8; m++)
    {
        if(valid(i + A[PATH[7][m]].x , j + A[PATH[7][m]].y))
        {
            char c = ARR[i + A[PATH[7][m]].x]  [j + A[PATH[7][m]].y];
            if(buff[strlen(buff) - 1] == c)
                break;
            sprintf(buff + strlen(buff),"%c",c );
        }
        else break;
    }
    printf("\nRD:%s",buff);
}
void print(char arr[], int start, int end)
{
    int i;
    for(i=start;i<=end;i++)
    {
        printf("%c",arr[i]);
    }
    printf("\n");
    count++;
}


void substrings(char arr[], int n)
{
    int pass,j,start,end;
    int no_of_strings = n-1;

    for(pass=0;pass<n;pass++)
    {
        start = 0;
        end = start+pass;
        for(j=no_of_strings;j>=0;j--)
        {
            print(arr,start, end);
            start++;
            end = start+pass;
        }
        no_of_strings--;
    }

}

int main()
{  
    int i,j,s1,s2;
    scanf("%d%d",&M,&N); 
    scanf("%d%d",&s1,&s2); 
    printf("\n%d %d\n",M,N);
    ARR = (char **) malloc(sizeof(char*) * M);
    for(i=0;i<N;i++)
        ARR[i] = malloc(sizeof(char) * N);
    for(i =0;i<M;i++)
        for(j=0;j<N;j++)
            scanf(" %c",&ARR[i][j]);
    
    for(i =0;i<M;i++)
        for(j=0;j<N;j++)
            printf(" %c",ARR[i][j]);
    printf("\n");
    UR(s1,s2);
    UL(s1,s2);
    LU(s1,s2);
    RU(s1,s2);
    DR(s1,s2);
    DL(s1,s2);
    LD(s1,s2);
    RD(s1,s2);
    /*
       char *str = malloc(100);
       scanf("%s",str);
    substrings(str,strlen(str));
    printf("count:%d",count);*/
    return 0;
}
