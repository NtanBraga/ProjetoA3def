#include "TelaInicial.h"
#include "LoginAluno.h"
#include "RegistrarAluno.h"
#include "LoginTutor.h"
#include "RegistrarTutor.h"
#include "MenuAluno.h"
#include "MenuTutor.h"
#include "CursosRegistrados.h"
#include "CursoTutor.h"
#include "CompraCurso.h"
#include "Pagamento.h"
#include "CursoAlunoRegistro.h"

using namespace System;
using namespace System::Windows::Forms;

int main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);


	Usuario^ usuario = nullptr;
	Tutor^ tutor = nullptr;

	while (true) {
		ProjetoA3def::TelaInicial tela;
		tela.ShowDialog();

		if (tela.switchToAluno) {
			ProjetoA3def::LoginAluno aluno;
			aluno.ShowDialog();
			if (aluno.switchToRegister) {
				ProjetoA3def::RegistrarAluno registroAluno;
				registroAluno.ShowDialog();

				if (registroAluno.switchToLogin) {
					continue;
				}
				else {
					usuario = registroAluno.usuario;
					continue;
				}
				
			}
			else {
				usuario = aluno.usuario;
				break;
			}
		}
		if (tela.switchToTutor) {
			ProjetoA3def::LoginTutor loginTutor;
			loginTutor.ShowDialog();
			if (loginTutor.switchToRegister) {
				ProjetoA3def::RegistrarTutor registroTutor;
				registroTutor.ShowDialog();

				if (registroTutor.switchToLogin) {
					continue;
				}
				else {
					tutor = registroTutor.tutor;
					continue;
				}
			}
			else {
				tutor = loginTutor.tutor;
				break;
			}
		}
		break;
	}

	if (usuario != nullptr) {
		while (true) {
			ProjetoA3def::MenuAluno menuA;
			menuA.ShowDialog();
			if (menuA.switchToCursoRegistrado) {
				ProjetoA3def::CursosRegistrados cursosRegistro;
				cursosRegistro.ShowDialog();
			}
			if (menuA.switchToCursoComprar) {
				ProjetoA3def::CompraCurso compraCurso;
				compraCurso.ShowDialog();
				if (compraCurso.switchToPag) {
					ProjetoA3def::Pagamento pagar;
					pagar.ShowDialog();
				}
			}
			if (menuA.switchToCursoAlunoRegistro) {
				ProjetoA3def::CursoAlunoRegistro infoUser;
				infoUser.UsuarioAtual = usuario;
				infoUser.ShowDialog();
			}

			if (menuA.fecharJanela) {
				break;
			}
		}
	}
	else if(tutor !=nullptr){
		while (true) {
			ProjetoA3def::MenuTutor menuT;
			menuT.ShowDialog();
			if (menuT.switchToCursoRegistrado) {
				ProjetoA3def::CursosRegistrados cursosRegistro;
				cursosRegistro.ShowDialog();
			}
			if (menuT.switchToCursoTutor) {
				ProjetoA3def::CursoTutor cursoTutor;
				cursoTutor.ShowDialog();
			}
			if (menuT.fecharJanela) {
				break;
			}

		}
	}
	else {
		MessageBox::Show("Volte Sempre!!",
			"Programa.cpp", MessageBoxButtons::OK);
	}
};