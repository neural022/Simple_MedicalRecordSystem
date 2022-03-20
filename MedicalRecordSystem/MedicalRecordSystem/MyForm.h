#pragma once
#include "string"
#include "stdio.h"
#include "patients.h"
#include <msclr\marshal_cppstd.h>

date birthday;
Patient p;
double *bp;
using namespace msclr::interop;
using namespace System::IO;

namespace MedicalRecordSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	/// <summary>
	/// MyForm 的摘要
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO:  在此加入建構函式程式碼
			//
			for (int i = 1900; i <= 2500;i++) this->comboBox1->Items->Add(i);
			for (int i = 1; i <= 12; i++) this->comboBox2->Items->Add(i);
			for (int i = 1; i <= 31; i++) this->comboBox3->Items->Add(i);
		}

		void initialSetting()
		{
			//	getTextBox String
			String ^ Name = this->textBox1->Text;
			int year = Convert::ToInt32(comboBox1->Text);
			int month = Convert::ToInt32(comboBox2->Text);
			int	day = Convert::ToInt32(comboBox3->Text);
			String ^ Address = this->textBox3->Text;
			String ^ PID = this->textBox4->Text;
			String ^ Diag = this->textBox5->Text;
			int numberof_bp = this->listBox1->Items->Count;
			bp = new double[numberof_bp];
			for (int i = 0; i < numberof_bp; i++) *(bp + i) = Convert::ToDouble(this->listBox1->Items[i]);
			//	String to string
			string name = marshal_as<string>(Name);
			string address = marshal_as<string>(Address);
			string pID = marshal_as<string>(PID);
			string diag = marshal_as<string>(Diag);
			// setPatient Info
			birthday = date(year, month, day);
			p = Patient(pID, diag, name, birthday, address, numberof_bp, bp);
		}


	protected:
		/// <summary>
		/// 清除任何使用中的資源。
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox1;

	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Button^  button1;

	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::ComboBox^  comboBox3;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^  openToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  saveAsToolStripMenuItem;
	private: System::Windows::Forms::MenuStrip^  menuStrip2;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;





	protected:

	private:
		/// <summary>
		/// 設計工具所需的變數。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 此為設計工具支援所需的方法 - 請勿使用程式碼編輯器修改
		/// 這個方法的內容。
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveAsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip2 = (gcnew System::Windows::Forms::MenuStrip());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->menuStrip2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(56, 50);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(41, 12);
			this->label1->TabIndex = 0;
			this->label1->Text = L"姓名：";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(226, 53);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(41, 12);
			this->label2->TabIndex = 1;
			this->label2->Text = L"生日：";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(226, 111);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(41, 12);
			this->label3->TabIndex = 2;
			this->label3->Text = L"住址：";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(517, 52);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(65, 12);
			this->label4->TabIndex = 3;
			this->label4->Text = L"病歷號碼：";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(56, 121);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(41, 12);
			this->label5->TabIndex = 4;
			this->label5->Text = L"診斷：";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(541, 108);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(41, 12);
			this->label6->TabIndex = 5;
			this->label6->Text = L"血壓：";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(100, 47);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 6;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(273, 111);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(226, 110);
			this->textBox3->TabIndex = 8;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(588, 47);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 22);
			this->textBox4->TabIndex = 9;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(100, 111);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 110);
			this->textBox5->TabIndex = 10;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(588, 105);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 22);
			this->textBox6->TabIndex = 11;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(705, 501);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 12;
			this->button1->Text = L"存檔";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(366, 47);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(42, 20);
			this->comboBox2->TabIndex = 14;
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(437, 49);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(39, 20);
			this->comboBox3->TabIndex = 15;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"1900" });
			this->comboBox1->Location = System::Drawing::Point(273, 47);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(63, 20);
			this->comboBox1->TabIndex = 13;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(343, 52);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(17, 12);
			this->label7->TabIndex = 16;
			this->label7->Text = L"年";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(414, 53);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(17, 12);
			this->label8->TabIndex = 17;
			this->label8->Text = L"月";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(482, 52);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(17, 12);
			this->label9->TabIndex = 18;
			this->label9->Text = L"日";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->openToolStripMenuItem,
					this->saveAsToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(70, 20);
			this->fileToolStripMenuItem->Text = L"File(檔案)";
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->Size = System::Drawing::Size(176, 22);
			this->openToolStripMenuItem->Text = L"Open (開啟)";
			this->openToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::openToolStripMenuItem_Click);
			// 
			// saveAsToolStripMenuItem
			// 
			this->saveAsToolStripMenuItem->Name = L"saveAsToolStripMenuItem";
			this->saveAsToolStripMenuItem->Size = System::Drawing::Size(176, 22);
			this->saveAsToolStripMenuItem->Text = L"Save As (另存新檔)";
			this->saveAsToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::saveAsToolStripMenuItem_Click);
			// 
			// menuStrip2
			// 
			this->menuStrip2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->fileToolStripMenuItem });
			this->menuStrip2->Location = System::Drawing::Point(0, 0);
			this->menuStrip2->Name = L"menuStrip2";
			this->menuStrip2->Size = System::Drawing::Size(842, 24);
			this->menuStrip2->TabIndex = 20;
			this->menuStrip2->Text = L"menuStrip2";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 12;
			this->listBox1->Location = System::Drawing::Point(588, 133);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(192, 88);
			this->listBox1->TabIndex = 21;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(705, 103);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 22;
			this->button2->Text = L"新增血壓";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// chart1
			// 
			chartArea1->AxisX->Minimum = 1;
			chartArea1->AxisY->Maximum = 250;
			chartArea1->AxisY->Minimum = 0;
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(100, 253);
			this->chart1->Name = L"chart1";
			series1->BorderWidth = 3;
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series1->Color = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			series1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			series1->Label = L"#VAL";
			series1->LabelForeColor = System::Drawing::Color::Blue;
			series1->Legend = L"Legend1";
			series1->Name = L"BP";
			series1->YValuesPerPoint = 2;
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(680, 223);
			this->chart1->TabIndex = 23;
			this->chart1->Text = L"chart1";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->ClientSize = System::Drawing::Size(842, 554);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip2);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"簡易病歷系統";
			this->menuStrip2->ResumeLayout(false);
			this->menuStrip2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e)
	{
		try
		{
			String ^ Bp = this->textBox6->Text;
			double tmp = Convert::ToDouble(Bp);
			if (tmp < 50 || tmp > 250) MessageBox::Show("血壓值介於50~250之間!", "錯誤訊息", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			else
			{
				this->listBox1->Items->Add(Bp);
				int p_count = this->chart1->Series["BP"]->Points->Count;
				this->chart1->Series["BP"]->Points->AddXY(p_count+1, Bp);
				this->textBox6->Text = "";
			}
		}
		catch (Exception ^e)
		{
			MessageBox::Show("血壓不能為空!", "錯誤訊息", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}
	
	private: System::Void openToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		openFileDialog1->InitialDirectory = "c:\\";
		openFileDialog1->Filter = "txt files (*.txt)|*.txt|All files(*.*)|*.*"; //	所開的檔案為txt檔
		openFileDialog1->FilterIndex = 2;
		openFileDialog1->RestoreDirectory = true;

		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			if ((openFileDialog1->OpenFile()) != nullptr)
			{
				int p_count = this->chart1->Series["BP"]->Points->Count;
				if (p_count != 0)
				{
					this->chart1->Series["BP"]->Points->Clear();
					this->listBox1->Items->Clear();
				}
				//	read file
				String ^File = openFileDialog1->FileName;
				//fs = gcnew FileStream(File, FileMode::Open, FileAccess::Read, FileShare::ReadWrite);
				StreamReader ^f = gcnew StreamReader(File);
					ArrayList ^ arrText = gcnew ArrayList();
					String ^sLine = "";
					do
					{
						sLine = f->ReadLine();
						arrText->Add(sLine);
						
					} while (!f->EndOfStream);
				f->Close();
				string *t = new string[arrText->Count];
				for (int i = 0; i < arrText->Count; i++) t[i] = marshal_as<string>(arrText[i]->ToString());
				bp = new double[arrText->Count - 7];
				for (int i = 7; i < arrText->Count; i++) *(bp + i - 7) = atof(t[i].c_str());
				birthday = date(atoi(t[2].c_str()), atoi(t[3].c_str()), atoi(t[4].c_str()));
				p = Patient(t[0], t[6], t[1], birthday, t[5], arrText->Count - 7, bp);
				
				// showData
				this->textBox1->Text = marshal_as<String^>(p.getName());
				this->comboBox1->Text = Convert::ToString(p.getBirthday().getYear());
				this->comboBox2->Text = Convert::ToString(p.getBirthday().getMonth());
				this->comboBox3->Text = Convert::ToString(p.getBirthday().getDay());
				this->textBox4->Text = marshal_as<String^>(p.getPID());
				this->textBox5->Text = marshal_as<String^>(p.getDiag());
				this->textBox3->Text = marshal_as<String^>(p.getAddress());
				for (int i = 0; i < p.getNumberofBP();i++) this->listBox1->Items->Add(Convert::ToString(p.getBP(i)));
				for (int i = 1; i <= p.getNumberofBP(); i++) this->chart1->Series["BP"]->Points->AddXY(i, p.getBP(i - 1));
				delete[] bp;
			}
		}
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
	{
		try
		{
			if (this->listBox1->Items->Count >= 5)
			{
				initialSetting();
				if (p.getBirthday().getYear() >= 1900 && p.getAge() >= 0 && p.getBirthday().getMonth() >= 1 && p.getBirthday().getMonth() <= 12 && p.getBirthday().getDay() >= 1 && p.getBirthday().getDay() <= 31)
				{
					// save file
					string file = p.getPID() + ".txt";
					StreamWriter ^ f = gcnew StreamWriter(marshal_as<String^>(file));						
						f->WriteLine(marshal_as<String^>(p.getPID()));
						f->WriteLine(marshal_as<String^>(p.getName()));
						f->WriteLine(Convert::ToString(p.getBirthday().getYear()));
						f->WriteLine(Convert::ToString(p.getBirthday().getMonth()));
						f->WriteLine(Convert::ToString(p.getBirthday().getDay()));
						f->WriteLine(marshal_as<String^>(p.getAddress()));
						f->WriteLine(marshal_as<String^>(p.getDiag()));
						for (int i = 0; i < p.getNumberofBP(); i++) f->WriteLine(Convert::ToString(p.getBP(i)));
					f->Close();
					delete[] bp;
					MessageBox::Show("已存檔!", "存檔訊息", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
				else MessageBox::Show("生日不符規定!", "錯誤訊息", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
			else MessageBox::Show("血壓測量數最少為5次!", "錯誤訊息", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		catch (Exception ^ e)
		{
			MessageBox::Show(e->Message, "錯誤訊息", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private: System::Void saveAsToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog;
		saveFileDialog1->InitialDirectory = "c:\\"; //	打開時預設位置在C:
		saveFileDialog1->Filter = "txt files (*.txt)|*.txt|All files(*.*)|*.*"; //	存成txt檔
		saveFileDialog1->FilterIndex = 2;
		saveFileDialog1->RestoreDirectory = true; openFileDialog1->RestoreDirectory = true;

		if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			if ((saveFileDialog1->FileName) != nullptr) //	所存的檔案不是空的
			{
				try
				{
					if (this->listBox1->Items->Count >= 5)
					{
						initialSetting();
						if (p.getBirthday().getYear() >= 1900 && p.getAge() >= 0 && p.getBirthday().getMonth() >= 1 && p.getBirthday().getMonth() <= 12 && p.getBirthday().getDay() >= 1 && p.getBirthday().getDay() <= 31)
						{
							// save file
							String ^ File = saveFileDialog1->FileName;
							StreamWriter ^ f = gcnew StreamWriter(File);
								f->WriteLine(marshal_as<String^>(p.getPID()));
								f->WriteLine(marshal_as<String^>(p.getName()));
								f->WriteLine(Convert::ToString(p.getBirthday().getYear()));
								f->WriteLine(Convert::ToString(p.getBirthday().getMonth()));
								f->WriteLine(Convert::ToString(p.getBirthday().getDay()));
								f->WriteLine(marshal_as<String^>(p.getAddress()));
								f->WriteLine(marshal_as<String^>(p.getDiag()));
								for (int i = 0; i < p.getNumberofBP(); i++) f->WriteLine(Convert::ToString(p.getBP(i)));
							f->Close();
							delete[] bp;
							MessageBox::Show("已存檔!", "存檔訊息", MessageBoxButtons::OK, MessageBoxIcon::Information);
						}
						else MessageBox::Show("生日不符規定!", "錯誤訊息", MessageBoxButtons::OK, MessageBoxIcon::Warning);
					}
					else MessageBox::Show("血壓測量數最少為5次!", "錯誤訊息", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				}
				catch (Exception ^ e)
				{
					MessageBox::Show(e->Message, "錯誤訊息", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}
		}
	}


};
}
