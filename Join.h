#pragma once


namespace VideoShopManagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Join에 대한 요약입니다.
	/// </summary>
	public ref class Join : public System::Windows::Forms::Form
	{
	public:
		Join(void)
		{
			InitializeComponent();
			password_txt->PasswordChar = '*';
			Repassword_txt->PasswordChar = '*';
			//
			//TODO: 생성자 코드를 여기에 추가합니다.
			//
		}

	protected:
		/// <summary>
		/// 사용 중인 모든 리소스를 정리합니다.
		/// </summary>
		~Join()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  id_txt;
	private: System::Windows::Forms::TextBox^  password_txt;
	private: System::Windows::Forms::TextBox^  name_txt;
	private: System::Windows::Forms::TextBox^  rrn_txt;
	private: System::Windows::Forms::TextBox^  homenum_txt;
	private: System::Windows::Forms::TextBox^  phonenum_txt;
	private: System::Windows::Forms::TextBox^  address_txt;
	private: System::Windows::Forms::Button^  ok_btn;
	private: System::Windows::Forms::Button^  cancel_btn;
	private: System::Windows::Forms::TextBox^  email_txt;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  Repassword_txt;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label10;









	protected:

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->id_txt = (gcnew System::Windows::Forms::TextBox());
			this->password_txt = (gcnew System::Windows::Forms::TextBox());
			this->name_txt = (gcnew System::Windows::Forms::TextBox());
			this->rrn_txt = (gcnew System::Windows::Forms::TextBox());
			this->homenum_txt = (gcnew System::Windows::Forms::TextBox());
			this->phonenum_txt = (gcnew System::Windows::Forms::TextBox());
			this->address_txt = (gcnew System::Windows::Forms::TextBox());
			this->ok_btn = (gcnew System::Windows::Forms::Button());
			this->cancel_btn = (gcnew System::Windows::Forms::Button());
			this->email_txt = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->Repassword_txt = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(97, 207);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(29, 12);
			this->label1->TabIndex = 0;
			this->label1->Text = L"이름";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(97, 240);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(77, 12);
			this->label2->TabIndex = 1;
			this->label2->Text = L"주민등록번호";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(97, 338);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(69, 12);
			this->label3->TabIndex = 2;
			this->label3->Text = L"집 전화번호";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(97, 375);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(65, 12);
			this->label4->TabIndex = 3;
			this->label4->Text = L"핸드폰번호";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(97, 427);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(41, 12);
			this->label5->TabIndex = 4;
			this->label5->Text = L"집주소";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(97, 56);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(41, 12);
			this->label6->TabIndex = 5;
			this->label6->Text = L"아이디";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(97, 112);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(53, 12);
			this->label7->TabIndex = 6;
			this->label7->Text = L"비밀번호";
			// 
			// id_txt
			// 
			this->id_txt->Location = System::Drawing::Point(212, 53);
			this->id_txt->Name = L"id_txt";
			this->id_txt->Size = System::Drawing::Size(119, 21);
			this->id_txt->TabIndex = 7;
			// 
			// password_txt
			// 
			this->password_txt->Location = System::Drawing::Point(212, 112);
			this->password_txt->Name = L"password_txt";
			this->password_txt->Size = System::Drawing::Size(119, 21);
			this->password_txt->TabIndex = 8;
			// 
			// name_txt
			// 
			this->name_txt->Location = System::Drawing::Point(212, 207);
			this->name_txt->Name = L"name_txt";
			this->name_txt->Size = System::Drawing::Size(119, 21);
			this->name_txt->TabIndex = 9;
			// 
			// rrn_txt
			// 
			this->rrn_txt->Location = System::Drawing::Point(212, 240);
			this->rrn_txt->Name = L"rrn_txt";
			this->rrn_txt->Size = System::Drawing::Size(119, 21);
			this->rrn_txt->TabIndex = 10;
			// 
			// homenum_txt
			// 
			this->homenum_txt->Location = System::Drawing::Point(212, 335);
			this->homenum_txt->Name = L"homenum_txt";
			this->homenum_txt->Size = System::Drawing::Size(119, 21);
			this->homenum_txt->TabIndex = 11;
			// 
			// phonenum_txt
			// 
			this->phonenum_txt->Location = System::Drawing::Point(212, 375);
			this->phonenum_txt->Name = L"phonenum_txt";
			this->phonenum_txt->Size = System::Drawing::Size(119, 21);
			this->phonenum_txt->TabIndex = 12;
			// 
			// address_txt
			// 
			this->address_txt->Location = System::Drawing::Point(212, 427);
			this->address_txt->Name = L"address_txt";
			this->address_txt->Size = System::Drawing::Size(119, 21);
			this->address_txt->TabIndex = 13;
			// 
			// ok_btn
			// 
			this->ok_btn->Location = System::Drawing::Point(168, 478);
			this->ok_btn->Name = L"ok_btn";
			this->ok_btn->Size = System::Drawing::Size(75, 23);
			this->ok_btn->TabIndex = 14;
			this->ok_btn->Text = L"회원가입";
			this->ok_btn->UseVisualStyleBackColor = true;
			this->ok_btn->Click += gcnew System::EventHandler(this, &Join::ok_btn_Click);
			// 
			// cancel_btn
			// 
			this->cancel_btn->Location = System::Drawing::Point(256, 478);
			this->cancel_btn->Name = L"cancel_btn";
			this->cancel_btn->Size = System::Drawing::Size(75, 23);
			this->cancel_btn->TabIndex = 15;
			this->cancel_btn->Text = L"취소";
			this->cancel_btn->UseVisualStyleBackColor = true;
			this->cancel_btn->Click += gcnew System::EventHandler(this, &Join::cancel_btn_Click);
			// 
			// email_txt
			// 
			this->email_txt->Location = System::Drawing::Point(212, 296);
			this->email_txt->Name = L"email_txt";
			this->email_txt->Size = System::Drawing::Size(119, 21);
			this->email_txt->TabIndex = 17;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(97, 296);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(65, 12);
			this->label8->TabIndex = 16;
			this->label8->Text = L"이메일주소";
			// 
			// Repassword_txt
			// 
			this->Repassword_txt->Location = System::Drawing::Point(212, 148);
			this->Repassword_txt->Name = L"Repassword_txt";
			this->Repassword_txt->Size = System::Drawing::Size(119, 21);
			this->Repassword_txt->TabIndex = 19;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(97, 148);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(77, 12);
			this->label9->TabIndex = 18;
			this->label9->Text = L"비밀번호확인";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(346, 54);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 20;
			this->button1->Text = L"중복확인";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Join::button1_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(210, 87);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(53, 12);
			this->label10->TabIndex = 21;
			this->label10->Text = L"중복확인";
			// 
			// Join
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(524, 565);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Repassword_txt);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->email_txt);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->cancel_btn);
			this->Controls->Add(this->ok_btn);
			this->Controls->Add(this->address_txt);
			this->Controls->Add(this->phonenum_txt);
			this->Controls->Add(this->homenum_txt);
			this->Controls->Add(this->rrn_txt);
			this->Controls->Add(this->name_txt);
			this->Controls->Add(this->password_txt);
			this->Controls->Add(this->id_txt);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Join";
			this->Text = L"Join";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion




	private: System::Void ok_btn_Click(System::Object^  sender, System::EventArgs^  e) {

		String^ constring = L"datasource=localhost;port=3306;username=root;password=0000"; //db연결 하기 위한 constring
		MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("insert into videoshopmng.tuser(id,password,name,rrn,email,home_num,phone_num,address) values('" + this->id_txt->Text + "','" + this->password_txt->Text + "','" + this->name_txt->Text + "','" + this->rrn_txt->Text + "','" + this->email_txt->Text + "','" + this->homenum_txt->Text + "','" + this->phonenum_txt->Text + "','" + this->address_txt->Text + "') ;", conDataBase); //vid 자동생성을 위해 value값을 따로지정
		MySqlDataReader^ myReader;
		try {
		

			if (label10->Text == "이미 사용중인 아이디입니다!") {

				MessageBox::Show("이미 사용중인 아이디입니다. 다른 아이디를 사용해주세요.");

			}
			else if(label10->Text == "중복확인") {

				MessageBox::Show("아이디 중복확인을 먼저 해주세요.");
			}

			else if (id_txt->Text=="" || password_txt->Text=="" || name_txt->Text == "" || rrn_txt->Text == "" || email_txt->Text == "" || homenum_txt->Text == "" || phonenum_txt->Text == "" || address_txt->Text == "") {
				
				MessageBox::Show("빈칸을 입력해주세요");
			}

			else {

				if (password_txt->Text != Repassword_txt->Text) {

					MessageBox::Show("비밀번호를 다시한번 확인해주세요");

				}

				else {
					conDataBase->Open();
					myReader = cmdDataBase->ExecuteReader();
					MessageBox::Show("회원등록 완료");
					this->Hide();

					while (myReader->Read()) {

					}

				}
			}
		}
		catch (Exception^ex) {
			MessageBox::Show(ex->Message);
		}



	}
	private: System::Void cancel_btn_Click(System::Object^  sender, System::EventArgs^  e) {

		this->Hide();

		//Login^ h2 = gcnew Login();
		//this->Hide();
		//h2->ShowDialog();
		//


	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ constring = L"datasource=localhost;port=3306;username=root;password=0000"; //db연결 하기 위한 constring
		MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select * from videoshopmng.tuser where id='" + this->id_txt->Text + "' ;", conDataBase);
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
				label10->Text = "이미 사용중인 아이디입니다!";

			}
			else {

				label10->Text = "사용가능한 아이디입니다.";

			}
		
		}
		catch(Exception^ ex){
		
		
		
		}


	}
};
}
