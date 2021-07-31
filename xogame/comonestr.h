
char com_onestr(char *str, char c)//baxe i9aren string w7da
{
int i, j;

    for (i = 0;i < 3;i++ )
    {
        for(j = (i + 1);j < 3;j++)
        {
            if (str[i] == c && str[j] == c )
            {
                for (i = 0;i < 3;i++ )
                {
                    for(j = (i + 1);j < 3;j++)
                    {
                        if (str[i] != c )
                        return (str[i]);
                        else if (str[j] != c)
                        return (str[j]);
                    }
                }
            }
        }
    }
    return 0;
}
