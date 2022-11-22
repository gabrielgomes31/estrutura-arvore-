#include "ArvoreBinaria.h"
No::No(Comida comida)
{
    dado = comida;
    esq = NULL;
    dir = NULL;
    chave = dado.get_food_and_serving();
}

ArvoreBST::ArvoreBST()
{
    raiz = NULL;
}

// Metodos
void ArvoreBST::inserir(Comida comida)
{
    if (raiz == NULL)
        raiz = new No(comida);
    else
        inserirAux(raiz, comida);
}

void ArvoreBST::inserirAux(No* no, Comida comida)
{
    string chave = comida.get_food_and_serving();
    // se for menor, entao insere na sub-�rvore � esquerda
    if (chave < no->getChave())
    {
        // verifica se nao tem filho a esquerda: achou local de inser��o 
        if (no->getEsq() == NULL)
        {
            No* novo_no = new No(comida);
            no->setEsq(novo_no); // add o novo_no na esquerda do no atual
        }
        else
        {
            // senao, continua percorrendo recursivamente para esquerda
            inserirAux(no->getEsq(), comida);
        }
    }
    // se for maior, entao insere na sub-arvore da direita
    else if (chave > no->getChave())
    {
        // verifica se nao tem filho a direita: achou local de inser��o
        if (no->getDir() == NULL)
        {
            No* novo_no = new No(comida);
            no->setDir(novo_no); // add o novo_no � direita do n� atual
        }
        else
        {
            // senao, continua percorrendo recursivamente para direita
            inserirAux(no->getDir(), comida);
        }
    }
    // se a chave for igual a alguma presente na arvore, nao vamos inserir
    // nao pode existir 2 chaves iguais na nossa BST
}
// imprime em ordem
void ArvoreBST::emOrdem(No* no)
{
    if (no != NULL)
    {
        emOrdem(no->getEsq());
        cout << no->getChave() << " ";
        emOrdem(no->getDir());
    }
}
// imprime pre ordem
void ArvoreBST::preOrdem(No* no)
{
    if (no != NULL)
    {
        cout << no->getChave() << " ";
        preOrdem(no->getEsq());
        preOrdem(no->getDir());
    }
}
// imprime pos ordem
void ArvoreBST::posOrdem(No* no) 
{
    if (no != NULL)
    {
        posOrdem(no->getEsq());
        posOrdem(no->getDir());
        cout << no->getChave() << " ";

    }
}
//Pesquisa: Versao iterativa
No* ArvoreBST::Pesquisar(string dado, No* no) 
{
    if (raiz == NULL) return NULL; //arvore vazia
    No* atual = no;  // cria ptr aux (atual) e comeca a procurar
    while (atual->getChave() != dado)
    {
        if (dado < atual->getChave())
            atual = atual->getEsq(); // caminha para esquerda
        else
            atual = atual->getDir(); // caminha para direita
        if (atual == NULL)
            return NULL; // encontrou uma folha e nao encontrou a chave
    }
    return atual; //encontrou o dado
}
//Pesquisa: Versao recursiva
No* ArvoreBST::PesquisarRec(No* r, string k) 
{
    if (r == NULL || r->getChave() == k)
        return r;
    if (r->getChave() > k)
        return PesquisarRec(r->getEsq(), k);
    else
        return PesquisarRec(r->getDir(), k);
}

//Versao recursiva
//Uma arvore nao vazia tem 1 nos raiz + x nos na sub-arvore na esq + y nos na sub-arvore da dir
int ArvoreBST::contarNos(No* atual) 
{
    if (atual == NULL)  return 0;
    else return (1 + contarNos(atual->getEsq()) + contarNos(atual->getDir()));
}

// versao recursiva
int ArvoreBST::altura(No* atual) 
{
    if (atual == NULL)
        return -1; //�rvore ou sub-arvore vazia: altura = -1
    else
    {
        if (atual->getEsq() == NULL && atual->getDir() == NULL)
            return 0; //�vore com apenas 1 no, altura = 0
        else
        { //altura da �rvore � a altura da sub-�rvore de maior altura
            if (altura(atual->getEsq()) > altura(atual->getDir()))
                return (1 + altura(atual->getEsq()));
            else
                return (1 + altura(atual->getDir()));
        }
    }
}
//versao A
No* ArvoreBST::excluir(No* t, string key)
{
    //Arvore t vazia
    if (t == NULL)
        return t;

    if (key < t->getChave())
        t->setEsq(excluir(t->getEsq(), key));
    else
        if (key > t->getChave())
            t->setDir(excluir(t->getDir(), key));

    //encontramos o no a ser removido
        else
        {
            //Caso1: o no a ser excluido nao tem filhos
            if (t->getEsq() == NULL && t->getDir() == NULL)
            {
                delete(t);
                return NULL; //faz o pai apontar para NULL e o n� n�o faz mais parte da BST	
            }
            else
                //Caso2: tem apenas um filho, a esquerda ou a direita
                if (t->getEsq() == NULL)
                {
                    No* temp = t->getDir();
                    delete(t);
                    return temp; //Faz o pai apontar para o �nico filho do n�
                }
                else
                    if (t->getDir() == NULL)
                    {
                        No* temp = t->getEsq();
                        delete(t);
                        return temp; //Faz o pai apontar para o �nico filho do n�
                    }

            //Caso3: o no a ser excluido tem 2 filhos. Vamos escolher o menor dos maiores
            //para substituir o no que sera removido. Sucessor = menor no na sub-arvore da direita

            No* temp = findMin(t->getDir());

            //Copia a chave do sucessor para o no que esta sendo removido
            t->setChave(temp->getChave());

            //Remove da arvore o sucessor!
            t->setDir(excluir(t->getDir(), temp->getChave()));
        }

    //retorna a raiz da arvore
    return t;
}

int ArvoreBST::folhas(No* atual) 
{
    if (atual == NULL) return 0;
    if (atual->getEsq() == NULL && atual->getDir() == NULL) return 1;
    return folhas(atual->getEsq()) + folhas(atual->getDir());
}

string ArvoreBST::min() 
{
    No* atual = raiz;
    No* anterior = NULL;
    while (atual != NULL)
    {
        anterior = atual;
        atual = atual->getEsq();
    }
    return anterior->getChave();
}
// Iterativo
string ArvoreBST::max() 
{
    No* atual = raiz;
    No* anterior = NULL;
    while (atual != NULL)
    {
        anterior = atual;
        atual = atual->getDir();
    }
    return anterior->getChave();
}
//recursivo
No* ArvoreBST::findMin(No* t) 
{
    if (t == NULL)
        return NULL;
    else if (t->getEsq() == NULL)
        return t;
    else
        return findMin(t->getEsq());
}
// recursivo
No* ArvoreBST::findMax(No* t) 
{
    if (t == NULL)
        return NULL;
    else if (t->getDir() == NULL)
        return t;
    else
        return findMax(t->getDir());
}

void ArvoreBST::infs(No* r)
{
    No* aux;
    cout << "\nInformacoes gerais da arvore: \n";
    cout << "\n Altura da arvore: " << altura(raiz);
    cout << "\n Quantidade de folhas: " << folhas(raiz);
    cout << "\n Quantidade de Nos: " << contarNos(raiz);
    if (raiz != NULL)    // se arvore nao esta vazia
    {
        aux = findMin(r);
        cout << "\n Valor minimo: " << aux->getChave();
        aux = findMax(r);
        cout << "\n Valor maximo: " << aux->getChave();
    }
}

// print2D
void ArvoreBST::print() 
{
    print(raiz, 0);
}

void ArvoreBST::print(No* no, int space) 
{
    if (no != NULL)
    {
        print(no->getDir(), space + 5);
        for (int k = 0; k < space; ++k)
            cout << " ";
        cout << no->getChave() << "\n";
        print(no->getEsq(), space + 5);
    }
}

int ArvoreBST::encontrarAlimentosDaRefeicaoEImprimir(list<string> refeicao)
{
    int calorias_consumidas = 0;
    int tamanho_lista = refeicao.size();
    for (int i = 0; i < tamanho_lista; i++)
    {
        // Procura pelo primeiro elemento na lista
        No* no_comida = Pesquisar(refeicao.front(), raiz);
        if (no_comida != NULL)
        {
            no_comida->getDado().tabela_nutricional();
            calorias_consumidas += no_comida->getDado().get_calories();
            cout << endl;
        }
        else
        {
            cout << "alimento nao esta na base de dados";
        }
        // Remove o primeiro elemento da lista
        refeicao.pop_front();
    }
    return calorias_consumidas;
}
