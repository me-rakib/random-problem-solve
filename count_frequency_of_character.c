#include<stdio.h>
#include<string.h>

#define MAX_VALUE 100
int main()
{
    char line[MAX_VALUE] = "NITK SURATHKAL", c_array[MAX_VALUE];
    fgets(line,sizeof(line),stdin);
    int total_character = strlen(line)-1;
    int i, j, count;
    for(i=0; i<total_character; i++)
    {
        count = 1;
        if(line[i] != '\0')
        {
            for(j=i+1; j<total_character; j++)
            {
                if(line[i]==line[j])
                {
                    count++;
                    line[j] =  '\0';
                }
            }
            c_array[i] = count;
            printf("%c = %d\n",line[i],count);
        }
        count=0;
    }
    return 0;
}
