/* This is the main program that execute for further process. */
# include <stdio.h> // Library or module
void main(){    // Requesting from OS for this instruction to run.
    int choice, i=1;    // Created two variable
    while (i == 1) {    // This line insure that program never ends unless you type invalid input.
        printf(
          "\t   **************************************************\n"
          "           *             \tMain Menu             \t    *\n"
          "           *            ------------------------            *\n"
          "           *      \t1. Login\t            \t    *      \n"
          "           *      \t2. Create Account\t    \t    *\n"
          "           *      \t3. Exit\t              \t\t    *\n"
          "\t   **************************************************\n\n");   // Basic UI for our program.
        printf("Enter your choice: ");  // Asking choice for input.
        scanf("%d", &choice);   // Storing input in variable choice.
        switch (choice) {
        case 1: // we have to create function.
            //login(); ---- Function name
            break;
        case 2: // we have to create function.
            //addaccount(); ---- Function name
            break;
        case 3: // It will exit the program
            i=0;
            break;
        default:    // If someone enter (A-Z, a-z) or combination of (A-Z, a-z and 0-9) then shows invalid input and exit the program.
            printf("\n\tI N V A L I D  I N P U T  !\n");
            i=0;
        }
    }
}
