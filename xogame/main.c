#include<unistd.h>
#include<time.h>

#include<stdio.h>
#include<stdlib.h>
#include "changevalue.h"
#include "comthreestr.h"
#include "chfwin.h"
#include"rand.h"
void disblay (char *str0, char *str1, char *str2)
{
int     i;
    for (i = 0; i < 3;i++ )
        {
        write (1,"\t",1);
        write (1,str0+i,1);
        write (1,"\t",1);
        write (1,"\t",1);
        }
        write (1,"\n",1);
        write (1,"\n",1);
        write (1,"\n",1);
        for (i = 0; i < 3;i++ )
        {
            write (1,"\t",1);
            write (1,str1+i,1);
            write (1,"\t",1);
            write (1,"\t",1);
        }
        write (1,"\n",1);
        write (1,"\n",1);
        write (1,"\n",1);

        for (i = 0; i < 3;i++ )
        {
            write (1,"\t",1);
            write (1,str2+i,1);
            write (1,"\t",1);
            write (1,"\t",1);
        }
}
char playe_game ()
{
    char com1, com2, com3, number;
    char    x = 'X';
    char    o = 'O';
    char    str0[] = "123";
    char    str1[] = "456";
    char    str2[] = "789";
    loade ();
    start:
        system("cls");
    disblay (str0, str1, str2);
    printf("\n \n \n \t \t>hello user select number from 1-9 :");
    get:
    number = getchar();
    getchar();
    if (number <= '9' && number > '0')
    change_value (str0, str1, str2, number,'X');
    else{
    printf("\t \t select number from 1-9:");
    goto get;
    }
    com1 = comthreestr (str0, str1, str2, o);
    com2 = comthreestr(str0, str1, str2, x);
    if ( com1 == 0 && com2 == 0 )
    {
     change_value (str0, str1, str2, rnd(), o);
    }
     change_value (str0, str1, str2,  com3 = comthreestr (str0, str1, str2, o),o);
     if ( com3 == 0 )
    change_value (str0, str1, str2, comthreestr (str0, str1, str2, x),o);

    goto start;
}
int main ()
{
playe_game ();
return 0;
}
