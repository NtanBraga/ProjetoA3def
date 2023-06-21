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
	/// Sumário para RegistrarTutor
	/// </summary>
	public ref class RegistrarTutor : public System::Windows::Forms::Form
	{
	public:
		RegistrarTutor(void)
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
		~RegistrarTutor()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ botaoCancela;
	private: System::Windows::Forms::Button^ botaoConfirma;




	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ RegistroTutorTelefone;
	private: System::Windows::Forms::TextBox^ RegistroTutorEmail;


	private: System::Windows::Forms::TextBox^ RegistroTutorApelido;
	private: System::Windows::Forms::TextBox^ RegistroTutorConfirma;


	private: System::Windows::Forms::TextBox^ RegistroTutorSenha;

	private: System::Windows::Forms::TextBox^ RegistroTutorCPF;

	private: System::Windows::Forms::TextBox^ RegistroTutorNome;
	private: System::Windows::Forms::TextBox^ RegistroTutorGrad;

	private: System::Windows::Forms::Label^ label9;



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
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->botaoCancela = (gcnew System::Windows::Forms::Button());
			this->botaoConfirma = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->RegistroTutorTelefone = (gcnew System::Windows::Forms::TextBox());
			this->RegistroTutorEmail = (gcnew System::Windows::Forms::TextBox());
			this->RegistroTutorApelido = (gcnew System::Windows::Forms::TextBox());
			this->RegistroTutorConfirma = (gcnew System::Windows::Forms::TextBox());
			this->RegistroTutorSenha = (gcnew System::Windows::Forms::TextBox());
			this->RegistroTutorCPF = (gcnew System::Windows::Forms::TextBox());
			this->RegistroTutorNome = (gcnew System::Windows::Forms::TextBox());
			this->RegistroTutorGrad = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(42, 254);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(68, 24);
			this->label8->TabIndex = 25;
			this->label8->Text = L"E-mail";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(42, 211);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(178, 24);
			this->label7->TabIndex = 24;
			this->label7->Text = L"Numero de celular";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(42, 131);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(78, 24);
			this->label6->TabIndex = 22;
			this->label6->Text = L"Apelido";
			// 
			// botaoCancela
			// 
			this->botaoCancela->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->botaoCancela->Location = System::Drawing::Point(415, 451);
			this->botaoCancela->Name = L"botaoCancela";
			this->botaoCancela->Size = System::Drawing::Size(157, 53);
			this->botaoCancela->TabIndex = 21;
			this->botaoCancela->Text = L"Cancelar";
			this->botaoCancela->UseVisualStyleBackColor = true;
			this->botaoCancela->Click += gcnew System::EventHandler(this, &RegistrarTutor::botaoCancela_Click_1);
			// 
			// botaoConfirma
			// 
			this->botaoConfirma->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->botaoConfirma->Location = System::Drawing::Point(227, 451);
			this->botaoConfirma->Name = L"botaoConfirma";
			this->botaoConfirma->Size = System::Drawing::Size(157, 53);
			this->botaoConfirma->TabIndex = 20;
			this->botaoConfirma->Text = L"Confirmar";
			this->botaoConfirma->UseVisualStyleBackColor = true;
			this->botaoConfirma->Click += gcnew System::EventHandler(this, &RegistrarTutor::botaoConfirma_Click_1);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(42, 346);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(175, 24);
			this->label5->TabIndex = 14;
			this->label5->Text = L"Confirme a senha";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(42, 299);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(70, 24);
			this->label4->TabIndex = 13;
			this->label4->Text = L"Senha";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(42, 169);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(52, 24);
			this->label3->TabIndex = 12;
			this->label3->Text = L"CPF";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(42, 93);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(64, 24);
			this->label2->TabIndex = 15;
			this->label2->Text = L"Nome";
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(40, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(532, 53);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Registro Tutor";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// RegistroTutorTelefone
			// 
			this->RegistroTutorTelefone->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RegistroTutorTelefone->Location = System::Drawing::Point(227, 203);
			this->RegistroTutorTelefone->Name = L"RegistroTutorTelefone";
			this->RegistroTutorTelefone->Size = System::Drawing::Size(345, 32);
			this->RegistroTutorTelefone->TabIndex = 32;
			// 
			// RegistroTutorEmail
			// 
			this->RegistroTutorEmail->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RegistroTutorEmail->Location = System::Drawing::Point(227, 246);
			this->RegistroTutorEmail->Name = L"RegistroTutorEmail";
			this->RegistroTutorEmail->Size = System::Drawing::Size(345, 32);
			this->RegistroTutorEmail->TabIndex = 31;
			// 
			// RegistroTutorApelido
			// 
			this->RegistroTutorApelido->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RegistroTutorApelido->Location = System::Drawing::Point(227, 123);
			this->RegistroTutorApelido->Name = L"RegistroTutorApelido";
			this->RegistroTutorApelido->Size = System::Drawing::Size(345, 32);
			this->RegistroTutorApelido->TabIndex = 30;
			// 
			// RegistroTutorConfirma
			// 
			this->RegistroTutorConfirma->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RegistroTutorConfirma->Location = System::Drawing::Point(227, 338);
			this->RegistroTutorConfirma->Name = L"RegistroTutorConfirma";
			this->RegistroTutorConfirma->PasswordChar = '#';
			this->RegistroTutorConfirma->Size = System::Drawing::Size(345, 32);
			this->RegistroTutorConfirma->TabIndex = 26;
			// 
			// RegistroTutorSenha
			// 
			this->RegistroTutorSenha->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RegistroTutorSenha->Location = System::Drawing::Point(227, 291);
			this->RegistroTutorSenha->Name = L"RegistroTutorSenha";
			this->RegistroTutorSenha->PasswordChar = '#';
			this->RegistroTutorSenha->Size = System::Drawing::Size(345, 32);
			this->RegistroTutorSenha->TabIndex = 27;
			// 
			// RegistroTutorCPF
			// 
			this->RegistroTutorCPF->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RegistroTutorCPF->Location = System::Drawing::Point(227, 161);
			this->RegistroTutorCPF->Name = L"RegistroTutorCPF";
			this->RegistroTutorCPF->Size = System::Drawing::Size(345, 32);
			this->RegistroTutorCPF->TabIndex = 28;
			// 
			// RegistroTutorNome
			// 
			this->RegistroTutorNome->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RegistroTutorNome->Location = System::Drawing::Point(227, 85);
			this->RegistroTutorNome->Name = L"RegistroTutorNome";
			this->RegistroTutorNome->Size = System::Drawing::Size(345, 32);
			this->RegistroTutorNome->TabIndex = 29;
			// 
			// RegistroTutorGrad
			// 
			this->RegistroTutorGrad->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RegistroTutorGrad->Location = System::Drawing::Point(227, 394);
			this->RegistroTutorGrad->Name = L"RegistroTutorGrad";
			this->RegistroTutorGrad->Size = System::Drawing::Size(345, 32);
			this->RegistroTutorGrad->TabIndex = 33;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(45, 397);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(114, 24);
			this->label9->TabIndex = 34;
			this->label9->Text = L"Graduação";
			// 
			// RegistrarTutor
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SlateGray;
			this->ClientSize = System::Drawing::Size(584, 516);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->RegistroTutorGrad);
			this->Controls->Add(this->RegistroTutorTelefone);
			this->Controls->Add(this->RegistroTutorEmail);
			this->Controls->Add(this->RegistroTutorApelido);
			this->Controls->Add(this->RegistroTutorConfirma);
			this->Controls->Add(this->RegistroTutorSenha);
			this->Controls->Add(this->RegistroTutorCPF);
			this->Controls->Add(this->RegistroTutorNome);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->botaoCancela);
			this->Controls->Add(this->botaoConfirma);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"RegistrarTutor";
			this->Text = L"Registrar Tutor";
			this->Load += gcnew System::EventHandler(this, &RegistrarTutor::RegistrarTutor_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void RegistrarTutor_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void RegistroAlunoEmail_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void RegistroAlunoApelido_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void botaoCancela_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void botaoConfirma_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void RegistroAlunoConfirma_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void RegistroAlunoSenha_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void RegistroAlunoCPF_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void RegistroAlunoNome_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void RegistroAlunoTelefone_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
public:bool switchToLogin = false;
private: System::Void botaoCancela_Click_1(System::Object^ sender, System::EventArgs^ e) {
	this->switchToLogin = true;
	this->Close();
}

public: Tutor^ tutor = nullptr;

private: System::Void botaoConfirma_Click_1(System::Object^ sender, System::EventArgs^ e) {
	String^ nome = RegistroTutorNome->Text;
	String^ nomeUsuario = RegistroTutorApelido->Text;
	String^ cpf = RegistroTutorCPF->Text;
	String^ telefone = RegistroTutorTelefone->Text;
	String^ email = RegistroTutorEmail->Text;
	String^ senha = RegistroTutorSenha->Text;
	String^ confirmaSenha = RegistroTutorConfirma->Text;
	String^ especialidade = RegistroTutorGrad->Text;

	if (nome->Length == 0 || nomeUsuario->Length == 0 || cpf->Length == 0 || telefone->Length == 0 ||
		email->Length == 0 || senha->Length == 0 || confirmaSenha->Length == 0 || especialidade->Length == 0) {

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

		String^ sqlQuery = "INSERT INTO Pessoas " + 
			"(nome,email, telefone, cpf) VALUES " +
			"(@nome, @email, @telefone, @cpf);" + 
						   "INSERT INTO Tutor " + 
			"(nome_usuario, senha, especialidade) VALUES " + 
			"(@nomeUsuario, @senha, @especialidade);";

		SqlCommand command(sqlQuery, % sqlConn);
		command.Parameters->AddWithValue("@nome", nome);
		command.Parameters->AddWithValue("@email", email);
		command.Parameters->AddWithValue("@cpf", cpf);
		command.Parameters->AddWithValue("@telefone", telefone);
		command.Parameters->AddWithValue("@nomeUsuario", nomeUsuario);
		command.Parameters->AddWithValue("@senha", senha);
		command.Parameters->AddWithValue("@especialidade",especialidade);

		command.ExecuteNonQuery();
		tutor = gcnew Tutor;
		tutor->nomeUsuario = nomeUsuario;
		tutor->senha = senha;
		tutor->email = email;

		this->Close();

	}
	catch (Exception^ ex) {
		MessageBox::Show("Falha ao registrar um novo usuario",
			"Falha no Registro", MessageBoxButtons::OK);
	}
}
};
}
