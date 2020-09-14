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
	/// MemberUpdate에 대한 요약입니다.
	/// </summary>
	public ref class MemberUpdate : public System::Windows::Forms::Form
	{
	public:
		String^ uid;
		String^ upassword;
		String^ uname;
		String^ urrn;
		String^ uemail;
		String^ uhomenum;
		String^ uphonenum;
		String^ uaddress;


	public:
		MemberUpdate(void)
		{
			InitializeComponent();
			//
			//TODO: 생성자 코드를 여기에 추가합니다.
			//
		}

	public:
		MemberUpdate(String^ uidtext, String^ upasswordtext, String^ unametext, String^ urrntext, String^ uemailtext, String^ uhomenumtext, String^ uphonenumtext, String^uaddresstext)
		{
			uid = uidtext;
			upassword = upasswordtext;
			uname = unametext;
			urrn = urrntext;
			uemail = uemailtext;
			uhomenum = uhomenumtext;
			uphonenum = uphonenumtext;
			uaddress = uaddresstext;

			InitializeComponent();
			//
			//TODO: 생성자 코드를 여기에 추가합니다.
			//
		}


	protected:
		/// <summary>
		/// 사용 중인 모든 리소스를 정리합니다.
		/// </summary>
		~MemberUpdate()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  email_txt;
	protected:
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Button^  cancel_btn;
	private: System::Windows::Forms::Button^  ok_btn;
	private: System::Windows::Forms::TextBox^  address_txt;
	private: System::Windows::Forms::TextBox^  phonenum_txt;
	private: System::Windows::Forms::TextBox^  homenum_txt;
	private: System::Windows::Forms::TextBox^  rrn_txt;
	private: System::Windows::Forms::TextBox^  name_txt;
	private: System::Windows::Forms::TextBox^  password_txt;
	private: System::Windows::Forms::TextBox^  id_txt;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::TextBox^  username_txt;
	private: System::Windows::Forms::Button^  usersearch_btn;


	private: System::Windows::Forms::Label^  label9;


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
			this->email_txt = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->cancel_btn = (gcnew System::Windows::Forms::Button());
			this->ok_btn = (gcnew System::Windows::Forms::Button());
			this->address_txt = (gcnew System::Windows::Forms::TextBox());
			this->phonenum_txt = (gcnew System::Windows::Forms::TextBox());
			this->homenum_txt = (gcnew System::Windows::Forms::TextBox());
			this->rrn_txt = (gcnew System::Windows::Forms::TextBox());
			this->name_txt = (gcnew System::Windows::Forms::TextBox());
			this->password_txt = (gcnew System::Windows::Forms::TextBox());
			this->id_txt = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->username_txt = (gcnew System::Windows::Forms::TextBox());
			this->usersearch_btn = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// email_txt
			// 
			this->email_txt->Location = System::Drawing::Point(410, 254);
			this->email_txt->Name = L"email_txt";
			this->email_txt->Size = System::Drawing::Size(119, 21);
			this->email_txt->TabIndex = 35;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(295, 254);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(65, 12);
			this->label8->TabIndex = 34;
			this->label8->Text = L"이메일주소";
			// 
			// cancel_btn
			// 
			this->cancel_btn->Location = System::Drawing::Point(463, 420);
			this->cancel_btn->Name = L"cancel_btn";
			this->cancel_btn->Size = System::Drawing::Size(75, 23);
			this->cancel_btn->TabIndex = 33;
			this->cancel_btn->Text = L"회원삭제";
			this->cancel_btn->UseVisualStyleBackColor = true;
			this->cancel_btn->Click += gcnew System::EventHandler(this, &MemberUpdate::cancel_btn_Click);
			// 
			// ok_btn
			// 
			this->ok_btn->Location = System::Drawing::Point(366, 420);
			this->ok_btn->Name = L"ok_btn";
			this->ok_btn->Size = System::Drawing::Size(75, 23);
			this->ok_btn->TabIndex = 32;
			this->ok_btn->Text = L"회원수정";
			this->ok_btn->UseVisualStyleBackColor = true;
			this->ok_btn->Click += gcnew System::EventHandler(this, &MemberUpdate::ok_btn_Click);
			// 
			// address_txt
			// 
			this->address_txt->Location = System::Drawing::Point(410, 369);
			this->address_txt->Name = L"address_txt";
			this->address_txt->Size = System::Drawing::Size(119, 21);
			this->address_txt->TabIndex = 31;
			// 
			// phonenum_txt
			// 
			this->phonenum_txt->Location = System::Drawing::Point(410, 333);
			this->phonenum_txt->Name = L"phonenum_txt";
			this->phonenum_txt->Size = System::Drawing::Size(119, 21);
			this->phonenum_txt->TabIndex = 30;
			// 
			// homenum_txt
			// 
			this->homenum_txt->Location = System::Drawing::Point(410, 296);
			this->homenum_txt->Name = L"homenum_txt";
			this->homenum_txt->Size = System::Drawing::Size(119, 21);
			this->homenum_txt->TabIndex = 29;
			// 
			// rrn_txt
			// 
			this->rrn_txt->Location = System::Drawing::Point(410, 214);
			this->rrn_txt->Name = L"rrn_txt";
			this->rrn_txt->Size = System::Drawing::Size(119, 21);
			this->rrn_txt->TabIndex = 28;
			// 
			// name_txt
			// 
			this->name_txt->Location = System::Drawing::Point(410, 181);
			this->name_txt->Name = L"name_txt";
			this->name_txt->Size = System::Drawing::Size(119, 21);
			this->name_txt->TabIndex = 27;
			// 
			// password_txt
			// 
			this->password_txt->Location = System::Drawing::Point(410, 113);
			this->password_txt->Name = L"password_txt";
			this->password_txt->Size = System::Drawing::Size(119, 21);
			this->password_txt->TabIndex = 26;
			// 
			// id_txt
			// 
			this->id_txt->Location = System::Drawing::Point(410, 79);
			this->id_txt->Name = L"id_txt";
			this->id_txt->Size = System::Drawing::Size(119, 21);
			this->id_txt->TabIndex = 25;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(295, 113);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(53, 12);
			this->label7->TabIndex = 24;
			this->label7->Text = L"비밀번호";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(295, 79);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(41, 12);
			this->label6->TabIndex = 23;
			this->label6->Text = L"아이디";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(295, 369);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(41, 12);
			this->label5->TabIndex = 22;
			this->label5->Text = L"집주소";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(295, 333);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(65, 12);
			this->label4->TabIndex = 21;
			this->label4->Text = L"핸드폰번호";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(295, 296);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(69, 12);
			this->label3->TabIndex = 20;
			this->label3->Text = L"집 전화번호";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(295, 214);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(77, 12);
			this->label2->TabIndex = 19;
			this->label2->Text = L"주민등록번호";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(295, 181);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(29, 12);
			this->label1->TabIndex = 18;
			this->label1->Text = L"이름";
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 12;
			this->listBox1->Location = System::Drawing::Point(21, 186);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(120, 244);
			this->listBox1->TabIndex = 36;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MemberUpdate::listBox1_SelectedIndexChanged);
			// 
			// username_txt
			// 
			this->username_txt->Location = System::Drawing::Point(21, 110);
			this->username_txt->Name = L"username_txt";
			this->username_txt->Size = System::Drawing::Size(120, 21);
			this->username_txt->TabIndex = 37;
			// 
			// usersearch_btn
			// 
			this->usersearch_btn->Location = System::Drawing::Point(147, 110);
			this->usersearch_btn->Name = L"usersearch_btn";
			this->usersearch_btn->Size = System::Drawing::Size(75, 23);
			this->usersearch_btn->TabIndex = 38;
			this->usersearch_btn->Text = L"검색";
			this->usersearch_btn->UseVisualStyleBackColor = true;
			this->usersearch_btn->Click += gcnew System::EventHandler(this, &MemberUpdate::usersearch_btn_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(21, 79);
			this->label9->Name = L"label9";
			this->label9->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label9->Size = System::Drawing::Size(105, 12);
			this->label9->TabIndex = 39;
			this->label9->Text = L"이름을 입력하세요";
			// 
			// MemberUpdate
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(587, 505);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->usersearch_btn);
			this->Controls->Add(this->username_txt);
			this->Controls->Add(this->listBox1);
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
			this->Name = L"MemberUpdate";
			this->Text = L"MemberUpdate";
			this->Load += gcnew System::EventHandler(this, &MemberUpdate::MemberUpdate_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void ok_btn_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ constring = L"datasource=localhost;port=3306;username=root;password=0000"; //db연결 하기 위한 constring
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("update videoshopmng.tuser set id = '" + this->id_txt->Text + "',password= '"+ this->password_txt->Text +"',name='" + this->username_txt->Text +"' ,rrn= '" + this->rrn_txt->Text +"' ,email= '"+ this->email_txt->Text +"',home_num= '"+this->homenum_txt->Text+"',phone_num='" + this->phonenum_txt->Text + "',address= '"+this->address_txt->Text+"' where name='" + this->name_txt->Text + "' ;", conDataBase);
	MySqlDataReader^ myReader;
	try {
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();
		MessageBox::Show("회원수정 완료");
		while (myReader->Read()) {

		}

	}
	catch (Exception^ex) {
		MessageBox::Show(ex->Message);
	}

}
private: System::Void usersearch_btn_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ constring = L"datasource=localhost;port=3306;username=root;password=0000"; //db연결 하기 위한 constring
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select * from videoshopmng.tuser where name='" + this->username_txt->Text + "';", conDataBase);
	MySqlDataReader^ myReader;
	try {
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();

		while (myReader->Read()) {
			String^ vName;
			vName = myReader->GetString("name");
	

			listBox1->Items->Add(vName);
			//listBox1->Items->Add(vid+","+vName+","+vrrn+","+vphone_num);
		}

	}
	catch (Exception^ex) {
		MessageBox::Show(ex->Message);
	}
}
private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	String^ listname = listBox1->Text; //리스트 박스에서 선택한 데이터를 얻어오기 위한 변수생성
	String^ constring = L"datasource=localhost;port=3306;username=root;password=0000"; //db연결 하기 위한 constring
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select * from videoshopmng.tuser where name= '"+listname+"' ;", conDataBase);
	MySqlDataReader^ myReader;
	try {
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();

		if (myReader->Read()) {
			String^ vid = myReader->GetString("id");
			id_txt->Text = vid;
			String^ vPassword = myReader->GetString("password");
			password_txt->Text = vPassword;
			String^ vName = myReader->GetString("name");
			name_txt->Text = vName;
			String^ vRrn = myReader->GetString("rrn");
			rrn_txt->Text = vRrn;
			String^ vEmail = myReader->GetString("email");
			email_txt->Text = vEmail;
			String^ vHome = myReader->GetString("home_num");
			homenum_txt->Text = vHome;
			String^ vPhone = myReader->GetString("phone_num");
			phonenum_txt->Text = vPhone;
			String^ vAddress = myReader->GetString("address");
			address_txt->Text = vAddress;
			
			
			
		}

	}
	catch (Exception^ex) {
		MessageBox::Show(ex->Message);
	}


}
private: System::Void cancel_btn_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ constring = L"datasource=localhost;port=3306;username=root;password=0000"; //db연결 하기 위한 constring
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("delete from videoshopmng.tuser where name = '" + this->name_txt->Text + "' ;", conDataBase);
	MySqlDataReader^ myReader;
	try {
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();
		MessageBox::Show("삭제완료");
		while (myReader->Read()) {

		}

	}
	catch (Exception^ex) {
		MessageBox::Show(ex->Message);
	}

}

private: System::Void MemberUpdate_Load(System::Object^  sender, System::EventArgs^  e) {
	id_txt->Text = uid;
	password_txt->Text = upassword;
	name_txt->Text = uname;
	rrn_txt->Text = urrn;
	email_txt->Text = uaddress;
	homenum_txt->Text = uhomenum;
	phonenum_txt->Text = uphonenum;
	address_txt->Text = uaddress;
}
};
}
