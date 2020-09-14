#pragma once
#include "MovieUpdate.h"

namespace VideoShopManagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// MovieForm에 대한 요약입니다.
	/// </summary>
	public ref class MovieForm : public System::Windows::Forms::Form
	{
	public:
		MovieForm(void)
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
		~MovieForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  MovieSelect_btn;
	protected:

	private: System::Windows::Forms::TextBox^  moviename_txt;
	protected:

	private: System::Windows::Forms::Button^  updatemovie_btn;
	private: System::Windows::Forms::Button^  movieload_btn;
	private: System::Windows::Forms::DataGridView^  dataGridView1;

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
			this->MovieSelect_btn = (gcnew System::Windows::Forms::Button());
			this->moviename_txt = (gcnew System::Windows::Forms::TextBox());
			this->updatemovie_btn = (gcnew System::Windows::Forms::Button());
			this->movieload_btn = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// MovieSelect_btn
			// 
			this->MovieSelect_btn->Location = System::Drawing::Point(12, 248);
			this->MovieSelect_btn->Name = L"MovieSelect_btn";
			this->MovieSelect_btn->Size = System::Drawing::Size(129, 37);
			this->MovieSelect_btn->TabIndex = 9;
			this->MovieSelect_btn->Text = L"영화제목검색";
			this->MovieSelect_btn->UseVisualStyleBackColor = true;
			this->MovieSelect_btn->Click += gcnew System::EventHandler(this, &MovieForm::MovieSelect_btn_Click);
			// 
			// moviename_txt
			// 
			this->moviename_txt->Location = System::Drawing::Point(12, 221);
			this->moviename_txt->Name = L"moviename_txt";
			this->moviename_txt->Size = System::Drawing::Size(117, 21);
			this->moviename_txt->TabIndex = 8;
			// 
			// updatemovie_btn
			// 
			this->updatemovie_btn->Location = System::Drawing::Point(12, 26);
			this->updatemovie_btn->Name = L"updatemovie_btn";
			this->updatemovie_btn->Size = System::Drawing::Size(129, 37);
			this->updatemovie_btn->TabIndex = 7;
			this->updatemovie_btn->Text = L"영화 추가 및 수정";
			this->updatemovie_btn->UseVisualStyleBackColor = true;
			this->updatemovie_btn->Click += gcnew System::EventHandler(this, &MovieForm::updatemovie_btn_Click);
			// 
			// movieload_btn
			// 
			this->movieload_btn->Location = System::Drawing::Point(12, 100);
			this->movieload_btn->Name = L"movieload_btn";
			this->movieload_btn->Size = System::Drawing::Size(129, 37);
			this->movieload_btn->TabIndex = 6;
			this->movieload_btn->Text = L"영화전체목록";
			this->movieload_btn->UseVisualStyleBackColor = true;
			this->movieload_btn->Click += gcnew System::EventHandler(this, &MovieForm::movieload_btn_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(184, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->Height = 23;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView1->Size = System::Drawing::Size(605, 273);
			this->dataGridView1->TabIndex = 5;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MovieForm::dataGridView1_CellContentClick);
			// 
			// MovieForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(810, 328);
			this->Controls->Add(this->MovieSelect_btn);
			this->Controls->Add(this->moviename_txt);
			this->Controls->Add(this->updatemovie_btn);
			this->Controls->Add(this->movieload_btn);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"MovieForm";
			this->Text = L"MovieForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void MovieSelect_btn_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ constring = L"datasource=localhost;port=3306;username=root;password=0000"; //db연결 하기 위한 constring
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select movie_name,actor,director,movieopen,genre_name,grade_name from videoshopmng.movie, videoshopmng.genre, videoshopmng.grade where movie_name like '" "%" + this->moviename_txt->Text + "%" "'and movie.genre_id=genre.genre_id and movie.grade_id = grade.grade_id;", conDataBase);
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
private: System::Void updatemovie_btn_Click(System::Object^  sender, System::EventArgs^  e) {
	MovieUpdate^ mu2 = gcnew MovieUpdate;
	mu2->ShowDialog();


}



private: System::Void movieload_btn_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ constring = L"datasource=localhost;port=3306;username=root;password=0000"; //db연결 하기 위한 constring
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select movie_name,genre_name,grade_name,director,actor,movieopen from videoshopmng.movie,videoshopmng.genre,videoshopmng.grade where movie.genre_id = genre.genre_id and movie.grade_id = grade.grade_id; ", conDataBase);
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
}
};
}
