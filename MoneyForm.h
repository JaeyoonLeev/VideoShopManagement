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
	/// MoneyForm에 대한 요약입니다.
	/// </summary>
	public ref class MoneyForm : public System::Windows::Forms::Form
	{
	public:
		MoneyForm(void)
		{
			InitializeComponent();
			timer1->Start();
			//
			//TODO: 생성자 코드를 여기에 추가합니다.
			//
		}

	protected:
		/// <summary>
		/// 사용 중인 모든 리소스를 정리합니다.
		/// </summary>
		~MoneyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Button^  SelectDay_btn;
	private: System::Windows::Forms::Label^  label2;
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// 필수 디자이너 변수입니다.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// 디자이너 지원에 필요한 메서드입니다. 
		/// 이 메서드의 내용을 코드 편집기로 수정하지 마세요.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->SelectDay_btn = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(37, 137);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(91, 41);
			this->button1->TabIndex = 0;
			this->button1->Text = L"일매출계산";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MoneyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(151, 137);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(91, 41);
			this->button2->TabIndex = 1;
			this->button2->Text = L"월 매출계산";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MoneyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(267, 137);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(91, 41);
			this->button3->TabIndex = 2;
			this->button3->Text = L"연매출계산";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MoneyForm::button3_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(37, 198);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->Height = 23;
			this->dataGridView1->Size = System::Drawing::Size(321, 150);
			this->dataGridView1->TabIndex = 3;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CustomFormat = L"yyyy/MM/dd";
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker1->Location = System::Drawing::Point(33, 65);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(101, 21);
			this->dateTimePicker1->TabIndex = 4;
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->CustomFormat = L"yyyy/MM/dd";
			this->dateTimePicker2->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker2->Location = System::Drawing::Point(160, 65);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(101, 21);
			this->dateTimePicker2->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Location = System::Drawing::Point(31, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(53, 12);
			this->label1->TabIndex = 6;
			this->label1->Text = L"현재시간";
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &MoneyForm::timer1_Tick);
			// 
			// SelectDay_btn
			// 
			this->SelectDay_btn->Location = System::Drawing::Point(267, 57);
			this->SelectDay_btn->Name = L"SelectDay_btn";
			this->SelectDay_btn->Size = System::Drawing::Size(91, 41);
			this->SelectDay_btn->TabIndex = 7;
			this->SelectDay_btn->Text = L"기간설정매출";
			this->SelectDay_btn->UseVisualStyleBackColor = true;
			this->SelectDay_btn->Click += gcnew System::EventHandler(this, &MoneyForm::SelectDay_btn_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(140, 71);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(14, 12);
			this->label2->TabIndex = 8;
			this->label2->Text = L"~";
			// 
			// MoneyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->ClientSize = System::Drawing::Size(412, 360);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->SelectDay_btn);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dateTimePicker2);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MoneyForm";
			this->Text = L"MoneyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ constring = L"datasource=localhost;port=3306;username=root;password=0000"; //db연결 하기 위한 constring
		MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select count(rental_date) as '하루 대여 횟수', sum(rental_price) + sum(fee) as '일매출' from videoshopmng.videoprice WHERE DATE(rental_date) = DATE(NOW());", conDataBase);
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
	String^ constring = L"datasource=localhost;port=3306;username=root;password=0000"; //db연결 하기 위한 constring
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("SELECT count(rental_date) as '한달 대여 횟수', sum(rental_price) + sum(fee) as '월매출' FROM videoshopmng.videoprice WHERE rental_date BETWEEN DATE_ADD(NOW(),INTERVAL -1 MONTH ) AND NOW();", conDataBase);
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
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
	DateTime datetime = DateTime::Now;
	this->label1->Text = datetime.ToString();

}
private: System::Void SelectDay_btn_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ constring = L"datasource=localhost;port=3306;username=root;password=0000"; //db연결 하기 위한 constring
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select count(rental_date) as '설정한 기간의 대여 횟수', sum(rental_price) + sum(fee) as '기간설정매출' from videoshopmng.videoprice where rental_date between '" + this->dateTimePicker1->Text + "' and '" + this->dateTimePicker2->Text + "' ;", conDataBase);
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
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ constring = L"datasource=localhost;port=3306;username=root;password=0000"; //db연결 하기 위한 constring
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("SELECT count(rental_date) as '1년 별 대여 횟수', sum(rental_price)+ sum(fee) as '연매출' FROM videoshopmng.videoprice WHERE rental_date BETWEEN DATE_ADD(NOW(),INTERVAL -1 year ) AND NOW();", conDataBase);
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
