#pragma once
#include "MemberUpdate.h";

namespace VideoShopManagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Member에 대한 요약입니다.
	/// </summary>
	public ref class Member : public System::Windows::Forms::Form
	{

	
	public:
		Member(void)
		{
			
			InitializeComponent();
			//
			//TODO: 생성자 코드를 여기에 추가합니다.
			//
		}

	protected:
		/// <summary>
		/// 사용 중인 모든 리소스를 정리합니다.
		/// </summary>
		~Member()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::Button^  memberload_btn;
	private: System::Windows::Forms::Button^  updateuser_btn;
	private: System::Windows::Forms::TextBox^  username_txt;
	private: System::Windows::Forms::Button^  MemberSelect_btn;
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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->memberload_btn = (gcnew System::Windows::Forms::Button());
			this->updateuser_btn = (gcnew System::Windows::Forms::Button());
			this->username_txt = (gcnew System::Windows::Forms::TextBox());
			this->MemberSelect_btn = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(35, 174);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->Height = 23;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView1->Size = System::Drawing::Size(868, 273);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellDoubleClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Member::dataGridView1_CellDoubleClick);
			// 
			// memberload_btn
			// 
			this->memberload_btn->Location = System::Drawing::Point(794, 124);
			this->memberload_btn->Name = L"memberload_btn";
			this->memberload_btn->Size = System::Drawing::Size(109, 37);
			this->memberload_btn->TabIndex = 1;
			this->memberload_btn->Text = L"회원정보불러오기";
			this->memberload_btn->UseVisualStyleBackColor = true;
			this->memberload_btn->Click += gcnew System::EventHandler(this, &Member::memberload_btn_Click);
			// 
			// updateuser_btn
			// 
			this->updateuser_btn->Location = System::Drawing::Point(814, 12);
			this->updateuser_btn->Name = L"updateuser_btn";
			this->updateuser_btn->Size = System::Drawing::Size(89, 39);
			this->updateuser_btn->TabIndex = 2;
			this->updateuser_btn->Text = L"회원정보수정";
			this->updateuser_btn->UseVisualStyleBackColor = true;
			this->updateuser_btn->Click += gcnew System::EventHandler(this, &Member::updateuser_btn_Click);
			// 
			// username_txt
			// 
			this->username_txt->Location = System::Drawing::Point(35, 132);
			this->username_txt->Name = L"username_txt";
			this->username_txt->Size = System::Drawing::Size(196, 21);
			this->username_txt->TabIndex = 3;
			// 
			// MemberSelect_btn
			// 
			this->MemberSelect_btn->Location = System::Drawing::Point(259, 132);
			this->MemberSelect_btn->Name = L"MemberSelect_btn";
			this->MemberSelect_btn->Size = System::Drawing::Size(129, 21);
			this->MemberSelect_btn->TabIndex = 4;
			this->MemberSelect_btn->Text = L"회원정보검색";
			this->MemberSelect_btn->UseVisualStyleBackColor = true;
			this->MemberSelect_btn->Click += gcnew System::EventHandler(this, &Member::MemberSelect_btn_Click);
			// 
			// Member
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(936, 498);
			this->Controls->Add(this->MemberSelect_btn);
			this->Controls->Add(this->username_txt);
			this->Controls->Add(this->updateuser_btn);
			this->Controls->Add(this->memberload_btn);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"Member";
			this->Text = L"Member";
			this->Load += gcnew System::EventHandler(this, &Member::Member_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void memberload_btn_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ constring = L"datasource=localhost;port=3306;username=root;password=0000"; //db연결 하기 위한 constring
		MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand(" select * from videoshopmng.tuser;", conDataBase);
		MySqlDataReader^ myReader;
		try {
			MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
			sda->SelectCommand = cmdDataBase;
			DataTable^ dbdataset = gcnew DataTable();
			sda->Fill(dbdataset);
			BindingSource^ bSource = gcnew BindingSource();

			bSource->DataSource = dbdataset;
			dataGridView1->DataSource = bSource;
			sda->Update(dbdataset);

		}


		catch (Exception^ex) {
			MessageBox::Show(ex->Message);
		}



	}

private: System::Void updateuser_btn_Click(System::Object^  sender, System::EventArgs^  e) {
	MemberUpdate^ muf = gcnew MemberUpdate();
	muf->ShowDialog();




}
private: System::Void MemberSelect_btn_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ constring = L"datasource=localhost;port=3306;username=root;password=0000"; //db연결 하기 위한 constring
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select * from videoshopmng.tuser where name like '" "%" + this->username_txt->Text  + "%" "';" , conDataBase);
	MySqlDataReader^ myReader;

	try {
		MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
		sda->SelectCommand = cmdDataBase;
		DataTable^ dbdataset = gcnew DataTable();
		sda->Fill(dbdataset);
		BindingSource^ bSource = gcnew BindingSource();

		bSource->DataSource = dbdataset;
		dataGridView1->DataSource = bSource;
		sda->Update(dbdataset);

	}


	catch (Exception^ex) {
		MessageBox::Show(ex->Message);
	}

}
private: System::Void dataGridView1_CellDoubleClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	if (e->RowIndex >= 0) {
		

		DataGridViewRow^ row = this->dataGridView1->Rows[e->RowIndex];

		String^ uid = row->Cells["id"]->Value->ToString();
		String^ upassword = row->Cells["password"]->Value->ToString();
		String^ uname = row->Cells["name"]->Value->ToString();
		String^ urrn = row->Cells["rrn"]->Value->ToString();
		String^ uemail = row->Cells["email"]->Value->ToString();
		String^ uhomenum = row->Cells["home_num"]->Value->ToString();
		String^ uphonenum = row->Cells["phone_num"]->Value->ToString();
		String^ uaddress = row->Cells["address"]->Value->ToString();



		MemberUpdate^ muf = gcnew MemberUpdate(uid = uid, upassword = upassword, uname = uname, urrn = urrn, uemail = uemail, uhomenum = uhomenum, uphonenum = uphonenum, uaddress = uaddress);
		muf->ShowDialog();

	}
	
	

}


private: System::Void Member_Load(System::Object^  sender, System::EventArgs^  e) {
}
};
}
