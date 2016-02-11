//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
int px=400,py=100,velx=5,vely=5;
int bx=250,bancho=100;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
//borra pelota
plano->Canvas->Pen->Color=RGB(255,255,255);
plano->Canvas->Brush->Color=RGB(255,255,255);
 plano->Canvas->Ellipse(px-10,py-10,px+10,py+10);
  plano->Canvas->Rectangle(0,390,bx+600,400);
  //actualizar las coordenadas de pelota
  px=px+velx;
  py=py+vely;
  //validar paredes
  if(px>=590 || px<=10)
	 velx=-velx;
  if(py<=10)
	 vely=-vely;
  //validar barra
	 if(py>=380 && px>=bx && px<=bx+bancho)
	 vely=-vely;
 //dibujar pelota
   plano->Canvas->Pen->Color=RGB(239,206,16);
   plano->Canvas->Brush->Color=RGB(239,206,16);
   plano->Canvas->Ellipse(px-10,py-10,px+10,py+10);
   //dibujar barra

   plano->Canvas->Pen->Color=RGB(128,64,0);
   plano->Canvas->Brush->Color=RGB(128,64,0);
   plano->Canvas->Rectangle(bx,390,bx+bancho,400);


}




void __fastcall TForm1::Edit1KeyDown(TObject *Sender, WORD &Key,
	  TShiftState Shift)
{
if(Key==37)
{
   if(bx>0)
   bx=bx-8;
}
if(Key==39)
{
   if(bx+bancho<600)
   bx=bx+8;
}
}
//---------------------------------------------------------------------------


void __fastcall TForm1::planoMouseMove(TObject *Sender, TShiftState Shift,
	  int X, int Y)
{
  //if(X<bancho/2)
  //return;
   bx=X-bancho/2;
}
//---------------------------------------------------------------------------

