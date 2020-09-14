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
	/// RentalForm에 대한 요약입니다.
	/// </summary>
	public ref class RentalForm : public System::Windows::Forms::Form
	{
	public:
		RentalForm(void)
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
		~RentalForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Button^  rental_btn;
	private: System::Windows::Forms::Button^  return_btn;
	private: System::Windows::Forms::Button^  videosearch_btn;
	private: System::Windows::Forms::TextBox^  video_txt;

	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::Windows::Forms::DateTimePicker^  returnDatetime;

	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Button^  usersearch_btn;
	private: System::Windows::Forms::TextBox^  username_txt;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::Label^  user_lbl;
	private: System::Windows::Forms::Label^  label1;

	private: System::Windows::Forms::Label^  video_lbl;
	private: System::Windows::Forms::Label^  label2;








	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;

	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  rrn_lbl;
	private: System::Windows::Forms::Label^  name_lbl;
	private: System::Windows::Forms::Label^  id_lbl;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::Label^  videoid_lbl;
	private: System::Windows::Forms::Button^  Refresh_btn;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  rentalstate_lbl;
	private: System::Windows::Forms::TextBox^  fee_txt;
	private: System::Windows::Forms::Label^  label5;



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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(RentalForm::typeid));
			this->rental_btn = (gcnew System::Windows::Forms::Button());
			this->return_btn = (gcnew System::Windows::Forms::Button());
			this->videosearch_btn = (gcnew System::Windows::Forms::Button());
			this->video_txt = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->returnDatetime = (gcnew System::Windows::Forms::DateTimePicker());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->usersearch_btn = (gcnew System::Windows::Forms::Button());
			this->username_txt = (gcnew System::Windows::Forms::TextBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->user_lbl = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->video_lbl = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->rrn_lbl = (gcnew System::Windows::Forms::Label());
			this->name_lbl = (gcnew System::Windows::Forms::Label());
			this->id_lbl = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->videoid_lbl = (gcnew System::Windows::Forms::Label());
			this->Refresh_btn = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->rentalstate_lbl = (gcnew System::Windows::Forms::Label());
			this->fee_txt = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// rental_btn
			// 
			this->rental_btn->Location = System::Drawing::Point(1038, 134);
			this->rental_btn->Name = L"rental_btn";
			this->rental_btn->Size = System::Drawing::Size(87, 23);
			this->rental_btn->TabIndex = 1;
			this->rental_btn->Text = L"대여";
			this->rental_btn->UseVisualStyleBackColor = true;
			this->rental_btn->Click += gcnew System::EventHandler(this, &RentalForm::rental_btn_Click);
			// 
			// return_btn
			// 
			this->return_btn->Location = System::Drawing::Point(1038, 184);
			this->return_btn->Name = L"return_btn";
			this->return_btn->Size = System::Drawing::Size(87, 23);
			this->return_btn->TabIndex = 2;
			this->return_btn->Text = L"반납";
			this->return_btn->UseVisualStyleBackColor = true;
			this->return_btn->Click += gcnew System::EventHandler(this, &RentalForm::return_btn_Click);
			// 
			// videosearch_btn
			// 
			this->videosearch_btn->Location = System::Drawing::Point(1038, 74);
			this->videosearch_btn->Name = L"videosearch_btn";
			this->videosearch_btn->Size = System::Drawing::Size(87, 23);
			this->videosearch_btn->TabIndex = 3;
			this->videosearch_btn->Text = L"검색";
			this->videosearch_btn->UseVisualStyleBackColor = true;
			this->videosearch_btn->Click += gcnew System::EventHandler(this, &RentalForm::videosearch_btn_Click);
			// 
			// video_txt
			// 
			this->video_txt->Location = System::Drawing::Point(878, 74);
			this->video_txt->Name = L"video_txt";
			this->video_txt->Size = System::Drawing::Size(139, 21);
			this->video_txt->TabIndex = 4;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CustomFormat = L"yyyy/MM/dd";
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker1->Location = System::Drawing::Point(913, 136);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(104, 21);
			this->dateTimePicker1->TabIndex = 5;
			this->dateTimePicker1->Value = System::DateTime(2020, 6, 10, 0, 0, 0, 0);
			// 
			// returnDatetime
			// 
			this->returnDatetime->CustomFormat = L"yyyy/MM/dd";
			this->returnDatetime->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->returnDatetime->Location = System::Drawing::Point(913, 186);
			this->returnDatetime->Name = L"returnDatetime";
			this->returnDatetime->Size = System::Drawing::Size(104, 21);
			this->returnDatetime->TabIndex = 6;
			this->returnDatetime->Value = System::DateTime(2020, 5, 23, 0, 0, 0, 0);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(81, 74);
			this->label9->Name = L"label9";
			this->label9->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label9->Size = System::Drawing::Size(105, 12);
			this->label9->TabIndex = 43;
			this->label9->Text = L"이름을 입력하세요";
			// 
			// usersearch_btn
			// 
			this->usersearch_btn->Location = System::Drawing::Point(238, 105);
			this->usersearch_btn->Name = L"usersearch_btn";
			this->usersearch_btn->Size = System::Drawing::Size(75, 23);
			this->usersearch_btn->TabIndex = 42;
			this->usersearch_btn->Text = L"검색";
			this->usersearch_btn->UseVisualStyleBackColor = true;
			this->usersearch_btn->Click += gcnew System::EventHandler(this, &RentalForm::usersearch_btn_Click);
			// 
			// username_txt
			// 
			this->username_txt->Location = System::Drawing::Point(83, 107);
			this->username_txt->Name = L"username_txt";
			this->username_txt->Size = System::Drawing::Size(120, 21);
			this->username_txt->TabIndex = 41;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 12;
			this->listBox1->Location = System::Drawing::Point(83, 188);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(120, 244);
			this->listBox1->TabIndex = 40;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &RentalForm::listBox1_SelectedIndexChanged);
			// 
			// user_lbl
			// 
			this->user_lbl->AutoSize = true;
			this->user_lbl->Location = System::Drawing::Point(757, 29);
			this->user_lbl->Name = L"user_lbl";
			this->user_lbl->Size = System::Drawing::Size(53, 12);
			this->user_lbl->TabIndex = 44;
			this->user_lbl->Text = L"고객성함";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(993, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(173, 12);
			this->label1->TabIndex = 45;
			this->label1->Text = L"비디오를 대여하실려고 합니다.";
			// 
			// video_lbl
			// 
			this->video_lbl->AutoSize = true;
			this->video_lbl->Location = System::Drawing::Point(923, 29);
			this->video_lbl->Name = L"video_lbl";
			this->video_lbl->Size = System::Drawing::Size(41, 12);
			this->video_lbl->TabIndex = 47;
			this->video_lbl->Text = L"비디오";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(831, 29);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(29, 12);
			this->label2->TabIndex = 48;
			this->label2->Text = L"님이";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(10, 99);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(77, 12);
			this->label6->TabIndex = 56;
			this->label6->Text = L"주민등록번호";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(10, 66);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(29, 12);
			this->label7->TabIndex = 55;
			this->label7->Text = L"이름";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(10, 31);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(53, 12);
			this->label8->TabIndex = 59;
			this->label8->Text = L"고객번호";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->rrn_lbl);
			this->groupBox1->Controls->Add(this->name_lbl);
			this->groupBox1->Controls->Add(this->id_lbl);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Location = System::Drawing::Point(213, 186);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(264, 153);
			this->groupBox1->TabIndex = 61;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"고객정보";
			// 
			// rrn_lbl
			// 
			this->rrn_lbl->AutoSize = true;
			this->rrn_lbl->Location = System::Drawing::Point(139, 99);
			this->rrn_lbl->Name = L"rrn_lbl";
			this->rrn_lbl->Size = System::Drawing::Size(77, 12);
			this->rrn_lbl->TabIndex = 62;
			this->rrn_lbl->Text = L"주민등록번호";
			// 
			// name_lbl
			// 
			this->name_lbl->AutoSize = true;
			this->name_lbl->Location = System::Drawing::Point(139, 69);
			this->name_lbl->Name = L"name_lbl";
			this->name_lbl->Size = System::Drawing::Size(29, 12);
			this->name_lbl->TabIndex = 61;
			this->name_lbl->Text = L"이름";
			// 
			// id_lbl
			// 
			this->id_lbl->AutoSize = true;
			this->id_lbl->Location = System::Drawing::Point(139, 31);
			this->id_lbl->Name = L"id_lbl";
			this->id_lbl->Size = System::Drawing::Size(53, 12);
			this->id_lbl->TabIndex = 60;
			this->id_lbl->Text = L"고객번호";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(676, 285);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->Height = 23;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView1->Size = System::Drawing::Size(466, 264);
			this->dataGridView1->TabIndex = 62;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &RentalForm::dataGridView1_CellContentClick);
			// 
			// videoid_lbl
			// 
			this->videoid_lbl->AutoSize = true;
			this->videoid_lbl->Location = System::Drawing::Point(876, 29);
			this->videoid_lbl->Name = L"videoid_lbl";
			this->videoid_lbl->Size = System::Drawing::Size(15, 12);
			this->videoid_lbl->TabIndex = 63;
			this->videoid_lbl->Text = L"id";
			// 
			// Refresh_btn
			// 
			this->Refresh_btn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Refresh_btn.Image")));
			this->Refresh_btn->Location = System::Drawing::Point(1092, 239);
			this->Refresh_btn->Name = L"Refresh_btn";
			this->Refresh_btn->Size = System::Drawing::Size(33, 38);
			this->Refresh_btn->TabIndex = 64;
			this->Refresh_btn->UseVisualStyleBackColor = true;
			this->Refresh_btn->Click += gcnew System::EventHandler(this, &RentalForm::Refresh_btn_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(737, 252);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(109, 12);
			this->label3->TabIndex = 65;
			this->label3->Text = L"선택하신 비디오는 ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(972, 252);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(45, 12);
			this->label4->TabIndex = 66;
			this->label4->Text = L"입니다.";
			// 
			// rentalstate_lbl
			// 
			this->rentalstate_lbl->AutoSize = true;
			this->rentalstate_lbl->Location = System::Drawing::Point(876, 252);
			this->rentalstate_lbl->Name = L"rentalstate_lbl";
			this->rentalstate_lbl->Size = System::Drawing::Size(0, 12);
			this->rentalstate_lbl->TabIndex = 67;
			// 
			// fee_txt
			// 
			this->fee_txt->Location = System::Drawing::Point(777, 185);
			this->fee_txt->Name = L"fee_txt";
			this->fee_txt->Size = System::Drawing::Size(114, 21);
			this->fee_txt->TabIndex = 68;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(684, 189);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(69, 12);
			this->label5->TabIndex = 69;
			this->label5->Text = L"연체료 입력";
			// 
			// RentalForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1244, 617);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->fee_txt);
			this->Controls->Add(this->rentalstate_lbl);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->Refresh_btn);
			this->Controls->Add(this->videoid_lbl);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->video_lbl);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->user_lbl);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->usersearch_btn);
			this->Controls->Add(this->username_txt);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->returnDatetime);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->video_txt);
			this->Controls->Add(this->videosearch_btn);
			this->Controls->Add(this->return_btn);
			this->Controls->Add(this->rental_btn);
			this->Controls->Add(this->groupBox1);
			this->Name = L"RentalForm";
			this->Text = L"RentalForm";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
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
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select vid,name,rrn from videoshopmng.tuser where name= '" + listname + "' ;", conDataBase);
	MySqlDataReader^ myReader;
	try {
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();

		if (myReader->Read()) {
			String^ vName = myReader->GetString("name");
			user_lbl->Text = vName;
			name_lbl->Text = vName;
			
			String^ userSid = myReader->GetInt32("vid").ToString();
			id_lbl->Text = userSid;

			String^ userrrn = myReader->GetString("rrn");
			rrn_lbl->Text = userrrn;
			

		}

	}
	catch (Exception^ex) {
		MessageBox::Show(ex->Message);
	}

}
private: System::Void videosearch_btn_Click(System::Object^  sender, System::EventArgs^  e) {

	String^ constring = L"datasource=localhost;port=3306;username=root;password=0000"; //db연결 하기 위한 constring
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select rental.video_id as '비디오번호', movie_name as'비디오제목', rental as '대여여부', damage as '파손상태' from videoshopmng.movie, videoshopmng.video, videoshopmng.rental where movie_name like '" "%" + this->video_txt->Text + "%" "'and movie.movie_id=video.video_id and rental.video_id = video.video_id;", conDataBase);
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
private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	if (e->RowIndex >= 0) {

			//위의 Datagridview에서 as 로 별칭을 칭했을시 밑에서 불러오는 셀의 컬럼제목을 설정해야함
			DataGridViewRow^ row = this->dataGridView1->Rows[e->RowIndex];

			video_lbl->Text = row->Cells["비디오제목"]->Value->ToString();
			videoid_lbl->Text = row->Cells["비디오번호"]->Value->ToString();
			rentalstate_lbl->Text = row->Cells["대여여부"]->Value->ToString();
			

		}



}



private: System::Void rental_btn_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ lbluserid = id_lbl->Text;
	String^ listvideoid = videoid_lbl->Text; //리스트 박스에서 선택한 데이터를 얻어오기 위한 변수생성
	String^ constring = L"datasource=localhost;port=3306;username=root;password=0000"; //db연결 하기 위한 constring
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("update videoshopmng.rental set rental = '대여중', vid='"+lbluserid+"' ,rental_date= '"+this->dateTimePicker1->Text+"',rental_price = 2000, fee = 0 where video_id = '" + listvideoid + "' ;", conDataBase);
	MySqlDataReader^ myReader;
	try {

		if(rentalstate_lbl->Text == "대여중"){
			MessageBox::Show("이미 대여중입니다.");
		
		}
		else {
			conDataBase->Open();
			myReader = cmdDataBase->ExecuteReader();
			MessageBox::Show("대여가 완료 되었습니다.");
			while (myReader->Read()) {




			}
		}

	}
	catch (Exception^ex) {
		MessageBox::Show(ex->Message);
	}

}



private: System::Void return_btn_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ lbluserid = id_lbl->Text;
	String^ listvideoid = videoid_lbl->Text; //리스트 박스에서 선택한 데이터를 얻어오기 위한 변수생성
	String^ constring = L"datasource=localhost;port=3306;username=root;password=0000"; //db연결 하기 위한 constring
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("update videoshopmng.rental set rental = '대여가능', vid = '" + lbluserid + "'  ,return_date= '" + this->returnDatetime->Text + "',rental_price = 0, fee = '"+this->fee_txt->Text +"' where video_id = '" + listvideoid + "' ;", conDataBase);
	MySqlDataReader^ myReader;
	try {


		if (rentalstate_lbl->Text == "대여가능") {

			MessageBox::Show("이미 반납된 비디오입니다.");

		}
		
		else {
			conDataBase->Open();
			myReader = cmdDataBase->ExecuteReader();
			MessageBox::Show("반납이 완료 되었습니다.");
			while (myReader->Read()) {




			}
		}
	}
	catch (Exception^ex) {
		MessageBox::Show(ex->Message);
	}

}
private: System::Void Refresh_btn_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ constring = L"datasource=localhost;port=3306;username=root;password=0000"; //db연결 하기 위한 constring
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select rental.video_id as '비디오번호', movie_name as'비디오제목', rental as '대여여부', damage as '파손상태' from videoshopmng.movie, videoshopmng.video, videoshopmng.rental where movie_name like '" "%" + this->video_txt->Text + "%" "'and movie.movie_id=video.video_id and rental.video_id = video.video_id;", conDataBase);
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


};
}
