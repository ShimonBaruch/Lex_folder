#include "symbol_table.h"


SymbolTable* table = NULL;
char* type_c = NULL;
// יצירת טבלת סמלים וסקופ נוכחי, יהיה בעצם השורש של העץ 

SymbolTable* create_symbol_table() {
    SymbolTable* table = (SymbolTable*)malloc(sizeof(SymbolTable));
    table->globalScope = (Scope*)malloc(sizeof(Scope));
    table->globalScope->symbols = NULL;
    table->globalScope->parent = NULL;
    table->globalScope->next = NULL;
    table->currentScope = table->globalScope;
    return table;
    
}

void handler(char *name2, char *type2) {
printf("\n Function from handler ------- > name: %s, type = %s\n", name2, type2);
  if ( name2 == NULL)
    name2 = strdup(" ");
    //type2 = strdup(" ");
  if ( type2 == NULL )
    add_symbol(table, strdup(name2), strdup(type_c) );
  else
    add_symbol(table, name2, type2);
    
  if ( type2 != NULL)
    type_c = strdup(type2);
}
// הכנסה של משתנה / פונקציה לטבלת הסמלים
void add_symbol(SymbolTable* table, char* name, char* type) {
    Symbol* new_symbol = (Symbol*)malloc(sizeof(Symbol));
    new_symbol->name = strdup(name);
    new_symbol->type = strdup(type);
    new_symbol->next = table->currentScope->symbols;
    table->currentScope->symbols = new_symbol;

    printf("this is from add _symbol function --> Added symbol - Name: %s, Type: %s\n", name, type);
}

  
// חיפוש בתוך הסקופ הפנימי ויציאה לחיפוש בסקופ מעליו - הורים. בצורה הזו נבטיח שנגיע מהחלק המקונן ביותר עד לשורש
Symbol* find_symbol(SymbolTable* table, char* name) {
    Scope* scope = table->currentScope;
    while (scope != NULL) {
        Symbol* symbol = scope->symbols;
        while (symbol != NULL) {
            if (strcmp(symbol->name, name) == 0) {
                return symbol;
            }
            symbol = symbol->next;
        }
        scope = scope->parent;
    }
    return NULL; // אם לא נמצא הסמל
}

// יצירת סקופ כשנכנסים לפונקציה או לבלוק חדש.
void enter_scope(SymbolTable* table) {
    static int scope_id = 1;
    Scope* new_scope = (Scope*)malloc(sizeof(Scope));
    new_scope->symbols = NULL;
    new_scope->parent = table->currentScope;
    new_scope->next = NULL;
    new_scope->scope_id = scope_id++;
    table->currentScope = new_scope;
    printf("---- End of %d scope ---\n", new_scope->scope_id);
}


void exit_scope(SymbolTable* table) {
    printf("Exiting scope\n");
    print_current_scope(table);  // הדפסת הסקופ הנוכחי לפני היציאה ממנו
    table->currentScope = table->currentScope->parent;
}

void print_current_scope(SymbolTable* table) {
    Scope* scope = table->currentScope;
    int depth = 0;
    while (scope != NULL) {
        depth++;
        scope = scope->parent;
    }

    scope = table->currentScope;
    printf("Scope Level: %d\n", depth);
    printf("-------------\n");
    Symbol* symbol = scope->symbols;
    while (symbol != NULL) {
        printf("| %-15s | %-15s |\n", symbol->name, symbol->type);
        symbol = symbol->next;
    }
    printf("-------------\n");
    printf("\n");
}

// פונקציה לשחרור זיכרון של טבלת הסמלים
void free_symbol_table(SymbolTable* table) {
    // שחרור של כל הסמלים והסקופים
    Scope* scope = table->globalScope;
    while (scope != NULL) {
        Symbol* symbol = scope->symbols;
        while (symbol != NULL) {
            Symbol* temp = symbol;
            symbol = symbol->next;
            free(temp->name);
            free(temp->type);
            free(temp);
        }
        Scope* temp_scope = scope;
        scope = scope->next;
        free(temp_scope);
    }
    free(table);
 }   
    
    
void print_all_scopes(SymbolTable* table) {
    Scope* scope = table->currentScope;
    int scope_level = 1;

    while (scope != NULL) {
        printf("In Scope %d:\n", scope_level);
        printf("-------------\n");
        Symbol* symbol = scope->symbols;
        while (symbol != NULL) {
            printf("| %-15s | %-15s |\n", symbol->name, symbol->type);
            symbol = symbol->next;
        }
        printf("-------------\n");
        printf("\n");

        scope = scope->parent;
        scope_level++;
    }
}
