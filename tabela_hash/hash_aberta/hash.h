#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct hash Hash;

Hash* create_hash(int TABLE_SIZE);
void free_hash(Hash *ha);
int hash(int key, int TABLE_SIZE);
void insert(Hash* ha, int item);