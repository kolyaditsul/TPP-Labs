#pragma once
 

namespace Project22 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private: System::Windows::Forms::GroupBox^ groupBox1;





	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ діїToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ додатиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ завантажитиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ оновитиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ видалитиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ проПрограмуToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ вихідToolStripMenuItem;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;

	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->діїToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->додатиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->завантажитиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->оновитиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->видалитиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->проПрограмуToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->вихідToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5
			});
			this->dataGridView1->Location = System::Drawing::Point(12, 49);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(1056, 508);
			this->dataGridView1->TabIndex = 0;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L" Код";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 125;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Назва";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 125;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Інгрідієнти";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 240;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Тип страви";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 125;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Час приготування (хв)";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			this->Column5->Width = 125;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Location = System::Drawing::Point(1086, 129);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(147, 293);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Дії";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &MyForm::groupBox1_Enter);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(20, 211);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(112, 38);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Видалити";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(20, 151);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(112, 39);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Завантажити";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(20, 91);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(112, 37);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Оновити";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(20, 35);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(112, 39);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Додати";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->діїToolStripMenuItem,
					this->проПрограмуToolStripMenuItem, this->вихідToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1256, 28);
			this->menuStrip1->TabIndex = 3;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// діїToolStripMenuItem
			// 
			this->діїToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->додатиToolStripMenuItem,
					this->завантажитиToolStripMenuItem, this->оновитиToolStripMenuItem, this->видалитиToolStripMenuItem
			});
			this->діїToolStripMenuItem->Name = L"діїToolStripMenuItem";
			this->діїToolStripMenuItem->Size = System::Drawing::Size(41, 24);
			this->діїToolStripMenuItem->Text = L"Дії";
			// 
			// додатиToolStripMenuItem
			// 
			this->додатиToolStripMenuItem->Name = L"додатиToolStripMenuItem";
			this->додатиToolStripMenuItem->Size = System::Drawing::Size(182, 26);
			this->додатиToolStripMenuItem->Text = L"Додати";
			this->додатиToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::додатиToolStripMenuItem_Click);
			// 
			// завантажитиToolStripMenuItem
			// 
			this->завантажитиToolStripMenuItem->Name = L"завантажитиToolStripMenuItem";
			this->завантажитиToolStripMenuItem->Size = System::Drawing::Size(182, 26);
			this->завантажитиToolStripMenuItem->Text = L"Завантажити";
			this->завантажитиToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::завантажитиToolStripMenuItem_Click);
			// 
			// оновитиToolStripMenuItem
			// 
			this->оновитиToolStripMenuItem->Name = L"оновитиToolStripMenuItem";
			this->оновитиToolStripMenuItem->Size = System::Drawing::Size(182, 26);
			this->оновитиToolStripMenuItem->Text = L"Оновити";
			this->оновитиToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::оновитиToolStripMenuItem_Click);
			// 
			// видалитиToolStripMenuItem
			// 
			this->видалитиToolStripMenuItem->Name = L"видалитиToolStripMenuItem";
			this->видалитиToolStripMenuItem->Size = System::Drawing::Size(182, 26);
			this->видалитиToolStripMenuItem->Text = L"Видалити";
			this->видалитиToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::видалитиToolStripMenuItem_Click);
			// 
			// проПрограмуToolStripMenuItem
			// 
			this->проПрограмуToolStripMenuItem->Name = L"проПрограмуToolStripMenuItem";
			this->проПрограмуToolStripMenuItem->Size = System::Drawing::Size(124, 24);
			this->проПрограмуToolStripMenuItem->Text = L"Про програму";
			this->проПрограмуToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::проПрограмуToolStripMenuItem_Click);
			// 
			// вихідToolStripMenuItem
			// 
			this->вихідToolStripMenuItem->Name = L"вихідToolStripMenuItem";
			this->вихідToolStripMenuItem->Size = System::Drawing::Size(60, 24);
			this->вихідToolStripMenuItem->Text = L"Вихід";
			this->вихідToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::вихідToolStripMenuItem_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1256, 569);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->dataGridView1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
// Кнопки додавання  
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	CommonButtonClick();
}
private: System::Void додатиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	CommonButtonClick();
}
 
private: void CommonButtonClick() {
    if (dataGridView1->SelectedRows->Count != 1)
    {
        MessageBox::Show("Потрібно обрати один рядок", "Зверніть увагу");
        return;
    }

    int index = dataGridView1->SelectedRows[0]->Index;
    if (dataGridView1->Rows[index]->Cells[0]->Value == nullptr ||
        dataGridView1->Rows[index]->Cells[1]->Value == nullptr ||
        dataGridView1->Rows[index]->Cells[2]->Value == nullptr ||
        dataGridView1->Rows[index]->Cells[3]->Value == nullptr ||
        dataGridView1->Rows[index]->Cells[4]->Value == nullptr) {
        MessageBox::Show("Не всі дані є", "Зверніть увагу");
        return;
    }

    String^ id = dataGridView1->Rows[index]->Cells[0]->Value->ToString();
    String^ name = dataGridView1->Rows[index]->Cells[1]->Value->ToString();
    String^ ing = dataGridView1->Rows[index]->Cells[2]->Value->ToString();
    String^ type = dataGridView1->Rows[index]->Cells[3]->Value->ToString();
    String^ time = dataGridView1->Rows[index]->Cells[4]->Value->ToString();
    
    String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=Database_my.mdb";
    OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);
    dbConnection->Open();
    
    String^ query = "INSERT INTO [Recipes] VALUES (" + id + ",'" + name + "','" + ing + "','" + type + "','" + time + "')";
    OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);

    if (dbCommand->ExecuteNonQuery() != 1)
        MessageBox::Show("Помилка у виконанні", "Помилка");
    else
        MessageBox::Show("Дані додані", "Ок");

    dbConnection->Close();
}
// Кнопки оновлення
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	CommonButtonClick1();
}
private: System::Void оновитиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	CommonButtonClick1();
}

private: void CommonButtonClick1() {
	if (dataGridView1->SelectedRows->Count != 1) {
		MessageBox::Show("Потрібно обрати один рядок", "Зверніть увагу");
		return;
	}

	int index = dataGridView1->SelectedRows[0]->Index;
	if (dataGridView1->Rows[index]->Cells[0]->Value == nullptr ||
		dataGridView1->Rows[index]->Cells[1]->Value == nullptr ||
		dataGridView1->Rows[index]->Cells[2]->Value == nullptr ||
		dataGridView1->Rows[index]->Cells[3]->Value == nullptr ||
		dataGridView1->Rows[index]->Cells[4]->Value == nullptr) {
		MessageBox::Show("Не всі дані є", "Зверніть увагу");
		return;
	}

	String^ id = dataGridView1->Rows[index]->Cells[0]->Value->ToString();
	String^ name = dataGridView1->Rows[index]->Cells[1]->Value->ToString();
	String^ ing = dataGridView1->Rows[index]->Cells[2]->Value->ToString();
	String^ type = dataGridView1->Rows[index]->Cells[3]->Value->ToString();
	String^ time = dataGridView1->Rows[index]->Cells[4]->Value->ToString();
	String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=Database_my.mdb";
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

	try {
		dbConnection->Open();

		String^ query = "UPDATE [Recipes] SET Назва=?, Інгрідієнти=?, [Тип страви]=?, [Час виконання (хв)]=? WHERE Код = ?";
		OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);

		// Використовуємо параметри, щоб уникнути впровадження SQL і обробляти типи даних
		dbCommand->Parameters->AddWithValue("@Name", name);
		dbCommand->Parameters->AddWithValue("@Ingredients", ing);
		dbCommand->Parameters->AddWithValue("@Type", type);
		dbCommand->Parameters->AddWithValue("@Time", time);
		dbCommand->Parameters->AddWithValue("@ID", id);

		if (dbCommand->ExecuteNonQuery() != 1)
			MessageBox::Show("Помилка у виконанні", "Помилка");
		else
			MessageBox::Show("Дані змінені", "Ок");
	}
	catch (OleDbException^ ex) {
		// Обробка винятку  
		MessageBox::Show("Помилка бази даних: " + ex->Message, "Помилка");
	}
	finally {
		dbConnection->Close();
	}
	 
}
//Кнопки завантаження
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	CommonButtonClick2();
}
private: System::Void завантажитиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	CommonButtonClick2();
}
private: void CommonButtonClick2() {
	String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=Database_my.mdb";
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

	dbConnection->Open();
	String^ query = "SELECT * FROM [Recipes]";
	OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);
	OleDbDataReader^ dbReader = dbCommand->ExecuteReader();

	if (dbReader->HasRows == false) {
		MessageBox::Show("Дані відсутні", "Помилка");
	}
	else {
		while (dbReader->Read())
			dataGridView1->Rows->Add(dbReader["Код"], dbReader["Назва"], dbReader["Інгрідієнти"], dbReader["Тип страви"], dbReader["Час приготування (хв)"]);

	}
	dbReader->Close();
	dbConnection->Close();
}
//Кнопки видалення
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	CommonButtonClick3();
}
private: System::Void видалитиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	CommonButtonClick3();
}
	  
 private: void CommonButtonClick3() {
	 if (dataGridView1->SelectedRows->Count != 1)
	 {
		 MessageBox::Show("Потрібно обрати один рядок", "Зверніть увагу");
		 return;
	 }
	 int index = dataGridView1->SelectedRows[0]->Index;
	 if (dataGridView1->Rows[index]->Cells[0]->Value == nullptr ||
		 dataGridView1->Rows[index]->Cells[1]->Value == nullptr ||
		 dataGridView1->Rows[index]->Cells[2]->Value == nullptr ||
		 dataGridView1->Rows[index]->Cells[3]->Value == nullptr ||
		 dataGridView1->Rows[index]->Cells[4]->Value == nullptr) {
		 MessageBox::Show("Не всі дані є", "Зверніть увагу");
		 return;
	 }
	 String^ id = dataGridView1->Rows[index]->Cells[0]->Value->ToString();

	 String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=Database_my.mdb";
	 OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);
	 dbConnection->Open();
	 String^ query = "DELETE FROM [Recipes] WHERE Код=" + id;
	 OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);

	 if (dbCommand->ExecuteNonQuery() != 1)
		 MessageBox::Show("Помилка у виконанні", "Помилка");
	 else {
		 MessageBox::Show("Дані видалені", "Ок");
		 dataGridView1->Rows->RemoveAt(index);
	 }
	 dbConnection->Close();	  
 }
 
 
private: System::Void проПрограмуToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::MessageBox::Show("Програма з роботою БД \"Рецепти\"", "Увага", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Exclamation);
}
private: System::Void вихідToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Close();
}
};
}
