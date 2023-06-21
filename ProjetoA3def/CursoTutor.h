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
	/// Sumário para CursoTutor
	/// </summary>
	public ref class CursoTutor : public System::Windows::Forms::Form
	{
	public:
		CursoTutor(void)
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
		~CursoTutor()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::CheckedListBox^ listCurso;



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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->listCurso = (gcnew System::Windows::Forms::CheckedListBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(-6, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(368, 51);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Escolha um curso para se registrar";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &CursoTutor::label1_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 347);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(144, 82);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Voltar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &CursoTutor::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(203, 105);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(144, 82);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Confirmar curso";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &CursoTutor::button2_Click);
			// 
			// listCurso
			// 
			this->listCurso->BackColor = System::Drawing::Color::SlateGray;
			this->listCurso->FormattingEnabled = true;
			this->listCurso->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"Introdução à Programação", L"Design Gráfico",
					L"Marketing Digital", L"Administração de Empresas", L"Psicologia Organizacional", L"Fotografia Digital", L"Contabilidade Básica",
					L"Gestão de Projetos", L"Escrita Criativa", L"Inglês para Negócios"
			});
			this->listCurso->Location = System::Drawing::Point(7, 105);
			this->listCurso->Name = L"listCurso";
			this->listCurso->Size = System::Drawing::Size(184, 169);
			this->listCurso->TabIndex = 5;
			this->listCurso->SelectedIndexChanged += gcnew System::EventHandler(this, &CursoTutor::checkedListBox1_SelectedIndexChanged);
			// 
			// CursoTutor
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SlateGray;
			this->ClientSize = System::Drawing::Size(359, 441);
			this->Controls->Add(this->listCurso);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"CursoTutor";
			this->Text = L"CursoTutor";
			this->ResumeLayout(false);

		}
#pragma endregion
	public: bool switchToMenu = false;
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->switchToMenu = true;
		this->Close();
	}
private: System::Void checkedListBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {


		if (listCurso->SelectedIndex == -1) {
			MessageBox::Show("Por favor,selecione um item antes.");
			return;
		}
		
		String^ cursoSelecionado = listCurso->GetItemText(listCurso->SelectedItem);


		try {
			String^ connString = "Data Source=.;Initial Catalog=Projeto;Integrated Security=True";
			SqlConnection sqlConn(connString);
			sqlConn.Open();


			String^ sqlQuery = "SELECT * FROM Tutor WHERE curso IS NULL;";

			SqlCommand^ commandSelect = gcnew SqlCommand(sqlQuery, % sqlConn);
			int count = Convert::ToInt32(commandSelect->ExecuteScalar());

			if (count == 0) {
				MessageBox::Show("Você já está registrado em um curso");
				return;
			}

			sqlQuery = "UPDATE Tutor SET curso = @cursoSelecionado WHERE curso IS NULL;";

			SqlCommand command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue("@cursoSelecionado",cursoSelecionado);
			command.ExecuteNonQuery();

			MessageBox::Show("Registrado no curso com sucesso.");
	

			this->Close();
		}
		catch(Exception^ ex) {
			MessageBox::Show("Falha ao registrar um novo usuario",
				"Falha no Registro", MessageBoxButtons::OK);
		}

	}

private: System::Void demostrarTutor_Click(System::Object^ sender, System::EventArgs^ e) {

}
};
}
