#ifndef SYMBOL_TABLE_H
#define SYMBOL_TABLE_H

#include <stdio.h>   // לשימוש בפונקציות I/O במידת הצורך
#include <stdlib.h>  // לשימוש בפונקציות הקצאת זיכרון (malloc, free)
#include <string.h>  // לשימוש במניפולציות על מחרוזות (strdup, strcmp)

// מבנה הנתונים - רשימה מקושרת אשר כל סקופ מכיל רשימה מקושרת בעצמו, כמו במעבדה של אלכס
typedef struct Symbol {
    char* name;                 // שם הסמל (משתנה או פונקציה)
    char* type;                 // סוג הסמל (int, float, וכו')
    struct Symbol* next;        // מצביע לסמל הבא באותו scope
} Symbol;

typedef struct Scope {
    struct Symbol* symbols;     // רשימת סמלים עבור scope זה
    struct Scope* parent;       // מצביע ל-scope האב
    struct Scope* next;         // מצביע ל-scope הבא ברשימה המקושרת
} Scope;

typedef struct SymbolTable {
    struct Scope* globalScope;  // מצביע ל-scope הגלובלי
    struct Scope* currentScope; // מצביע ל-scope הנוכחי
} SymbolTable;

// ניהול סקופים וטבלת סמלים לפי מה שהגדרנו לקובץ parser.y
SymbolTable* create_symbol_table();
void add_symbol(SymbolTable* table, char* name, const char* type);
Symbol* find_symbol(SymbolTable* table, char* name);
void enter_scope(SymbolTable* table);
void exit_scope(SymbolTable* table);
void free_symbol_table(SymbolTable* table);
void print_current_scope(SymbolTable* table);
char *handler_symbolName(char* name);
char *handler_symbolType(char* type);
void handler(char *name, char *type);

#endif // SYMBOL_TABLE_H
