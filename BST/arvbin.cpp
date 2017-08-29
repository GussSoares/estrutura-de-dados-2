#include "arvbin.h"

using namespace std;

//class No

// No(int chave){
//     this->chave = chave;
//     esq = NULL;
//     dir = NULL;
// }

int No::getChave(){
    return chave;
}

No* No::getEsq(){
    return esq;
}

void No::setEsq(No* no){
    esq = no;
}

No* No::getDir(){
    return dir;
}

void No::setDir(No* no){
    dir = no;
}

//Class Arvore

// Arvore(){
//     raiz = NULL;
// }

void Arvore::inserir(int chave){

    if(raiz == nullptr){
        raiz = new No(chave);
    }else{
        inserirAux(raiz, chave);
    }
}

void Arvore::inserirAux(No* no, int chave){

    if(chave < no->getChave()){
        if(no->getEsq() == nullptr){
            No* novo_no = new No(chave);
            no->setEsq(novo_no);
        }else{
            inserirAux(no->getEsq(), chave);
        }
    }else if(chave > no->getChave()){
        if(no->getDir() == nullptr){
            No* novo_no = new No(chave);
            no->setDir(novo_no);
        }else{
            inserirAux(no->getDir(), chave);
        }
    }
}

No* Arvore::getRaiz(){
    return raiz;
}

void Arvore::emOrdem(No* no){
    if(no != nullptr){
        emOrdem(no->getEsq());
        cout << no->getChave() << " ";
        emOrdem(no->getDir());
    }

}

void Arvore::imprimir(No* raiz, int ident){
    if(raiz != nullptr){
        if(raiz->getDir())
            imprimir(raiz->getDir(), ident + 5);
        if(ident)
            cout << setw(ident) << ' ';
        if(raiz->getDir()) cout << " /\n" << setw(ident) << ' ';
        cout << '(' << raiz->getChave() << ")\n";
        if(raiz->getEsq()){
            cout << setw(ident) << ' ' << " \\\n";
            imprimir(raiz->getEsq(), ident + 5);
        }
    }
}

// void avl_tree<T>::show(avl_tree<T>::node *_root, int indent)
// {
//     if (_root != nullptr) {
//         if (_root->right)
//             show(_root->right, indent + 5);
//         if (indent)
//             std::cout « std::setw(indent) « ' ';
//         if (_root->right) std::cout « " /\n" « std::setw(indent) « ' ';
//         std::cout « '(' « _root->key « ")\n";
//         if (_root->left) {
//             std::cout « std::setw(indent) « ' ' « " \\\n";
//             show(_root->left, indent + 5);
//         }
//     }
// }

void Arvore::busca(No* no, int chave){
    if(no != nullptr){

        if (chave == no->getChave()) {
            cout << '\n' << "================" << endl;
            cout         << "Busca concluída!" << '\n' << "Item encontrado!" << '\n';
            cout         << "================" << endl;
            //return;
        }
        busca(no->getEsq(), chave);
        busca(no->getDir(), chave);
    }else{
        cout << "Not found" << '\n';
        //return;
    }
    //return -1;
}

int main(int argc, char *argv[]) {
    /* code */
    Arvore arv;

    arv.inserir(8);
    arv.inserir(10);
    arv.inserir(14);
    arv.inserir(13);
    arv.inserir(3);
    arv.inserir(1);
    arv.inserir(6);
    arv.inserir(4);
    arv.inserir(7);

    cout << "====================" << endl;
    cout << "Percorrendo em ordem" << endl;
    cout << "====================" << endl;

    arv.emOrdem(arv.getRaiz());
    cout << endl;

    //arv.busca(arv.getRaiz(), 7);// << endl;
    arv.imprimir(arv.getRaiz(), 2);
    return 0;
}
