#pragma once
#include "Usuario.h"
#include <ctime>

namespace ProjetoA3def {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Sumário para Pagamento
	/// </summary>
	public ref class Pagamento : public System::Windows::Forms::Form
	{
	public:
		Pagamento(void)
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
		~Pagamento()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ nomePagador;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ testSenha;
	private: System::Windows::Forms::TextBox^ testUsuario;
	private: System::Windows::Forms::Button^ testButao;
	private: System::Windows::Forms::Label^ codBoleto;

	private: System::Windows::Forms::ComboBox^ verificaCurso;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ numeroBoleto;
	private: System::Windows::Forms::Button^ cadastroCurso;



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
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->nomePagador = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->testSenha = (gcnew System::Windows::Forms::TextBox());
			this->testUsuario = (gcnew System::Windows::Forms::TextBox());
			this->testButao = (gcnew System::Windows::Forms::Button());
			this->codBoleto = (gcnew System::Windows::Forms::Label());
			this->verificaCurso = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->numeroBoleto = (gcnew System::Windows::Forms::Label());
			this->cadastroCurso = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(399, 80);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Pagamento";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// comboBox1
			// 
			this->comboBox1->Enabled = false;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Cartão de crédito - indisponivel", L"Boleto bancário" });
			this->comboBox1->Location = System::Drawing::Point(176, 159);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(182, 21);
			this->comboBox1->TabIndex = 1;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Pagamento::comboBox1_SelectedIndexChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(8, 160);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(162, 20);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Forma de pagamento";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 9);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(106, 32);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Voltar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Pagamento::button1_Click);
			// 
			// nomePagador
			// 
			this->nomePagador->Location = System::Drawing::Point(13, 89);
			this->nomePagador->Name = L"nomePagador";
			this->nomePagador->Size = System::Drawing::Size(100, 23);
			this->nomePagador->TabIndex = 4;
			this->nomePagador->Text = L"Nome de Usuario";
			this->nomePagador->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->nomePagador->Click += gcnew System::EventHandler(this, &Pagamento::label3_Click);
			// 
			// label3
			// 
			this->label3->Location = System::Drawing::Point(12, 112);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(100, 23);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Senha:";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// testSenha
			// 
			this->testSenha->Location = System::Drawing::Point(109, 112);
			this->testSenha->Name = L"testSenha";
			this->testSenha->PasswordChar = '@';
			this->testSenha->Size = System::Drawing::Size(100, 20);
			this->testSenha->TabIndex = 6;
			this->testSenha->TextChanged += gcnew System::EventHandler(this, &Pagamento::testSenha_TextChanged);
			// 
			// testUsuario
			// 
			this->testUsuario->Location = System::Drawing::Point(109, 91);
			this->testUsuario->Name = L"testUsuario";
			this->testUsuario->Size = System::Drawing::Size(100, 20);
			this->testUsuario->TabIndex = 7;
			this->testUsuario->TextChanged += gcnew System::EventHandler(this, &Pagamento::testUsuario_TextChanged);
			// 
			// testButao
			// 
			this->testButao->Enabled = false;
			this->testButao->Location = System::Drawing::Point(237, 92);
			this->testButao->Name = L"testButao";
			this->testButao->Size = System::Drawing::Size(106, 32);
			this->testButao->TabIndex = 8;
			this->testButao->Text = L"Confirmar ";
			this->testButao->UseVisualStyleBackColor = true;
			this->testButao->Click += gcnew System::EventHandler(this, &Pagamento::testButao_Click);
			// 
			// codBoleto
			// 
			this->codBoleto->AutoSize = true;
			this->codBoleto->Location = System::Drawing::Point(160, 213);
			this->codBoleto->Name = L"codBoleto";
			this->codBoleto->Size = System::Drawing::Size(87, 13);
			this->codBoleto->TabIndex = 9;
			this->codBoleto->Text = L"Código do boleto";
			this->codBoleto->Visible = false;
			// 
			// verificaCurso
			// 
			this->verificaCurso->Enabled = false;
			this->verificaCurso->FormattingEnabled = true;
			this->verificaCurso->Location = System::Drawing::Point(119, 270);
			this->verificaCurso->Name = L"verificaCurso";
			this->verificaCurso->Size = System::Drawing::Size(155, 21);
			this->verificaCurso->TabIndex = 10;
			this->verificaCurso->SelectedIndexChanged += gcnew System::EventHandler(this, &Pagamento::comboBox2_SelectedIndexChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(16, 273);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(97, 13);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Cursos disponiveis:";
			// 
			// numeroBoleto
			// 
			this->numeroBoleto->Location = System::Drawing::Point(12, 235);
			this->numeroBoleto->Name = L"numeroBoleto";
			this->numeroBoleto->Size = System::Drawing::Size(399, 23);
			this->numeroBoleto->TabIndex = 12;
			this->numeroBoleto->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->numeroBoleto->Visible = false;
			this->numeroBoleto->Click += gcnew System::EventHandler(this, &Pagamento::numeroBoleto_Click);
			// 
			// cadastroCurso
			// 
			this->cadastroCurso->Enabled = false;
			this->cadastroCurso->Location = System::Drawing::Point(119, 352);
			this->cadastroCurso->Name = L"cadastroCurso";
			this->cadastroCurso->Size = System::Drawing::Size(185, 59);
			this->cadastroCurso->TabIndex = 13;
			this->cadastroCurso->Text = L"Cadastrar no curso";
			this->cadastroCurso->UseVisualStyleBackColor = true;
			this->cadastroCurso->Click += gcnew System::EventHandler(this, &Pagamento::button2_Click);
			// 
			// Pagamento
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SlateGray;
			this->ClientSize = System::Drawing::Size(423, 423);
			this->Controls->Add(this->cadastroCurso);
			this->Controls->Add(this->numeroBoleto);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->verificaCurso);
			this->Controls->Add(this->codBoleto);
			this->Controls->Add(this->testButao);
			this->Controls->Add(this->testUsuario);
			this->Controls->Add(this->testSenha);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->nomePagador);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label1);
			this->Name = L"Pagamento";
			this->Text = L"Pagamento";
			this->Load += gcnew System::EventHandler(this, &Pagamento::Pagamento_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: Usuario^ usuario = nullptr;
	public: bool switchToMenu = false;
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

		if (comboBox1->SelectedIndex == 1) {
			codBoleto->Visible = true;
			numeroBoleto->Visible = true;
		}

		if (comboBox1->SelectedItem != nullptr) {
			verificaCurso->Enabled = true;
		}

	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

			this->switchToMenu = true;
			this->Close();
		
		
	}


private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	
}

	

private: System::Void testButao_Click(System::Object^ sender, System::EventArgs^ e) {

	nomeUsuario = this->testUsuario->Text;
	String^ senha = this->testSenha->Text;



	try {
		String^ connString = "Data Source=.;Initial Catalog=Projeto;Integrated Security=True";
		SqlConnection sqlConn(connString);
		sqlConn.Open();

		String^ sqlQuery = "Select * FROM Usuario WHERE nome_usuario=@nomeUsuario AND senha=@senha;";
		SqlCommand command(sqlQuery, % sqlConn);
		command.Parameters->AddWithValue("@nomeUsuario", nomeUsuario);
		command.Parameters->AddWithValue("@senha", senha);
		SqlDataReader^ reader = command.ExecuteReader();
		if (reader->Read()) {
			usuario = gcnew Usuario;
			usuario->id = reader->GetInt32(0);
			usuario->nomeUsuario = reader->GetString(1);
			usuario->senha = reader->GetString(2);

			MessageBox::Show("Usuario Autenticado",
				"Autenticação", MessageBoxButtons::OK);
			if (usuario != nullptr) {
				comboBox1->Enabled = true;
			}
			reader->Close();

		}
		else {
			MessageBox::Show("Nome ou senhas incorretos",
				"Nome e senha erro", MessageBoxButtons::OK);
		}
		
		
	}
		catch (Exception^ ex) {
			MessageBox::Show("Falha ao registrar um novo usuario",
				"Falha no Registro", MessageBoxButtons::OK);
		}
	
	
}

private: System::Void testUsuario_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (testUsuario->Text == "") {
		testButao->Enabled = false;
	}
	else {
		testButao->Enabled = true;
	}
}
private: System::Void testSenha_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (testSenha->Text == "") {
		testButao->Enabled = false;
	}
	else {
		testButao->Enabled = true;
	}
}
private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (verificaCurso->SelectedItem != nullptr) {
		cadastroCurso->Enabled = true;
	}
}
private: System::Void Pagamento_Load(System::Object^ sender, System::EventArgs^ e) {

	SqlConnection^ conexao = gcnew SqlConnection("Data Source=.;Initial Catalog=Projeto;Integrated Security=True");

	Random^ random = gcnew Random();

	String^ numeros = "";
	for (int i = 0; i < 49; i++) {
		int numero = random->Next(1, 100);
		numeros += numero.ToString();
	}
	numeroBoleto->Text = numeros;


	conexao->Open();

	SqlCommand^ comando = gcnew SqlCommand("SELECT curso FROM Tutor ;", conexao);
	SqlDataReader^ leitor = comando->ExecuteReader();

	List<String^>^ cursos = gcnew List<String^>();


	while (leitor->Read()) {
		if (!leitor->IsDBNull(0)) {
			String^ valor = leitor->GetString(0);
			if (!cursos->Contains(valor)) {
				cursos->Add(valor);
				verificaCurso->Items->Add(valor);
			}
		}
	}
	leitor->Close();
	conexao->Close();

	verificaCurso->DisplayMember = "curso";
	verificaCurso->ValueMember = "curso";



}
private: System::Void numeroBoleto_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	
	String^ cursoCadastro = verificaCurso->SelectedItem->ToString();
	int count = 1;

	try {
		String^ connString = "Data Source=.;Initial Catalog=Projeto;Integrated Security=True";
		SqlConnection sqlConn(connString);
		sqlConn.Open();

		String^ sqlQuery = "SELECT curso FROM Usuario WHERE nome_usuario = @nomeUsuario AND curso IS NULL;";

		SqlCommand^ commandSelect = gcnew SqlCommand(sqlQuery, % sqlConn);
		commandSelect->Parameters->AddWithValue("@nomeUsuario", nomeUsuario);
		Object^ result = commandSelect->ExecuteScalar();

		if (result != DBNull::Value)
		{
			MessageBox::Show("Você já está registrado em um curso");
			this->Close();
		}
	
		else {
			sqlQuery = "UPDATE Usuario SET curso = @CursoSelecionado WHERE nome_usuario = @nomeUsuario;";
			SqlCommand command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue("@CursoSelecionado", cursoCadastro);
			command.Parameters->AddWithValue("@nomeUsuario", nomeUsuario);
			command.ExecuteNonQuery();

			MessageBox::Show("Registrado no curso com sucesso.");

			this->Close();
		}
		
	}
	catch (Exception^ ex) {
		MessageBox::Show("Erro ao verificar se o usuário já está registrado em um curso. Detalhes do erro: " + ex->Message,
			"Erro", MessageBoxButtons::OK);
	}

}
	   private:
		   String^ nomeUsuario;
};
}
