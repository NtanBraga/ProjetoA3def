#pragma once

namespace ProjetoA3def {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Sumário para CompraCurso
	/// </summary>
	public ref class CompraCurso : public System::Windows::Forms::Form
	{
	public:
		CompraCurso(void)
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
		~CompraCurso()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ confirmaButao;

	private: System::Windows::Forms::Label^ textoCurso;
	private: System::Windows::Forms::ListBox^ listCurso;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->confirmaButao = (gcnew System::Windows::Forms::Button());
			this->textoCurso = (gcnew System::Windows::Forms::Label());
			this->listCurso = (gcnew System::Windows::Forms::ListBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(-5, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(368, 51);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Escolha um curso para se registrar";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 347);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(144, 82);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Voltar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &CompraCurso::button1_Click);
			// 
			// confirmaButao
			// 
			this->confirmaButao->Location = System::Drawing::Point(203, 103);
			this->confirmaButao->Name = L"confirmaButao";
			this->confirmaButao->Size = System::Drawing::Size(144, 82);
			this->confirmaButao->TabIndex = 9;
			this->confirmaButao->Text = L"Continuar";
			this->confirmaButao->UseVisualStyleBackColor = true;
			this->confirmaButao->Click += gcnew System::EventHandler(this, &CompraCurso::button2_Click);
			// 
			// textoCurso
			// 
			this->textoCurso->Location = System::Drawing::Point(203, 188);
			this->textoCurso->Name = L"textoCurso";
			this->textoCurso->Size = System::Drawing::Size(142, 60);
			this->textoCurso->TabIndex = 10;
			this->textoCurso->Text = L"Selecione um curso";
			this->textoCurso->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->textoCurso->Click += gcnew System::EventHandler(this, &CompraCurso::textoCurso_Click);
			// 
			// listCurso
			// 
			this->listCurso->FormattingEnabled = true;
			this->listCurso->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"Introdução à Programação", L"Design Gráfico",
					L"Marketing Digital", L"Administração de Empresas", L"Psicologia Organizacional", L"Fotografia Digital", L"Contabilidade Básica",
					L"Gestão de Projetos", L"Escrita Criativa", L"Inglês para Negócios"
			});
			this->listCurso->Location = System::Drawing::Point(12, 90);
			this->listCurso->Name = L"listCurso";
			this->listCurso->Size = System::Drawing::Size(153, 199);
			this->listCurso->TabIndex = 11;
			this->listCurso->SelectedIndexChanged += gcnew System::EventHandler(this, &CompraCurso::listCurso_SelectedIndexChanged);
			// 
			// CompraCurso
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SlateGray;
			this->ClientSize = System::Drawing::Size(359, 441);
			this->Controls->Add(this->listCurso);
			this->Controls->Add(this->textoCurso);
			this->Controls->Add(this->confirmaButao);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"CompraCurso";
			this->Text = L"CompraCurso";
			this->Load += gcnew System::EventHandler(this, &CompraCurso::CompraCurso_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	public: bool switchToMenu = false;
			bool switchToPag = false;
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->switchToMenu = true;
		this->Close();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->switchToPag = true;
		this->Close();
	}
private: System::Void textoCurso_Click(System::Object^ sender, System::EventArgs^ e) {
	


		confirmaButao->Enabled = true;

		String^ texto = listCurso->GetItemText(listCurso->SelectedItem);
		String^ tutorNome = ObterNomeTutor(texto);

		if (tutorNome != nullptr) {
			textoCurso->Text = texto + " - Prof." + tutorNome;
		}
		else {
			textoCurso->Text = texto + " -  " + "Sem tutor no curso";
		}


	

	
}
String^ ObterNomeTutor(String^ cursoSelecionado) {


	try {
		String^ connString = "Data Source=.;Initial Catalog=Projeto;Integrated Security=True";
		SqlConnection^ sqlConn = gcnew SqlConnection(connString);
		sqlConn->Open();
		String^ sqlQuery = "SELECT nome_usuario FROM Tutor WHERE curso = @cursoSelecionado;";
		SqlCommand^ sqlCmd = gcnew SqlCommand(sqlQuery, sqlConn);
		sqlCmd->Parameters->AddWithValue("@cursoSelecionado", cursoSelecionado);

		Object^ result = sqlCmd->ExecuteScalar();

		if (result != nullptr) {
			return result->ToString();
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show("Falha ao registrar um novo usuario",
			"Falha no Registro", MessageBoxButtons::OK);
	}

	return nullptr;
}


private: System::Void CompraCurso_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void listCurso_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
