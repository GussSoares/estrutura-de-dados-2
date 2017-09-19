#include "hash.h"
#define TABLE_SIZE 1021

int main(int argc, char *argv[])
{

	Hash *ha = create_hash(TABLE_SIZE);
	free_hash(ha);
	for (int i = 0; i < 4; i++)
	{
		insert(ha, i);
	}
	printf("hash\n");
	return 0;
}