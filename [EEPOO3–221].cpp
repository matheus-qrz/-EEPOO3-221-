#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

class pessoa {
	int idade;
	double altura;
	string nome;
	public:
		//Construtor
		pessoa(const string& n = "", int y = 0, float h = 0): nome(n), idade(y), altura(h) {}
		~pessoa() {
			cout << "Pessoa removida" << endl;
		}

		/* GET   ||   SET */
		/* Nome */
		void setNome(const string& n) { nome = n; }
		string getNome() { return nome; }

		/* Idade */
		void setIdade(int y) { idade = y; }
		int getIdade() { return idade; }

		/* Altura */
		void setAltura(int h) { altura = h; }
		double getAltura() { return altura; }

		void print_info_pessoa() {
			cout << "Pessoa" << endl;
			cout << "Nome: " << nome << endl;
			cout << "Idade: " << idade << endl;
			cout << "Altura: " << altura << endl;	
		};
};

class aluno: public pessoa {
	int matricula;
 	vector<string>disciplinas;
	float cra;
	public:
		// Construtor
		aluno(const string& n, int y, float h, int m, const string &d, float cr): 
			pessoa(n, y, h), matricula(m), disciplinas(&d),cra(cr) {}
		~aluno(){
			cout << "Aluno: " << getNome() << "removido!" << endl;
		}
		/* GET   ||   SET */
		/* Disciplinas */
		void setDisciplinas(const string& d) {
			for(int i = 0;i<5; i++)
				cout << "Insira as disciplinas: " << endl;
				disciplinas.push_back(d);
		}
		

		void print_info_aluno() {
			cout << "ALUNO" << endl;
			cout << "Nome: " << getNome() << endl;
			cout << "Idade: " << getIdade() << endl;
			cout << "Altura: " << getAltura() << endl;
			cout << "\n\n" << endl;
			cout << "Matricula: " << matricula << endl;
			cout << "Disciplinas: " << &disciplinas << endl;
			cout << "CRA: " << cra << endl;
 		}	
};

class professor: public pessoa {
	int codigo;
	int anoTitulacao;
	int cargaSemanal;
	public: 
		//Construtor
		professor(const string& n, int y, float h, int cd, int at, int cs):pessoa(n,h,y), codigo(cd), anoTitulacao(at), cargaSemanal(cs) {}
		~professor() {}

		/* GET   ||   SET */
		/* Codigo */
		void setCodigo(int cd) { codigo = cd; }
		int getCodigo() { return codigo; }

		/* Ano Titulacao */
		void setAnoTitulacao(int at) { anoTitulacao = at; }
		int getAnoTitulacao() { return anoTitulacao; }

		/* Carga Semanal */
		void setCargaSemanal(int cs) { cargaSemanal = cs; }
		int getCargaSemanal() { return cargaSemanal; }

		void print_info_professor() {
			cout << "PROFESSOR" << endl;
			cout << "Nome: " << getNome() << endl;
			cout << "Cogido: " << codigo << endl;
			cout << "Ano de Titulacao: " << anoTitulacao << endl;
			cout << "Carga Semanal: " << cargaSemanal << endl;
		}
};

int main(void) {
	int i, opt;

	cout << "Menu" << endl;
    cout << "[1] Cadastrar Professor" << endl;
    cout << "[2] Cadastrar Disciplina" << endl;
    cout << "[3] Cadastrar Aluno" << endl;
    cout << "[4] Associar Professor a Disciplina" << endl;
    cout << "[5] Associar Disciplina a Aluno" << endl;
    cout << "[6] Desassociar Professor de Disciplina" << endl;
    cout << "[7] Desassociar Disciplina de Aluno" << endl;
    cout << "[8] Listar Alunos (exibir também o CRE)" << endl;
    cout << "[9] Listar Disciplinas" << endl;
    cout << "[10] Listar Professores" << endl;
    cout << "[11] Listar disciplinas de aluno (por matrícula, exibir informações das disciplinas e carga total)" << endl;
    cout << "[12] Listar disciplinas de professor (por matrícula, exibir informações do professor e carga total)" << endl;
	cout << "Opcao: " << endl;
	cin >> opt;

	switch (opt)
	{
	case 1:
		
		break;
	
	default:
		break;
	}
}