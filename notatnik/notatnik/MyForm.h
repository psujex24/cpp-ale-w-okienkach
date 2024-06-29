#pragma once

namespace notatnik {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    public ref class MyForm : public System::Windows::Forms::Form
    {
    public:
        MyForm(void)
        {
            InitializeComponent();
        }

    protected:
        ~MyForm()
        {
            if (components)
            {
                delete components;
            }
        }
    private: System::Windows::Forms::RichTextBox^ tresc;
    protected:


    private: System::Windows::Forms::MenuStrip^ menuStrip1;
    private: System::Windows::Forms::ToolStripMenuItem^ plikToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ nowyToolStripMenuItem;

    private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
    private: System::Windows::Forms::ToolStripSeparator^ toolStripMenuItem1;
    private: System::Windows::Forms::ToolStripMenuItem^ otwórzToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ zapiszToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ zapiszJakoToolStripMenuItem;
    private: System::Windows::Forms::ToolStripSeparator^ toolStripMenuItem2;
    private: System::Windows::Forms::ToolStripMenuItem^ zakoñczToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ edycjaToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ wytnijCtrlXToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ kopiujCtrlToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ wklToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ formatToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ zawijanieWierszyToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ czcionkaToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ pomocToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ informacjeToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ oProgramieToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ zapraszamNaGitHubaToolStripMenuItem;



    private:
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            this->tresc = (gcnew System::Windows::Forms::RichTextBox());
            this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
            this->plikToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->nowyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripSeparator());
            this->otwórzToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->zapiszToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->zapiszJakoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->toolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripSeparator());
            this->zakoñczToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->edycjaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->wytnijCtrlXToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->kopiujCtrlToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->wklToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->formatToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->zawijanieWierszyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->czcionkaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->pomocToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->informacjeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->oProgramieToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->zapraszamNaGitHubaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
            this->menuStrip1->SuspendLayout();
            this->SuspendLayout();
            // 
            // tresc
            // 
            this->tresc->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tresc->Location = System::Drawing::Point(0, 24);
            this->tresc->Name = L"tresc";
            this->tresc->Size = System::Drawing::Size(284, 237);
            this->tresc->TabIndex = 0;
            this->tresc->Text = L"";
            this->tresc->TextChanged += gcnew System::EventHandler(this, &MyForm::richTextBox1_TextChanged);
            // 
            // menuStrip1
            // 
            this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
                this->plikToolStripMenuItem,
                    this->edycjaToolStripMenuItem, this->formatToolStripMenuItem, this->pomocToolStripMenuItem
            });
            this->menuStrip1->Location = System::Drawing::Point(0, 0);
            this->menuStrip1->Name = L"menuStrip1";
            this->menuStrip1->Size = System::Drawing::Size(284, 24);
            this->menuStrip1->TabIndex = 1;
            this->menuStrip1->Text = L"menuStrip1";
            // 
            // plikToolStripMenuItem
            // 
            this->plikToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
                this->nowyToolStripMenuItem,
                    this->toolStripMenuItem1, this->otwórzToolStripMenuItem, this->zapiszToolStripMenuItem, this->zapiszJakoToolStripMenuItem, this->toolStripMenuItem2,
                    this->zakoñczToolStripMenuItem
            });
            this->plikToolStripMenuItem->Name = L"plikToolStripMenuItem";
            this->plikToolStripMenuItem->Size = System::Drawing::Size(38, 20);
            this->plikToolStripMenuItem->Text = L"&Plik";
            // 
            // nowyToolStripMenuItem
            // 
            this->nowyToolStripMenuItem->Name = L"nowyToolStripMenuItem";
            this->nowyToolStripMenuItem->Size = System::Drawing::Size(180, 22);
            this->nowyToolStripMenuItem->Text = L"&Nowy";
            // 
            // toolStripMenuItem1
            // 
            this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
            this->toolStripMenuItem1->Size = System::Drawing::Size(177, 6);
            // 
            // otwórzToolStripMenuItem
            // 
            this->otwórzToolStripMenuItem->Name = L"otwórzToolStripMenuItem";
            this->otwórzToolStripMenuItem->Size = System::Drawing::Size(180, 22);
            this->otwórzToolStripMenuItem->Text = L"&Otwórz";
            this->otwórzToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::otwórzToolStripMenuItem_Click);
            // 
            // zapiszToolStripMenuItem
            // 
            this->zapiszToolStripMenuItem->Name = L"zapiszToolStripMenuItem";
            this->zapiszToolStripMenuItem->Size = System::Drawing::Size(180, 22);
            this->zapiszToolStripMenuItem->Text = L"Za&pisz";
            // 
            // zapiszJakoToolStripMenuItem
            // 
            this->zapiszJakoToolStripMenuItem->Name = L"zapiszJakoToolStripMenuItem";
            this->zapiszJakoToolStripMenuItem->Size = System::Drawing::Size(180, 22);
            this->zapiszJakoToolStripMenuItem->Text = L"Zapi&sz jako ";
            // 
            // toolStripMenuItem2
            // 
            this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
            this->toolStripMenuItem2->Size = System::Drawing::Size(177, 6);
            // 
            // zakoñczToolStripMenuItem
            // 
            this->zakoñczToolStripMenuItem->Name = L"zakoñczToolStripMenuItem";
            this->zakoñczToolStripMenuItem->Size = System::Drawing::Size(180, 22);
            this->zakoñczToolStripMenuItem->Text = L"Zakoñ&cz";
            // 
            // edycjaToolStripMenuItem
            // 
            this->edycjaToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
                this->wytnijCtrlXToolStripMenuItem,
                    this->kopiujCtrlToolStripMenuItem, this->wklToolStripMenuItem
            });
            this->edycjaToolStripMenuItem->Name = L"edycjaToolStripMenuItem";
            this->edycjaToolStripMenuItem->Size = System::Drawing::Size(53, 20);
            this->edycjaToolStripMenuItem->Text = L"&Edycja";
            // 
            // wytnijCtrlXToolStripMenuItem
            // 
            this->wytnijCtrlXToolStripMenuItem->Name = L"wytnijCtrlXToolStripMenuItem";
            this->wytnijCtrlXToolStripMenuItem->Size = System::Drawing::Size(155, 22);
            this->wytnijCtrlXToolStripMenuItem->Text = L"W&ytnij    Ctrl+X";
            // 
            // kopiujCtrlToolStripMenuItem
            // 
            this->kopiujCtrlToolStripMenuItem->Name = L"kopiujCtrlToolStripMenuItem";
            this->kopiujCtrlToolStripMenuItem->Size = System::Drawing::Size(155, 22);
            this->kopiujCtrlToolStripMenuItem->Text = L"Kop&iuj    Ctrl+C";
            // 
            // wklToolStripMenuItem
            // 
            this->wklToolStripMenuItem->Name = L"wklToolStripMenuItem";
            this->wklToolStripMenuItem->Size = System::Drawing::Size(155, 22);
            this->wklToolStripMenuItem->Text = L"Wkle&j     Ctrl+V";
            // 
            // formatToolStripMenuItem
            // 
            this->formatToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
                this->zawijanieWierszyToolStripMenuItem,
                    this->czcionkaToolStripMenuItem
            });
            this->formatToolStripMenuItem->Name = L"formatToolStripMenuItem";
            this->formatToolStripMenuItem->Size = System::Drawing::Size(57, 20);
            this->formatToolStripMenuItem->Text = L"&Format";
            // 
            // zawijanieWierszyToolStripMenuItem
            // 
            this->zawijanieWierszyToolStripMenuItem->Name = L"zawijanieWierszyToolStripMenuItem";
            this->zawijanieWierszyToolStripMenuItem->Size = System::Drawing::Size(165, 22);
            this->zawijanieWierszyToolStripMenuItem->Text = L"Z&awijanie wierszy";
            // 
            // czcionkaToolStripMenuItem
            // 
            this->czcionkaToolStripMenuItem->Name = L"czcionkaToolStripMenuItem";
            this->czcionkaToolStripMenuItem->Size = System::Drawing::Size(165, 22);
            this->czcionkaToolStripMenuItem->Text = L"&Czcionka";
            // 
            // pomocToolStripMenuItem
            // 
            this->pomocToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->informacjeToolStripMenuItem });
            this->pomocToolStripMenuItem->Name = L"pomocToolStripMenuItem";
            this->pomocToolStripMenuItem->Size = System::Drawing::Size(57, 20);
            this->pomocToolStripMenuItem->Text = L"P&omoc";
            // 
            // informacjeToolStripMenuItem
            // 
            this->informacjeToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
                this->oProgramieToolStripMenuItem,
                    this->zapraszamNaGitHubaToolStripMenuItem
            });
            this->informacjeToolStripMenuItem->Name = L"informacjeToolStripMenuItem";
            this->informacjeToolStripMenuItem->Size = System::Drawing::Size(131, 22);
            this->informacjeToolStripMenuItem->Text = L"I&nformacje";
            // 
            // oProgramieToolStripMenuItem
            // 
            this->oProgramieToolStripMenuItem->Name = L"oProgramieToolStripMenuItem";
            this->oProgramieToolStripMenuItem->Size = System::Drawing::Size(193, 22);
            this->oProgramieToolStripMenuItem->Text = L"O p&rogramie";
            // 
            // zapraszamNaGitHubaToolStripMenuItem
            // 
            this->zapraszamNaGitHubaToolStripMenuItem->Name = L"zapraszamNaGitHubaToolStripMenuItem";
            this->zapraszamNaGitHubaToolStripMenuItem->Size = System::Drawing::Size(193, 22);
            this->zapraszamNaGitHubaToolStripMenuItem->Text = L"Zapraszam na gi&tHuba";
            // 
            // openFileDialog1
            // 
            this->openFileDialog1->Filter = L"Text Files|*.txt";
            this->openFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &MyForm::openFileDialog1_FileOk_1);
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(284, 261);
            this->Controls->Add(this->tresc);
            this->Controls->Add(this->menuStrip1);
            this->MainMenuStrip = this->menuStrip1;
            this->Name = L"MyForm";
            this->Text = L"MyForm";
            this->menuStrip1->ResumeLayout(false);
            this->menuStrip1->PerformLayout();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
    private: System::Void openFileDialog1_FileOk_1(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e)
    {
        System::IO::StreamReader^ sr = gcnew System::IO::StreamReader(openFileDialog1->FileName);
        tresc->Text = sr->ReadToEnd();
        sr->Close();
    }

    private: System::Void buttonOpenFile_Click(System::Object^ sender, System::EventArgs^ e)
    {
        
    }
    private: System::Void richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    }
private: System::Void fToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void otwórzToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
    if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
    {
        try
        {
            tresc->LoadFile(openFileDialog1->FileName, RichTextBoxStreamType::PlainText);
        }
        catch(...)
        {
            MessageBox::Show("B³¹d otwarcia pliku. upewnij siê, ¿e Plik istnijee na dysku");
        }
    }
}
};
}
