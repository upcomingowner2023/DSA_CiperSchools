int countstr(char *c1)
{
    int i = 0;
    while (c1[i] != '\0')
        i++;
    return i;
}

char *strcat(char *c1, char *c2, char delemeter = ' ')
{
    char *ans = new char(countstr(c1) + countstr(c2) + 1);
    int i = 0;

    for (int j = 0; c1[i] != '\0'; i++, j++)
        ans[i] = c1[j];
    ans[i++] = delemeter;
    for (int j = 0; c2[j] != '\0'; i++, j++)
        ans[i] = c2[j];
    ans[i] = '\0';
    return ans;
}

void strcat1(char *c1, char *c2)
{
    while (*c1 != '\0')
        c1++;

    *c1 = ' ';
    c1++;
    while (*c2 != '\0')
    {
        *c1 = *c2;
        *c1++;
        *c2++;
    }
    *c1 = '\0';
}