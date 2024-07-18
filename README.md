# Lex_folder
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11




int main(int argc, char **argv)
{
    if (argc < 2) {
        fprintf(stderr, "Usage: %s <input file>\n", argv[0]);
        return 1;
    }

    FILE *file = fopen(argv[1], "r");
    if (!file) {
        perror("Could not open file");
        return 1;
    }

    yyin = file;
    
    printf("Starting parsing...\n");
    int result = yyparse();
    printf("Finished parsing.\n");

    fclose(file);
    return result;
}
