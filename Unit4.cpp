//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit4.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
int x1, x2, y1, y2;

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	Canvas->MoveTo(atoi(Form1->Edit1->Text.c_str()),atoi(Form1->Edit2->Text.c_str()));
	Canvas->LineTo(atoi(Form1->Edit3->Text.c_str()),atoi(Form1->Edit4->Text.c_str()));
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
   Canvas->Rectangle (atoi(Form1->Edit1->Text.c_str()),atoi(Form1->Edit2->Text.c_str()), atoi(Form1->Edit3->Text.c_str()),atoi(Form1->Edit4->Text.c_str()));
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button3Click(TObject *Sender)
{
	Canvas->Ellipse(atoi(Form1->Edit1->Text.c_str()),atoi(Form1->Edit2->Text.c_str()), atoi(Form1->Edit3->Text.c_str()),atoi(Form1->Edit4->Text.c_str()));
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button4Click(TObject *Sender)
{
	Canvas->Pen->Color = ColorBox1->Selected;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button5Click(TObject *Sender)
{
	Canvas->Pixels[atoi(Form1->Edit1->Text.c_str())][atoi(Form1->Edit2->Text.c_str())]=clRed;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button6Click(TObject *Sender)
{
	 InvalidateRect ( this->Handle, NULL, True );	
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button7Click(TObject *Sender)
{
	   Canvas->Pen->Width=atoi(Form1->Edit5->Text.c_str());
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button8Click(TObject *Sender)
{
	Form1->ColorDialog1->Execute();
	Canvas->Brush->Color = Form1->ColorDialog1->Color;
}

//---------------------------------------------------------------------------


void __fastcall TForm1::Button9Click(TObject *Sender)
{
	 Canvas->TextOutA(100,100,atoi(Form1->Edit6->Text.c_str()));
}
//---------------------------------------------------------------------------

