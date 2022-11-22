#ifndef ARVORE
#define ARVORE

#include <iostream>
#include <string>
#include <list>
#include "Comida.h"
#include <ostream>
using namespace std;

// No
class No
{
private:
    No* esq, * dir;
    string chave;
    Comida dado;

public:
    No(Comida food);
    // funcoes getters e setters
    string getChave()  { return chave; }
    No* getEsq()  { return esq; }
    No* getDir()  { return dir; }
    Comida getDado()  { return dado; }
    void setEsq(No* no) { esq = no; }
    void setDir(No* no) { dir = no; }
    void setChave(string k) { chave = k; }
    void setDado(Comida& dado) { this->dado = dado; }
};

// ArvoreBST
class ArvoreBST
{
private:
    No* raiz;

public:
    ArvoreBST();
    void setRaiz(No* root) { raiz = root; }
    No* getRaiz()  { return raiz; }
    void inserir(Comida food);
    void inserirAux(No* no, Comida food);
    void emOrdem(No* no) ;
    void preOrdem(No* no) ;
    void posOrdem(No* no) ;
    No* Pesquisar(string dado, No* no) ;
    No* PesquisarRec(No* r, string k) ;
    int contarNos(No* atual) ;
    int altura(No* atual) ;
    No* excluir(No* t, string key);
    int folhas(No* atual) ;
    string min() ;
    string max() ;
    No* findMin(No* t) ;
    No* findMax(No* t) ;
    void infs(No* r);
    void print() ;
    void print(No* no, int space) ;

    int encontrarAlimentosDaRefeicaoEImprimir(list<string> refeicao);
};

#endif