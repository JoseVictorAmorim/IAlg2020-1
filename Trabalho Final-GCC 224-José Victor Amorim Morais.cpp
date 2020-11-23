/*
Nome: José Victor Amorim Morais

Tema: Astros de Hollywood
	● Identificador
	● Nome
	● Ano de nascimento
	● Principal filme
	● Prêmios recebidos

Método de busca a ser utilizado: Busca binária.

Método de ordenação a ser utilizado Shell sort.

Modo de gravação Texto.
 */
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

struct astros_Hollywood{
	int identificador;
	string nome;
	string nascimento;
	string principal_fime;
	int premios;
};

int busca_binaria(astros_Hollywood* vetor, int pos_final, int id_procurado){
	int pos_inicial = 0, pProcurado = -1;
	int meio;
	
	while(pos_inicial <= pos_final){
		meio = (pos_inicial + pos_final)/2;
		if(vetor[meio].identificador == id_procurado){
			pProcurado = meio;
			pos_inicial = pos_final+1;
		}else{
			if(vetor[meio].identificador < id_procurado){
				pos_inicial = meio+1;
			}else{
				pos_final = meio-1;
			}
		}
	}
	return pProcurado;
}

void retornando(){
	cout << "========================================" << endl
	<< "Retornando ao menu" << endl << "========================================" << endl;
}

void shell_sort(astros_Hollywood* vetor, int tamanho){
	int gaps[5] = {1, 4, 10, 23, 57}; //Sequência de Ciura até o maior numero menor que 100, que é o limite.
	int posGap = 4;
	
	while(gaps[posGap] > tamanho){
		posGap--;
	}
	
	astros_Hollywood valor;
	int j;
	while(posGap >= 0){
		int gap = gaps[posGap];
		
		for(int i = gap; i < tamanho; i++){
			valor = vetor[i];
			j = i;
			while((j >= gap) and (valor.identificador < vetor[j-gap].identificador)){
				vetor[j] = vetor[j-gap];
				j = j-gap;
			}
			vetor[j] = valor;
		}
		posGap--;
	}
}

void verificacao_id(astros_Hollywood* vetor, int pos_final, int& id_procurado){
	int posicao = busca_binaria(vetor, pos_final-1, id_procurado);
	if(posicao != -1){
		cout << "Identificador ja utilizado. Por favor, insira um novo: ";
		cin >> id_procurado;
		verificacao_id(vetor, pos_final, id_procurado);
	}
	else{
		cout << "Identificador valido" << endl;
	}
}

void incluir_dados(astros_Hollywood* vetor, int& contador){
	bool auxiliar_inclusao = true;
	while(auxiliar_inclusao){ 
		if (contador < 99){
			contador++;
			cout << "-> Insira o identificador (numero inteiro, nao pode ja ter sido utilizado): ";
			cin >> vetor[contador].identificador;
			if(contador > 0){
				verificacao_id(vetor, contador, vetor[contador].identificador);
			}
			cout << "-> Insira o nome do Astro de Hollywood: ";
			cin.ignore();
			getline(cin, vetor[contador].nome);
			cout << "-> Insira a Data de Nascimento (no formato dd/mm/aaaa): ";
			getline(cin, vetor[contador].nascimento);
			cout << "-> Insira o nome do principal filme deste astro: ";
			getline(cin, vetor[contador].principal_fime);
			cout << "-> Por ultimo, insira o numero de premios que este astro possui: ";
			cin >> vetor[contador].premios;
			cout << endl << endl << "========================================" << endl
			<< "REGISTRO INCLUIDO COM SUCESSO!" << endl << "========================================" << endl << endl;
			int nova_inclusao;
			cout << "-> Voce deseja realizar uma nova inclusao?" << endl
			<< "[1] Sim  [2] Nao" << endl << "-> ";
			cin >> nova_inclusao;
			if(nova_inclusao != 1){
				auxiliar_inclusao = false;
			}
		}
		else{
			cout << endl << endl << "========================================" << endl
			<< "NÃO É POSSUI INCLUIR NOVO REGISTRO" << endl << "========================================" << endl << endl;
			auxiliar_inclusao = false;
		}
	}
	shell_sort(vetor, contador+1); //Ordenação do vetor todas vezes que incluir um novo dado
}

void excluir_dados(astros_Hollywood* vetor, int& ultimo){
	cout << "-> Insira o identificador do registro que deseja excluir: ";
	int idProcurado;
	cin >> idProcurado;
	int posicao = busca_binaria(vetor, ultimo, idProcurado);
	if(posicao == -1){
		cout << "========================================" << endl
		<< "Registro nao encontrado" << endl << "========================================" << endl;
	}
	else{
		for(int i = posicao; i < ultimo; i++){
			vetor[i] = vetor[i+1];
		}
		cout << "========================================" << endl
		<< "Registro excluido com sucesso!" << endl << "========================================" << endl;
		ultimo--;
	}
}
void listar_dados(astros_Hollywood* vetor, int ultimo){
	int tamanho = ultimo+1;
	
	cout << endl << endl << "========================================" << endl
	<< "Lista de Registros" << endl << "========================================" << endl;
	
	if(ultimo == -1){
		cout << "Nao ha nenhum registro a ser exibido" << endl;
	}
	else{
		cout << "========================================" << endl
		<< "Numero total de registros: " << ultimo+1 << endl << "========================================" << endl;
	
		for(int i = 0; i < tamanho; i++){
			cout << "Identificador: " << vetor[i].identificador << endl;
			cout << "Nome: " << vetor[i].nome << endl;
			cout << "Data de Nascimento: " << vetor[i].nascimento << endl;
			cout << "Principal Filme: " << vetor[i].principal_fime << endl;
			cout << "Numero de Premios: " << vetor[i].premios << endl;
			cout << "========================================" << endl;
		}
	}	
}
void alterar_dados(astros_Hollywood* vetor, int ultimo){
	cout << "-> Insira o identificador do registro que deseja alterar: ";
	int idProcurado;
	cin >> idProcurado;

	int posicao = busca_binaria(vetor, ultimo, idProcurado);
	if(posicao == -1){
		cout << "========================================" << endl
		<< "Registro nao encontrado" << endl << "========================================" << endl;
	}
	else{
		cout << "-> Selecione qual campo deseja alterar: " << endl
		<< "[1] Nome [2] Data de Nascimento [3] Principal Filme [4] Numero de Premios" << endl
		<< "-> ";	
		int campo_alterado;
		cin >> campo_alterado;
		cin.ignore();
		
		switch(campo_alterado){
			case 1:
				cout << "Voce selecionou [1] Nome" << endl
				<< "O nome atual e: " << vetor[posicao].nome << endl
				<< "Insira o novo nome: ";
		
				getline(cin, vetor[posicao].nome);
		
				cout << endl << endl << "========================================" << endl
				<< "Registro Alterado com Sucesso!" << endl << "========================================" << endl;
				break;
			case 2:
				cout << "Voce selecionou [2] Data de Nascimento" << endl
				<< "A data de nascimento atual e: " << vetor[posicao].nascimento << endl
				<< "Insira a nova data de nascimento (no formato dd/mm/aaaa): ";
			
				getline(cin, vetor[posicao].nascimento);
				
				cout << endl << endl << "========================================" << endl
				<< "Registro Alterado com Sucesso!" << endl << "========================================" << endl;
				break;
			case 3:
				cout << "Voce selecionou [3] Principal Filme" << endl
				<< "O principal filme e: " << vetor[posicao].principal_fime << endl
				<< "Insira o novo \"Principal Filme\": ";
				
				getline(cin, vetor[posicao].principal_fime);
				
				cout << endl << endl << "========================================" << endl
				<< "Registro Alterado com Sucesso!" << endl << "========================================" << endl;
				break;
			case 4:
				cout << "Voce selecionou [4] Premios Recebidos" << endl
				<< "O numero de Premios recebidos atual e: " << vetor[posicao].premios << endl
				<< "Insira o novo numero de premios recebidos: ";
				
				cin >> vetor[posicao].premios;
			
				cout << endl << endl << "========================================" << endl
				<< "Registro Alterado com Sucesso!" << endl << "========================================" << endl;
				break;
		}

	}
}
void gravar_dados(astros_Hollywood* vetor, int ultimo){
	ofstream cadastros("cadastros.txt");
	int tamanho = ultimo+1;
	cadastros << "==========Astros de Hollywood==========" << endl;
	for(int i = 0; i < tamanho; i++){
		cadastros << "Identificador: " << vetor[i].identificador << endl;
		cadastros << "Nome: " << vetor[i].nome << endl;
		cadastros << "Ano de Nascimento: " << vetor[i].nascimento << endl;
		cadastros << "Principal Filme: " << vetor[i].principal_fime << endl;
		cadastros << "Numero de premios: " << vetor[i].premios << endl;
		cadastros << "========================================" << endl;
	}
	
	cout << endl << endl << "========================================" << endl
	<< "Dados gravados no arquivo" << endl
	<< "\"cadastros.txt\" com Sucesso!" << endl << "========================================" << endl;
}

int main(){
	bool menu = true;
	int ultima_posicao = -1;
	astros_Hollywood* cadastros = new astros_Hollywood[100];
	cout << "==============Bem vindo!==============" << endl;
	while(menu){
		cout<< "==========Astros de Hollywood==========" << endl
		<< "->O que deseja fazer?" << endl << endl
		<< "  [1] Incluir Dados" << endl
		<< "  [2] Excluir Dados" << endl
		<< "  [3] Listar os atuais cadastros" << endl
		<< "  [4] Alterar um cadastro existente" << endl
		<< "  [5] Gravar cadastros em arquivo de texto" << endl
		<< "  [6] Encerrar execucao" << endl << endl
		<< "========================================" << endl;
		int escolha;
		cout << "Escolha uma opcao: ";
		cin >> escolha;
		
		switch(escolha){
			case 1:
				cout << "Voce escolheu a opcao [1] Incluir Dados" << endl;
				incluir_dados(cadastros, ultima_posicao);
				retornando();
				break;
			case 2:
				cout << "Voce escolheu a opcao [2] Excluir Dados" << endl;
				excluir_dados(cadastros, ultima_posicao);
				retornando();
				break;
			case 3:
				cout << "Voce escolheu a opcao [3] Listar os atuais cadastros" << endl;
				listar_dados(cadastros, ultima_posicao);
				retornando();
				break;
			case 4:
				cout << "Voce escolheu a opcao [4] Alterar um cadastro existente" << endl;
				alterar_dados(cadastros, ultima_posicao);
				retornando();
				break;
			case 5:
				cout << "Voce escolheu a opcao [5] Gravar cadastros em um arquivo de texto" << endl;
				gravar_dados(cadastros, ultima_posicao);
				retornando();
				break;
			case 6:
				cout << "Voce escolheu a opcao [6] Encerrar execucao" << endl
				<< "Caso deseje gravar os cadastros em um arquivo de texto, digite [1]" << endl
				<< "Caso deseje sair sem gravar, digite [2]" << endl;
				int aux_gravacao;
				cin >> aux_gravacao;
				if(aux_gravacao == 1){
					gravar_dados(cadastros, ultima_posicao);
				}
				menu = false;
				break;
			default:
				cout << "Por favor, insira uma opcao valida." << endl;
				break;
		}
		
	}
	
	delete[] cadastros;
	
	return 0;
}
