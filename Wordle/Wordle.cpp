﻿//---------------------------------------------------------------------------
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <fmx.h>
#include <random>
#pragma hdrstop

#include "Wordle.h"


//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"

TForm1 *Form1;


int State = 1;
std::string AnsKey[] =  {"MONKE", "FROTH", "FLUID"};

//---------------------------------------------------------------------------

std::string selectAnsKey(){

	return AnsKey[std::experimental::randint(0,2)];
}
std::string key (selectAnsKey());


//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{


}
//---------------------------------------------------------------------------


void __fastcall TForm1::QClick(TObject *Sender)
{
	switch (State){
        case 1:
			Disp1->Text = "Q";
			State ++;
			break;
		case 2:
			Disp2->Text = "Q";
			State ++;
			break;
		case 3:
            Disp3->Text = "Q";
			State ++;
			break;
		case 4:
			Disp4->Text = "Q";
			State ++;
			break;
		case 5:
			Disp5->Text = "Q";
            State ++;
			break;
	}

}
//---------------------------------------------------------------------------

void __fastcall TForm1::WClick(TObject *Sender)
{
    switch (State){
        case 1:
			Disp1->Text = "W";
			State ++;
			break;
		case 2:
			Disp2->Text = "W";
			State ++;
			break;
		case 3:
			Disp3->Text = "W";
			State ++;
			break;
		case 4:
			Disp4->Text = "W";
			State ++;
			break;
		case 5:
			Disp5->Text = "W";
            State ++;
			break;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::EClick(TObject *Sender)
{
   switch (State){
        case 1:
			Disp1->Text = "E";
			State ++;
			break;
		case 2:
			Disp2->Text = "E";
			State ++;
			break;
		case 3:
			Disp3->Text = "E";
			State ++;
			break;
		case 4:
			Disp4->Text = "E";
			State ++;
			break;
		case 5:
			Disp5->Text = "E";
            State ++;
			break;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RClick(TObject *Sender)
{
   switch (State){
        case 1:
			Disp1->Text = "R";
			State ++;
			break;
		case 2:
			Disp2->Text = "R";
			State ++;
			break;
		case 3:
			Disp3->Text = "R";
			State ++;
			break;
		case 4:
			Disp4->Text = "R";
			State ++;
			break;
		case 5:
			Disp5->Text = "R";
            State ++;
			break;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::TClick(TObject *Sender)
{
   switch (State){
        case 1:
			Disp1->Text = "T";
			State ++;
			break;
		case 2:
			Disp2->Text = "T";
			State ++;
			break;
		case 3:
			Disp3->Text = "T";
			State ++;
			break;
		case 4:
			Disp4->Text = "T";
			State ++;
			break;
		case 5:
			Disp5->Text = "T";
            State ++;
			break;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::YClick(TObject *Sender)
{
   switch (State){
        case 1:
			Disp1->Text = "Y";
			State ++;
			break;
		case 2:
			Disp2->Text = "Y";
			State ++;
			break;
		case 3:
			Disp3->Text = "Y";
			State ++;
			break;
		case 4:
			Disp4->Text = "Y";
			State ++;
			break;
		case 5:
			Disp5->Text = "Y";
            State ++;
			break;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::UClick(TObject *Sender)
{
   switch (State){
        case 1:
			Disp1->Text = "U";
			State ++;
			break;
		case 2:
			Disp2->Text = "U";
			State ++;
			break;
		case 3:
			Disp3->Text = "U";
			State ++;
			break;
		case 4:
			Disp4->Text = "U";
			State ++;
			break;
		case 5:
			Disp5->Text = "U";
            State ++;
			break;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::IClick(TObject *Sender)
{
   switch (State){
        case 1:
			Disp1->Text = "I";
			State ++;
			break;
		case 2:
			Disp2->Text = "I";
			State ++;
			break;
		case 3:
			Disp3->Text = "I";
			State ++;
			break;
		case 4:
			Disp4->Text = "I";
			State ++;
			break;
		case 5:
			Disp5->Text = "I";
			State ++;
			break;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::OClick(TObject *Sender)
{
   switch (State){
        case 1:
			Disp1->Text = "O";
			State ++;
			break;
		case 2:
			Disp2->Text = "O";
			State ++;
			break;
		case 3:
			Disp3->Text = "O";
			State ++;
			break;
		case 4:
			Disp4->Text = "O";
			State ++;
			break;
		case 5:
			Disp5->Text = "O";
			State ++;
			break;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::PClick(TObject *Sender)
{
   switch (State){
		case 1:
			Disp1->Text = "P";
			State ++;
			break;
		case 2:
			Disp2->Text = "P";
			State ++;
			break;
		case 3:
			Disp3->Text = "P";
			State ++;
			break;
		case 4:
			Disp4->Text = "P";
			State ++;
			break;
		case 5:
			Disp5->Text = "P";
			State ++;
			break;
	}
}
//---------------------------------------------------------------------------


void __fastcall TForm1::DelClick(TObject *Sender)
{


	switch (State){
		case 1:
			Disp1->Text = " ";
			break;
		case 2:
			Disp2->Text = " ";
			State --;
			break;
		case 3:
			Disp3->Text = " ";
			State --;
			break;
		case 4:
			Disp4->Text = " ";
			State --;
			break;
		case 5:
			Disp5->Text = " ";
            State --;
			break;
		default:
			State --;
	}

}
//---------------------------------------------------------------------------

void __fastcall TForm1::AClick(TObject *Sender)
{
    switch (State){
		case 1:
			Disp1->Text = "A";
			State ++;
			break;
		case 2:
			Disp2->Text = "A";
			State ++;
			break;
		case 3:
			Disp3->Text = "A";
			State ++;
			break;
		case 4:
			Disp4->Text = "A";
			State ++;
			break;
		case 5:
			Disp5->Text = "A";
			State ++;
			break;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SClick(TObject *Sender)
{
    switch (State){
		case 1:
			Disp1->Text = "S";
			State ++;
			break;
		case 2:
			Disp2->Text = "S";
			State ++;
			break;
		case 3:
			Disp3->Text = "S";
			State ++;
			break;
		case 4:
			Disp4->Text = "S";
			State ++;
			break;
		case 5:
			Disp5->Text = "S";
			State ++;
			break;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::DClick(TObject *Sender)
{
    switch (State){
		case 1:
			Disp1->Text = "D";
			State ++;
			break;
		case 2:
			Disp2->Text = "D";
			State ++;
			break;
		case 3:
			Disp3->Text = "D";
			State ++;
			break;
		case 4:
			Disp4->Text = "D";
			State ++;
			break;
		case 5:
			Disp5->Text = "D";
			State ++;
			break;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FClick(TObject *Sender)
{
   switch (State){
		case 1:
			Disp1->Text = "F";
			State ++;
			break;
		case 2:
			Disp2->Text = "F";
			State ++;
			break;
		case 3:
			Disp3->Text = "F";
			State ++;
			break;
		case 4:
			Disp4->Text = "F";
			State ++;
			break;
		case 5:
			Disp5->Text = "F";
			State ++;
			break;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::GClick(TObject *Sender)
{
   switch (State){
		case 1:
			Disp1->Text = "G";
			State ++;
			break;
		case 2:
			Disp2->Text = "G";
			State ++;
			break;
		case 3:
			Disp3->Text = "G";
			State ++;
			break;
		case 4:
			Disp4->Text = "G";
			State ++;
			break;
		case 5:
			Disp5->Text = "G";
			State ++;
			break;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::HClick(TObject *Sender)
{
    switch (State){
		case 1:
			Disp1->Text = "H";
			State ++;
			break;
		case 2:
			Disp2->Text = "H";
			State ++;
			break;
		case 3:
			Disp3->Text = "H";
			State ++;
			break;
		case 4:
			Disp4->Text = "H";
			State ++;
			break;
		case 5:
			Disp5->Text = "H";
			State ++;
			break;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::JClick(TObject *Sender)
{
    switch (State){
		case 1:
			Disp1->Text = "J";
			State ++;
			break;
		case 2:
			Disp2->Text = "J";
			State ++;
			break;
		case 3:
			Disp3->Text = "J";
			State ++;
			break;
		case 4:
			Disp4->Text = "J";
			State ++;
			break;
		case 5:
			Disp5->Text = "J";
			State ++;
			break;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::KClick(TObject *Sender)
{
    switch (State){
		case 1:
			Disp1->Text = "K";
			State ++;
			break;
		case 2:
			Disp2->Text = "K";
			State ++;
			break;
		case 3:
			Disp3->Text = "K";
			State ++;
			break;
		case 4:
			Disp4->Text = "K";
			State ++;
			break;
		case 5:
			Disp5->Text = "K";
			State ++;
			break;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::LClick(TObject *Sender)
{
     switch (State){
		case 1:
			Disp1->Text = "L";
			State ++;
			break;
		case 2:
			Disp2->Text = "L";
			State ++;
			break;
		case 3:
			Disp3->Text = "L";
			State ++;
			break;
		case 4:
			Disp4->Text = "L";
			State ++;
			break;
		case 5:
			Disp5->Text = "L";
			State ++;
			break;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ZClick(TObject *Sender)
{
   switch (State){
		case 1:
			Disp1->Text = "Z";
			State ++;
			break;
		case 2:
			Disp2->Text = "Z";
			State ++;
			break;
		case 3:
			Disp3->Text = "Z";
			State ++;
			break;
		case 4:
			Disp4->Text = "Z";
			State ++;
			break;
		case 5:
			Disp5->Text = "Z";
			State ++;
			break;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::XClick(TObject *Sender)
{
     switch (State){
		case 1:
			Disp1->Text = "X";
			State ++;
			break;
		case 2:
			Disp2->Text = "X";
			State ++;
			break;
		case 3:
			Disp3->Text = "X";
			State ++;
			break;
		case 4:
			Disp4->Text = "X";
			State ++;
			break;
		case 5:
			Disp5->Text = "X";
			State ++;
			break;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::CClick(TObject *Sender)
{
    switch (State){
		case 1:
			Disp1->Text = "C";
			State ++;
			break;
		case 2:
			Disp2->Text = "C";
			State ++;
			break;
		case 3:
			Disp3->Text = "C";
			State ++;
			break;
		case 4:
			Disp4->Text = "C";
			State ++;
			break;
		case 5:
			Disp5->Text = "C";
			State ++;
			break;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::VClick(TObject *Sender)
{
   switch (State){
		case 1:
			Disp1->Text = "V";
			State ++;
			break;
		case 2:
			Disp2->Text = "V";
			State ++;
			break;
		case 3:
			Disp3->Text = "V";
			State ++;
			break;
		case 4:
			Disp4->Text = "V";
			State ++;
			break;
		case 5:
			Disp5->Text = "V";
			State ++;
			break;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BClick(TObject *Sender)
{
    switch (State){
		case 1:
			Disp1->Text = "B";
			State ++;
			break;
		case 2:
			Disp2->Text = "B";
			State ++;
			break;
		case 3:
			Disp3->Text = "B";
			State ++;
			break;
		case 4:
			Disp4->Text = "B";
			State ++;
			break;
		case 5:
			Disp5->Text = "B";
			State ++;
			break;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::NClick(TObject *Sender)
{
    switch (State){
		case 1:
			Disp1->Text = "N";
			State ++;
			break;
		case 2:
			Disp2->Text = "N";
			State ++;
			break;
		case 3:
			Disp3->Text = "N";
			State ++;
			break;
		case 4:
			Disp4->Text = "N";
			State ++;
			break;
		case 5:
			Disp5->Text = "N";
			State ++;
			break;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::MClick(TObject *Sender)
{
    switch (State){
		case 1:
			Disp1->Text = "M";
			State ++;
			break;
		case 2:
			Disp2->Text = "M";
			State ++;
			break;
		case 3:
			Disp3->Text = "M";
			State ++;
			break;
		case 4:
			Disp4->Text = "M";
			State ++;
			break;
		case 5:
			Disp5->Text = "M";
			State ++;
			break;
	}
}
//---------------------------------------------------------------------------


void __fastcall TForm1::CheckClick(TObject *Sender)
{
	String ans = Disp1->Text + Disp2->Text + Disp3->Text + Disp4->Text + Disp5->Text;
	//Disp 1
	if(key[0] == Disp1->Text){
		Disp1->FontColor=claLawngreen;

	}else if(Disp1->Text == key[1] || Disp1->Text == key[2] || Disp1->Text == key[3] ||
		Disp1->Text == key[4]){
			Disp1->FontColor=claYellow;
	}else {
			Disp1->FontColor=claRed;
	}
	//Disp 2
	if(key[1] == Disp2->Text){
		Disp2->FontColor=claLawngreen;

	}else if(Disp2->Text == key[0] || Disp2->Text == key[2] || Disp2->Text == key[3] ||
		Disp2->Text == key[4]){
			Disp2->FontColor=claYellow;
	}else {
			Disp2->FontColor=claRed;
	}
	//Disp 3
    if(key[2] == Disp3->Text){
		Disp3->FontColor=claLawngreen;

	}else if(Disp3->Text == key[0] || Disp3->Text == key[1] || Disp3->Text == key[3] ||
		Disp3->Text == key[4]){
			Disp3->FontColor=claYellow;
	}else {
			Disp3->FontColor=claRed;
	}
    //Disp 4
	if(key[3] == Disp4->Text){
		Disp4->FontColor=claLawngreen;

	}else if(Disp4->Text == key[0] || Disp4->Text == key[1] || Disp4->Text == key[2] ||
		Disp4->Text == key[4]){
			Disp4->FontColor=claYellow;
	}else {
			Disp4->FontColor=claRed;
	}
	//Disp 5
	if(key[4] == Disp5->Text){
		Disp5->FontColor=claLawngreen;

	}else if(Disp5->Text == key[1] || Disp5->Text == key[2] || Disp5->Text == key[3] ||
		Disp5->Text == key[0]){
			Disp5->FontColor=claYellow;
	}else {
			Disp5->FontColor=claRed;
	}

}
//---------------------------------------------------------------------------

