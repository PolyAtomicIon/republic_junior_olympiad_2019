
   TESTER build 100326
   ~~~~~~~~~~~~~~~~~~~

������ - ��������� ��� �������� ������� �� ������ ������. ������ 
���������� ����, ��� ���������� ����������� �� ����������������: 
����������, ������� �����, ������ ���� ��������. ������ �������� ������� 
��������� ��� ���������� ������� � ������ ��� ����� �� ����������������: 
�� ��������� ��������� ��������� ������� �� ������ ������, ��������� ����� 
��������� ����� ����� � �����, ������������� ���������� ������ � ������ �� 
������ ������� ���������� �������, ������������ ������� ����������� 
���������, ����������� � ����������� Testlib. ������ �������� ���������� 
�������� � ������� ��� �������������� �������� ������� �� ���������� �� 
����������������.

(c) �������� �������, 2003-2010
http://acm.timus.ru/tester


   ������������ ����������
   ~~~~~~~~~~~~~~~~~~~~~~~

��� ��������� ����� �� ������ ��������� ����������� ������ ������ - 
��������� ��������.
�� ������ ������������ ������ ��������� ��������� � �������������� �����, 
����� ������ ������������� �������� ������ � ����������� �������� ������. 
�� ������ �������� �������������� ��������� ������ ������ � ��������� 
���������.
������ ��������� ������������ "��� ����" � �� ���������� �� ������ ����� 
�� ����� ������� ���������������.
������������� ��������� ��������, ��� �� ��������� ��������� ���������� 
������������� ���������� � �������� � ����.


   ��������� ��������
   ~~~~~~~~~~~~~~~~~~

��������, ���
- � Windows 95/98/ME �������� �� ��� ����������� �������;
- �� �������������� ������������ 16-������ ���������� � ���������������� 
�����/������.

���� ����� �������� ������ �������, ����������� ���������� ������ 
Ctrl-C. ��� ���� ����� ������� ��������� �������� ��������� �����.


   �������������
   ~~~~~~~~~~~~~

!test.exe

��������� ��������� �� ������ ������. ��� ������� ���������� ����� ���� 
!test.ini � ������� ��������. � ��� ������������� ��� ��������� �������.
��������� � ���������� ��. �����.
������ �������������� ��������������� �� ������ ����� �� ������, ��� 
������� ����� ��������� ����������� ����� ������ ��������� �� ���� ����� �
��������, ������������ ����� ������ � �������� (������ ��� Windows NT � 
����) � ������� �������� �������������� ������ � ���������� (������ ��� 
Windows 2000 � ����). ����� ���������� ��������� ������ ������� ��� 
���������� ����������� ���������.
����������� ��������� ����� ���� Win32-�����������, ����������� ��� DOS, 
Java-�����������, .NET-�����������.

��� �������� ����������� ���� ������ ��� �������� ��������� ����� 0,
��� ��������� - 1, ���� ���������� ������ - 2.


!test.exe <run-prog> [args]

��������� ���� ������� ��������� ������ ��� �������. � ���� ������ 
�������� RunProgram � ����� �������� ����� ��������������.

�������:
!test.exe sum.exe
!test.exe c:\dir with space\prog1.exe arg1 arg2
!test.exe java Solution


!test.exe -v [prog [args]]

��������� ��������� �������� ������������ ������. ���� �������� prog �� 
������, �� ������������ �������� RunProgram �� ����� ��������. ��������� 
������ ��������� ���� �� ������������ �����. ���� ���� �����������, �� 
��������� ������ ������� �������� ������ �� ����������� ����� � 
����������� � ��������� ����� ��������. ���� ���� ���������, �� ��� 
�������� ������ ���� �������.

�������:
!test.exe -v validator.exe
!test.exe -v java Validator


!test.exe -ini:<ini-file>

������������ �������������� ���� ��������. �������� <ini-file> ������ 
���� � ����� �����.

������:
!test.exe -ini:ini\d.ini


!test.exe -run:<run-prog>

������ ��������� ��������� <run-prog>. ���� !test.ini ��� ����� �� �����. 
����� �������� ����� ������ ����������� � ������������ (������ ��� 
Windows NT � ����), � ����� ������� �������� �������������� ������ 
(������ ��� Windows 2000 � ����).
���� ��� ��������� �������� ������� ��� ��������� �������� ���������, �� 
run-prog ������� ��������� � �������.

�������:
!test.exe -run:calc
!test.exe -run:"my app.exe"
!test.exe -run:"rar a readme.rar readme.txt"


!test.exe -genini

������������� ���� �������� �� ���������. ���������: ���������� ���� ��� 
����� ��������� � ����� �������� ��� ������ ����� �������� �� ��������, 
��� ����� �������������� ��� �������� ����������, � ����� �������� 
������ ������ �� ����������.


!test.exe -?

�������� ������� �������.


   ���� ��������
   ~~~~~~~~~~~~~

���� �������� �� ��������� ������ ���������� !test.ini.
����������� �����������, ������� ���������� �������� ����� � ������� (;) 
� ������������ �� �������� ������.

������ ����������:

RunProgram     ��������� ������ ����������� ���������. ���� � ��������� 
               ����� ��������� �������.

TestInput      ����� ������ � �������� �������. ��������� ��������� '00' 
               ��� '000' ����� �������� ������� �����. ��������� ���������� 
               � 01 ��� 001, ��������������.

TestAnswer     ����� ������ � ���������� ��������� ������� ��� �����. 
               ��������� ��������� '00' ��� '000' ����� �������� ������� 
               �����.

TestNumber     ���������� ������. �������� AUTO �������� ��������������� 
               ���������� ������. ������������ �������� - 999.

TimeLimit      ����������� ���������� ����� ��� ������ ���������, 
               �������� � ��������. �������� NO ��������� TimeLimit. 
               ����������� ������ ������������ ����� ������ ���������. 
               ��� ������ ������� ��������� �� ������ ����������� � 
               ��������� idleness limit.

MemoryLimit    ����������� ���������� ����� ������, ������� ����� 
               ������������ ����������� ���������, ��������� � ����������. 
               �������� NO ��������� MemoryLimit.

Checker        ����������� ���������. ��� ��������� ����� ����������� ��� 
               �������� �����������. �� ����� ������������ ��������� 
               <input-file> <output-file> <answer-file>, ������� ��������  
               �������������� ���� � �������� �������, ���� � �����������
               ������ ��������� � ��������� �������� ������. ����� 
               �������, ������ ��������� � ����������� Testlib. 
               ����������� �������� #TOKEN ��� ����������� ��������� �� 
               �������, #CHAR - ��� �������� ������������� ���������, 
               #FLOAT <N> (��������, "#FLOAT 3" ��� "#FLOAT -2") - ��� 
               ��������� ������, ���������� ����� � ��������� ������, � 
               �������� ��������� N (����� �����; ������������� ���������� 
               ������ ����� ���������� �����). ����� A � B ��������� 
               �������, ���� Abs(A - B) <= 1.1 * 10^(-N). ����������� 
               ��������� ����� ���� 16-������.

HideCheckerOutput 
               ���� �������� ����� ��������� ����� YES ��� 1, �� ����� 
               ����������� ��������� �����������, � �� ����� ��������� 
               ������ ���� "ok" ���� "wrong answer".

HideProgramOutput 
               ���� �������� ����� ��������� ����� YES ��� 1, �� 
               ���������� ����� ����������� ��������� �����������. � 
               ��������� ������ ����������� ��������� ����� �������� 
               ������ ����� � ������� �������. ���� ���������� ���������, 
               �� �� �������� �������� ��������� ��������, � ����� ����� 
               ��������� ��������� � ����������� Console Manager (conman). 
               ������� ������������� ��������� ���� ����� ������ � 
               ���������� �����.

GenAnswers     ���� �������� ����� ��������� ����� YES ��� 1, �� 
               ���������� ������� ������ � ��������� ������� ����� 
               �������� ������������ ������ ��������� �� ������ �����. 
               NO ��� 0 �������� ���������� ������, AUTO - �����, ��� 
               ������� ��������� ������ �������������� �����, ������ ��� 
               ���������� ����� ������.

Interrupt      ���� �������� ����� ��������� ����� YES ��� 1, �� ������ 
               ������� ����������� ����� ������� ���������� �������. 
               NO ��� 0 - ����������� ������������ � ����� ������.

Pause          ���� �������� ����� ��������� ����� YES ��� 1, �� �� 
               ��������� ������ ������� ���������� �������� ������. 
               NO ��� 0 - ������ ����������� ����������.

InputFile      ����, �� �������� ����������� ��������� ����� ������ 
               ������� ������. �������� #STDIN �������� ���������� ���� 
               (� ���� ������ ����������� ��������� �������� ��������� 
               ��������).

OutputFile     ����, � ������� ����������� ��������� ����� ��������  
               ���������� ������. �������� #STDOUT �������� ���������� 
               ����� (� ���� ������ ����������� ��������� �������� 
               ��������� ��������).

ScorePerTest   �����, ����������� �� ������ ���������� ����. 
               �������������� ��������. �������� �� ��������� - 0.

ScoreAccepted  �����, ����������� �� ����������� ���� ������. 
               �������������� ��������. �������� �� ��������� - 
               ScorePerTest, ���������� �� ���������� ������. � ������ 
               ���������� ����� ����������, ����� �� ��������������.

