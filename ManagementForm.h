#pragma once
#include "Member.h"
#include "VideoForm.h"
#include "MoneyForm.h"
#include "RentalManagement.h"

namespace VideoShopManagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// ManagementForm에 대한 요약입니다.
	/// </summary>
	public ref class ManagementForm : public System::Windows::Forms::Form
	{
	public:
		ManagementForm(void)
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
		~ManagementForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  member_btn;
	protected:
	private: System::Windows::Forms::Button^  video_btn;
	private: System::Windows::Forms::Button^  money_btn;
	private: System::Windows::Forms::Button^  Exit_btn;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  Rentalmng_btn;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(ManagementForm::typeid));
			this->member_btn = (gcnew System::Windows::Forms::Button());
			this->video_btn = (gcnew System::Windows::Forms::Button());
			this->money_btn = (gcnew System::Windows::Forms::Button());
			this->Exit_btn = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->Rentalmng_btn = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// member_btn
			// 
			this->member_btn->Location = System::Drawing::Point(507, 136);
			this->member_btn->Name = L"member_btn";
			this->member_btn->Size = System::Drawing::Size(103, 39);
			this->member_btn->TabIndex = 0;
			this->member_btn->Text = L"회원관리";
			this->member_btn->UseVisualStyleBackColor = true;
			this->member_btn->Click += gcnew System::EventHandler(this, &ManagementForm::member_btn_Click);
			// 
			// video_btn
			// 
			this->video_btn->Location = System::Drawing::Point(12, 136);
			this->video_btn->Name = L"video_btn";
			this->video_btn->Size = System::Drawing::Size(103, 39);
			this->video_btn->TabIndex = 1;
			this->video_btn->Text = L"비디오관리";
			this->video_btn->UseVisualStyleBackColor = true;
			this->video_btn->Click += gcnew System::EventHandler(this, &ManagementForm::video_btn_Click);
			// 
			// money_btn
			// 
			this->money_btn->Location = System::Drawing::Point(12, 280);
			this->money_btn->Name = L"money_btn";
			this->money_btn->Size = System::Drawing::Size(103, 39);
			this->money_btn->TabIndex = 2;
			this->money_btn->Text = L"매출관리";
			this->money_btn->UseVisualStyleBackColor = true;
			this->money_btn->Click += gcnew System::EventHandler(this, &ManagementForm::money_btn_Click);
			// 
			// Exit_btn
			// 
			this->Exit_btn->Location = System::Drawing::Point(507, 280);
			this->Exit_btn->Name = L"Exit_btn";
			this->Exit_btn->Size = System::Drawing::Size(103, 39);
			this->Exit_btn->TabIndex = 3;
			this->Exit_btn->Text = L"끝내기";
			this->Exit_btn->UseVisualStyleBackColor = true;
			this->Exit_btn->Click += gcnew System::EventHandler(this, &ManagementForm::Exit_btn_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(226, 478);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(53, 12);
			this->label1->TabIndex = 4;
			this->label1->Text = L"현재시간";
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &ManagementForm::timer1_Tick);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-10, -16);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(620, 553);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			// 
			// Rentalmng_btn
			// 
			this->Rentalmng_btn->Location = System::Drawing::Point(12, 209);
			this->Rentalmng_btn->Name = L"Rentalmng_btn";
			this->Rentalmng_btn->Size = System::Drawing::Size(103, 39);
			this->Rentalmng_btn->TabIndex = 6;
			this->Rentalmng_btn->Text = L"대여관리";
			this->Rentalmng_btn->UseVisualStyleBackColor = true;
			this->Rentalmng_btn->Click += gcnew System::EventHandler(this, &ManagementForm::Rentalmng_btn_Click);
			// 
			// ManagementForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(612, 517);
			this->Controls->Add(this->Rentalmng_btn);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Exit_btn);
			this->Controls->Add(this->money_btn);
			this->Controls->Add(this->video_btn);
			this->Controls->Add(this->member_btn);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"ManagementForm";
			this->Text = L"ManagementForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void member_btn_Click(System::Object^  sender, System::EventArgs^  e) {
		Member^ mem = gcnew Member;
		mem->ShowDialog();


	}
private: System::Void Exit_btn_Click(System::Object^  sender, System::EventArgs^  e) {

	Application::Exit();

}
private: System::Void video_btn_Click(System::Object^  sender, System::EventArgs^  e) {

	VideoForm^ v2 = gcnew VideoForm;
	v2->ShowDialog();


}
private: System::Void money_btn_Click(System::Object^  sender, System::EventArgs^  e) {

	MoneyForm^ mo2 = gcnew MoneyForm;
	mo2->ShowDialog();
}
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
	
	DateTime datetime = DateTime::Now;
	this->label1->Text = datetime.ToString();

}


private: System::Void Rentalmng_btn_Click(System::Object^  sender, System::EventArgs^  e) {

	RentalManagement^ rm2 = gcnew RentalManagement();
	rm2->ShowDialog();

}
};
}
