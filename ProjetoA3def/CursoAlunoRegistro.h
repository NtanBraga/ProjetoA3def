#pragma once
#include "Usuario.h"
#include "LoginAluno.h"

namespace ProjetoA3def {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Sumário para CursoAlunoRegistro
	/// </summary>
	public ref class CursoAlunoRegistro : public System::Windows::Forms::Form
	{
	public:


		CursoAlunoRegistro(void)
		{
			InitializeComponent();
			//
		
			//
		}

	protected:
		/// <summary>
		/// Limpar os recursos que estão sendo usados.
		/// </summary>
		~CursoAlunoRegistro()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ NomeUso;
	private: System::Windows::Forms::Label^ cursoDoNome;
	private: System::Windows::Forms::Label^ InfoTutor;



	private: System::Windows::Forms::Button^ BotaoCancelar;


	protected:

	private:
		/// <summary>
		/// Variável de designer necessária.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necessário para suporte ao Designer - não modifique 
		/// o conteúdo deste método com o editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->NomeUso = (gcnew System::Windows::Forms::Label());
			this->cursoDoNome = (gcnew System::Windows::Forms::Label());
			this->InfoTutor = (gcnew System::Windows::Forms::Label());
			this->BotaoCancelar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(2, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(509, 51);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Cursos Registrados";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// NomeUso
			// 
			this->NomeUso->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NomeUso->Location = System::Drawing::Point(10, 107);
			this->NomeUso->Name = L"NomeUso";
			this->NomeUso->Size = System::Drawing::Size(218, 39);
			this->NomeUso->TabIndex = 3;
			this->NomeUso->Text = L"label2";
			this->NomeUso->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// cursoDoNome
			// 
			this->cursoDoNome->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cursoDoNome->Location = System::Drawing::Point(12, 146);
			this->cursoDoNome->Name = L"cursoDoNome";
			this->cursoDoNome->Size = System::Drawing::Size(258, 37);
			this->cursoDoNome->TabIndex = 4;
			this->cursoDoNome->Text = L"label3";
			this->cursoDoNome->Click += gcnew System::EventHandler(this, &CursoAlunoRegistro::curso_Click);
			// 
			// InfoTutor
			// 
			this->InfoTutor->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->InfoTutor->Location = System::Drawing::Point(12, 272);
			this->InfoTutor->Name = L"InfoTutor";
			this->InfoTutor->Size = System::Drawing::Size(258, 159);
			this->InfoTutor->TabIndex = 5;
			this->InfoTutor->Text = L"label3";
			this->InfoTutor->Visible = false;
			this->InfoTutor->Click += gcnew System::EventHandler(this, &CursoAlunoRegistro::label2_Click);
			// 
			// BotaoCancelar
			// 
			this->BotaoCancelar->Location = System::Drawing::Point(6, 9);
			this->BotaoCancelar->Name = L"BotaoCancelar";
			this->BotaoCancelar->Size = System::Drawing::Size(111, 48);
			this->BotaoCancelar->TabIndex = 7;
			this->BotaoCancelar->Text = L"Voltar";
			this->BotaoCancelar->UseVisualStyleBackColor = true;
			this->BotaoCancelar->Click += gcnew System::EventHandler(this, &CursoAlunoRegistro::BotaoCancelar_Click);
			// 
			// CursoAlunoRegistro
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SlateGray;
			this->ClientSize = System::Drawing::Size(513, 440);
			this->Controls->Add(this->BotaoCancelar);
			this->Controls->Add(this->InfoTutor);
			this->Controls->Add(this->cursoDoNome);
			this->Controls->Add(this->NomeUso);
			this->Controls->Add(this->label1);
			this->Name = L"CursoAlunoRegistro";
			this->Text = L"CursoAlunoRegistro";
			this->Load += gcnew System::EventHandler(this, &CursoAlunoRegistro::CursoAlunoRegistro_Load);
			this->ResumeLayout(false);

		}
#pragma endregion

	public:
			Usuario^ UsuarioAtual;
			bool switchToMenu = false;


	private: System::Void CursoAlunoRegistro_Load(System::Object^ sender, System::EventArgs^ e) {
		NomeUso->Text = UsuarioAtual->nomeUsuario;


		String^ cursoSelecionado = nullptr;
		String^ nomeUsuario = UsuarioAtual->nomeUsuario;
		String^ connString = "Data Source=.;Initial Catalog=Projeto;Integrated Security=True";
		SqlConnection sqlConn(connString);
		sqlConn.Open();

		String^ sqlQuery = "SELECT curso FROM Usuario WHERE nome_usuario = @nomeUsuario;";
		SqlCommand command(sqlQuery, % sqlConn);
		command.Parameters->AddWithValue("@nomeUsuario", nomeUsuario);

		SqlDataReader^ reader = command.ExecuteReader();
		if (reader->Read()) {
			if (!reader->IsDBNull(0)) {
				cursoDoNome->Text = "Curso de " + reader->GetString(0);
				cursoSelecionado = reader->GetString(0);
			}
			else {
				cursoDoNome->Text = "Sem Curso Registrado";

			}
		}
		
		reader->Close();;

		sqlQuery = "SELECT nome_usuario, especialidade FROM Tutor WHERE curso = @cursoSelecionado;";
		SqlCommand commandSelect(sqlQuery, % sqlConn);
		commandSelect.Parameters->AddWithValue("@cursoSelecionado", cursoSelecionado);
		SqlDataReader^ readerSelect = commandSelect.ExecuteReader();

		if (readerSelect->Read()) {
			if (!readerSelect->IsDBNull(0)) {
				InfoTutor->Visible = true;
				InfoTutor->Text = "Professor do Curso: " + readerSelect->GetString(0) + ",  especialidade: " + readerSelect->GetString(1) + "\n";
			}
			else {
				InfoTutor->Text = "Sem Tutor No curso.";
			}
		}
		
	}
	private: System::Void BotaoCancelar_Click(System::Object^ sender, System::EventArgs^ e) {
		this->switchToMenu = true;
		this->Close();
	}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {



}
private: System::Void curso_Click(System::Object^ sender, System::EventArgs^ e) {

}
};
}
