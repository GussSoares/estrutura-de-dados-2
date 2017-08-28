#include <iostream>

using namespace std;

class No{
private:
    No *esq, *dir;
    int chave;
public:
    No(int chave){
        this->chave = chave;
        esq = nullptr;
        dir = nullptr;
    }
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
    Arvore(){
        raiz = nullptr;
    }
    void inserir(int chave);
    void inserirAux(No* no, int chave);
    No* getRaiz();
    void emOrdem(No* no);
    //void imprimir(No* no);
    void busca(No* no, int chave);
};
