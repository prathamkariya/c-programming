#include <stdio.h>

int main() {
    printf("===== ESCAPE SEQUENCES DEMO =====\n\n");

    // \n : New line
    printf("Hello\\nWorld:\nHello\nWorld\n\n");

    // \t : Horizontal tab
    printf("A\\tB\\tC:\nA\tB\tC\n\n");

    // \\ : Backslash
    printf("Backslash: \\\n\n");

    // \" : Double quote
    printf("Double quote: \"Hello\"\n\n");

    // \' : Single quote
    printf("Single quote: \'Hi\'\n\n");

    // \r : Carriage return
    printf("Carriage return: Hello\rWorld\n"); // Overwrites "Hello" with "World"
    printf("\n");

    // \b : Backspace
    printf("Backspace: ABC\bD\n\n"); // removes 'C', prints ABD

    // \f : Form feed
    printf("Form feed: Hello\fWorld (may appear differently in console)\n\n");

    // \a : Alert (beep)
    printf("Alert: \a(Beep sound may play)\n\n");

    // \v : Vertical tab
    printf("Vertical tab: Hello\vWorld\n\n");

    // \0 : Null character (string terminator)
    char s[] = "Hi\0There";
    printf("Null character: %s (prints only until \\0)\n\n", s);

    // \? : Question mark
    printf("Question mark: What\?\n\n");

    // \ooo : Octal value
    printf("Octal value \\101 prints: %c\n\n", '\101'); // prints 'A'

    // \xhh : Hex value
    printf("Hex value \\x41 prints: %c\n\n", '\x41'); // prints 'A'

    return 0;
}
