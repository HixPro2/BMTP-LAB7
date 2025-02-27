#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>

void to_lowercase(char *str) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower((unsigned char)str[i]);
    }
}
int main() {
    setlocale(LC_ALL, "uk_UA.UTF-8");  
    char sentence[256];
    printf("Введіть речення: ");
    fgets(sentence, sizeof(sentence), stdin);
    size_t len = strlen(sentence);
    if (len > 0 && (sentence[len - 1] == '.' || sentence[len - 1] == '!' || sentence[len - 1] == '?')) {
        sentence[len - 1] = '\0';
    }
    to_lowercase(sentence);
    if (strstr(sentence, "програма") != NULL) {
        printf("Речення містить слово \"програма\".\n");
    } else {
        printf("Речення НЕ містить слово \"програма\".\n");
    }
    return 0;
}