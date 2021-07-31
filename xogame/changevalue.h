
void change_value (char *str0, char *str1, char *str2, char number,char xo)
{
    int     i;
    for (i = 0; i < 3;i++ )
    {
        if (str0[i] == number)
            str0[i] = xo ;

    }
        for (i = 0; i < 3;i++ )
        {
            if (str1[i] == number)
                str1[i] = xo;
        }
        for (i = 0; i < 3;i++ )
        {
            if (str2[i] == number)
                str2[i] = xo;
        }
}
