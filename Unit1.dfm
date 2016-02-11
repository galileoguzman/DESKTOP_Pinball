object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'ventana'
  ClientHeight = 405
  ClientWidth = 612
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Visible = True
  PixelsPerInch = 96
  TextHeight = 13
  object plano: TImage
    Left = 0
    Top = 0
    Width = 600
    Height = 400
    OnMouseMove = planoMouseMove
  end
  object Edit1: TEdit
    Left = 216
    Top = 454
    Width = 121
    Height = 21
    TabOrder = 0
    Text = 'Edit1'
    OnKeyDown = Edit1KeyDown
  end
  object Timer1: TTimer
    Interval = 100
    OnTimer = Timer1Timer
    Left = 208
    Top = 184
  end
end
