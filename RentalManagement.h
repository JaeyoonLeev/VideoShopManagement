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
	/// RentalManagement�� ���� ����Դϴ�.
	/// </summary>
	public ref class RentalManagement : public System::Windows::Forms::Form
	{
	public:
		RentalManagement(void)
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
			this->Rent_btn->Text = L"�뿩/�ݳ�";
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
			this->button2->Text = L"���� �뿩���� ��Ϻ���";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &RentalManagement::button2_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"���̸�", L"�뿩����" });
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
		String^ constring = L"datasource=localhost;port=3306;username=root;password=0000"; //db���� �ϱ� ���� constring
		MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select name as '���̸�' , movie_name as '��������', rental as '�뿩����', rental_date as '�뿩��¥' from videoshopmng.tuser, videoshopmng.movie, videoshopmng.Rental, videoshopmng.video where rental = '�뿩��' and tuser.vid = rental.vid and movie.movie_id = video.video_id and video.video_id = rental.video_id;", conDataBase);
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
		if (comboBox1->Text == "���̸�") {
			String^ constring = L"datasource=localhost;port=3306;username=root;password=0000"; //db���� �ϱ� ���� constring
			MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
			MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select name as '���̸�' , movie_name as '��������', rental as '�뿩����', rental_date as '�뿩��¥' from videoshopmng.tuser, videoshopmng.movie, videoshopmng.Rental, videoshopmng.video where rental = '�뿩��' and tuser.vid = rental.vid and movie.movie_id = video.video_id and video.video_id = rental.video_id and name like '" "%" +this->textBox1->Text+ "%" "';", conDataBase);
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
		else if (comboBox1->Text == "�뿩����") {

			String^ constring = L"datasource=localhost;port=3306;username=root;password=0000"; //db���� �ϱ� ���� constring
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
