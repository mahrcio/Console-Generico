#include <string.h>
using namespace std;

class Consolegenerico{
	public:
		void iniciarJogo();
		void finalizarJogo();
		void getVersao();
		void getMarca();
	private:
		int btnCima;
		int btnBaixo;
		int btnDireita;
		int btnEsquerda;
		int btnA;
		int btnB;
		string versao;
		string marca;
		
		
};
