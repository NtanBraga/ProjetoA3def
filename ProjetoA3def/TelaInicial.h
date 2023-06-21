#pragma once

namespace ProjetoA3def {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Sumário para MyForm
	/// </summary>
	public ref class TelaInicial : public System::Windows::Forms::Form
	{
	public:
		TelaInicial(void)
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
		~TelaInicial()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ butaoAluno;
	private: System::Windows::Forms::Button^ butaoTutor;


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
			this->butaoAluno = (gcnew System::Windows::Forms::Button());
			this->butaoTutor = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(2, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(537, 81);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Tela Principal";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// butaoAluno
			// 
			this->butaoAluno->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->butaoAluno->Location = System::Drawing::Point(60, 177);
			this->butaoAluno->Name = L"butaoAluno";
			this->butaoAluno->Size = System::Drawing::Size(165, 76);
			this->butaoAluno->TabIndex = 1;
			this->butaoAluno->Text = L"ALUNO";
			this->butaoAluno->UseVisualStyleBackColor = true;
			this->butaoAluno->Click += gcnew System::EventHandler(this, &TelaInicial::button1_Click);
			// 
			// butaoTutor
			// 
			this->butaoTutor->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->butaoTutor->Location = System::Drawing::Point(305, 177);
			this->butaoTutor->Name = L"butaoTutor";
			this->butaoTutor->Size = System::Drawing::Size(165, 76);
			this->butaoTutor->TabIndex = 2;
			this->butaoTutor->Text = L"TUTOR";
			this->butaoTutor->UseVisualStyleBackColor = true;
			this->butaoTutor->Click += gcnew System::EventHandler(this, &TelaInicial::button2_Click);
			// 
			// TelaInicial
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SlateGray;
			this->ClientSize = System::Drawing::Size(539, 405);
			this->Controls->Add(this->butaoTutor);
			this->Controls->Add(this->butaoAluno);
			this->Controls->Add(this->label1);
			this->Name = L"TelaInicial";
			this->Text = L"TelaPrincipal";
			this->ResumeLayout(false);

		}
#pragma endregion

	public: bool switchToAluno = false;
			bool switchToTutor = false;

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->switchToTutor = true;
		this->Close();
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->switchToAluno = true;
		this->Close();
	
	}

	};
}
