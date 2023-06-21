#pragma once
#include "Usuario.h"

namespace ProjetoA3def {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Sumário para Registrar
	/// </summary>
	public ref class RegistrarAluno : public System::Windows::Forms::Form
	{
	public:
		RegistrarAluno(void)
		{
			InitializeComponent();
			//
			//TODO: Adicione o código do construtor aqui
			//
			this->CenterToScreen();
		}

	protected:
		/// <summary>
		/// Limpar os recursos que estão sendo usados.
		/// </summary>
		~RegistrarAluno()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ RegistroAlunoNome;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ RegistroAlunoCPF;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ RegistroAlunoSenha;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ RegistroAlunoConfirma;

	private: System::Windows::Forms::Button^ botaoConfirma;
	private: System::Windows::Forms::Button^ botaoCancela;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ RegistroAlunoApelido;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ RegistroAlunoEmail;

	private: System::Windows::Forms::TextBox^ RegistroAlunoTelefone;




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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->RegistroAlunoNome = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->RegistroAlunoCPF = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->RegistroAlunoSenha = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->RegistroAlunoConfirma = (gcnew System::Windows::Forms::TextBox());
			this->botaoConfirma = (gcnew System::Windows::Forms::Button());
			this->botaoCancela = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->RegistroAlunoApelido = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->RegistroAlunoEmail = (gcnew System::Windows::Forms::TextBox());
			this->RegistroAlunoTelefone = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(40, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(532, 53);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Registro Aluno";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &RegistrarAluno::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(42, 93);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(64, 24);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Nome";
			this->label2->Click += gcnew System::EventHandler(this, &RegistrarAluno::label2_Click);
			// 
			// RegistroAlunoNome
			// 
			this->RegistroAlunoNome->Location = System::Drawing::Point(227, 90);
			this->RegistroAlunoNome->Name = L"RegistroAlunoNome";
			this->RegistroAlunoNome->Size = System::Drawing::Size(345, 32);
			this->RegistroAlunoNome->TabIndex = 2;
			this->RegistroAlunoNome->TextChanged += gcnew System::EventHandler(this, &RegistrarAluno::RegistroNome_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(42, 169);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(52, 24);
			this->label3->TabIndex = 1;
			this->label3->Text = L"CPF";
			this->label3->Click += gcnew System::EventHandler(this, &RegistrarAluno::label3_Click);
			// 
			// RegistroAlunoCPF
			// 
			this->RegistroAlunoCPF->Location = System::Drawing::Point(227, 166);
			this->RegistroAlunoCPF->Name = L"RegistroAlunoCPF";
			this->RegistroAlunoCPF->Size = System::Drawing::Size(345, 32);
			this->RegistroAlunoCPF->TabIndex = 2;
			this->RegistroAlunoCPF->TextChanged += gcnew System::EventHandler(this, &RegistrarAluno::RegistroAlunoCPF_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(42, 299);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(70, 24);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Senha";
			this->label4->Click += gcnew System::EventHandler(this, &RegistrarAluno::label4_Click);
			// 
			// RegistroAlunoSenha
			// 
			this->RegistroAlunoSenha->Location = System::Drawing::Point(227, 296);
			this->RegistroAlunoSenha->Name = L"RegistroAlunoSenha";
			this->RegistroAlunoSenha->PasswordChar = '#';
			this->RegistroAlunoSenha->Size = System::Drawing::Size(345, 32);
			this->RegistroAlunoSenha->TabIndex = 2;
			this->RegistroAlunoSenha->TextChanged += gcnew System::EventHandler(this, &RegistrarAluno::RegistroAlunoSenha_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(42, 346);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(175, 24);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Confirme a senha";
			this->label5->Click += gcnew System::EventHandler(this, &RegistrarAluno::label5_Click);
			// 
			// RegistroAlunoConfirma
			// 
			this->RegistroAlunoConfirma->Location = System::Drawing::Point(227, 343);
			this->RegistroAlunoConfirma->Name = L"RegistroAlunoConfirma";
			this->RegistroAlunoConfirma->PasswordChar = '#';
			this->RegistroAlunoConfirma->Size = System::Drawing::Size(345, 32);
			this->RegistroAlunoConfirma->TabIndex = 2;
			this->RegistroAlunoConfirma->TextChanged += gcnew System::EventHandler(this, &RegistrarAluno::textBox1_TextChanged);
			// 
			// botaoConfirma
			// 
			this->botaoConfirma->Location = System::Drawing::Point(227, 399);
			this->botaoConfirma->Name = L"botaoConfirma";
			this->botaoConfirma->Size = System::Drawing::Size(157, 53);
			this->botaoConfirma->TabIndex = 3;
			this->botaoConfirma->Text = L"Confirmar";
			this->botaoConfirma->UseVisualStyleBackColor = true;
			this->botaoConfirma->Click += gcnew System::EventHandler(this, &RegistrarAluno::botaoConfirma_Click);
			// 
			// botaoCancela
			// 
			this->botaoCancela->Location = System::Drawing::Point(415, 399);
			this->botaoCancela->Name = L"botaoCancela";
			this->botaoCancela->Size = System::Drawing::Size(157, 53);
			this->botaoCancela->TabIndex = 4;
			this->botaoCancela->Text = L"Cancelar";
			this->botaoCancela->UseVisualStyleBackColor = true;
			this->botaoCancela->Click += gcnew System::EventHandler(this, &RegistrarAluno::botaoCancela_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(42, 131);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(78, 24);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Apelido";
			this->label6->Click += gcnew System::EventHandler(this, &RegistrarAluno::label6_Click);
			// 
			// RegistroAlunoApelido
			// 
			this->RegistroAlunoApelido->Location = System::Drawing::Point(227, 128);
			this->RegistroAlunoApelido->Name = L"RegistroAlunoApelido";
			this->RegistroAlunoApelido->Size = System::Drawing::Size(345, 32);
			this->RegistroAlunoApelido->TabIndex = 6;
			this->RegistroAlunoApelido->TextChanged += gcnew System::EventHandler(this, &RegistrarAluno::RegistroAlunoApelido_TextChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(42, 211);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(178, 24);
			this->label7->TabIndex = 7;
			this->label7->Text = L"Numero de celular";
			this->label7->Click += gcnew System::EventHandler(this, &RegistrarAluno::label7_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(42, 254);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(68, 24);
			this->label8->TabIndex = 8;
			this->label8->Text = L"E-mail";
			this->label8->Click += gcnew System::EventHandler(this, &RegistrarAluno::label8_Click);
			// 
			// RegistroAlunoEmail
			// 
			this->RegistroAlunoEmail->Location = System::Drawing::Point(227, 251);
			this->RegistroAlunoEmail->Name = L"RegistroAlunoEmail";
			this->RegistroAlunoEmail->Size = System::Drawing::Size(345, 32);
			this->RegistroAlunoEmail->TabIndex = 9;
			this->RegistroAlunoEmail->TextChanged += gcnew System::EventHandler(this, &RegistrarAluno::RegistroAlunoEmail_TextChanged);
			// 
			// RegistroAlunoTelefone
			// 
			this->RegistroAlunoTelefone->Location = System::Drawing::Point(227, 208);
			this->RegistroAlunoTelefone->Name = L"RegistroAlunoTelefone";
			this->RegistroAlunoTelefone->Size = System::Drawing::Size(345, 32);
			this->RegistroAlunoTelefone->TabIndex = 10;
			this->RegistroAlunoTelefone->TextChanged += gcnew System::EventHandler(this, &RegistrarAluno::RegistroAlunoTelefone_TextChanged);
			// 
			// RegistrarAluno
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SlateGray;
			this->ClientSize = System::Drawing::Size(584, 481);
			this->Controls->Add(this->RegistroAlunoTelefone);
			this->Controls->Add(this->RegistroAlunoEmail);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->RegistroAlunoApelido);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->botaoCancela);
			this->Controls->Add(this->botaoConfirma);
			this->Controls->Add(this->RegistroAlunoConfirma);
			this->Controls->Add(this->RegistroAlunoSenha);
			this->Controls->Add(this->RegistroAlunoCPF);
			this->Controls->Add(this->RegistroAlunoNome);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"RegistrarAluno";
			this->Text = L"Registrar Aluno";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		public: bool switchToLogin = false;

	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void botaoCancela_Click(System::Object^ sender, System::EventArgs^ e) {
	this->switchToLogin = true;
	this->Close();
}

public: Usuario^ usuario=nullptr;

private: System::Void botaoConfirma_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ nome = RegistroAlunoNome->Text;
	String^ nomeUsuario = RegistroAlunoApelido->Text;
	String^ cpf = RegistroAlunoCPF->Text;
	String^ telefone = RegistroAlunoTelefone->Text;
	String^ email = RegistroAlunoEmail->Text;
	String^ senha = RegistroAlunoSenha->Text;
	String^ confirmaSenha = RegistroAlunoConfirma->Text;

	if (nome->Length == 0 || nomeUsuario->Length == 0 || cpf->Length == 0 ||
		telefone->Length == 0|| email->Length == 0 || senha->Length == 0 || confirmaSenha->Length == 0) {

		MessageBox::Show("Por favor,preencha todos os campos",
			"Campos vazis", MessageBoxButtons::OK);
		return;
	}
	if (String::Compare(senha, confirmaSenha) != 0) {
		MessageBox::Show("Senhas não se coincidem",
			"Erro na senha", MessageBoxButtons::OK);
		return;
	}

	try {
		String^ connString = "Data Source=.;Initial Catalog=Projeto;Integrated Security=True";
		SqlConnection sqlConn(connString);
		sqlConn.Open();

		String^ sqlQuery = "INSERT INTO Pessoas" +
			"(nome,email, cpf, telefone) VALUES " +
			"(@nome,@email, @cpf, @telefone);"
							"INSERT INTO Usuario" +
			"(nome_usuario,senha) VALUES" +
			"(@nomeUsuario,@senha);";

		SqlCommand command(sqlQuery, % sqlConn);
		command.Parameters->AddWithValue("@nome", nome);
		command.Parameters->AddWithValue("@cpf", cpf);
		command.Parameters->AddWithValue("@email", email);
		command.Parameters->AddWithValue("@telefone", telefone);
		command.Parameters->AddWithValue("@nomeUsuario", nomeUsuario);
		command.Parameters->AddWithValue("@senha", senha);

		command.ExecuteNonQuery();
		usuario = gcnew Usuario;
		usuario->nomeUsuario = nomeUsuario;
		usuario->senha = senha;

		this->Close();

	}
	catch (Exception^ ex) {
		MessageBox::Show("Falha ao registrar um novo usuario",
			"Falha no Registro", MessageBoxButtons::OK);
	}

}
private: System::Void RegistroNome_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void RegistroAlunoEmail_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void RegistroAlunoApelido_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void RegistroAlunoSenha_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void RegistroAlunoCPF_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void RegistroAlunoTelefone_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
