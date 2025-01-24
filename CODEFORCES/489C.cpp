#include <stdio.h>
#include <string.h>

void str_rev(char str[], int length);

int main()
{
    int digit;
    int digitSum;
    int index;
    char maxNum[101];
    char minNum[101];

    scanf("%d %d", &digit, &digitSum);
    
     //digit is always greater than 0
     
    if(digitSum==0 && digit==1)
    {
        printf("0 0\n");
    }

    else if(digitSum==0 || 9*digit < digitSum)
    {
        printf("-1 -1\n");
    }

    else
    {
        for(int i=0; i < digit; i++)
        {
            if(digitSum >= 9)
            {
                maxNum[i] = ('0' + 9);
                digitSum -= 9;
            }
            else if(digitSum > 0)
            {
                maxNum[i] = ('0' + digitSum);
                digitSum = 0;
            }
            else
            {
                maxNum[i] = '0';
            }
        }

        maxNum[digit] = '\0';

        strcpy(minNum, maxNum);

        str_rev(minNum, strlen(minNum)); //user defined string reverse function

        if(minNum[0]=='0') //in case where first number in reversed string is zero.
        {
            for(int i=0; minNum[i]!='\0'; i++)
            {
                if(minNum[i]!='0')
                {
                    index = i;
                    break;
                }
            }
            minNum[0] = ('0' + 1);        //incrementing zero value by one.
            minNum[index] = (minNum[index] - 1);  //decrementing non-zero value by 1.
        }

        printf("%s %s\n", minNum, maxNum);
    }

    return 0;
}

void str_rev(char str[], int length)
{
    int i, j;

    for(i=0, j=length-1; i<j; i++, j--)
    {
        int temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}