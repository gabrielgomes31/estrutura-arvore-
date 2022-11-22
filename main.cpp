#include "main.h"

string caminho_arquivo = "dados.csv";

int main()
{
	ArvoreBST bst = criar_arvore_com_dados();

	int op = 1;
	while (op != 2) 
	{
		list<string> alimentos;
		cout << endl << "-MENU-" << endl;
		cout << "Escolha a sua opcao: " << endl;
		cout << "1: Visualizar calorias e dados nutricionais da refeicao: " << endl;
		cout << "2: Sair" << endl;
		cin >> op;
		switch (op)
		{
		case 1:
		{
			int qt;
			cout << "Digite a quantidade de alimentos que foram ingeridos: " << endl;
			string alimento;
			cin >> qt;
			cin.ignore();

			for (int i = 0; i < qt; i++)
			{
				cout << "Digite qual foi o alimento: ";
				getline(cin, alimento);
				alimentos.push_back(alimento);
			}
			int total_de_calorias = bst.encontrarAlimentosDaRefeicaoEImprimir(alimentos);
			cout << endl << "total de calorias ingeridas: " << total_de_calorias << endl;
			cout << "Digite algo para continuar: ";
			int c = getchar();
			break;
		}
		case 2:
		{
			break;
		}
		default:
			break;
		}
	}


}

ArvoreBST criar_arvore_com_dados()
{
	ArvoreBST bst = ArvoreBST();
	ifstream arquivo(caminho_arquivo);
	if (!arquivo)
	{
		cout << "erro tentando abrir arquivo!" << endl;
		exit(1);
	}
	string str;
	stringstream stream;
	stream << arquivo.rdbuf();
	// vamos ignorar os dois headers do csv:
	getline(stream, str);
	getline(stream, str);
	while (getline(stream, str))
	{
		istringstream linha_lida(str);
		string dados[24];
		int dados_lidos = 0;
		while (getline(linha_lida, str, ','))
		{
			// se o dado estiver vazio, colocamos como zero
			if (str == "")
			{
				str = "0";
			}
			// armazenando o dado
			dados[dados_lidos] = str;
			dados_lidos++;
		}
		Comida comida_atual = Comida(dados[0], stoi(dados[1]), stoi(dados[2]), stod(dados[3]), stod(dados[4]), stoi(dados[5])
			, stod(dados[6]), stoi(dados[7]), stod(dados[8]), stoi(dados[9]), stod(dados[10]), stoi(dados[11]), stod(dados[12]), stoi(dados[13]), stoi(dados[14])
			, stod(dados[15]), stod(dados[16]), stod(dados[17]), stod(dados[18]), stod(dados[19])
			, stoi(dados[20]), stod(dados[21]), stoi(dados[22]), dados[23]);
		bst.inserir(comida_atual);
	}
	return bst;

}