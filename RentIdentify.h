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
	/// RentIdentify�� ���� ����Դϴ�.
	/// </summary>
	public ref class RentIdentify : public System::Windows::Forms::Form
	{
	public:
		RentIdentify(void)
		{
			InitializeComponent();
			//
			//TODO: ������ �ڵ带 ���⿡ �߰��մϴ�.
			//
		}

	protected:
		/// <summary>
		/// ��� ���� ��� ���ҽ��� �����մϴ�.
		/// </summary>
		~RentIdentify()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:




	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Button^  videosearch_btn;

	private: System::Windows::Forms::TextBox^  searchname_txt;


	private: System::Windows::Forms::Button^  moviedelete_btn;
	private: System::Windows::Forms::Button^  movieupdate_btn;
	private: System::Windows::Forms::TextBox^  videoname_txt;



	private: System::Windows::Forms::Label^  label3;

	private: System::Windows::Forms::DataGridView^  dataGridView2;
	private: System::Windows::Forms::TextBox^  RentState_txt;

	private: System::Windows::Forms::Label^  label1;


	private:
		/// <summary>
		/// �ʼ� �����̳� �����Դϴ�.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// �����̳� ������ �ʿ��� �޼����Դϴ�. 
		/// �� �޼����� ������ �ڵ� ������� �������� ������.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->videosearch_btn = (gcnew System::Windows::Forms::Button());
			this->searchname_txt = (gcnew System::Windows::Forms::TextBox());
			this->moviedelete_btn = (gcnew System::Windows::Forms::Button());
			this->movieupdate_btn = (gcnew System::Windows::Forms::Button());
			this->videoname_txt = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->RentState_txt = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(89, 92);
			this->label9->Name = L"label9";
			this->label9->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label9->Size = System::Drawing::Size(141, 12);
			this->label9->TabIndex = 99;
			this->label9->Text = L"���������� �Է��ϼ���";
			// 
			// videosearch_btn
			// 
			this->videosearch_btn->Location = System::Drawing::Point(400, 92);
			this->videosearch_btn->Name = L"videosearch_btn";
			this->videosearch_btn->Size = System::Drawing::Size(75, 23);
			this->videosearch_btn->TabIndex = 98;
			this->videosearch_btn->Text = L"�˻�";
			this->videosearch_btn->UseVisualStyleBackColor = true;
			this->videosearch_btn->Click += gcnew System::EventHandler(this, &RentIdentify::videosearch_btn_Click_1);
			// 
			// searchname_txt
			// 
			this->searchname_txt->Location = System::Drawing::Point(274, 92);
			this->searchname_txt->Name = L"searchname_txt";
			this->searchname_txt->Size = System::Drawing::Size(120, 21);
			this->searchname_txt->TabIndex = 97;
			// 
			// moviedelete_btn
			// 
			this->moviedelete_btn->Location = System::Drawing::Point(289, 402);
			this->moviedelete_btn->Name = L"moviedelete_btn";
			this->moviedelete_btn->Size = System::Drawing::Size(116, 23);
			this->moviedelete_btn->TabIndex = 93;
			this->moviedelete_btn->Text = L"���";
			this->moviedelete_btn->UseVisualStyleBackColor = true;
			this->moviedelete_btn->Click += gcnew System::EventHandler(this, &RentIdentify::moviedelete_btn_Click);
			// 
			// movieupdate_btn
			// 
			this->movieupdate_btn->Location = System::Drawing::Point(167, 402);
			this->movieupdate_btn->Name = L"movieupdate_btn";
			this->movieupdate_btn->Size = System::Drawing::Size(116, 23);
			this->movieupdate_btn->TabIndex = 92;
			this->movieupdate_btn->Text = L"����";
			this->movieupdate_btn->UseVisualStyleBackColor = true;
			this->movieupdate_btn->Click += gcnew System::EventHandler(this, &RentIdentify::movieupdate_btn_Click);
			// 
			// videoname_txt
			// 
			this->videoname_txt->Location = System::Drawing::Point(278, 301);
			this->videoname_txt->Name = L"videoname_txt";
			this->videoname_txt->Size = System::Drawing::Size(119, 21);
			this->videoname_txt->TabIndex = 91;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(165, 304);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(65, 12);
			this->label3->TabIndex = 88;
			this->label3->Text = L"�����̸�";
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(31, 121);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowTemplate->Height = 23;
			this->dataGridView2->Size = System::Drawing::Size(509, 141);
			this->dataGridView2->TabIndex = 105;
			this->dataGridView2->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &RentIdentify::dataGridView2_CellContentClick);
			// 
			// RentState_txt
			// 
			this->RentState_txt->Location = System::Drawing::Point(278, 342);
			this->RentState_txt->Name = L"RentState_txt";
			this->RentState_txt->Size = System::Drawing::Size(119, 21);
			this->RentState_txt->TabIndex = 107;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(165, 345);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(77, 12);
			this->label1->TabIndex = 106;
			this->label1->Text = L"�뿩���ɿ���";
			// 
			// RentIdentify
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(587, 441);
			this->Controls->Add(this->RentState_txt);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->videosearch_btn);
			this->Controls->Add(this->searchname_txt);
			this->Controls->Add(this->moviedelete_btn);
			this->Controls->Add(this->movieupdate_btn);
			this->Controls->Add(this->videoname_txt);
			this->Controls->Add(this->label3);
			this->Name = L"RentIdentify";
			this->Text = L"RentIdentify";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void videosearch_btn_Click(System::Object^  sender, System::EventArgs^  e) {




	}
private: System::Void dataGridView2_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	if (e->RowIndex >= 0) {

		//���� Datagridview���� as �� ��Ī�� Ī������ �ؿ��� �ҷ����� ���� �÷������� �����ؾ���
		DataGridViewRow^ row = this->dataGridView2->Rows[e->RowIndex];

	
		videoname_txt->Text = row->Cells["��������"]->Value->ToString();
		RentState_txt->Text = row->Cells["�뿩����"]->Value->ToString();


	}


}
private: System::Void videosearch_btn_Click_1(System::Object^  sender, System::EventArgs^  e) {
	String^ constring = L"datasource=localhost;port=3306;username=root;password=0000"; //db���� �ϱ� ���� constring
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select video.video_id as '������ȣ',rental_id as '�뿩��ȣ',movie_name as '��������',rental as '�뿩����' from videoshopmng.video, videoshopmng.movie,videoshopmng.rental where movie.movie_id = video.movie_id and rental.video_id=video.video_id and movie_name like '" "%" + this->searchname_txt->Text + "%" "'; ", conDataBase);
	MySqlDataReader^ myReader;
	try {
		MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
		sda->SelectCommand = cmdDataBase;
		DataTable^ dbdataset = gcnew DataTable();
		sda->Fill(dbdataset);
		BindingSource^ bSource = gcnew BindingSource();

		bSource->DataSource = dbdataset;
		dataGridView2->DataSource = bSource;
		sda->Update(dbdataset);
	}
	catch (Exception^ex) {
		MessageBox::Show(ex->Message);
	}
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ constring = L"datasource=localhost;port=3306;username=root;password=0000"; //db���� �ϱ� ���� constring
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select video_id as '������ȣ', movie_name as '��������' from videoshopmng.movie,videoshopmng.video where video.video_id=movie.movie_id and movie_name like '" "%"  "%" "'; ", conDataBase);
	MySqlDataReader^ myReader;
	try {
		MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
		sda->SelectCommand = cmdDataBase;
		DataTable^ dbdataset = gcnew DataTable();
		sda->Fill(dbdataset);
		BindingSource^ bSource = gcnew BindingSource();

		bSource->DataSource = dbdataset;
		
		sda->Update(dbdataset);
	}
	catch (Exception^ex) {
		MessageBox::Show(ex->Message);
	}

}



private: System::Void movieinsert_btn_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ constring = L"datasource=localhost;port=3306;username=root;password=0000"; //db���� �ϱ� ���� constring
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("insert into videoshopmng.rental(rental_id,video_id,rental) values('" "','"  "','" + this->RentState_txt->Text + "') ;", conDataBase); //movie_id �ڵ������� ���� value���� ��������
	MySqlDataReader^ myReader;
	try {
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();
		MessageBox::Show("�뿩��ȣ ��� �Ϸ�");


		while (myReader->Read()) {

		}


	}
	catch (Exception^ex) {
		MessageBox::Show(ex->Message);
	}

}
private: System::Void movieupdate_btn_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ constring = L"datasource=localhost;port=3306;username=root;password=0000"; //db���� �ϱ� ���� constring
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("update videoshopmng.rental set video_id = '"  "',rental_id= '"  "',rental='" + this->RentState_txt->Text + "' where video_id='"  "' ;", conDataBase);
	MySqlDataReader^ myReader;
	try {
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();
		MessageBox::Show("�뿩��� ���� �Ϸ�");
		while (myReader->Read()) {

		}

	}
	catch (Exception^ex) {
		MessageBox::Show(ex->Message);
	}


}
private: System::Void moviedelete_btn_Click(System::Object^  sender, System::EventArgs^  e) {

	this->Hide();

}

};
}
