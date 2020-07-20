#include <stdio.h>
#include <string.h>

void count_occurrences(char *user_data, char **keywords, int *keyword_counts, size_t n_keywords);
void print_summary(char **keywords, int *keyword_counts, size_t n_keywords);
void print_keywords(const char **keywords, size_t n_keywords);

int user_main()
{
    size_t n_keywords;

    char *keywords1[] = { "basketball", "ferrari", "programming" };
    int keyword_counts1[] = {0, 0, 0};
    n_keywords = sizeof(keyword_counts1) / sizeof(int);
    char user_data1[] = "Watched the basketball game last night. Cousin picked me up in a ferrari and we watched the basketball game at a sports bar. Wish that happened every basketball game!";
    printf("User data: \"%s\"\n", user_data1);
    count_occurrences(user_data1, keywords1, keyword_counts1, n_keywords);
    print_summary(keywords1, keyword_counts1, n_keywords);
    
    char *keywords2[] = { "basketball", "ferrari", "programming", "netflix"};
    int keyword_counts2[] = {0, 0, 0, 0};
    n_keywords = sizeof(keyword_counts2) / sizeof(int);
    char user_data2[] = "Just bombed my programming final :( Going to watch netflix for eternity.";
    printf("User data: \"%s\"\n", user_data2);
    count_occurrences(user_data2, keywords2, keyword_counts2, n_keywords);
    print_summary(keywords2, keyword_counts2, n_keywords);
    
    char *keywords3[] = { "basketball", "ferrari", "programming", "netflix"};
    int keyword_counts3[] = {0, 0, 0, 0};
    n_keywords = sizeof(keyword_counts3) / sizeof(int);
    char user_data3[] = "netflix netflix netflix netflix netflix programming ferrari basketball basketball \t\n netflix";
    printf("User data: \"%s\"\n", user_data3);
    count_occurrences(user_data3, keywords3, keyword_counts3, n_keywords);
    print_summary(keywords3, keyword_counts3, n_keywords);
}

void count_occurrences(char *user_data, char **keywords, int *keyword_counts, size_t n_keywords){
    char *token = strtok(user_data, " ");
    while (token != NULL) {
        int i;
        for(i = 0; i < n_keywords; i++) {
            int cmp = strcmp(token, keywords[i]);
            if (cmp == 0) {
                keyword_counts[i]++;
            }
        }
        token = strtok(NULL," ");
    }
}

void print_summary(char **keywords, int *keyword_counts, size_t n_keywords){
    printf("Keywords frequency:\n");
    int i;
    for (i = 0; i < n_keywords; i++) {
        printf("%s: %d\n",keywords[i], keyword_counts[i]);
    }
}


// This function has been provided as a helper function for print_summary().
// prints the list of a keywords. This function may be useful for making your print_summary
// (or at least basing the print_summary off of this code)
void print_keywords(const char **keywords, size_t n_keywords){
  printf("Printing keywords:\n");
  int i;
  for(i = 0; i < n_keywords; i++){
    printf("\t%s\n", keywords[i]);
  }
}
