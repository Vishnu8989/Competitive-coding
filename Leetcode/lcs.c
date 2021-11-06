#include <stdio.h>
#include <string.h>
int max(int num2,int num1){
    return num2>num1?num2:num1;
}
int lcs(char *t1, char *t2)
{
    int l1 = strlen(t1), l2 = strlen(t2);
    int dp[l1 + 1][l2 + 1];
    memset(dp, 0, sizeof(dp));
    for (int i = l1 - 1; i >= 0; i--)
    {
        for (int j = l2 - 1; j >= 0; j--)
        {
            if (t1[i] == t2[j])
            {
                dp[i][j] = 1 + dp[i + 1][j + 1];
            }
            else
            {
                dp[i][j] = max(dp[i][j + 1], dp[i + 1][j]);
            }
        }
    }
    for (int i = 0; i < l1; i++)
    {
        for (int k = 0; k < l2 && i==0; k++)
        {
            printf("\t%c",t2[k]);
        }
        printf("\n\n");
        for (int j = 0; j < l2; j++)
        {   
            if (j == 0)
            {
                printf("%c", t1[i]);
            }
            printf("\t%d",dp[i][j]);
        }
        printf("\n");
    }
    return dp[0][0];
}
int main()
{
    printf("\nEnter String 1 : ");
    char a[100],b[100];
    scanf("%s",&a);
    printf("\nEnter String 2 : ");
    scanf("%s",&b);
    printf("\nLongest Subsequence was : %d",lcs(a,b));
}


