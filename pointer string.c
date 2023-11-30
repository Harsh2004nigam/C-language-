#include <stdio.h>
int main()
{
    /* agar hume string ki value
    change karni hai to hume pointer
    use karna hoga*/
    char *changestr = "Hello world";
    puts(changestr);
    changestr = "hello";
    puts(changestr);
    
    
    /* because agar hum array[] use
    karege to hum us ki value change
    nahi kar payege */

    /*char Notchangestr[] = "Hello world";
    puts(Notchangestr);
    Notchangestr = "hello";
    puts(Notchangestr);
    */
    return 0;
}