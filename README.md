# mdos
Unix/Linux based replacement of Borlands dos.h 
dos.h is a header file of C Language. This library has functions that are used for handling interrupts, producing sound, date and time functions, etc. It is Borland specific and works in compilers like Turbo C Compiler.

# beeper
Emulation of the classic beeper is existing with ALSA support. The Advanced Linux Sound Architecture (ALSA) provides audio and MIDI functionality to the Linux operating system. 

# Code Examples
Below is the program to illustrate delay():
``` 
// C program to implement delay()
#include "mdos.h"

// Driver Code
int main()
{
    printf("Takes 10 sec and exit.\n");
 
    // Delay the program execution
    // for 1 second
    delay(10000);
    return 0;
}
``` 

Below is the program to illustrate sleep():
``` 
// C program to implement sleep()
#include "mdos.h"
 
// Driver Code
int main()
{
    printf("Wait 2 sec and exit.\n");
 
    // Delay the program execution
    // for by 2 seconds
    sleep(2);
    return 0;
}
``` 

example how to implement sound()
``` 
#include "mdos.h"
 
// Driver Code
int main()
{
    // Initialise frequency
    int x = 200;
 
    // Loop for playing sound of
    // increasing frequency
    for (; x < 600; x++) {
 
        // Function to play sound
        sound(x);
        delay(25);
    }
 
    // To stop the sound
    nosound();
    return 0;
}
``` 
# Compiling
You can compile the code with:
```
gcc *.c -lm -lasound
```
# The goal
The aim for this little C library is to make a 100% Borland
compatible linux alernative. So it will be easier to port
old DOS-games and listnings to Linux or Unix. 

# Status
What is missing now is all date and time functions
after that is done then the functions part is complete.
The sound might also need some improvement. Its tricky
to emulate the old beeper with a real soundcard.

# Have fun
Please use this library in what ever project you like. 
It would be positive if i would hear in what projects
its been used in. Also any feedback or improvments are 
more then welcome.

Magnus Grander


























