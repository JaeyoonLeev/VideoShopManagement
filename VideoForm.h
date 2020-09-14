#pragma once
#include "MovieForm.h"
#include "RentalForm.h"
#include "VideoUpdate.h"

namespace VideoShopManagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// VideoForm에 대한 요약입니다.
	/// </summary>
	public ref class VideoForm : public System::Windows::Forms::Form
	{
	public:
		VideoForm(void)
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
		~VideoForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::Button^  VideoLoad;
	private: System::Windows::Forms::Button^  VideoUpdate_btn;
	private: System::Windows::Forms::Button^  videoselect_btn;


	private: System::Windows::Forms::TextBox^  videosearch_txt;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(VideoForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->VideoLoad = (gcnew System::Windows::Forms::Button());
			this->VideoUpdate_btn = (gcnew System::Windows::Forms::Button());
			this->videoselect_btn = (gcnew System::Windows::Forms::Button());
			this->videosearch_txt = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->Location = System::Drawing::Point(701, 63);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(93, 45);
			this->button1->TabIndex = 0;
			this->button1->Text = L"영화관리";
			this->button1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &VideoForm::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(26, 231);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->Height = 23;
			this->dataGridView1->Size = System::Drawing::Size(757, 350);
			this->dataGridView1->TabIndex = 1;
			// 
			// VideoLoad
			// 
			this->VideoLoad->Location = System::Drawing::Point(656, 182);
			this->VideoLoad->Name = L"VideoLoad";
			this->VideoLoad->Size = System::Drawing::Size(127, 25);
			this->VideoLoad->TabIndex = 2;
			this->VideoLoad->Text = L"비디오목록불러오기";
			this->VideoLoad->UseVisualStyleBackColor = true;
			this->VideoLoad->Click += gcnew System::EventHandler(this, &VideoForm::VideoLoad_Click);
			// 
			// VideoUpdate_btn
			// 
			this->VideoUpdate_btn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"VideoUpdate_btn.Image")));
			this->VideoUpdate_btn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->VideoUpdate_btn->Location = System::Drawing::Point(701, 12);
			this->VideoUpdate_btn->Name = L"VideoUpdate_btn";
			this->VideoUpdate_btn->Size = System::Drawing::Size(93, 45);
			this->VideoUpdate_btn->TabIndex = 3;
			this->VideoUpdate_btn->Text = L"비디오관리";
			this->VideoUpdate_btn->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->VideoUpdate_btn->UseVisualStyleBackColor = true;
			this->VideoUpdate_btn->Click += gcnew System::EventHandler(this, &VideoForm::VideoUpdate_btn_Click);
			// 
			// videoselect_btn
			// 
			this->videoselect_btn->Location = System::Drawing::Point(245, 182);
			this->videoselect_btn->Name = L"videoselect_btn";
			this->videoselect_btn->Size = System::Drawing::Size(80, 25);
			this->videoselect_btn->TabIndex = 4;
			this->videoselect_btn->Text = L"비디오검색";
			this->videoselect_btn->UseVisualStyleBackColor = true;
			this->videoselect_btn->Click += gcnew System::EventHandler(this, &VideoForm::videoselect_btn_Click);
			// 
			// videosearch_txt
			// 
			this->videosearch_txt->Location = System::Drawing::Point(26, 182);
			this->videosearch_txt->Multiline = true;
			this->videosearch_txt->Name = L"videosearch_txt";
			this->videosearch_txt->Size = System::Drawing::Size(199, 24);
			this->videosearch_txt->TabIndex = 7;
			// 
			// VideoForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::MintCream;
			this->ClientSize = System::Drawing::Size(806, 622);
			this->Controls->Add(this->videosearch_txt);
			this->Controls->Add(this->videoselect_btn);
			this->Controls->Add(this->VideoUpdate_btn);
			this->Controls->Add(this->VideoLoad);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button1);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->Name = L"VideoForm";
			this->Text = L"VideoForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		MovieForm^ mf1 = gcnew MovieForm();
		mf1->ShowDialog();

	}
	private: System::Void VideoLoad_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ constring = L"datasource=localhost;port=3306;username=root;password=0000"; //db연결 하기 위한 constring
		MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand(" select movie_name as '제목',actor as '주연배우',director as '감독',rental as '대여상태',damage as '파손여부' ,genre_name as '장르',grade_name as '등급' from videoshopmng.video,videoshopmng.movie, videoshopmng.genre, videoshopmng.rental, videoshopmng.grade where video.movie_id = movie.movie_id and movie.grade_id = grade.grade_id and movie.genre_id = genre.genre_id and rental.video_id=video.video_id", conDataBase);
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
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	RentalForm^ rf = gcnew RentalForm();
	rf->ShowDialog();

}
private: System::Void VideoUpdate_btn_Click(System::Object^  sender, System::EventArgs^  e) {
	VideoUpdate^ vu = gcnew VideoUpdate();
	vu->ShowDialog();

}
private: System::Void videoselect_btn_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ constring = L"datasource=localhost;port=3306;username=root;password=0000"; //db연결 하기 위한 constring
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select movie_name as '제목',actor as '주연배우' ,director as '감독',rental as '대여상태',damage as '파손여부',genre_name as '장르',grade_name as '등급' from videoshopmng.movie, videoshopmng.genre, videoshopmng.grade,videoshopmng.rental,videoshopmng.video where movie_name like '" "%" + this->videosearch_txt->Text + "%" "'and movie.genre_id=genre.genre_id and movie.grade_id = grade.grade_id and rental.video_id=video.video_id and movie.movie_id=video.movie_id;", conDataBase);
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
