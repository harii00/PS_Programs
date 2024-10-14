#include<stdio.h>
#include<string.h>
void main(){
    char str1[100],str2[100];
    printf("Enter the first string: ");
    fgets(str1,100,stdin);
    str1[strcspn(str1, "\n")] = '\0';  // Remove newline character from str1
    printf("Enter the first string: ");
    fgets(str2,100,stdin);
    int len = strlen(str1);
    int i=len,j=0;
    for(i,j;str2[j]!='\0';i++,j++){
        str1[i]=str2[j];
    }
    str1[i]='\0';
    printf("The concatenated string is : %s",str1);
    
}
/*
The line `str1[strcspn(str1, "\n")] = '\0';` is used to remove the newline character (`'\n'`) that `fgets()` captures when you input a string. Let me explain it step by step:

 What happens with `fgets()`?
When you use `fgets()`, it reads the input from the user, including the newline character (`'\n'`) that is added when you press the Enter key.

For example, if you enter `"Hello"` and press Enter, `fgets()` stores the string like this:

```
"Hello\n\0"
```
Here, `\n` is the newline character, and `\0` is the null terminator that marks the end of the string.

If you don't remove the newline, it will affect the output when you concatenate or print strings, since the newline gets included.

What does `strcspn()` do?
`strcspn()` is a function that calculates the number of characters in the input string (`str1`) before encountering any character from a second string (in this case, `"\n"`).

So, `strcspn(str1, "\n")` will return the position (index) of the newline character (`'\n'`) in `str1`.

What does `str1[strcspn(str1, "\n")] = '\0';` do?
This line sets the position of the newline character to `'\0'` (null terminator), effectively removing the newline from the string.

Example:
- If you enter `"Hello\n"` (with the newline at the end),
- `strcspn(str1, "\n")` returns `5`, which is the position of the newline character.
- Then, `str1[5] = '\0';` replaces the newline with a null terminator, so the string becomes `"Hello\0"`, which is properly terminated without the newline.

Why is it important?
If you don't remove the newline:
- When concatenating, there will be an extra newline in the middle of your strings.
- When printing, the string might appear with an unintended line break.

By adding this line, you ensure that your string is clean and ready for further operations like concatenation or comparison.

Let me know if that clarifies things!*/