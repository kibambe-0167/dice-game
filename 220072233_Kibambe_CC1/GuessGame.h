#pragma once
#include <iostream>
#include <ctime>
#include <cstdlib>

namespace My220072233KibambeCC1 {
	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for GuessGame
	/// </summary>
	public ref class GuessGame : public System::Windows::Forms::Form
	{
	public:
		GuessGame(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		// to hold the three dices values.
		int dice1, dice2, dice3;

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~GuessGame()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ randomValues;
	protected:

	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ txtTimes;
	private: System::Windows::Forms::RichTextBox^ logs;



	private: System::Windows::Forms::PictureBox^ pictureBoxDice1;
	private: System::Windows::Forms::PictureBox^ pictureBoxDice2;
	private: System::Windows::Forms::PictureBox^ pictureBoxDice3;




	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->randomValues = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->txtTimes = (gcnew System::Windows::Forms::TextBox());
			this->logs = (gcnew System::Windows::Forms::RichTextBox());
			this->pictureBoxDice1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxDice2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxDice3 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxDice1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxDice2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxDice3))->BeginInit();
			this->SuspendLayout();
			// 
			// randomValues
			// 
			this->randomValues->Location = System::Drawing::Point(12, 12);
			this->randomValues->Name = L"randomValues";
			this->randomValues->Size = System::Drawing::Size(472, 45);
			this->randomValues->TabIndex = 0;
			this->randomValues->Text = L"Throw Three Dice";
			this->randomValues->UseVisualStyleBackColor = true;
			this->randomValues->Click += gcnew System::EventHandler(this, &GuessGame::randomValues_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 230);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(288, 45);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Try Guess N Times";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &GuessGame::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(12, 295);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(288, 45);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Guess Until Correct";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &GuessGame::button3_Click);
			// 
			// txtTimes
			// 
			this->txtTimes->Location = System::Drawing::Point(325, 241);
			this->txtTimes->Name = L"txtTimes";
			this->txtTimes->Size = System::Drawing::Size(159, 22);
			this->txtTimes->TabIndex = 3;
			// 
			// logs
			// 
			this->logs->Location = System::Drawing::Point(548, 12);
			this->logs->MinimumSize = System::Drawing::Size(364, 530);
			this->logs->Name = L"logs";
			this->logs->Size = System::Drawing::Size(364, 530);
			this->logs->TabIndex = 4;
			this->logs->Text = L"";
			// 
			// pictureBoxDice1
			// 
			this->pictureBoxDice1->Location = System::Drawing::Point(12, 85);
			this->pictureBoxDice1->Name = L"pictureBoxDice1";
			this->pictureBoxDice1->Size = System::Drawing::Size(136, 98);
			this->pictureBoxDice1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBoxDice1->TabIndex = 5;
			this->pictureBoxDice1->TabStop = false;
			// 
			// pictureBoxDice2
			// 
			this->pictureBoxDice2->Location = System::Drawing::Point(180, 85);
			this->pictureBoxDice2->Name = L"pictureBoxDice2";
			this->pictureBoxDice2->Size = System::Drawing::Size(136, 98);
			this->pictureBoxDice2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBoxDice2->TabIndex = 6;
			this->pictureBoxDice2->TabStop = false;
			// 
			// pictureBoxDice3
			// 
			this->pictureBoxDice3->Location = System::Drawing::Point(348, 85);
			this->pictureBoxDice3->Name = L"pictureBoxDice3";
			this->pictureBoxDice3->Size = System::Drawing::Size(136, 98);
			this->pictureBoxDice3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBoxDice3->TabIndex = 7;
			this->pictureBoxDice3->TabStop = false;
			// 
			// GuessGame
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(924, 554);
			this->Controls->Add(this->pictureBoxDice3);
			this->Controls->Add(this->pictureBoxDice2);
			this->Controls->Add(this->pictureBoxDice1);
			this->Controls->Add(this->logs);
			this->Controls->Add(this->txtTimes);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->randomValues);
			this->Name = L"GuessGame";
			this->Text = L"Guessing Game";
			this->Load += gcnew System::EventHandler(this, &GuessGame::GuessGame_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxDice1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxDice2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxDice3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void GuessGame_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void randomValues_Click(System::Object^ sender, System::EventArgs^ e) {
		// throw three dice method
		// clear the logs
		logs->Clear();
		// show dices and get the random values.
		setRandomNum();
		// set the picture
		setImages();
		// log the random values to rich box
		logs->AppendText("Thrown dice values = " + dice1 + "" + dice2 + "" + dice3);
		// sort the dices
		sortDices();
		logs->AppendText("\nSorted dice values = " + dice1 + "" + dice2 + "" + dice3);
		logs->AppendText("\n===================================\n");
	}
	// set images for dices
	void setImages() {
		pictureBoxDice1->Image = Image::FromFile("./dice" + dice1 + ".jpeg");
		pictureBoxDice2->Image = Image::FromFile("./dice" + dice2 + ".jpeg");
		pictureBoxDice3->Image = Image::FromFile("./dice" + dice3 + ".jpeg");
	}
	// set the random number to the dices
	void setRandomNum() {
		srand(time(NULL));
		dice1 = rand() % 6 + 1;
		dice2 = rand() % 6 + 1;
		dice3 = rand() % 6 + 1;
	}
	// set the dices, so that the first have the lower number and last highest value.
	void sortDices() {
		int temp;
		if (dice1 > dice2) {
			temp = dice1;
			dice1 = dice2;
			dice2 = temp;
		}
		if (dice1 > dice3) {
			temp = dice1;
			dice1 = dice3;
			dice3 = temp;
		}
		if (dice2 > dice3) {
			temp = dice2;
			dice2 = dice3;
			dice3 = temp;
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		// guess until correct
		// get the number from the user.
		int txtTimesNumber = Convert::ToInt32(txtTimes->Text);
		int counter = 1;
		srand(time(NULL));
		do{
			int d1 = rand() % 6 + 1;
			int d2 = rand() % 6 + 1;
			int d3 = rand() % 6 + 1;
			if (d1 == dice1 && d2 == dice2 && d3 == dice3) {
				logs->AppendText("\nGuess " + counter + " = " + d1 + "" + d2 + "" + d3 + " EXACT MATCH\n\n");
				break;
			}
			else if (d1 == d2 && d3 == d2) {
				if (d1 % 2 == 0 && d2 % 2 == 0 && d3 % 2 == 0) {
					logs->AppendText("\nGuess " + counter + " = " + d1 + "" + d2 + "" + d3 + " triple *** all evens");
				}
				else if (d1 % 2 == 1 && d2 % 2 == 1 && d3 % 2 == 1) {
					logs->AppendText("\nGuess " + counter + " = " + d1 + "" + d2 + "" + d3 + " triple *** all odd");
				}
				else {
					logs->AppendText("\nGuess " + counter + " = " + d1 + "" + d2 + "" + d3 + " triple ***");
				}
			}
			else if (d1 == d2 || d2 == d3 || d1 == d3) {
				if (d1 % 2 == 0 && d2 % 2 == 0 && d3 % 2 == 0) {
					logs->AppendText("\nGuess " + counter + " = " + d1 + "" + d2 + "" + d3 + " double *** all evens");
				}
				else if (d1 % 2 == 1 && d2 % 2 == 1 && d3 % 2 == 1) {
					logs->AppendText("\nGuess " + counter + " = " + d1 + "" + d2 + "" + d3 + " double *** all odd");
				}
				else {
					logs->AppendText("\nGuess " + counter + " = " + d1 + "" + d2 + "" + d3 + " double ***");
				}
			}
			else {
				logs->AppendText("\nGuess " + counter + " = " + d1 + "" + d2 + "" + d3);
			}
			counter++;
		} while (counter <= txtTimesNumber);
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		// guess until correct
		//
		logs->AppendText("\n\nGuessing Until Exact Match\n===============================\n\n");
		int counter = 1;
		srand(time(NULL));
		do {
			int d1 = rand() % 6 + 1;
			int d2 = rand() % 6 + 1;
			int d3 = rand() % 6 + 1;
			if (d1 == dice1 && d2 == dice2 && d3 == dice3) {
				logs->AppendText("\nGuess " + counter + " = " + d1 + "" + d2 + "" + d3 + " EXACT MATCH");
				break;
			}
			else if (d1 == d2 && d3 == d2) {
				if (d1 % 2 == 0 && d2 % 2 == 0 && d3 % 2 == 0) {
					logs->AppendText("\nGuess " + counter + " = " + d1 + "" + d2 + "" + d3 + " triple *** all evens");
				}
				else if (d1 % 2 == 1 && d2 % 2 == 1 && d3 % 2 == 1) {
					logs->AppendText("\nGuess " + counter + " = " + d1 + "" + d2 + "" + d3 + " triple *** all odd");
				}
				else {
					logs->AppendText("\nGuess " + counter + " = " + d1 + "" + d2 + "" + d3 + " triple ***");
				}
			}
			else if (d1 == d2 || d2 == d3 || d1 == d3) {
				if (d1 % 2 == 0 && d2 % 2 == 0 && d3 % 2 == 0) {
					logs->AppendText("\nGuess " + counter + " = " + d1 + "" + d2 + "" + d3 + " double *** all evens");
				}
				else if (d1 % 2 == 1 && d2 % 2 == 1 && d3 % 2 == 1) {
					logs->AppendText("\nGuess " + counter + " = " + d1 + "" + d2 + "" + d3 + " double *** all odd");
				}
				else {
					logs->AppendText("\nGuess " + counter + " = " + d1 + "" + d2 + "" + d3 + " double ***");
				}
			}
			else {
				logs->AppendText("\nGuess " + counter + " = " + d1 + "" + d2 + "" + d3);
			}
			counter++;
		} while (true);
	}
	};
}
