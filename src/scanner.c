// External scanner for tree-sitter-pascal.
//
// Currently scaffolding only — scan() always returns false. The
// fragment-detection heuristic is added in a later task.

#include "tree_sitter/parser.h"

enum TokenType {
    PP_FRAGMENT,
};

void *tree_sitter_pascal_external_scanner_create(void) {
    return NULL;
}

void tree_sitter_pascal_external_scanner_destroy(void *payload) {
    (void)payload;
}

unsigned tree_sitter_pascal_external_scanner_serialize(void *payload, char *buffer) {
    (void)payload;
    (void)buffer;
    return 0;
}

void tree_sitter_pascal_external_scanner_deserialize(
    void *payload,
    const char *buffer,
    unsigned length
) {
    (void)payload;
    (void)buffer;
    (void)length;
}

bool tree_sitter_pascal_external_scanner_scan(
    void *payload,
    TSLexer *lexer,
    const bool *valid_symbols
) {
    (void)payload;
    (void)lexer;
    (void)valid_symbols;
    // Skeleton — fragment detection is added in Task 4.
    return false;
}
