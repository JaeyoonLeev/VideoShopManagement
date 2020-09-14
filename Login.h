#pragma once

#include "Join.h"
#include "ManagementForm.h"
#include "NormalRentalForm.h"

namespace VideoShopManagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Login에 대한 요약입니다.
	/// </summary>
	public ref class Login : public System::Windows::Forms::Form
	{
	public:
		Login(void)
		{
			InitializeComponent();
			password_txt->PasswordChar = '*';
			password_txt->MaxLength = 15;
			//
			//TODO: 생성자 코드를 여기에 추가합니다.
			//
		}

	protected:
		/// <summary>
		/// 사용 중인 모든 리소스를 정리합니다.
		/// </summary>
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  Login_btn;
	protected:
	private: System::Windows::Forms::Button^  Join_btn;
	private: System::Windows::Forms::TextBox^  id_txt;
	private: System::Windows::Forms::TextBox^  password_txt;


	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  Exit_btn;

	private:
		/// <summary>
		/// 필수 디자이너 변수입니다.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 디자이너 지원에 필요한 메서드입니다. 
		/// 이 메서드의 내용을 코드 편집기로 수정하지 마세요.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Login::typeid));
			this->Login_btn = (gcnew System::Windows::Forms::Button());
			this->Join_btn = (gcnew System::Windows::Forms::Button());
			this->id_txt = (gcnew System::Windows::Forms::TextBox());
			this->password_txt = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->Exit_btn = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// Login_btn
			// 
			this->Login_btn->Location = System::Drawing::Point(288, 367);
			this->Login_btn->Name = L"Login_btn";
			this->Login_btn->Size = System::Drawing::Size(98, 37);
			this->Login_btn->TabIndex = 0;
			this->Login_btn->Text = L"로그인";
			this->Login_btn->UseVisualStyleBackColor = true;
			this->Login_btn->Click += gcnew System::EventHandler(this, &Login::Login_btn_Click);
			// 
			// Join_btn
			// 
			this->Join_btn->Location = System::Drawing::Point(601, 12);
			this->Join_btn->Name = L"Join_btn";
			this->Join_btn->Size = System::Drawing::Size(73, 37);
			this->Join_btn->TabIndex = 1;
			this->Join_btn->Text = L"회원가입";
			this->Join_btn->UseVisualStyleBackColor = true;
			this->Join_btn->Click += gcnew System::EventHandler(this, &Login::Join_btn_Click);
			// 
			// id_txt
			// 
			this->id_txt->Location = System::Drawing::Point(278, 272);
			this->id_txt->Multiline = true;
			this->id_txt->Name = L"id_txt";
			this->id_txt->Size = System::Drawing::Size(152, 21);
			this->id_txt->TabIndex = 2;
			this->id_txt->TextChanged += gcnew System::EventHandler(this, &Login::id_txt_TextChanged);
			// 
			// password_txt
			// 
			this->password_txt->Location = System::Drawing::Point(278, 313);
			this->password_txt->Multiline = true;
			this->password_txt->Name = L"password_txt";
			this->password_txt->Size = System::Drawing::Size(152, 21);
			this->password_txt->TabIndex = 3;
			this->password_txt->TextChanged += gcnew System::EventHandler(this, &Login::password_txt_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(214, 275);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(41, 12);
			this->label1->TabIndex = 4;
			this->label1->Text = L"아이디";
			this->label1->Click += gcnew System::EventHandler(this, &Login::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(214, 316);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(53, 12);
			this->label2->TabIndex = 5;
			this->label2->Text = L"비밀번호";
			this->label2->Click += gcnew System::EventHandler(this, &Login::label2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(138, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(405, 222);
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			// 
			// Exit_btn
			// 
			this->Exit_btn->Location = System::Drawing::Point(578, 498);
			this->Exit_btn->Name = L"Exit_btn";
			this->Exit_btn->Size = System::Drawing::Size(96, 37);
			this->Exit_btn->TabIndex = 7;
			this->Exit_btn->Text = L"끝내기";
			this->Exit_btn->UseVisualStyleBackColor = true;
			this->Exit_btn->Click += gcnew System::EventHandler(this, &Login::Exit_btn_Click);
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(686, 547);
			this->Controls->Add(this->Exit_btn);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->password_txt);
			this->Controls->Add(this->id_txt);
			this->Controls->Add(this->Join_btn);
			this->Controls->Add(this->Login_btn);
			this->Name = L"Login";
			this->Text = L"Login";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Login_btn_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ constring = L"datasource=localhost;port=3306;username=root;password=0000"; //db연결 하기 위한 constring
		MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select * from videoshopmng.tuser where id='" + this->id_txt->Text + "' and password='" + this->password_txt->Text + "';", conDataBase);
		MySqlDataReader^ myReader;
		try {
			conDataBase->Open();
			myReader = cmdDataBase->ExecuteReader();
			int count = 0;
			while (myReader->Read()) {
				count = count + 1;
			}
			if (count == 1) {
				String^ AdminId = myReader->GetString("id");

					if(AdminId == "jaeyoon") {
						String^ vName;
						vName = myReader->GetString("name");
						MessageBox::Show(vName + "님 환영합니다.");
						this->Hide();
						ManagementForm^ m2 = gcnew ManagementForm();
						m2->ShowDialog();
					}
					else {
						String^ vName;
						vName = myReader->GetString("name");
						MessageBox::Show(vName + "님 환영합니다.");
						this->Hide();
						NormalRentalForm^ n2 = gcnew NormalRentalForm();
						n2->ShowDialog();


					}
			}
			else if (count > 1) {
				MessageBox::Show("아이디와 비밀번호가 중복됩니다. 액세스 거부"); //만약 아이디, 비밀번호 중복일경우 대비
			}
			else
				MessageBox::Show("아이디와 비밀번호가 일치하지않습니다. 다시 시도하세요");
		}
		catch (Exception^ex) {
			MessageBox::Show(ex->Message);
		}

	





	}
private: System::Void Join_btn_Click(System::Object^  sender, System::EventArgs^  e) {
	
	try {

		Join^ j2 = gcnew Join();
		j2->ShowDialog();

	}

	catch(Exception^ ex){
		MessageBox::Show(ex->Message);

	}


}
private: System::Void Exit_btn_Click(System::Object^  sender, System::EventArgs^  e) {
	Application::Exit();
}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void id_txt_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void password_txt_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}
