#pragma once

namespace ProjetoA3def {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Sumário para MenuTutor
	/// </summary>
	public ref class MenuTutor : public System::Windows::Forms::Form
	{
	public:
		MenuTutor(void)
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
		~MenuTutor()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;




	protected:

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
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(-3, -1);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(509, 88);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Menu do Tutor";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &MenuTutor::label1_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(47, 150);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(130, 62);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Ver Cursos do sistema";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MenuTutor::button1_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(312, 150);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(130, 62);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Registrar em curso";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MenuTutor::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(177, 281);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(130, 62);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Sair";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MenuTutor::button4_Click);
			// 
			// MenuTutor
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SlateGray;
			this->ClientSize = System::Drawing::Size(504, 416);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"MenuTutor";
			this->Text = L"MenuTutor";
			this->ResumeLayout(false);

		}
#pragma endregion
	public: bool switchToCursoRegistrado = false;
			bool switchToCursoTutor = false;
			bool fecharJanela = false;
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->switchToCursoRegistrado = true;
		this->Close();
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		this->fecharJanela = true;
		this->Close();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->switchToCursoTutor = true;
		this->Close();
	}
};
}
