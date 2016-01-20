#include <string.h>
using namespace std;

class ConsoleGenerico{
	public:
		void iniciarJogo();
		void finalizarJogo();
		string getVersaoFirmware();
		string getMarca();
		string getNomeDoProcessador();
		string getNomeDoJogo();
		void pause();
		void desligaConsole();
		
	private:
	
		string versaoFirmware;
		string marcaConsole;
		string nomeProcessador;
		string nomeDojogo;
		boolean pauseState;
		boolean desligar;
		
};
