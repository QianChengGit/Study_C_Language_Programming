#include<stdio.h>
#define N 5
#define MAX_TERM 15

typedef struct juzhen
{
    int row;        //行
    int col;        //列
    int value;        //元素值
};

int text[][5] = {{0,5,6,0,4},{0,0,0,0,0},{1,0,0,0,0},{1,0,0,0,0},{0,2,0,0,1}};
struct juzhen a[MAX_TERM];        //存放矩阵中元素数值不为零的元素
struct juzhen b[MAX_TERM];        //转置后的矩阵

int chushi(struct juzhen a[MAX_TERM])            //初始化稀疏矩阵
{
    int count_value = 0;    //统计矩阵中元素数值不为零的元素的总和
    int i,j;
    int count_a = 1;
    for(i = 0;i < N;i++)
    {
        for(j = 0;j < N;j++)
        {
            if(text[i][j] != 0)
            {
                a[count_a].row = i;
                a[count_a].col = j;
                a[count_a].value = text[i][j];
                count_a++;
            }
        }
    }
    a[0].col = 5;            //矩阵的总列数
    a[0].row = 5;            //矩阵的总行数
    a[0].value = --count_a;    //矩阵中的元素个数

    return count_a;
}

void showjuzhen(struct juzhen a[MAX_TERM],int count_a)        //显示稀疏矩阵
{
    int i,j;
    int text = 1;
    for(i = 0;i < N;i++)
    {
        for(j = 0;j < N;j++)
        {
            if(a[text].row == i && a[text].col == j)
            {
                printf(" %d ",a[text].value);
                text++;
            }
            else
                printf(" 0 ");
        }
        printf("\n");
    }

}

void showjuzhen_2(struct juzhen a[MAX_TERM],int count_a)            //显示稀疏矩阵方法二
{
    int i;
    printf(" i row col val\n");
    for(i = 0;i < count_a + 1;i++)
    {
        printf(" %d|  %d   %d   %d\n",i,a[i].row,a[i].col,a[i].value);
    }
}


void zhuanzhi_1(struct juzhen a[MAX_TERM],struct juzhen b[MAX_TERM])            //转置矩阵方法一
{
    int i,j;
    int count_b = 1;        //b的当前元素下标
    b[0].row = a[0].col;
    b[0].col = a[0].row;
    b[0].value = a[0].value;
    for(i = 0;i < a[0].col;i++)
    {
        for(j = 1;j <= a[0].value;j++)
        {
            if(a[j].col == i)
            {
                b[count_b].row = a[j].col;
                b[count_b].col = a[j].row;
                b[count_b].value = a[j].value;
                count_b++;
            }
        }
    }
}


void zhuanhuan_2(struct juzhen a[MAX_TERM],struct juzhen b[MAX_TERM])
{
    int term[N],star[N];        
    int n = a[0].value;
    int i,j,k;
    int b_star;

    for(i = 0;i < N;i++)    
        term[i] = 0;

    for(j = 0;j <= a[0].value;j++)
        term[a[j].col]++;
    
    star[0] = 1;
    for(k = 1;k < N;k++)
        star[k] = star[k - 1] + term[k - 1];

    b[0].col = a[0].col;
    b[0].row = a[0].row;
    b[0].value = a[0].value;
    for(i = 1;i <= n;i++)
    {
        b_star = star[a[i].col]++;
        b[b_star].col = a[i].row;
        b[b_star].row = a[i].col;
        b[b_star].value = a[i].value;
    }


    for(i = 0;i < a[0].value + 1;i++)
        printf(" %d|  %d   %d   %d\n",i,b[i].row,b[i].col,b[i].value);

}

int main(void)
{
    int count_a;
    count_a = chushi(a);
    showjuzhen(a,count_a);
    showjuzhen_2(a,count_a);
    printf("\n");
    zhuanhuan_2(a,b);
    zhuanzhi_1(a,b);
    showjuzhen(b,count_a);
    showjuzhen_2(b,count_a);
    return 0;
}
