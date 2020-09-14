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
	/// VideoUpdate에 대한 요약입니다.
	/// </summary>
	public ref class VideoUpdate : public System::Windows::Forms::Form
	{
	public:
		VideoUpdate(void)
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
		~VideoUpdate()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Button^  moviesearch_btn;
	private: System::Windows::Forms::TextBox^  searchname_txt;
	private: System::Windows::Forms::ListBox^  listBox1;


	private: System::Windows::Forms::Button^  moviedelete_btn;
	private: System::Windows::Forms::Button^  movieupdate_btn;




	private: System::Windows::Forms::TextBox^  moviename_txt;




	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  movieid_txt;
	private: System::Windows::Forms::TextBox^  damage_txt;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  videoid_txt;





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
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->moviesearch_btn = (gcnew System::Windows::Forms::Button());
			this->searchname_txt = (gcnew System::Windows::Forms::TextBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->moviedelete_btn = (gcnew System::Windows::Forms::Button());
			this->movieupdate_btn = (gcnew System::Windows::Forms::Button());
			this->moviename_txt = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->movieid_txt = (gcnew System::Windows::Forms::TextBox());
			this->damage_txt = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->videoid_txt = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(22, 16);
			this->label9->Name = L"label9";
			this->label9->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label9->Size = System::Drawing::Size(141, 12);
			this->label9->TabIndex = 80;
			this->label9->Text = L"비디오제목을 입력하세요";
			this->label9->Click += gcnew System::EventHandler(this, &VideoUpdate::label9_Click);
			// 
			// moviesearch_btn
			// 
			this->moviesearch_btn->Location = System::Drawing::Point(148, 47);
			this->moviesearch_btn->Name = L"moviesearch_btn";
			this->moviesearch_btn->Size = System::Drawing::Size(75, 23);
			this->moviesearch_btn->TabIndex = 79;
			this->moviesearch_btn->Text = L"검색";
			this->moviesearch_btn->UseVisualStyleBackColor = true;
			this->moviesearch_btn->Click += gcnew System::EventHandler(this, &VideoUpdate::moviesearch_btn_Click);
			// 
			// searchname_txt
			// 
			this->searchname_txt->Location = System::Drawing::Point(22, 47);
			this->searchname_txt->Name = L"searchname_txt";
			this->searchname_txt->Size = System::Drawing::Size(120, 21);
			this->searchname_txt->TabIndex = 78;
			this->searchname_txt->TextChanged += gcnew System::EventHandler(this, &VideoUpdate::searchname_txt_TextChanged);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 12;
			this->listBox1->Location = System::Drawing::Point(22, 91);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(120, 244);
			this->listBox1->TabIndex = 77;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &VideoUpdate::listBox1_SelectedIndexChanged);
			// 
			// moviedelete_btn
			// 
			this->moviedelete_btn->Location = System::Drawing::Point(371, 246);
			this->moviedelete_btn->Name = L"moviedelete_btn";
			this->moviedelete_btn->Size = System::Drawing::Size(75, 23);
			this->moviedelete_btn->TabIndex = 74;
			this->moviedelete_btn->Text = L"비디오삭제";
			this->moviedelete_btn->UseVisualStyleBackColor = true;
			this->moviedelete_btn->Click += gcnew System::EventHandler(this, &VideoUpdate::moviedelete_btn_Click);
			// 
			// movieupdate_btn
			// 
			this->movieupdate_btn->Location = System::Drawing::Point(274, 246);
			this->movieupdate_btn->Name = L"movieupdate_btn";
			this->movieupdate_btn->Size = System::Drawing::Size(75, 23);
			this->movieupdate_btn->TabIndex = 73;
			this->movieupdate_btn->Text = L"비디오수정";
			this->movieupdate_btn->UseVisualStyleBackColor = true;
			this->movieupdate_btn->Click += gcnew System::EventHandler(this, &VideoUpdate::movieupdate_btn_Click);
			// 
			// moviename_txt
			// 
			this->moviename_txt->Location = System::Drawing::Point(387, 197);
			this->moviename_txt->Name = L"moviename_txt";
			this->moviename_txt->Size = System::Drawing::Size(119, 21);
			this->moviename_txt->TabIndex = 68;
			this->moviename_txt->TextChanged += gcnew System::EventHandler(this, &VideoUpdate::moviename_txt_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(274, 200);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(53, 12);
			this->label1->TabIndex = 63;
			this->label1->Text = L"영화제목";
			this->label1->Click += gcnew System::EventHandler(this, &VideoUpdate::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(274, 131);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(89, 12);
			this->label2->TabIndex = 64;
			this->label2->Text = L"영화아이디번호";
			this->label2->Click += gcnew System::EventHandler(this, &VideoUpdate::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(274, 165);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(53, 12);
			this->label3->TabIndex = 65;
			this->label3->Text = L"파손여부";
			this->label3->Click += gcnew System::EventHandler(this, &VideoUpdate::label3_Click);
			// 
			// movieid_txt
			// 
			this->movieid_txt->Location = System::Drawing::Point(387, 128);
			this->movieid_txt->Name = L"movieid_txt";
			this->movieid_txt->Size = System::Drawing::Size(119, 21);
			this->movieid_txt->TabIndex = 69;
			this->movieid_txt->TextChanged += gcnew System::EventHandler(this, &VideoUpdate::movieid_txt_TextChanged);
			// 
			// damage_txt
			// 
			this->damage_txt->Location = System::Drawing::Point(387, 162);
			this->damage_txt->Name = L"damage_txt";
			this->damage_txt->Size = System::Drawing::Size(119, 21);
			this->damage_txt->TabIndex = 70;
			this->damage_txt->TextChanged += gcnew System::EventHandler(this, &VideoUpdate::damage_txt_TextChanged);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(274, 94);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(101, 12);
			this->label8->TabIndex = 75;
			this->label8->Text = L"비디오아이디번호";
			this->label8->Click += gcnew System::EventHandler(this, &VideoUpdate::label8_Click);
			// 
			// videoid_txt
			// 
			this->videoid_txt->Location = System::Drawing::Point(387, 91);
			this->videoid_txt->Name = L"videoid_txt";
			this->videoid_txt->Size = System::Drawing::Size(119, 21);
			this->videoid_txt->TabIndex = 76;
			this->videoid_txt->TextChanged += gcnew System::EventHandler(this, &VideoUpdate::videoid_txt_TextChanged);
			// 
			// VideoUpdate
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Snow;
			this->ClientSize = System::Drawing::Size(583, 364);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->moviesearch_btn);
			this->Controls->Add(this->searchname_txt);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->videoid_txt);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->moviedelete_btn);
			this->Controls->Add(this->movieupdate_btn);
			this->Controls->Add(this->damage_txt);
			this->Controls->Add(this->movieid_txt);
			this->Controls->Add(this->moviename_txt);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"VideoUpdate";
			this->Text = L"VideoUpdate";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void movieinsert_btn_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ constring = L"datasource=localhost;port=3306;username=root;password=0000"; //db연결 하기 위한 constring
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("insert into videoshopmng.video values('" + this->videoid_txt->Text + "','" + this->movieid_txt->Text + "','" + this->damage_txt->Text + "') ;", conDataBase); //movie_id 자동생성을 위해 value값을 따로지정
	MySqlDataReader^ myReader;
	try {
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();
		MessageBox::Show("비디오 등록 완료");


		while (myReader->Read()) {

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
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select video_id, movie.movie_id, movie_name, damage from videoshopmng.movie, videoshopmng.video where movie_name = '" + listname + "' and movie.movie_id=video.movie_id ;", conDataBase);
	MySqlDataReader^ myReader;
	try {
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();

		if (myReader->Read()) {
			
			String^ sVideo = myReader->GetInt32("video_id").ToString();
			videoid_txt->Text = sVideo;
			String^ sMovie = myReader->GetString("movie_name");
			moviename_txt->Text = sMovie;
			String^ sMovieid = myReader->GetInt32("movie_id").ToString();
			movieid_txt->Text = sMovieid;
			String^ sDamage = myReader->GetString("damage");
			damage_txt->Text = sDamage;
	



		}

	}
	catch (Exception^ex) {
		MessageBox::Show(ex->Message);
	}


}


private: System::Void moviesearch_btn_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ constring = L"datasource=localhost;port=3306;username=root;password=0000"; //db연결 하기 위한 constring
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select * from videoshopmng.movie where movie_name='" + this->searchname_txt->Text + "';", conDataBase);
	MySqlDataReader^ myReader;
	try {
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();

		while (myReader->Read()) {
			String^ sMovie;
			sMovie = myReader->GetString("movie_name");


			listBox1->Items->Add(sMovie);

		}

	}
	catch (Exception^ex) {
		MessageBox::Show(ex->Message);
	}

}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	

	}

private: System::Void movieupdate_btn_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ constring = L"datasource=localhost;port=3306;username=root;password=0000"; //db연결 하기 위한 constring
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("update videoshopmng.video set video_id = '" + this->videoid_txt->Text + "',movie_id= '" + this->movieid_txt->Text + "',damage='" + this->damage_txt->Text + "' where video_id='" + this->videoid_txt->Text + "' ;", conDataBase);
	MySqlDataReader^ myReader;
	try {
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();
		MessageBox::Show("비디오 수정 완료");
		while (myReader->Read()) {

		}

	}
	catch (Exception^ex) {
		MessageBox::Show(ex->Message);
	}

}
private: System::Void moviedelete_btn_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ constring = L"datasource=localhost;port=3306;username=root;password=0000"; //db연결 하기 위한 constring
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("delete from videoshopmng.video where video_id = '" + this->videoid_txt->Text + "' ;", conDataBase);
	MySqlDataReader^ myReader;
	try {
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();
		MessageBox::Show("비디오 삭제 완료");
		while (myReader->Read()) {

		}

	}
	catch (Exception^ex) {
		MessageBox::Show(ex->Message);
	}
}


private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
}
private: System::Void label9_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void searchname_txt_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void videoid_txt_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label8_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void damage_txt_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void movieid_txt_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void moviename_txt_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
