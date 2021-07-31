#include "comonestr.h"
char comthreestr (char *str0, char *str1, char *str2, char c)//char c hwa ima  "X" awla "O"
{
  int   i, j, k;
  for (i = 0;i<3;i++)
    {
        for (j = 0;j<3;j++)
        {
            for (k = 0;k<3;k++)
            {
                if ((str0[i] == c && (str1[j] == c || str2[k] == c)) || (str1[j] == c && str2[k] == c))
                {
                    if ( str0[i] != 'X' && str0[i] != 'O' &&(((i == j && j ==k && k == i)) ||
                                          ((j == 1 && k == 2 && i == 0 ) || (j == 1 && k == 0 && i == 2))))
                                          {
                                              return (str0[i]);
                                              }
                                              if (str1[j] != 'O' && str1[j] != 'X' && (((i == j && j ==k && k == i)) ||
                                                                   ((j == 1 && k == 2 && i == 0 ) || (j == 1 && k == 0 && i == 2))))
                                                                    {
                                                                        return (str1[j]);
                                              }
                                              if (str2[k] != 'X' && str2[k] != 'O' && (((i == j && j ==k && k == i))||
                                                                   ((j == 1 && k == 2 && i == 0 ) || (j == 1 && k == 0 && i == 2))))
                                                                    {
                                                                        return(str2[k]);
                                              }
                                              }
                                              }
                                              }
                                              }
                                            if (com_onestr(str0, c) != 0)
                                                return (com_onestr(str0, c));
                                            if (com_onestr(str1, c) != 0)
                                                return (com_onestr(str1, c));
                                            if (com_onestr(str2, c) != 0)
                                                return (com_onestr(str2, c));
                                                else
                                                    return 0;
                                            return 0;

                                              }

