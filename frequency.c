#include <stdio.h>
#include <ctype.h>  
#define ALPHABET_COUNT 26
int main() 
{
    char text[1000];  
    int frequency[ALPHABET_COUNT] = {0}; 
    printf("Enter a line of text: ");
    fgets(text, sizeof(text), stdin); 
    for (int i = 0; text[i] != '\0'; i++) 
    {
        if (isalpha(text[i])) 
        {  
            char lowercaseChar = tolower(text[i]);  
            int index = lowercaseChar - 'a'; 
            frequency[index]++; 
        }
    }
    int maxFrequency = 0;
    char mostFrequentChar = 'a';
    for (int i = 0; i < ALPHABET_COUNT; i++) 
    {
        if (frequency[i] > maxFrequency)
        {
            maxFrequency = frequency[i];
            mostFrequentChar = 'a' + i;
        }
    }
    printf("The most frequent alphabet is '%c' with a frequency of %d.\n", mostFrequentChar, maxFrequency);
    return 0;
}
