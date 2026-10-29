int lengthOfLastWord(char* s)
{
    int i = 0;
    int count = 0;

//  we need to Traverse the string until the null character is not equal to null
while (s[i] != '\0') 
{
    // If a space is encountered, reset the count to 0
    if (s[i] == ' ') 
    {
        count = 0;
    } 
    else 
    {
        // If the character is not a space, increment the count
        count++;
    }
    // Move to the next character in the string
    i++;
}
// Skip trailing spaces
while (i > 0 && s[i - 1] == ' ') 
{
    i--;
}

// Count the last word
count = 0;

while (i > 0 && s[i - 1] != ' ') 
{
    count++;
    i--;
}
// Return the count of characters in the last word
return count;
}
    

