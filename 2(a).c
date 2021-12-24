
int main()
{
    char str[100];
    int i, j;
    printf("Enter a sequence of characters \n");
    fgets(str, sizeof(str), stdin);
    printf("The resulting character sequence \n");
    if (strchr(str, '$')) 
    {
        for (i = 0; str[i] != '$' && i < strlen(str); i++){
            if (str[i] == '.')
            {
                printf("%c", '.');
                i++;
                j = i;
                while ((int)str[j] >= 48 && (int)str[j] <= 57)
                    j++;
                if (j-i > 2)
                {
                    printf("%c%c", str[i], str[i+1]);
                    i += j-i-1;
                } else
                {
                    printf("%c%c", str[i], str[i+1]);
                    i++;
                }
            } else
                printf("%c", str[i]);
        }
    } else
        printf("The resulting character sequence doesn't end by '$'");
    return 0;
}