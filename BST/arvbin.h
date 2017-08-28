#include <iostream>

using namespace std;

class No{
private:
    No *esq, *dir;
    int chave;
public:
    No(int chave);
    int getChave();
    No* getEsq();
    No* getDir();
};
