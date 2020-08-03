//
//	hsp3cnv(3.5b5) generated source
//	[watch01.ax]
//
#include "hsp3r.h"

#define _HSP3CNV_DATE "2018/12/13"
#define _HSP3CNV_TIME "00:37:51"
#define _HSP3CNV_MAXVAR 7
#define _HSP3CNV_MAXHPI 0
#define _HSP3CNV_VERSION 0x350
#define _HSP3CNV_BOOTOPT 8192

/*-----------------------------------------------------------*/

static PVal *Var_0;
static PVal *Var_1;
static PVal *Var_2;
static PVal *Var_3;
static PVal *Var_4;
static PVal *Var_5;
static PVal *Var_6;

/*-----------------------------------------------------------*/

void __HspEntry( void ) {
	// Var initalize
	Var_0 = &mem_var[0];
	Var_1 = &mem_var[1];
	Var_2 = &mem_var[2];
	Var_3 = &mem_var[3];
	Var_4 = &mem_var[4];
	Var_5 = &mem_var[5];
	Var_6 = &mem_var[6];

	// bgscr 0, 380, 100
	PushInt(100); 
	PushInt(380); 
	PushInt(0); 
	Extcmd(43,3);
	// title "時計 by ときえのき"
	PushStr("時計 by ときえのき"); 
	Extcmd(16,1);
	// gsel 0, 2
	PushInt(2); 
	PushInt(0); 
	Extcmd(29,2);
	TaskSwitch(0);
}

static void L0000( void ) {
	TaskSwitch(1);
}

static void L0001( void ) {
	// if 1=0
	PushInt(0);/*OPT*/ 
	if (HspIf()) { TaskSwitch(7); return; }
	// goto *L0002
	TaskSwitch(2);
	return;
	TaskSwitch(7);
}

static void L0007( void ) {
	// cls 3
	PushInt(3); 
	Extcmd(19,1);
	// _HspVar0 =gettime(0)
	PushFuncEnd(); 	PushInt(0); 
PushIntfunc(8,1); 
	VarSet(Var_0,0);
	// _HspVar1 =gettime(1)
	PushFuncEnd(); 	PushInt(1); 
PushIntfunc(8,1); 
	VarSet(Var_1,0);
	// _HspVar2 =gettime(2)
	PushFuncEnd(); 	PushInt(2); 
PushIntfunc(8,1); 
	VarSet(Var_2,0);
	// _HspVar3 =gettime(3)
	PushFuncEnd(); 	PushInt(3); 
PushIntfunc(8,1); 
	VarSet(Var_3,0);
	// _HspVar4 =gettime(4)
	PushFuncEnd(); 	PushInt(4); 
PushIntfunc(8,1); 
	VarSet(Var_4,0);
	// _HspVar5 =gettime(5)
	PushFuncEnd(); 	PushInt(5); 
PushIntfunc(8,1); 
	VarSet(Var_5,0);
	// _HspVar6 =gettime(6)
	PushFuncEnd(); 	PushInt(6); 
PushIntfunc(8,1); 
	VarSet(Var_6,0);
	// font "メイリオ", 35, 0
	PushInt(0); 
	PushInt(35); 
	PushStr("メイリオ"); 
	Extcmd(20,3);
	// color 200, 32, 32
	PushInt(32); 
	PushInt(32); 
	PushInt(200); 
	Extcmd(24,3);
	// pos 346, -6
	PushInt(-6); 
	PushInt(346); 
	Extcmd(17,2);
	// mes "■"
	PushStr("■"); 
	Extcmd(15,1);
	// font "メイリオ", 25, 0
	PushInt(0); 
	PushInt(25); 
	PushStr("メイリオ"); 
	Extcmd(20,3);
	// color 255, 255, 255
	PushInt(255); 
	PushInt(255); 
	PushInt(255); 
	Extcmd(24,3);
	// pos 350, 0
	PushInt(0); 
	PushInt(350); 
	Extcmd(17,2);
	// mes "Ⅹ"
	PushStr("Ⅹ"); 
	Extcmd(15,1);
	// pos 0, 0
	PushInt(0); 
	PushInt(0); 
	Extcmd(17,2);
	// mes _HspVar0, 1
	PushInt(1); 
	PushVAP(Var_0,0); 
	Extcmd(15,2);
	// mes "年、", 1
	PushInt(1); 
	PushStr("年、"); 
	Extcmd(15,2);
	// if _HspVar2=0
	PushVar(Var_2,0); PushInt(0); CalcEqI(); 
	if (HspIf()) { TaskSwitch(8); return; }
	// mes "日", 1
	PushInt(1); 
	PushStr("日"); 
	Extcmd(15,2);
	TaskSwitch(8);
}

static void L0008( void ) {
	// if _HspVar2=1
	PushVar(Var_2,0); PushInt(1); CalcEqI(); 
	if (HspIf()) { TaskSwitch(9); return; }
	// mes "月", 1
	PushInt(1); 
	PushStr("月"); 
	Extcmd(15,2);
	TaskSwitch(9);
}

static void L0009( void ) {
	// if _HspVar2=2
	PushVar(Var_2,0); PushInt(2); CalcEqI(); 
	if (HspIf()) { TaskSwitch(10); return; }
	// mes "火", 1
	PushInt(1); 
	PushStr("火"); 
	Extcmd(15,2);
	TaskSwitch(10);
}

static void L0010( void ) {
	// if _HspVar2=3
	PushVar(Var_2,0); PushInt(3); CalcEqI(); 
	if (HspIf()) { TaskSwitch(11); return; }
	// mes "水", 1
	PushInt(1); 
	PushStr("水"); 
	Extcmd(15,2);
	TaskSwitch(11);
}

static void L0011( void ) {
	// if _HspVar2=4
	PushVar(Var_2,0); PushInt(4); CalcEqI(); 
	if (HspIf()) { TaskSwitch(12); return; }
	// mes "木", 1
	PushInt(1); 
	PushStr("木"); 
	Extcmd(15,2);
	TaskSwitch(12);
}

static void L0012( void ) {
	// if _HspVar2=5
	PushVar(Var_2,0); PushInt(5); CalcEqI(); 
	if (HspIf()) { TaskSwitch(13); return; }
	// mes "金", 1
	PushInt(1); 
	PushStr("金"); 
	Extcmd(15,2);
	TaskSwitch(13);
}

static void L0013( void ) {
	// if _HspVar2=6
	PushVar(Var_2,0); PushInt(6); CalcEqI(); 
	if (HspIf()) { TaskSwitch(14); return; }
	// mes "土", 1
	PushInt(1); 
	PushStr("土"); 
	Extcmd(15,2);
	TaskSwitch(14);
}

static void L0014( void ) {
	// mes "曜日"
	PushStr("曜日"); 
	Extcmd(15,1);
	// font "メイリオ", 40, 1
	PushInt(1); 
	PushInt(40); 
	PushStr("メイリオ"); 
	Extcmd(20,3);
	// pos 0
	PushInt(0); 
	Extcmd(17,1);
	// if _HspVar1<10
	PushVar(Var_1,0); PushInt(10); CalcLtI(); 
	if (HspIf()) { TaskSwitch(15); return; }
	// mes "0", 1
	PushInt(1); 
	PushStr("0"); 
	Extcmd(15,2);
	TaskSwitch(15);
}

static void L0015( void ) {
	// mes _HspVar1, 1
	PushInt(1); 
	PushVAP(Var_1,0); 
	Extcmd(15,2);
	// mes "/", 1
	PushInt(1); 
	PushStr("/"); 
	Extcmd(15,2);
	// if _HspVar3<10
	PushVar(Var_3,0); PushInt(10); CalcLtI(); 
	if (HspIf()) { TaskSwitch(16); return; }
	// mes "0", 1
	PushInt(1); 
	PushStr("0"); 
	Extcmd(15,2);
	TaskSwitch(16);
}

static void L0016( void ) {
	// mes _HspVar3, 1
	PushInt(1); 
	PushVAP(Var_3,0); 
	Extcmd(15,2);
	// mes "  ", 1
	PushInt(1); 
	PushStr("  "); 
	Extcmd(15,2);
	// if _HspVar4<10
	PushVar(Var_4,0); PushInt(10); CalcLtI(); 
	if (HspIf()) { TaskSwitch(17); return; }
	// mes "0", 1
	PushInt(1); 
	PushStr("0"); 
	Extcmd(15,2);
	TaskSwitch(17);
}

static void L0017( void ) {
	// mes _HspVar4, 1
	PushInt(1); 
	PushVAP(Var_4,0); 
	Extcmd(15,2);
	// mes ":", 1
	PushInt(1); 
	PushStr(":"); 
	Extcmd(15,2);
	// if _HspVar5<10
	PushVar(Var_5,0); PushInt(10); CalcLtI(); 
	if (HspIf()) { TaskSwitch(18); return; }
	// mes "0", 1
	PushInt(1); 
	PushStr("0"); 
	Extcmd(15,2);
	TaskSwitch(18);
}

static void L0018( void ) {
	// mes _HspVar5, 1
	PushInt(1); 
	PushVAP(Var_5,0); 
	Extcmd(15,2);
	// mes ".", 1
	PushInt(1); 
	PushStr("."); 
	Extcmd(15,2);
	// if _HspVar6<10
	PushVar(Var_6,0); PushInt(10); CalcLtI(); 
	if (HspIf()) { TaskSwitch(19); return; }
	// mes "0", 1
	PushInt(1); 
	PushStr("0"); 
	Extcmd(15,2);
	TaskSwitch(19);
}

static void L0019( void ) {
	// mes _HspVar6, 1
	PushInt(1); 
	PushVAP(Var_6,0); 
	Extcmd(15,2);
	//  *L0003
	PushLabel(3); 
	Intcmd(3,1);
	// wait 10
	PushInt(10); 
	Prgcmd(7,1);
	TaskSwitch(20);
}

static void L0020( void ) {
	TaskSwitch(4);
}

static void L0004( void ) {
	// goto *L0001
	TaskSwitch(1);
	return;
	TaskSwitch(2);
}

static void L0002( void ) {
	TaskSwitch(3);
}

static void L0003( void ) {
	// if mousex>351
	PushFuncEnd(); PushExtvar(0,0); PushInt(351); CalcGtI(); 
	if (HspIf()) { TaskSwitch(21); return; }
	// if mousex<375
	PushFuncEnd(); PushExtvar(0,0); PushInt(375); CalcLtI(); 
	if (HspIf()) { TaskSwitch(22); return; }
	// if mousey>5
	PushFuncEnd(); PushExtvar(1,0); PushInt(5); CalcGtI(); 
	if (HspIf()) { TaskSwitch(23); return; }
	// if mousey<29
	PushFuncEnd(); PushExtvar(1,0); PushInt(29); CalcLtI(); 
	if (HspIf()) { TaskSwitch(24); return; }
	// end 
	Prgcmd(16,0);
	return;
	TaskSwitch(25);
}

static void L0024( void ) {
	// else
	// goto *L0005
	TaskSwitch(5);
	return;
	TaskSwitch(25);
}

static void L0025( void ) {
	TaskSwitch(26);
}

static void L0023( void ) {
	// else
	// goto *L0005
	TaskSwitch(5);
	return;
	TaskSwitch(26);
}

static void L0026( void ) {
	TaskSwitch(27);
}

static void L0022( void ) {
	// else
	// goto *L0005
	TaskSwitch(5);
	return;
	TaskSwitch(27);
}

static void L0027( void ) {
	TaskSwitch(28);
}

static void L0021( void ) {
	// else
	// goto *L0005
	TaskSwitch(5);
	return;
	TaskSwitch(28);
}

static void L0028( void ) {
	// goto *L0000
	TaskSwitch(0);
	return;
	TaskSwitch(5);
}

static void L0005( void ) {
	// if wparam=1
	PushSysvar(10,0); PushInt(1); CalcEqI(); 
	if (HspIf()) { TaskSwitch(29); return; }
	// sendmsg hwnd, 161, 2, 0
	PushInt(0); 
	PushInt(2); 
	PushInt(161); 
	PushFuncEnd(); PushExtvar(3,0); 
	Dllctrl(7,4);
	TaskSwitch(29);
}

static void L0029( void ) {
	// goto *L0000
	TaskSwitch(0);
	return;
	TaskSwitch(6);
}

static void L0006( void ) {
	// stop 
	Prgcmd(17,0);
	return;
	// goto 
	Prgcmd(0,0);
	return;
}

//-End of Source-------------------------------------------

CHSP3_TASK __HspTaskFunc[]={
(CHSP3_TASK) L0000,
(CHSP3_TASK) L0001,
(CHSP3_TASK) L0002,
(CHSP3_TASK) L0003,
(CHSP3_TASK) L0004,
(CHSP3_TASK) L0005,
(CHSP3_TASK) L0006,
(CHSP3_TASK) L0007,
(CHSP3_TASK) L0008,
(CHSP3_TASK) L0009,
(CHSP3_TASK) L0010,
(CHSP3_TASK) L0011,
(CHSP3_TASK) L0012,
(CHSP3_TASK) L0013,
(CHSP3_TASK) L0014,
(CHSP3_TASK) L0015,
(CHSP3_TASK) L0016,
(CHSP3_TASK) L0017,
(CHSP3_TASK) L0018,
(CHSP3_TASK) L0019,
(CHSP3_TASK) L0020,
(CHSP3_TASK) L0021,
(CHSP3_TASK) L0022,
(CHSP3_TASK) L0023,
(CHSP3_TASK) L0024,
(CHSP3_TASK) L0025,
(CHSP3_TASK) L0026,
(CHSP3_TASK) L0027,
(CHSP3_TASK) L0028,
(CHSP3_TASK) L0029,
(CHSP3_TASK) 0,

};

/*-----------------------------------------------------------*/


/*-----------------------------------------------------------*/

void __HspInit( Hsp3r *hsp3 ) {
	hsp3->Reset( _HSP3CNV_MAXVAR, _HSP3CNV_MAXHPI );
	hsp3->SetDataName( 0 );
	hsp3->SetFInfo( 0, 0 );
	hsp3->SetLInfo( 0, 0 );
	hsp3->SetMInfo( 0, 0 );
}

/*-----------------------------------------------------------*/

