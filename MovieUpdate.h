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
	/// MovieUpdate에 대한 요약입니다.
	/// </summary>
	public ref class MovieUpdate : public System::Windows::Forms::Form
	{
	public:
		MovieUpdate(void)
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
		~MovieUpdate()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Button^  moviesearch_btn;
	private: System::Windows::Forms::TextBox^  searchname_txt;
	protected:



	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::TextBox^  grade_txt;

	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Button^  moviedelete_btn;

	private: System::Windows::Forms::Button^  movieupdate_btn;

	private: System::Windows::Forms::TextBox^  actor_txt;
	private: System::Windows::Forms::TextBox^  director_txt;
	private: System::Windows::Forms::TextBox^  genre_txt;
	private: System::Windows::Forms::TextBox^  moviename_txt;






	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  movieinsert_btn;

	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;

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
			this->grade_txt = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->moviedelete_btn = (gcnew System::Windows::Forms::Button());
			this->movieupdate_btn = (gcnew System::Windows::Forms::Button());
			this->actor_txt = (gcnew System::Windows::Forms::TextBox());
			this->director_txt = (gcnew System::Windows::Forms::TextBox());
			this->genre_txt = (gcnew System::Windows::Forms::TextBox());
			this->moviename_txt = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->movieinsert_btn = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->SuspendLayout();
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(366, 21);
			this->label9->Name = L"label9";
			this->label9->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label9->Size = System::Drawing::Size(129, 12);
			this->label9->TabIndex = 61;
			this->label9->Text = L"영화제목을 입력하세요";
			// 
			// moviesearch_btn
			// 
			this->moviesearch_btn->Location = System::Drawing::Point(492, 52);
			this->moviesearch_btn->Name = L"moviesearch_btn";
			this->moviesearch_btn->Size = System::Drawing::Size(75, 23);
			this->moviesearch_btn->TabIndex = 60;
			this->moviesearch_btn->Text = L"검색";
			this->moviesearch_btn->UseVisualStyleBackColor = true;
			this->moviesearch_btn->Click += gcnew System::EventHandler(this, &MovieUpdate::moviesearch_btn_Click);
			// 
			// searchname_txt
			// 
			this->searchname_txt->Location = System::Drawing::Point(366, 52);
			this->searchname_txt->Name = L"searchname_txt";
			this->searchname_txt->Size = System::Drawing::Size(120, 21);
			this->searchname_txt->TabIndex = 59;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 12;
			this->listBox1->Location = System::Drawing::Point(366, 96);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(120, 244);
			this->listBox1->TabIndex = 58;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MovieUpdate::listBox1_SelectedIndexChanged);
			// 
			// grade_txt
			// 
			this->grade_txt->Location = System::Drawing::Point(157, 142);
			this->grade_txt->Name = L"grade_txt";
			this->grade_txt->Size = System::Drawing::Size(119, 21);
			this->grade_txt->TabIndex = 57;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(42, 145);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(53, 12);
			this->label8->TabIndex = 56;
			this->label8->Text = L"등급번호";
			// 
			// moviedelete_btn
			// 
			this->moviedelete_btn->Location = System::Drawing::Point(227, 315);
			this->moviedelete_btn->Name = L"moviedelete_btn";
			this->moviedelete_btn->Size = System::Drawing::Size(75, 23);
			this->moviedelete_btn->TabIndex = 55;
			this->moviedelete_btn->Text = L"영화삭제";
			this->moviedelete_btn->UseVisualStyleBackColor = true;
			this->moviedelete_btn->Click += gcnew System::EventHandler(this, &MovieUpdate::moviedelete_btn_Click);
			// 
			// movieupdate_btn
			// 
			this->movieupdate_btn->Location = System::Drawing::Point(130, 315);
			this->movieupdate_btn->Name = L"movieupdate_btn";
			this->movieupdate_btn->Size = System::Drawing::Size(75, 23);
			this->movieupdate_btn->TabIndex = 54;
			this->movieupdate_btn->Text = L"영화수정";
			this->movieupdate_btn->UseVisualStyleBackColor = true;
			this->movieupdate_btn->Click += gcnew System::EventHandler(this, &MovieUpdate::movieupdate_btn_Click);
			// 
			// actor_txt
			// 
			this->actor_txt->Location = System::Drawing::Point(157, 223);
			this->actor_txt->Name = L"actor_txt";
			this->actor_txt->Size = System::Drawing::Size(119, 21);
			this->actor_txt->TabIndex = 52;
			// 
			// director_txt
			// 
			this->director_txt->Location = System::Drawing::Point(157, 185);
			this->director_txt->Name = L"director_txt";
			this->director_txt->Size = System::Drawing::Size(119, 21);
			this->director_txt->TabIndex = 51;
			// 
			// genre_txt
			// 
			this->genre_txt->Location = System::Drawing::Point(157, 96);
			this->genre_txt->Name = L"genre_txt";
			this->genre_txt->Size = System::Drawing::Size(119, 21);
			this->genre_txt->TabIndex = 50;
			// 
			// moviename_txt
			// 
			this->moviename_txt->Location = System::Drawing::Point(157, 54);
			this->moviename_txt->Name = L"moviename_txt";
			this->moviename_txt->Size = System::Drawing::Size(119, 21);
			this->moviename_txt->TabIndex = 49;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(42, 270);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(41, 12);
			this->label5->TabIndex = 44;
			this->label5->Text = L"개봉일";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(42, 232);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(53, 12);
			this->label4->TabIndex = 43;
			this->label4->Text = L"주연배우";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(44, 188);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(29, 12);
			this->label3->TabIndex = 42;
			this->label3->Text = L"감독";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(42, 99);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(53, 12);
			this->label2->TabIndex = 41;
			this->label2->Text = L"장르번호";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(42, 57);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(53, 12);
			this->label1->TabIndex = 40;
			this->label1->Text = L"영화제목";
			// 
			// movieinsert_btn
			// 
			this->movieinsert_btn->Location = System::Drawing::Point(37, 315);
			this->movieinsert_btn->Name = L"movieinsert_btn";
			this->movieinsert_btn->Size = System::Drawing::Size(75, 23);
			this->movieinsert_btn->TabIndex = 62;
			this->movieinsert_btn->Text = L"영화추가";
			this->movieinsert_btn->UseVisualStyleBackColor = true;
			this->movieinsert_btn->Click += gcnew System::EventHandler(this, &MovieUpdate::movieinsert_btn_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(44, 439);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(75, 108);
			this->label6->TabIndex = 63;
			this->label6->Text = L"장르번호\r\n\r\n1 액션\r\n2 스릴러\r\n3 코미디\r\n4 로맨스\r\n5 애니메이션\r\n6 공포\r\n7 드라마";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(155, 439);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(99, 84);
			this->label7->TabIndex = 64;
			this->label7->Text = L"등급번호\r\n\r\n1 전체 이용가\r\n2 12세 이용가\r\n3 15세 이용가\r\n4 18세 이용가\r\n5 청소년관람불가";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(44, 395);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(261, 12);
			this->label10->TabIndex = 65;
			this->label10->Text = L"※ 영화추가, 수정시 장르, 등급번호 참고하세요";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CustomFormat = L"yyyy/MM/dd";
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker1->Location = System::Drawing::Point(157, 261);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(119, 21);
			this->dateTimePicker1->TabIndex = 66;
			this->dateTimePicker1->Value = System::DateTime(2020, 6, 10, 0, 0, 0, 0);
			// 
			// MovieUpdate
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(579, 617);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->movieinsert_btn);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->moviesearch_btn);
			this->Controls->Add(this->searchname_txt);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->grade_txt);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->moviedelete_btn);
			this->Controls->Add(this->movieupdate_btn);
			this->Controls->Add(this->actor_txt);
			this->Controls->Add(this->director_txt);
			this->Controls->Add(this->genre_txt);
			this->Controls->Add(this->moviename_txt);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MovieUpdate";
			this->Text = L"MovieUpdate";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void movieinsert_btn_Click(System::Object^  sender, System::EventArgs^  e) {

	String^ constring = L"datasource=localhost;port=3306;username=root;password=0000"; //db연결 하기 위한 constring
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("insert into videoshopmng.movie(movie_name,genre_id,grade_id,director,actor,movieopen) values('" + this->moviename_txt->Text + "','" + this->genre_txt->Text + "','" + this->grade_txt->Text + "','" + this->director_txt->Text + "','" + this->actor_txt->Text + "','" + this->dateTimePicker1->Text + "') ;", conDataBase); //movie_id 자동생성을 위해 value값을 따로지정
	MySqlDataReader^ myReader;
	try {

	

		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();
		MessageBox::Show("영화 등록 완료");


		while (myReader->Read()) {

		}


	}
	catch (Exception^ex) {
		MessageBox::Show(ex->Message);
	}



}
private: System::Void movieupdate_btn_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ constring = L"datasource=localhost;port=3306;username=root;password=0000"; //db연결 하기 위한 constring
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("update videoshopmng.movie set movie_name = '" + this->moviename_txt->Text + "',genre_id= '" + this->genre_txt->Text + "',grade_id='" + this->grade_txt->Text + "' ,director= '" + this->director_txt->Text + "' ,actor= '" + this->actor_txt->Text + "',movieopen= '" + this->dateTimePicker1->Text + "'where movie_name='" + this->moviename_txt->Text + "' ;", conDataBase);
	MySqlDataReader^ myReader;
	try {
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();
		MessageBox::Show("영화 수정 완료");
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
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("delete from videoshopmng.movie where movie_name = '" + this->moviename_txt->Text + "' ;", conDataBase);
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
private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	String^ listname = listBox1->Text; //리스트 박스에서 선택한 데이터를 얻어오기 위한 변수생성
	String^ constring = L"datasource=localhost;port=3306;username=root;password=0000"; //db연결 하기 위한 constring
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select * from videoshopmng.movie where movie_name= '" + listname + "' ;", conDataBase);
	MySqlDataReader^ myReader;
	try {
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();

		if (myReader->Read()) {
			String^ sMovie = myReader->GetString("movie_name");
			moviename_txt->Text = sMovie;
			String^ sGenre = myReader->GetString("genre_id");
			genre_txt->Text = sGenre;
			String^ sGrade = myReader->GetString("grade_id");
			grade_txt->Text = sGrade;
			String^ sDirector = myReader->GetString("director");
			director_txt->Text = sDirector;
			String^ sActor = myReader->GetString("actor");
			actor_txt->Text = sActor;
			String^ sMovieopen = myReader->GetString("movieopen");
			dateTimePicker1->Text = sMovieopen;




		}

	}
	catch (Exception^ex) {
		MessageBox::Show(ex->Message);
	}


}
};
}
