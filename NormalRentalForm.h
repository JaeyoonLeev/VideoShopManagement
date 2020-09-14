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
	/// NormalRentalForm�� ���� ����Դϴ�.
	/// </summary>
	public ref class NormalRentalForm : public System::Windows::Forms::Form
	{
	public:
		NormalRentalForm(void)
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
		~NormalRentalForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  videosearch_txt;
	protected:
	private: System::Windows::Forms::Button^  videoselect_btn;
	private: System::Windows::Forms::Button^  VideoLoad;
	private: System::Windows::Forms::DataGridView^  dataGridView1;

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
			this->videosearch_txt = (gcnew System::Windows::Forms::TextBox());
			this->videoselect_btn = (gcnew System::Windows::Forms::Button());
			this->VideoLoad = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// videosearch_txt
			// 
			this->videosearch_txt->Location = System::Drawing::Point(28, 61);
			this->videosearch_txt->Multiline = true;
			this->videosearch_txt->Name = L"videosearch_txt";
			this->videosearch_txt->Size = System::Drawing::Size(194, 21);
			this->videosearch_txt->TabIndex = 11;
			// 
			// videoselect_btn
			// 
			this->videoselect_btn->Location = System::Drawing::Point(242, 58);
			this->videoselect_btn->Name = L"videoselect_btn";
			this->videoselect_btn->Size = System::Drawing::Size(80, 24);
			this->videoselect_btn->TabIndex = 10;
			this->videoselect_btn->Text = L"�����˻�";
			this->videoselect_btn->UseVisualStyleBackColor = true;
			this->videoselect_btn->Click += gcnew System::EventHandler(this, &NormalRentalForm::videoselect_btn_Click);
			// 
			// VideoLoad
			// 
			this->VideoLoad->Location = System::Drawing::Point(634, 37);
			this->VideoLoad->Name = L"VideoLoad";
			this->VideoLoad->Size = System::Drawing::Size(151, 45);
			this->VideoLoad->TabIndex = 9;
			this->VideoLoad->Text = L"������";
			this->VideoLoad->UseVisualStyleBackColor = true;
			this->VideoLoad->Click += gcnew System::EventHandler(this, &NormalRentalForm::VideoLoad_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(28, 104);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->Height = 23;
			this->dataGridView1->Size = System::Drawing::Size(757, 297);
			this->dataGridView1->TabIndex = 8;
			// 
			// NormalRentalForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(812, 426);
			this->Controls->Add(this->videosearch_txt);
			this->Controls->Add(this->videoselect_btn);
			this->Controls->Add(this->VideoLoad);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"NormalRentalForm";
			this->Text = L"NormalRentalForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void videoselect_btn_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ constring = L"datasource=localhost;port=3306;username=root;password=0000"; //db���� �ϱ� ���� constring
		MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select movie_name as '����',actor as '�ֿ����' ,director as '����',rental as '�뿩����',damage as '�ļտ���',genre_name as '�帣',grade_name as '���' from videoshopmng.movie, videoshopmng.genre, videoshopmng.grade,videoshopmng.rental,videoshopmng.video where movie_name like '" "%" + this->videosearch_txt->Text + "%" "'and movie.genre_id=genre.genre_id and movie.grade_id = grade.grade_id and rental.video_id=video.video_id and movie.movie_id=video.movie_id;", conDataBase);
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
private: System::Void VideoLoad_Click(System::Object^  sender, System::EventArgs^  e) {
	
	Application::Exit();
}
};
}
