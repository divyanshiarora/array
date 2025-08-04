#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_WORDS 100
#define MAX_WORD_LEN 50
#define MAX_PARAGRAPH_LEN 1000

typedef struct {
    char word[MAX_WORD_LEN];
    int count;
} WordFreq;

int main() {
    char paragraph[MAX_PARAGRAPH_LEN];
    WordFreq words[MAX_WORDS];
    int wordCount = 0;

    printf("Enter a paragraph:\n");
    fgets(paragraph, sizeof(paragraph), stdin);

    for (int i = 0; paragraph[i]; i++) {
        paragraph[i] = tolower(paragraph[i]);
    }

    const char *delimiters = " ,.!?\n\t;:";
    char *token = strtok(paragraph, delimiters);

    while (token != NULL) {
        int found = 0;

        for (int i = 0; i < wordCount; i++) {
            if (strcmp(words[i].word, token) == 0) {
                words[i].count++;
                found = 1;
                break;
            }
        }

        if (!found && wordCount < MAX_WORDS) {
            strcpy(words[wordCount].word, token);
            words[wordCount].count = 1;
            wordCount++;
        }

        token = strtok(NULL, delimiters);
    }

    printf("\nWord Frequencies:\n");
    for (int i = 0; i < wordCount; i++) {
        printf("%s: %d\n", words[i].word, words[i].count);
    }

    return 0;
}
