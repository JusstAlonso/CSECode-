#include <stdio.h>
#define MAXSIZE 4096

/**
 * You can use this recommended helper function 
 * Returns true if partial_line matches pattern, starting from
 * the first char of partial_line.
 */
int matches_leading(char *partial_line, char *pattern) {
   int pat = 0;
   int line = 0;

   while ( pattern[pat] != '\0' ) {

      if ( partial_line[line] == '\0' ) {
         return 0;
      }

      else if ( pattern[pat] == '\\' ) {    	                               	// Checks wildcards as characters
         if ( pattern[pat + 1] == partial_line[line] ) {			// Reads next character to search for
            pat += 2;
            line++;
            continue;
         }
         else {									// If the wildcard char doesnt equal partial_line
            return 0;								// Ends current search
         }
      }

      else if ( pattern[pat] == '.' ) {						// Checks any char
         pat++;
         ++line;

         if ( partial_line[line] == '\0' ) {
            return 0;
         }

         continue;
      }

      else if ( pattern[pat] == '?' ) {
         if ( pattern[pat - 1] == partial_line[line] && pattern[pat + 1] != partial_line[line] ) {
            line++;
         }
         pat++;
         continue;
      }

      else if ( pattern[pat] == '+' ) {
         if ( pattern[pat - 1] == '.' && pattern[pat - 2] != '\\' ) {		// Checks for non-empty checks
            return 1;
         }

         while ( pattern[pat - 1] == partial_line[line] ) {			// Continuos check if the same
            line++;
         }

         int same = 1;
         while ( pattern[pat + 1] == pattern[pat - 1] ) {
            same++;
         }

         pat += same;
         continue;
      }

      else if ( pattern[pat] == partial_line[line] ) {
         if ( pattern[pat + 1] != '?' ) {
            line++;
         }
         pat++;
         continue;
      }

      else  if ( pattern[pat + 1] == '?' && pattern[pat + 2] == '\0' ) {
         return 1;
      }

      else {
        return 0;
      }
   }

      return 1;									// Pattern and partial_line match
}

/**
 * You may assume that all strings are properly null terminated 
 * and will not overrun the buffer set by MAXSIZE 
 *
 * Implementation of the rgrep matcher function
 */
int rgrep_matches(char *line, char *pattern) {

   while ( *line ) {
      if ( matches_leading ( line, pattern ) ) {
         return 1;
      }
      line++;
   }

   return 0;
}

int main(int argc, char **argv) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <PATTERN>\n", argv[0]);
        return 2;
    }

    /* we're not going to worry about long lines */
    char buf[MAXSIZE];

    while (!feof(stdin) && !ferror(stdin)) {
        if (!fgets(buf, sizeof(buf), stdin)) {
            break;
        }
        if (rgrep_matches(buf, argv[1])) {
            fputs(buf, stdout);
            fflush(stdout);
        }
    }

    if (ferror(stdin)) {
        perror(argv[0]);
        return 1;
    }

    return 0;
}
