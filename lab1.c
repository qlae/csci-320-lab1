#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 1024

char* readString(const char* filename) {
    FILE* file = fopen(filename, "r");
    if (!file) {
        fprintf(stderr, "Can't find %s\n", filename);
        return NULL;
    }

    char* string = (char*)malloc(MAX_LINE_LENGTH);
    if (!string || !fgets(string, MAX_LINE_LENGTH, file)) {
        fprintf(stderr, "Error reading from %s\n", filename);
        free(string);
        string = NULL;
    }

    fclose(file);
    return string;
}

char* mysteryExplode(const char* str) {
    int len = strlen(str);
    int explodedLength = len * (len + 1) / 2 + 1;
    char* explodedString = (char*)malloc(explodedLength);

    if (!explodedString) {
        return NULL;
    }

    int r = 0;

    for (int d = 0; d < len; d++) {
        for (int s = 0; s <= d; s++) {
            explodedString[r++] = str[s];
        }
    }

    explodedString[r] = '\0';
    return explodedString;
}

int main() {
    const char* filename = "example.txt";
    char* content = readString(filename);

    if (content) {
        printf("Read from %s: %s\n", filename, content);

        char* exploded = mysteryExplode(content);
        if (exploded) {
            printf("Exploded string: %s\n", exploded);
            free(exploded);
        }

        free(content);
    }

    return 0;
}
