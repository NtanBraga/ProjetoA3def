#pragma once
#include "Tutor.h"

namespace ProjetoA3def {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Sumário para LoginTutor
	/// </summary>
	public ref class LoginTutor : public System::Windows::Forms::Form
	{
	public:
		LoginTutor(void)
		{
			InitializeComponent();
			//
			//TODO: Adicione o código do construtor aqui
			//
		}

	protected:
		/// <summary>
		/// Limpar os recursos que estão sendo usados.
		/// </summary>
		~LoginTutor()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ BotaoCancelar;
	protected:
	private: System::Windows::Forms::Button^ BotaoOk;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ LoginSenha;
	private: System::Windows::Forms::TextBox^ NomeLogin;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::LinkLabel^ IrRegistro;








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
			this->BotaoCancelar = (gcnew System::Windows::Forms::Button());
			this->BotaoOk = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->LoginSenha = (gcnew System::Windows::Forms::TextBox());
			this->NomeLogin = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->IrRegistro = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// BotaoCancelar
			// 
			this->BotaoCancelar->Location = System::Drawing::Point(340, 275);
			this->BotaoCancelar->Name = L"BotaoCancelar";
			this->BotaoCancelar->Size = System::Drawing::Size(111, 48);
			this->BotaoCancelar->TabIndex = 13;
			this->BotaoCancelar->Text = L"Voltar";
			this->BotaoCancelar->UseVisualStyleBackColor = true;
			this->BotaoCancelar->Click += gcnew System::EventHandler(this, &LoginTutor::BotaoCancelar_Click);
			// 
			// BotaoOk
			// 
			this->BotaoOk->Location = System::Drawing::Point(180, 275);
			this->BotaoOk->Name = L"BotaoOk";
			this->BotaoOk->Size = System::Drawing::Size(111, 48);
			this->BotaoOk->TabIndex = 12;
			this->BotaoOk->Text = L"Logar";
			this->BotaoOk->UseVisualStyleBackColor = true;
			this->BotaoOk->Click += gcnew System::EventHandler(this, &LoginTutor::BotaoOk_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(3, 192);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(70, 24);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Senha";
			// 
			// LoginSenha
			// 
			this->LoginSenha->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LoginSenha->Location = System::Drawing::Point(180, 188);
			this->LoginSenha->Name = L"LoginSenha";
			this->LoginSenha->PasswordChar = '@';
			this->LoginSenha->Size = System::Drawing::Size(271, 31);
			this->LoginSenha->TabIndex = 10;
			this->LoginSenha->TextChanged += gcnew System::EventHandler(this, &LoginTutor::LoginSenha_TextChanged);
			// 
			// NomeLogin
			// 
			this->NomeLogin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NomeLogin->Location = System::Drawing::Point(180, 124);
			this->NomeLogin->Name = L"NomeLogin";
			this->NomeLogin->Size = System::Drawing::Size(271, 31);
			this->NomeLogin->TabIndex = 9;
			this->NomeLogin->TextChanged += gcnew System::EventHandler(this, &LoginTutor::NomeLogin_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(3, 128);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(171, 24);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Nome de Usuario";
			this->label2->Click += gcnew System::EventHandler(this, &LoginTutor::label2_Click);
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(-2, -1);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(541, 114);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Login Tutor";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// IrRegistro
			// 
			this->IrRegistro->AutoSize = true;
			this->IrRegistro->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->IrRegistro->Location = System::Drawing::Point(428, 371);
			this->IrRegistro->Name = L"IrRegistro";
			this->IrRegistro->Size = System::Drawing::Size(99, 25);
			this->IrRegistro->TabIndex = 14;
			this->IrRegistro->TabStop = true;
			this->IrRegistro->Text = L"Registrar";
			this->IrRegistro->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &LoginTutor::IrRegistro_LinkClicked);
			// 
			// LoginTutor
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SlateGray;
			this->ClientSize = System::Drawing::Size(539, 405);
			this->Controls->Add(this->IrRegistro);
			this->Controls->Add(this->BotaoCancelar);
			this->Controls->Add(this->BotaoOk);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->LoginSenha);
			this->Controls->Add(this->NomeLogin);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"LoginTutor";
			this->Text = L"LoginTutor";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public: Tutor^ tutor = nullptr;

	public: bool switchToTela = false;

	private: System::Void BotaoCancelar_Click(System::Object^ sender, System::EventArgs^ e) {
		this->switchToTela = true;
		this->Close();
	}
private: System::Void BotaoOk_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ nomeUsuario = this->NomeLogin->Text;
	String^ senha = this->LoginSenha->Text;

	if (nomeUsuario->Length == 0 || senha->Length == 0) {
		MessageBox::Show("Por favor coloque seu nome e sua senha.",
			"Nome ou senha inválidos", MessageBoxButtons::OK);
		return;
	}
	try {
		String^ connString = "Data Source=.;Initial Catalog=Projeto;Integrated Security=True";
		SqlConnection sqlConn(connString);
		sqlConn.Open();

		String^ sqlQuery = "Select * FROM Tutor WHERE nome_usuario=@nomeUsuario AND senha=@senha;";
		SqlCommand command(sqlQuery, % sqlConn);
		command.Parameters->AddWithValue("@nomeUsuario", nomeUsuario);
		command.Parameters->AddWithValue("@senha", senha);

		SqlDataReader^ reader = command.ExecuteReader();
		if (reader->Read()) {
			tutor = gcnew Tutor;
			tutor->id = reader->GetInt32(0);
			tutor->nomeUsuario = reader->GetString(1);
			tutor->senha = reader->GetString(2);

			this->Close();
		}
		else {
			MessageBox::Show("Nome ou senhas incorretos",
				"Nome e senha erro", MessageBoxButtons::OK);
		}
	}
	catch (Exception^ e) {
		MessageBox::Show("Falha ao tentar se conectar ao banco de dados",
			"Banco de Dados Error", MessageBoxButtons::OK);
	}
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
	   public: bool switchToRegister = false;
private: System::Void IrRegistro_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	this->switchToRegister = true;
	this->Close();
}
private: System::Void LoginSenha_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void NomeLogin_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
