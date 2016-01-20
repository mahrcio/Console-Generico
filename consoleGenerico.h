#include <string.h>
using namespace std;

class ConsoleGenerico{
	public:
		void iniciarJogo();
		void finalizarJogo();
		string getVersao();
		string getMarca();
		string getNomeDoJogo();
	private:
		int btnCima;
		int btnBaixo;
		int btnDireita;
		int btnEsquerda;
		int btnA;
		int btnB;
		string versao;
		string marca;
		string processador;
		string memoria;
		string nomeDojogo;
		
		
};
