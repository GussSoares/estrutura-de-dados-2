#include <iostream>
#include <iomanip>

using namespace std;

class No{
private:
    No *esq, *dir;
    int chave;
public:
    No(int chave);
    int getChave();
    No* getEsq();
    void setEsq(No* no);
    No* getDir();
    void setDir(No* no);
};

class Arvore{
private:
    No* raiz;
public:
    Arvore();
    void inserir(int chave);
    void inserirAux(No* no, int chave);
    No* getRaiz();
    void emOrdem(No* no);
    bool busca(No* no, int chave);
    void imprimir(No* raiz, int ident);
    int altura(No* no);
};
