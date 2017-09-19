// Gustavo dos Santos Soares
// Matricula: 1357347
// ED2
#include "hash.h"

struct hash
{
	int qtd;
	int TABLE_SIZE;
	int **item;
};


Hash* create_hash(int TABLE_SIZE)
{
	Hash* ha = (Hash*)malloc(TABLE_SIZE*sizeof(Hash));
	if(ha != NULL)
	{
		ha->TABLE_SIZE = TABLE_SIZE;
		if(ha->item == NULL)
		{
			free(ha);
			return NULL;
		}
		ha->qtd = 0;
		for (int i = 0; i < ha->TABLE_SIZE; i++)
		{
			ha->item[i] = NULL;
		}
	}
	return ha;
}

void free_hash(Hash *ha)
{
	if(ha != NULL)
	{
		int i;
		for (int i=0; i<ha->TABLE_SIZE; i++)
		{
			if(ha->item[i] != NULL)
				free(ha->item[i]);
		}
		free(ha->item);
		free(ha);
	}
}

int hash(int key, int TABLE_SIZE)
{
	return (key & 0x7FFFFFFF) % TABLE_SIZE;
}

void insert(Hash* ha, int item)
{
	if(ha == NULL || ha->qtd == ha->TABLE_SIZE)
		return;

	int key = item;

	int pos = hash(key, ha->TABLE_SIZE);
	int *new_item;
	ha->item[pos] = new_item;
	ha->qtd++;
	return;
}

int search_hash(Hash* ha, int item)
{
	if(ha == NULL)
	{
		return 0;
	}
	int pos = hash(item, ha->TABLE_SIZE);
	if(ha->item[pos] == NULL)
		return 0;
	
}