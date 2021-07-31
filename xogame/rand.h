
#include<time.h>
char rnd()
{
   const  int MIN = 1;
    const int MAX = 9;
    int number = 0;
    srand(time(NULL));
    number = (rand() % ((MAX - MIN) + 1)+ MIN);
    return (number  + 48);

}
