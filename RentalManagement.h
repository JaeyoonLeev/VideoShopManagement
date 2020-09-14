#pragma once
#include "RentalForm.h"
#include "RentIdentify.h"

namespace VideoShopManagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// RentalManagement에 대한 요약입니다.
	/// </summary>
	public ref class RentalManagement : public System::Windows::Forms::Form
	{
	public:
		RentalManagement(void)
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
		~RentalManagement()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  Rent_btn;
	protected:

	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::TextBox^  textBox1;


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
			this->Rent_btn = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// Rent_btn
			// 
			this->Rent_btn->Location = System::Drawing::Point(368, 12);
			this->Rent_btn->Name = L"Rent_btn";
			this->Rent_btn->Size = System::Drawing::Size(151, 45);
			this->Rent_btn->TabIndex = 6;
			this->Rent_btn->Text = L"대여/반납";
			this->Rent_btn->UseVisualStyleBackColor = true;
			this->Rent_btn->Click += gcnew System::EventHandler(this, &RentalManagement::Rent_btn_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 113);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->Height = 23;
			this->dataGridView1->Size = System::Drawing::Size(507, 222);
			this->dataGridView1->TabIndex = 8;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 15);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(151, 45);
			this->button2->TabIndex = 9;
			this->button2->Text = L"현재 대여중인 목록보기";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &RentalManagement::button2_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"고객이름", L"대여여부" });
			this->comboBox1->Location = System::Drawing::Point(13, 77);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 20);
			this->comboBox1->TabIndex = 10;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(151, 77);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(195, 21);
			this->textBox1->TabIndex = 11;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &RentalManagement::textBox1_TextChanged);
			// 
			// RentalManagement
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(585, 358);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->Rent_btn);
			this->Name = L"RentalManagement";
			this->Text = L"RentalManagement";
			this->Load += gcnew System::EventHandler(this, &RentalManagement::RentalManagement_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Rent_btn_Click(System::Object^  sender, System::EventArgs^  e) {
		RentalForm^ rt = gcnew RentalForm;
		rt->ShowDialog();

	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {

	}


	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		RentIdentify^ ri = gcnew RentIdentify;
		ri->ShowDialog();

	}
	private: System::Void RentalManagement_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ constring = L"datasource=localhost;port=3306;username=root;password=0000"; //db연결 하기 위한 constring
		MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select name as '고객이름' , movie_name as '비디오제목', rental as '대여여부', rental_date as '대여날짜' from videoshopmng.tuser, videoshopmng.movie, videoshopmng.Rental, videoshopmng.video where rental = '대여중' and tuser.vid = rental.vid and movie.movie_id = video.video_id and video.video_id = rental.video_id;", conDataBase);
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
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {

	try {
		if (comboBox1->Text == "고객이름") {
			String^ constring = L"datasource=localhost;port=3306;username=root;password=0000"; //db연결 하기 위한 constring
			MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
			MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select name as '고객이름' , movie_name as '비디오제목', rental as '대여여부', rental_date as '대여날짜' from videoshopmng.tuser, videoshopmng.movie, videoshopmng.Rental, videoshopmng.video where rental = '대여중' and tuser.vid = rental.vid and movie.movie_id = video.video_id and video.video_id = rental.video_id and name like '" "%" +this->textBox1->Text+ "%" "';", conDataBase);
			MySqlDataReader^ myReader;

			MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
			sda->SelectCommand = cmdDataBase;
			DataTable^ dbdataset = gcnew DataTable();
			sda->Fill(dbdataset);
			BindingSource^ bSource = gcnew BindingSource();

			bSource->DataSource = dbdataset;
			dataGridView1->DataSource = bSource;
			sda->Update(dbdataset);

		}
		else if (comboBox1->Text == "대여여부") {

			String^ constring = L"datasource=localhost;port=3306;username=root;password=0000"; //db연결 하기 위한 constring
			MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
			MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select movie_name, rental from videoshopmng.movie, videoshopmng.rental, videoshopmng.video where movie.movie_id = video.video_id and video.video_id = rental.video_id and rental like '" "%" + this->textBox1->Text + "%" "';", conDataBase);
			MySqlDataReader^ myReader;

			MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
			sda->SelectCommand = cmdDataBase;
			DataTable^ dbdataset = gcnew DataTable();
			sda->Fill(dbdataset);
			BindingSource^ bSource = gcnew BindingSource();

			bSource->DataSource = dbdataset;
			dataGridView1->DataSource = bSource;
			sda->Update(dbdataset);



		}
	}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	
}
};
}
