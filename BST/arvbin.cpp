#include <iostream>

using namespace std;

No(int chave){
    this->chave = chave;
    esq = NULL;
    dir = NULL;
}

int No::getChave(){
    return chave;
}

No* getEsq(){
    return esq;
}

void setEsq(No* no){
    this->esq = no;
}

No* getDir(){
    return dir;
}

void setDir(No* no){
    this->dir = no;
}
