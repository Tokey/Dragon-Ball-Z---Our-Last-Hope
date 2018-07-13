





#include "iGraphics.h"
#include <time.h>
#include<cstdio>


using namespace std;


time_t t;
int mala = 0;
int bala = 0;
int b = 0;
int ma = 0;
int fa = 0;
int f_d = 0;
int sa = 0;
int score_direction = 1;
int dsd = 2;
double hs_y = 128;


int cell_damage = 100;
int go = 0;
int res = 1;

int obscr;
int obscr1;
int obscr2;

int damage = 1700;
int frieza_life = 3000;
double red;
double green;


int c = 0;
int g = 0;
int s = 0;


int super = 1;
int score = 0;

int run = 0;
int goku_x = 200;
int run_y = 140;
int run_co = 0;
int gr = 0;
int gr1 = 0;
int gr2 = 0;
int gr3 = 0;
int gr4 = 0;
int gr5 = 0;
int gr6 = 0;
int gr7 = 0;
int gr8 = 0;
int gr9 = 0;

int blast_co = 0;
int blast_speed = 25;

int blast = 0;
int blast_x = 240;
int blast_y;
int blast_button = 0;
int blast_flag = 0;

int blast1 = 0;
int blast1_x = 240;
int blast1_y;
int blast1_button = 0;
int blast1_flag = 0;

int blast2 = 0;
int blast2_x = 240;
int blast2_y;
int blast2_button = 0;
int blast2_flag = 0;

int blast3 = 0;
int blast3_x = 240;
int blast3_y;
int blast3_button = 0;
int blast3_flag = 0;

int blast4 = 0;
int blast4_x = 240;
int blast4_y;
int blast4_button = 0;
int blast4_flag = 0;

int blast5 = 0;
int blast5_x = 240;
int blast5_y;
int blast5_button = 0;
int blast5_flag = 0;

int blast6 = 0;
int blast6_x = 240;
int blast6_y;
int blast6_button = 0;
int blast6_flag = 0;

int blast7 = 0;
int blast7_x = 240;
int blast7_y;
int blast7_button = 0;
int blast7_flag = 0;

int blast8 = 0;
int blast8_x = 240;
int blast8_y;
int blast8_button = 0;
int blast8_flag = 0;

int blast9 = 0;
int blast9_x = 240;
int blast9_y;
int blast9_button = 0;
int blast9_flag = 0;


int jump_key = 0;
int jump = 0;
int jump_x = 240;
int jump_y = 140;
int jump_h1 = 150;
int jump_h2 = 260;
int jump_limit = 450;
int jd = 25;
int jump_dif = jd;
int jump_co = 0;


int ground_y = 0;
int ground_x = 128;
int ground_x1 = 256;
int ground_x2 = 384;
int ground_x3 = 512;
int ground_x4 = 640;
int ground_x5 = 768;
int ground_x6 = 896;
int ground_x7 = 1024;
int ground_x8 = 1152;
int ground_x9 = 1280;
int ground_x10 = 1408;


int gdx = 8;
int cloud_position_x = 500;
int cloud_position_y = 520;
int cloud2_position_x = 900;
int cloud2_position_y = 620;
int cloud1_position_x = 2350;
int cloud1_position_y = 670;
int jumping = 0;


int spike_x = 1700;
int spike2_x = 2300;
int spike3_x = 2600;
int spike34_diff = 400;
int spike4_x = 3000;
int spike5_x = 2600;
int spike56_diff = 800;
int spike6_x = 3400;
int spike7_x = 2600;
int spike78_diff = 134;
int spike8_x = 2728;
int spike9_x = 2600;
int spike910_diff = 128;
int spike10_x = 2728;
int spike1011_diff = 600;
int spike11_x = 3128;
int spike_y = 140;
int spike_direction = 1;
int random;
int spike_limit = 300;
int spike_difference = 40;
int spike_speed = 8;
int spk_dmg = 8;

int sani_co = 0;
char sup_str[] = "SS1.bmp";
int s_anim = 0;
int sco = 0;

int st_sc = 0;
int press_co = 0;
char pr_str[] = "N1.bmp";
int prc = 0;
int pri = 0;

int S_co = 0;
char S_str[] = "S1.bmp";
int Sc = 0;
int Si = 0;

int I_co = 0;
char I_str[] = "I1.bmp";
int Ic = 0;
int Ii = 0;

int H_co = 0;
char H_str[] = "H1.bmp";
int Hc = 0;
int Hi = 0;

int Q_co = 0;
char Q_str[] = "Q1.bmp";
int Qc = 0;
int Qi = 0;

int gol_anim = 0;
int gol_c = 0;
int gco = 0;
char gol_str[] = "GT1.bmp";

int sp_sc = 0;

int aust_co = 0;
int aco = 0;
char au_str[] = "aust1.bmp";
int aust_po = 0;
int aub = 0;

int niloy_co = 0;
int nco = 0;
char ni_str[] = "niloy1.bmp";
int niloy_po = 0;
int nib = 0;

int tokey_co = 0;
int tco = 0;
char to_str[] = "tokey1.bmp";
int tokey_po = 0;
int tob = 0;

int go_co = 0;
char go_str[] = "go1.bmp";
int g_co = 0;

int spikehit = 0;
int spikehit2 = 0;
int spikehit3 = 0;
int spikehit4 = 0;
int spikehit5 = 0;
int spikehit6 = 0;
int spikehit7 = 0;
int spikehit8 = 0;
int spikehit9 = 0;
int spikehit10 = 0;
int spikehit11 = 0;

int obs_bl = 0;
int obm_bl = 0;
int obl_bl = 0;

int pause_state = 0;
char pause_str[] = "resume1.bmp";
int p_co = 0;
int pauseC = 0;
int pause_co = 0;
int pi = 0;

char ret_str[] = "ret1.bmp";
int r_co = 0;
int retC = 0;
int ret_co = 0;
int ri = 0;

int yes_st = 0;
char yes_str[] = "yes1.bmp";
int y_co = 0;
int yesC = 0;
int yes_co = 0;
int yi = 0;

char no_str[] = "no1.bmp";
int n_co = 0;
int noC = 0;
int no_co = 0;
int ni = 0;

int load_st = 0;
double load_bar = 0;
char lo_str[] = "lo1.bmp";
int lo_co = 0;
int lco = 0;
int lo_po = 0;



int story_st = 0;

char frs_str[] = "frs1.bmp";
int frs_co = 0;
int frco = 0;
int fri = 0;

char sec_str[] = "sec1.bmp";
int sec_co = 0;
int seco = 0;
int sei = 0;

char thr_str[] = "thr1.bmp";
int thr_co = 0;
int thco = 0;
int thi = 0;

char for_str[] = "for1.bmp";
int for_co = 0;
int foco = 0;
int foi = 0;

char fif_str[] = "fif1.bmp";
int fif_co = 0;
int fico = 0;
int fii = 0;

char six_str[] = "six1.bmp";
int six_co = 0;
int sico = 0;
int sii = 0;

char sev_str[] = "sev1.bmp";
int sev_co = 0;
int svco = 0;
int svi = 0;

int frb = 0;
int seb = 0;
int thb = 0;
int fob = 0;
int fib = 0;
int sib = 0;
int svb = 0;

int con_co = 0;
int conC = 0;
int con_po = 0;
char con_str[] = "cont1.bmp";

int ski_co = 0;
int skiC = 0;
int ski_po = 0;
char ski_str[] = "skip1.bmp";

int ins_st = 0;
int ins_co = 0;
int inco = 0;
char in_str[] = "ins1.bmp";
int in_po = 0;

int hs_st = 0;
int hs_co = 0;
int hco = 0;
char hs_str[] = "popo1.bmp";
int hs_po = 0;

int hsc_st = 0;
int hsc_co = 0;
int hsco = 0;
char hsc_str[] = "hs1.bmp";
int hs_x = 0;
int hs_d = 0;

FILE *fp;
FILE *fw;
char name[100][100];
int fscore[100];
int fr_st = 0;

int sco_st = 0;
int sco_co = 0;
int scoC = 0;
char sco_str[] = "scorepl1.bmp";
int sco_po = 0;

int scor_co = 0;
int scorC = 0;
char scor_str[] = "scorert1.bmp";
int scor_po = 0;

int nhs_co = 0;
int nhsC = 0;
char nhs_str[] = "nhs1.bmp";
char string[1000];
int mode = 0;
int len = 0;
int line = 10;


char strn2[100][100];
double fred = 0;
double fgreen = 0;

int cell_x = 1600;
int cell_y = 300;
int cell1_y = 300;
int cell2_y = 525;
int cell3_y = 600;


int cell_speed = 20;
int random_cell;
int senzu_x = 2000;
int senzu_y = 200;
int senzu_speed = 15;
int random_senzu;
int senzu = 1;

int d = 1;
int ds = 0;
int db_x = 2600;
int db_y = 320;
int db_speed = 15;
int db = 0;
int dr = 1;
int random_db;

void read()
{
	fp = fopen("Highscore.txt", "r");
	int i;
	for (i = 0; i < 7; i++)
	{
		fscanf(fp, "%s %d", name[i], &fscore[i]);
	}
	fcloseall();
}
void write()
{
	read();
	if (fscore[6] < score)
	{
		fscore[7] = score;
		mode = 1;
	}
}
void sortit()
{
	int i, j, t;
	char str[1000];

	fp = fopen("Highscore.txt", "r");
	for (i = 0; i < 7; i++)
	{
		fscanf(fp, "%s %d", strn2[i], &t);
	}
	fcloseall();
	//Bubble Sort :3
	for (i = 0; i <= 7; i++){
		for (j = i + 1; j <= 7; j++)
		{
			if (fscore[i] < fscore[j])
			{
				t = fscore[i];
				fscore[i] = fscore[j];
				fscore[j] = t;

				strcpy(str, name[i]);
				strcpy(name[i], name[j]);
				strcpy(name[j], str);

			}
		}
	}
	fw = fopen("Highscore.txt", "w");
	for (i = 0; i < 7; i++)
	{
		fprintf(fw, "%s\t%d\n", name[i], fscore[i]);
	}
	fcloseall();

}
void find()
{
	if (!(strcmp(name[0], strn2[0]) == 0))
		line = 0;
	else if (!(strcmp(name[1], strn2[1]) == 0))
		line = 1;
	else if (!(strcmp(name[2], strn2[2]) == 0))
		line = 2;
	else if (!(strcmp(name[3], strn2[3]) == 0))
		line = 3;
	else if (!(strcmp(name[4], strn2[4]) == 0))
		line = 4;
	else if (!(strcmp(name[5], strn2[5]) == 0))
		line = 5;
	else if (!(strcmp(name[6], strn2[6]) == 0))
		line = 6;

}
void groundMovement() {
	ground_x -= gdx;
	ground_x1 -= gdx;
	ground_x2 -= gdx;
	ground_x3 -= gdx;
	ground_x4 -= gdx;
	ground_x5 -= gdx;
	ground_x6 -= gdx;
	ground_x7 -= gdx;
	ground_x8 -= gdx;
	ground_x9 -= gdx;
	ground_x10 -= gdx;
	if (ground_x < 0) {
		ground_x = 1273;
	}
	if (ground_x1 < 0) {
		ground_x1 = 1273;
	}
	if (ground_x2 < 0) {
		ground_x2 = 1273;
	}
	if (ground_x3 < 0) {
		ground_x3 = 1273;
	}
	if (ground_x4 <0) {
		ground_x4 = 1273;
	}
	if (ground_x5 < 0) {
		ground_x5 = 1273;
	}
	if (ground_x6 < 0) {
		ground_x6 = 1273;
	}
	if (ground_x7 < 0) {
		ground_x7 = 1273;
	}
	if (ground_x8 < 0) {
		ground_x8 = 1273;
	}
	if (ground_x9 < 0) {
		ground_x9 = 1273;
	}
	if (ground_x10 < 0) {
		ground_x10 = 1273;
	}
}
void goku_run() {
	if (pause_state == 0 && !(sp_sc >= 0 && sp_sc <= 2) && !(st_sc >= 0 && st_sc <= 4) && go == 0)
	{
		run++;
		if (run >= 8)
			run = 0;
	}
}

//jump
void goku_jump() {
	if (pause_state == 0 && !(sp_sc >= 0 && sp_sc <= 2) && !(st_sc >= 0 && st_sc <= 4) && go == 0){
		if (jumping == 1){
			jump_dif--;

			jump_y += jump_dif;
			if (jump_dif < 0)
				jumping = 2;
			if (jump_y == run_y) {
				jump = 0;
			}
			else if (jump_y <= jump_h2) {
				jump = 1;
			}
			else if (jump_y < jump_limit) {
				jump = 2;
			}
		}
		else if (jumping == 2) {
			jump_dif--;
			jump_y += jump_dif;
			if (jump_y >= jump_h1) {
				jump = 0;
			}
			else if (jump_y >= jump_h2) {
				jump = 1;
			}
			else if (jump_y > run_y) {
				jump = 2;
			}
			if (jump_y <= 140)
			{
				jumping = 0;
				jump_co = 0;
				jump_limit = 450;
				jump_dif = jd;
				jump_y = 140;
			}
		}
	}
}
void goku_blast(){
	if (pause_state == 0 && !(sp_sc >= 0 && sp_sc <= 2) && !(st_sc >= 0 && st_sc <= 4) && go == 0){
		if (blast_button != 0)
		{
			blast++;
			if (blast > 5)
				blast_x += blast_speed;

			if (blast >= 200)
				blast = 0;
		}
		else{
			blast = 0;
		}
		if (blast1_button != 0)
		{
			blast1++;
			if (blast1 > 5)
				blast1_x += blast_speed;

			if (blast1 >= 200)
				blast1 = 0;
		}
		else{
			blast1 = 0;
		}
		if (blast2_button != 0)
		{
			blast2++;
			if (blast2 > 5)
				blast2_x += blast_speed;
			if (blast2 >= 200)
				blast2 = 0;
		}
		else{
			blast2 = 0;
		}

		if (blast3_button != 0)
		{
			blast3++;
			if (blast3 > 5)
				blast3_x += blast_speed;
			if (blast3 >= 200)
				blast3 = 0;
		}
		else{
			blast3 = 0;
		}

		if (blast4_button != 0)
		{
			blast4++;
			if (blast4 > 5)
				blast4_x += blast_speed;
			if (blast4 >= 200)
				blast4 = 0;
		}
		else{
			blast4 = 0;
		}

		if (blast5_button != 0)
		{
			blast5++;
			if (blast5 > 5)
				blast5_x += blast_speed;
			if (blast5 >= 200)
				blast5 = 0;
		}
		else{
			blast5 = 0;
		}
		if (blast6_button != 0)
		{
			blast6++;
			if (blast6 > 5)
				blast6_x += blast_speed;
			if (blast6 >= 200)
				blast6 = 0;
		}
		else{
			blast6 = 0;
		}
		if (blast7_button != 0)
		{
			blast7++;
			if (blast7 > 5)
				blast7_x += blast_speed;
			if (blast7 >= 200)
				blast7 = 0;
		}
		else{
			blast7 = 0;
		}
		if (blast8_button != 0)
		{
			blast8++;
			if (blast8 > 5)
				blast8_x += blast_speed;
			if (blast8 >= 200)
				blast8 = 0;
		}
		else{
			blast8 = 0;
		}
		if (blast9_button != 0)
		{
			blast9++;
			if (blast9 > 5)
				blast9_x += blast_speed;
			if (blast9 >= 200)
				blast9 = 0;
		}
		else{
			blast9 = 0;
		}
	}
}


void spike_move() {
	if (random == 1) {
		spike_direction = 1;
	}
	else if (random == 2) {
		spike_direction = 2;
	}
	else if (random == 3) {
		spike_direction = 3;
	}
	else if (random == 4) {
		spike_direction = 4;
	}
	else if (random == 5) {
		spike_direction = 5;
	}
	else if (random == 6) {
		spike_direction = 6;
	}
	if (spike_direction == 1) {
		spike_x -= spike_speed;
		if (spike_x <= 0) {
			spikehit = 0;
			spike_x = 1300;
			random = rand() % 7;
		}
	}
	else if (spike_direction == 2) {
		spike2_x -= spike_speed;
		if (spike2_x <= 0) {
			spikehit2 = 0;
			spike2_x = 1350;
			random = rand() % 7;

		}
	}
	else if (spike_direction == 3) {

		spike3_x -= spike_speed;
		spike4_x -= spike_speed;
		if (spike4_x <= 0) {
			spikehit3 = 0;
			spikehit4 = 0;
			spike3_x = 1300;
			spike4_x = spike3_x + spike34_diff;
			random = rand() % 7;

		}
	}
	else if (spike_direction == 4) {
		spike5_x -= spike_speed;
		spike6_x -= spike_speed;
		if (spike6_x <= 0) {
			spikehit5 = 0;
			spikehit6 = 0;
			spike5_x = 1300;
			spike6_x = spike3_x + spike56_diff;
			random = rand() % 7;

		}
	}
	else if (spike_direction == 5) {
		spike7_x -= spike_speed;
		spike8_x -= spike_speed;
		if (spike8_x <= 0) {
			spikehit7 = 0;
			spikehit8 = 0;
			spike7_x = 1300;
			spike8_x = spike7_x + spike78_diff;
			random = rand() % 7;

		}
	}
	else if (spike_direction == 6) {
		spike9_x -= spike_speed;
		spike10_x -= spike_speed;
		spike11_x -= spike_speed;
		if (spike11_x <= 0) {
			spikehit9 = 0;

			spikehit10 = 0;

			spikehit11 = 0;

			spike9_x = 1300;
			spike10_x = spike9_x + spike910_diff;
			spike11_x = spike10_x + spike1011_diff;
			random = rand() % 7;

		}
	}
}


//Spike goku hit

void spike_hit() {
	if (goku_x >= spike_x - 40 && goku_x <= spike_x + 128 && jump_y <= 160) {
		spikehit = 1;
		damage -= spk_dmg;
		mala = 2;
	}
	else if (goku_x >= spike2_x - 40 && goku_x <= spike2_x + 128 && jump_y <= 160) {
		spikehit2 = 1;
		damage -= spk_dmg;
		mala = 2;
	}
	else if (goku_x >= spike3_x - 40 && goku_x <= spike3_x + 128 && jump_y <= 160) {
		spikehit3 = 1;
		damage -= spk_dmg;
		mala = 2;
	}
	else if (goku_x >= spike4_x - 40 && goku_x <= spike4_x + 128 && jump_y <= 160) {
		spikehit4 = 1;
		damage -= spk_dmg;
		mala = 2;
	}
	else if (goku_x >= spike5_x - 40 && goku_x <= spike5_x + 128 && jump_y <= 160) {
		spikehit5 = 1;
		damage -= spk_dmg;
		mala = 2;
	}
	else if (goku_x >= spike6_x - 40 && goku_x <= spike6_x + 128 && jump_y <= 160) {
		spikehit6 = 1;
		mala = 2;
		damage -= spk_dmg;
	}
	else if (goku_x >= spike7_x - 40 && goku_x <= spike7_x + 128 && jump_y <= 160) {
		spikehit7 = 1;
		mala = 2;
		damage -= spk_dmg;
	}
	else if (goku_x >= spike8_x - 40 && goku_x <= spike8_x + 128 && jump_y <= 160) {
		spikehit8 = 1;
		mala = 2;
		damage -= spk_dmg;
	}

	else if (goku_x >= spike9_x - 40 && goku_x <= spike9_x + 128 && jump_y <= 160) {
		spikehit9 = 1;
		damage -= 10;
		mala = 2;
	}

	else if (goku_x >= spike10_x - 40 && goku_x <= spike10_x + 128 && jump_y <= 160) {
		spikehit10 = 1;
		damage -= 10;
		mala = 2;
	}
	else if (goku_x >= spike11_x - 40 && goku_x <= spike11_x + 128 && jump_y <= 160) {
		spikehit11 = 1;
		damage -= 10;
		mala = 2;
	}
	else {
		mala = 3;
	}
}






//cell



int cell = 0;
void cell_move() {
	cell_x -= cell_speed;
	if (cell_x <= 0) {
		cell_x = 1300;
		random_cell = rand() % 4;
	}
	else if (cell == 1) {
		cell_x = 1450;
		random_cell = rand() % 4;
	}
	if (random_cell == 1) {
		cell_y = cell1_y;
	}
	else if (random_cell == 2) {
		cell_y = cell2_y;

	}
	else if (random_cell == 3) {
		cell_y = cell3_y;

	}
}

int random2_cell;
int cell10_x = 10000;
int cell10_y = 225;
int cell11_y = 225;
int cell12_y = 450;
int cell13_y = 675;
int cell_diff1 = 6;
int cell1 = 0;
void cell_move2() {
	cell10_x -= cell_speed + cell_diff1;
	if (cell10_x <= 0) {
		cell10_x = 1300;
		random2_cell = rand() % 4;
	}
	else if (cell1 == 1) {
		cell10_x = 1400;
		random2_cell = rand() % 4;
	}
	if (random2_cell == 1) {
		cell10_y = cell11_y;
	}
	else if (random2_cell == 2) {
		cell10_y = cell12_y;
	}
	else if (random2_cell == 3) {
		cell10_y = cell13_y;
	}

}
int random3_cell;
int cell20_x = 20000;
int cell20_y = 150;
int cell21_y = 150;
int cell22_y = 375;

int cell23_y = 200;
int cell_diff2 = 10;

int cell2 = 0;
void cell_move3() {
	cell20_x -= (cell_speed + cell_diff2);
	if (cell20_x <= 0) {
		random3_cell = rand() % 4;
		cell20_x = 1350;
	}
	else if (cell2 == 1) {

		cell20_x = 1450;
		random3_cell = rand() % 4;

	}
	if (random3_cell == 1) {
		cell20_y = cell21_y;
	}
	else if (random3_cell == 2) {
		cell20_y = cell22_y;
	}
	else if (random3_cell == 3) {
		cell20_y = cell23_y;
	}
}

int hit = 0;
int ss = 5;

void cell_hit()  {
	if ((blast_x >= cell_x - 10) && (blast_y >= cell_y && blast_y <= cell_y + 80)) {
		cell = 1;

		hit = 1;
		score += ss;
		blast_x = 1300;
	}
	else if ((blast1_x >= cell_x - 10) && (blast1_y >= cell_y - 10 && blast1_y <= cell_y + 80)) {
		cell = 1;

		hit = 1;
		score += ss;
		blast1_x = 1300;

	}
	else if ((blast2_x >= cell_x - 10) && (blast2_y >= cell_y - 10 && blast2_y <= cell_y + 80)) {
		cell = 1;

		hit = 1;
		score += ss;
		blast2_x = 1300;
	}
	else if ((blast3_x >= cell_x - 10) && (blast3_y >= cell_y - 10 && blast3_y <= cell_y + 80)) {
		cell = 1;

		hit = 1;
		score += ss;
		blast3_x = 1300;
	}
	else if ((blast4_x >= cell_x - 10) && (blast4_y >= cell_y - 10 && blast4_y <= cell_y + 80)) {
		cell = 1;

		hit = 1;
		score += ss;
		blast4_x = 1300;
	}
	else if ((blast5_x >= cell_x - 10) && (blast5_y >= cell_y - 10 && blast5_y <= cell_y + 80)) {
		cell = 1;

		hit = 1;
		score += ss;
		blast5_x = 1300;
	}
	else if ((blast6_x >= cell_x - 10) && (blast6_y >= cell_y - 10 && blast6_y <= cell_y + 80)) {
		cell = 1;

		hit = 1;
		score += ss;
		blast6_x = 1300;
	}
	else if ((blast7_x >= cell_x - 10) && (blast7_y >= cell_y - 10 && blast7_y <= cell_y + 80)) {
		cell = 1;

		hit = 1;
		score += ss;
		blast7_x = 1300;
	}
	else if ((blast8_x >= cell_x - 10) && (blast8_y >= cell_y - 10 && blast8_y <= cell_y + 80)) {
		cell = 1;
		hit = 1;
		score += ss;
		blast8_x = 1300;
	}
	else if ((blast9_x >= cell_x - 10) && (blast9_y >= cell_y - 10 && blast9_y <= cell_y + 80)) {
		cell = 1;
		hit = 1;
		score += ss;
		blast9_x = 1300;
	}
	else {
		cell = 0;
		hit = 0;
	}
}

int hit1 = 0;
int sd = 7;

void cell1_hit() {
	if ((blast_x >= cell10_x - 10) && (blast_y >= cell10_y - 10 && blast_y <= cell10_y + 80)) {
		cell1 = 1;

		hit1 = 1;
		score += sd;
		blast_x = 1300;
	}
	else if ((blast1_x >= cell10_x - 10) && (blast1_y >= cell10_y - 10 && blast1_y <= cell10_y + 80)) {
		cell1 = 1;

		hit1 = 1;
		score += sd;
		blast1_x = 1300;
	}
	else if ((blast2_x >= cell10_x - 10) && (blast2_y >= cell10_y - 10 && blast2_y <= cell10_y + 80)) {
		cell1 = 1;

		hit1 = 1;
		score += sd;
		blast2_x = 1300;
	}
	else if ((blast3_x >= cell10_x - 10) && (blast3_y >= cell10_y - 10 && blast3_y <= cell10_y + 80)) {
		cell1 = 1;

		hit1 = 1;
		score += sd;
		blast3_x = 1300;
	}
	else if ((blast4_x >= cell10_x - 10) && (blast4_y >= cell10_y - 10 && blast4_y <= cell10_y + 80)) {
		cell1 = 1;

		hit1 = 1;
		score += sd;
		blast4_x = 1300;
	}
	else if ((blast5_x >= cell10_x - 10) && (blast5_y >= cell10_y - 10 && blast5_y <= cell10_y + 80)) {
		cell1 = 1;

		hit1 = 1;
		score += sd;
		blast5_x = 1300;
	}
	else if ((blast6_x >= cell10_x - 10) && (blast6_y >= cell10_y - 10 && blast6_y <= cell10_y + 80)) {
		cell1 = 1;

		hit1 = 1;
		score += sd;
		blast6_x = 1300;
	}
	else if ((blast7_x >= cell10_x - 10) && (blast7_y >= cell10_y - 10 && blast7_y <= cell10_y + 80)) {
		cell1 = 1;

		hit1 = 1;
		score += sd;
		blast7_x = 1300;
	}
	else if ((blast8_x >= cell10_x - 10) && (blast8_y >= cell10_y - 10 && blast8_y <= cell10_y + 80)) {
		cell1 = 1;

		hit1 = 1;
		score += sd;
		blast8_x = 1300;
	}
	else if ((blast9_x >= cell10_x - 10) && (blast9_y >= cell10_y - 10 && blast9_y <= cell10_y + 80)) {
		cell1 = 1;

		hit1 = 1;
		score += sd;
		blast9_x = 1300;
	}
	else {
		cell1 = 0;
		hit1 = 0;
	}

}
int hit2 = 0;
int sd1 = 10;
void cell2_hit() {
	if ((blast_x >= cell20_x - 10) && (blast_y >= cell20_y - 10 && blast_y <= cell20_y + 80)) {
		cell2 = 1;

		hit2 = 1;
		score += sd1;
		blast_x = 1300;
	}
	else if ((blast1_x >= cell20_x - 10) - 10 && (blast1_y >= cell20_y - 10 && blast1_y <= cell20_y + 80)) {
		cell2 = 1;
		hit2 = 1;

		score += sd1;
		blast1_x = 1300;
	}
	else if ((blast2_x >= cell20_x - 10) && (blast2_y >= cell20_y - 10 && blast2_y <= cell20_y + 80)) {
		cell2 = 1;

		hit2 = 1;
		score += sd1;
		blast2_x = 1300;
	}
	else if ((blast3_x >= cell20_x - 10) && (blast3_y >= cell20_y - 10 && blast3_y <= cell20_y + 80)) {
		cell2 = 1;

		hit2 = 1;
		score += sd1;
		blast3_x = 1300;
	}
	else if ((blast4_x >= cell20_x - 10) && (blast4_y >= cell20_y - 10 && blast4_y <= cell20_y + 80)) {
		cell2 = 1;

		hit2 = 1;
		score += sd1;
		blast4_x = 1300;
	}
	else if ((blast5_x >= cell20_x - 10) && (blast5_y >= cell20_y - 10 && blast5_y <= cell20_y + 80)) {
		cell2 = 1;

		hit2 = 1;
		score += sd1;
		blast5_x = 1300;
	}
	else if ((blast6_x >= cell20_x - 10) && (blast6_y >= cell20_y - 10 && blast6_y <= cell20_y + 80)) {
		cell2 = 1;

		hit2 = 1;
		score += sd1;
		blast6_x = 1300;
	}
	else if ((blast7_x >= cell20_x - 10) && (blast7_y >= cell20_y - 10 && blast7_y <= cell20_y + 80)) {
		cell2 = 1;

		hit2 = 1;
		score += sd1;
		blast7_x = 1300;
	}
	else if ((blast8_x >= cell20_x - 10) && (blast8_y >= cell20_y - 10 && blast8_y <= cell20_y + 80)) {
		cell2 = 1;

		hit2 = 1;
		score += sd1;
		blast8_x = 1300;
	}
	else if ((blast9_x >= cell20_x - 10) && (blast9_y >= cell20_y - 10 && blast9_y <= cell20_y + 80)) {
		cell2 = 1;

		hit2 = 1;
		score += sd1;
		blast9_x = 1300;
	}
	else {
		cell2 = 0;
		hit2 = 0;
	}
}


//obs


int randomob = 1;
int obs;
int obs_speed = 8;

int obs_y = 140;
int obs1_x = 1700;

int obs2_x = 2200;
int obs3_x = 3000;



void obstacle() {

	if (randomob == 1) {
		obs = 1;

	}
	if (randomob == 2) {
		obs = 2;

	}
	if (randomob == 3) {
		obs = 3;

	}

	if (obs == 1) {
		obs1_x -= obs_speed;
		if (obs1_x < 0) {
			obs1_x = 1400;

			randomob = rand() % 4;
		}

	}
	if (obs == 2) {
		obs2_x -= obs_speed;
		if (obs2_x <= 0) {
			obs2_x = 1550;

			randomob = rand() % 4;
		}

	}
	if (obs == 3) {
		obs3_x -= obs_speed;
		if (obs3_x <= 0) {
			obs3_x = 1650;

			randomob = rand() % 4;
		}

	}

}

int bck_speed = 1;

int bck_x = 128;
int bck_x1 = 256;
int bck_x2 = 384;
int bck_x3 = 512;
int bck_x4 = 640;
int bck_x5 = 768;
int bck_x6 = 896;
int bck_x7 = 1024;
int bck_x8 = 1152;
int bck_x9 = 1280;
int bck_x10 = 1408;


void background() {
	bck_x -= bck_speed;
	bck_x1 -= bck_speed;
	bck_x2 -= bck_speed;
	bck_x3 -= bck_speed;
	bck_x4 -= bck_speed;
	bck_x5 -= bck_speed;
	bck_x6 -= bck_speed;
	bck_x7 -= bck_speed;
	bck_x8 -= bck_speed;
	bck_x9 -= bck_speed;
	bck_x10 -= bck_speed;


	if (bck_x < 0) {
		bck_x = 1403;
	}
	if (bck_x1 < 0) {
		bck_x1 = 1403;
	}
	if (bck_x2 < 0) {
		bck_x2 = 1403;
	}
	if (bck_x3 < 0) {
		bck_x3 = 1403;
	}
	if (bck_x4 <0) {
		bck_x4 = 1403;
	}
	if (bck_x5 < 0) {
		bck_x5 = 1403;
	}
	if (bck_x6 < 0) {
		bck_x6 = 1403;
	}
	if (bck_x7 < 0) {
		bck_x7 = 1403;
	}
	if (bck_x8 < 0) {
		bck_x8 = 1403;
	}
	if (bck_x9 < 0) {
		bck_x9 = 1403;
	}
	if (bck_x10 < 0) {
		bck_x10 = 1403;
	}


}


void goku_hit() {

	if ((cell_x >= goku_x - 30 && cell_x <= goku_x + 35) && (cell_y >= jump_y - 40 && cell_y <= jump_y + 70)) {
		cell = 1;
		damage -= cell_damage;
		bala = 1;
	}
	else if ((cell10_x >= goku_x - 30 && cell10_x <= goku_x + 35) && (cell10_y >= jump_y - 40 && cell10_y <= jump_y + 70)) {
		cell1 = 1;
		damage -= cell_damage;
		bala = 1;
	}
	else if ((cell20_x >= goku_x - 30 && cell20_x <= goku_x + 35) && (cell20_y >= jump_y - 40 && cell20_y <= jump_y + 70)) {
		cell2 = 1;
		damage -= cell_damage;
		bala = 1;
	}
}


//goku walk on obstacle
int k = 1;
int obss = 0;
int obss_y = obs_y + 150;

int obss1_y = obs_y + 326;

int obss2_y = obs_y + 520;


void goku_run_obstacle_s() {

	if ((goku_x >= obs1_x - 10 && goku_x <= obs1_x + 278) && (jump_y > 170 && jump_y <= obss_y)) {
		k = 0;
		jump_y = obss_y - 25;
	}
	else if ((goku_x >= obs2_x - 10 && goku_x <= obs2_x + 278) && (jump_y > 400 && jump_y <= obss1_y)) {
		k = 0;
		jump_y = obss1_y - 25;
	}
	else if ((goku_x >= obs3_x - 10 && goku_x <= obs3_x + 278) && (jump_y > 600 && jump_y <= obss2_y)) {
		k = 0;
		jump_y = obss2_y - 25;
	}
	else {
		k = 1;
	}
}
void goku_obstacle_hit(){

	if ((goku_x >= obs1_x - 30 && goku_x <= obs1_x + 278) && (jump_y <= obss_y - 30)) {
		obs1_x = -100;
		damage = damage - 50;
		bala = 1;
	}
	else if ((goku_x >= obs2_x - 30 && goku_x <= obs2_x + 278) && (jump_y <= obss1_y - 30)) {
		obs2_x = -100;
		damage = damage - 100;
		bala = 1;
	}
	else if ((goku_x >= obs3_x - 30 && goku_x <= obs3_x + 278) && (jump_y <= obss2_y - 30)) {
		obs3_x = -100;
		damage = damage - 150;
		bala = 1;
	}
}





void blast_obs(){
	if ((blast_x >= obs1_x && blast_x <= obs1_x + 278) && (blast_y <= obss_y) && blast_y != 0) {
		obs_bl++;
		blast_x = 1300;
	}
	else if ((blast1_x >= obs1_x && blast1_x <= obs1_x + 278) && (blast1_y <= obss_y) && blast1_y != 0) {
		obs_bl++;
		blast1_x = 1300;
	}
	else if ((blast2_x >= obs1_x && blast2_x <= obs1_x + 278) && (blast2_y <= obss_y) && blast2_y != 0) {
		obs_bl++;
		blast2_x = 1300;
	}
	else if ((blast3_x >= obs1_x && blast3_x <= obs1_x + 278) && (blast3_y <= obss_y) && blast3_y != 0) {
		obs_bl++;
		blast3_x = 1300;
	}
	else if ((blast4_x >= obs1_x && blast4_x <= obs1_x + 278) && (blast4_y <= obss_y) && blast4_y != 0) {
		obs_bl++;
		blast4_x = 1300;
	}
	else if ((blast5_x >= obs1_x && blast5_x <= obs1_x + 278) && (blast5_y <= obss_y) && blast5_y != 0) {
		obs_bl++;
		blast5_x = 1300;
	}
	else if ((blast6_x >= obs1_x && blast6_x <= obs1_x + 278) && (blast6_y <= obss_y) && blast6_y != 0) {
		obs_bl++;
		blast6_x = 1300;
	}
	else if ((blast7_x >= obs1_x && blast7_x <= obs1_x + 278) && (blast7_y <= obss_y) && blast7_y != 0) {
		obs_bl++;
		blast7_x = 1300;
	}
	else if ((blast8_x >= obs1_x && blast8_x <= obs1_x + 278) && (blast8_y <= obss_y) && blast8_y != 0) {
		obs_bl++;
		blast8_x = 1300;
	}
	else if ((blast9_x >= obs1_x && blast9_x <= obs1_x + 278) && (blast9_y <= obss_y) && blast9_y != 0) {
		obs_bl++;
		blast9_x = 1300;
	}
	else if ((blast_x >= obs2_x && blast_x <= obs2_x + 278) && (blast_y <= obss1_y) && blast_y != 0) {
		obm_bl++;
		blast_x = 1300;
	}
	else if ((blast1_x >= obs2_x && blast1_x <= obs2_x + 278) && (blast1_y <= obss1_y) && blast1_y != 0) {
		obm_bl++;
		blast1_x = 1300;
	}
	else if ((blast2_x >= obs2_x && blast2_x <= obs2_x + 278) && (blast2_y <= obss1_y) && blast2_y != 0) {
		obm_bl++;
		blast2_x = 1300;
	}
	else if ((blast3_x >= obs2_x && blast3_x <= obs2_x + 278) && (blast3_y <= obss1_y) && blast3_y != 0) {
		obm_bl++;
		blast3_x = 1300;
	}
	else if ((blast4_x >= obs2_x && blast4_x <= obs2_x + 278) && (blast4_y <= obss1_y) && blast4_y != 0) {
		obm_bl++;
		blast4_x = 1300;
	}
	else if ((blast5_x >= obs2_x && blast5_x <= obs2_x + 278) && (blast5_y <= obss1_y) && blast5_y != 0) {
		obm_bl++;
		blast5_x = 1300;
	}
	else if ((blast6_x >= obs2_x && blast6_x <= obs2_x + 278) && (blast6_y <= obss1_y) && blast6_y != 0) {
		obm_bl++;
	}
	else if ((blast7_x >= obs2_x && blast7_x <= obs2_x + 278) && (blast7_y <= obss1_y) && blast7_y != 0) {
		obm_bl++;
		blast7_x = 1300;
	}
	else if ((blast8_x >= obs2_x && blast8_x <= obs2_x + 278) && (blast8_y <= obss1_y) && blast8_y != 0) {
		obm_bl++;
		blast8_x = 1300;
	}
	else if ((blast9_x >= obs2_x && blast9_x <= obs2_x + 278) && (blast9_y <= obss1_y) && blast9_y != 0) {
		obm_bl++;
		blast9_x = 1300;
	}
	else if ((blast_x >= obs3_x && blast_x <= obs3_x + 278) && (blast_y <= obss2_y) && blast_y != 0) {
		obl_bl++;
		blast_x = 1300;
	}
	else if ((blast1_x >= obs3_x && blast1_x <= obs3_x + 278) && (blast1_y <= obss2_y) && blast1_y != 0) {
		obl_bl++;
		blast1_x = 1300;
	}
	else if ((blast2_x >= obs3_x && blast2_x <= obs3_x + 278) && (blast2_y <= obss2_y) && blast2_y != 0) {
		obl_bl++;
		blast2_x = 1300;
	}
	else if ((blast3_x >= obs3_x && blast3_x <= obs3_x + 278) && (blast3_y <= obss2_y) && blast3_y != 0) {
		obl_bl++;
		blast3_x = 1300;
	}
	else if ((blast4_x >= obs3_x && blast4_x <= obs3_x + 278) && (blast4_y <= obss2_y) && blast4_y != 0) {
		obl_bl++;
		blast4_x = 1300;
	}
	else if ((blast5_x >= obs3_x && blast5_x <= obs3_x + 278) && (blast5_y <= obss2_y) && blast5_y != 0) {
		obl_bl++;
		blast5_x = 1300;
	}
	else if ((blast6_x >= obs3_x && blast6_x <= obs3_x + 278) && (blast6_y <= obss2_y) && blast6_y != 0) {
		obl_bl++;
		blast6_x = 1300;
	}
	else if ((blast7_x >= obs3_x && blast7_x <= obs3_x + 278) && (blast7_y <= obss2_y) && blast7_y != 0) {
		obl_bl++;
		blast7_x = 1300;
	}
	else if ((blast8_x >= obs3_x && blast8_x <= obs3_x + 278) && (blast8_y <= obss2_y) && blast8_y != 0) {
		obl_bl++;
		blast8_x = 1300;
	}
	else if ((blast9_x >= obs3_x && blast9_x <= obs3_x + 278) && (blast9_y <= obss2_y) && blast9_y != 0) {
		obl_bl++;
		blast9_x = 1300;
	}
	if (obs_bl >= 4)
	{
		obs1_x = -100;
		obs_bl = 0;
		score = score + obscr;
	}
	if (obm_bl >= 6)
	{
		obs2_x = -100;
		obm_bl = 0;
		score = score + obscr1;
	}
	if (obl_bl >= 8)
	{
		obs3_x = -100;
		obl_bl = 0;
		score = score + obscr2;
	}
}
int over = 0;
void GameOver() {
	over++;
	if (over >= 28) {
		over = 28;
	}
}

//Senzu bean

void senzu_bean() {
	senzu_x -= senzu_speed;
	if (senzu_x <= 0 && senzu == 1) {
		senzu_x = 3500;
		random_senzu = rand() % 7;
	}
	if (random_senzu == 1) {
		senzu_y = 320;
	}
	else if (random_senzu == 2) {
		senzu_y = 250;
	}
	else if (random_senzu == 3) {
		senzu_y = 350;
	}
	else if (random_senzu == 4) {
		senzu_y = 400;
	}
	else if (random_senzu == 5) {
		senzu_y = 500;
	}
	else if (random_senzu == 6) {
		senzu_y = 600;
	}
}

int flag = 0;

void senzu_hit() {
	if ((senzu_x <= goku_x + 60 && senzu_x >= goku_x) && (senzu_y >= jump_y - 20 && senzu_y <= jump_y + 70)){
		senzu = 0;
		senzu_x = 4200;
		flag = 1;
		if (flag == 1) {
			damage += 200;
			if (damage >= 1700) {
				damage = 1700;
			}

		}
		flag++;
	}
	else {
		senzu = 1;
	}
}



//Dragon ball

void dragon_ball_move() {
	if (random_db == 1) {
		db_y = 250;
	}
	else if (random_db == 2) {
		db_y = 150;
	}
	else if (random_db == 3) {
		db_y = 650;
	}
	else if (random_db == 4) {
		db_y = 340;
	}
	else if (random_db == 5) {
		db_y = 500;
	}
	else if (random_db == 6) {
		db_y = 600;
	}
	else if (random_db == 7) {
		db_y = 560;
	}
	db_x -= db_speed;
	if (db_x <= 0) {
		db_x = 4500;
		random_db = rand() % 8;
	}
}


void dragon_ball_hit() {
	if ((db_x > goku_x && db_x <= goku_x + 55) && (db_y >= jump_y - 40 && db_y <= jump_y + 90)) {
		d = 0;
		db++;
		db_x = 5000;
		random_db = rand() % 14;
	}
	if (db >= 7){
		ds = 1;
		if (s_anim != 3)
		{
			s_anim = 1;
			super = 2;
			s++;
			damage = 1700;
		}
	}
}


//Frieza move

int gol_frieza = 0;

int frieza_x = 2100;
int frieza_y = 160;
int frieza_speed = 10;
int f;
void frieza_move() {
	frieza_x -= 20;
	if (frieza_x <= 1100) {
		frieza_x = 1100;
	}
	if (f == 0){
		frieza_y += frieza_speed;
		if (frieza_y >= 700) {
			f = 1;
		}
	}
	if (f == 1) {
		frieza_y -= frieza_speed;
		if (frieza_y <= 160) {
			f = 0;
		}
	}
}


//Frieza blast
int f_blast_x = frieza_x;
int f_blast1_x = frieza_x;
int f_blast = 0;
int f_blast2_x = frieza_x;
int f_blast1 = 0;
int f_blast3_x = frieza_x;
int f_blast2 = 0;
int f_blast4_x = frieza_x;
int f_blast3 = 0;
int f_blast_y = frieza_y + 27;
int f_blast1_y = frieza_y + 27;
int f_blast2_y = frieza_y + 27;
int f_blast3_y = frieza_y + 27;
int f_blast4_y = frieza_y + 27;
int f_blast_speed = 27;
int f_blast4 = 0;
int f_b = 0;

int f_b1 = 0;
int f_b2 = 0;
int f_b3 = 0;
int f_b4 = 0;
int f_ap;
int ff = 0;
int ff1 = 0;
int ff2 = 0;
int ff3 = 0;
int ff4 = 0;

int fs;
int fbl;



int death_x = 1100;
int death_y = 360;



void frieza_blast() {

	if (gol_frieza == 0) {
		if (frieza_y < 180) {
			ff = 0;
			f_b = f_blast;
			f_blast_x = frieza_x - 20;
			f_blast_y = frieza_y + 27;
			f_ap = 2;
		}
		if (frieza_y > 180 && frieza_y < 350) {
			f_ap = 0;
		}
		if (frieza_y > 350 && frieza_y < 430) {
			ff1 = 0;
			f_b1 = f_blast1;
			f_blast1_x = frieza_x - 20;
			f_blast1_y = frieza_y + 27;
			if (frieza_y < 400) {
				f_ap = 3;
			}
			else
				f_ap = 1;

		}
		if (frieza_y > 430 && frieza_y < 480) {
			ff2 = 0;
			f_b2 = f_blast2;
			f_blast2_x = frieza_x - 20;
			f_blast2_y = frieza_y + 27;
			f_ap = 2;
		}
		if (frieza_y > 490 && frieza_y < 560) {
			ff3 = 0;
			f_b3 = f_blast3;
			f_blast3_x = frieza_x - 20;
			f_blast3_y = frieza_y + 27;

			f_ap = 1;

		}
		if (frieza_y > 560 && frieza_y < 650) {
			f_ap = 0;
			if (frieza_y < 600) {
				f_ap = 3;
			}
		}

		if (frieza_y > 650) {
			ff4 = 0;
			f_b4 = f_blast4;
			f_blast4_x = frieza_x - 20;
			f_blast4_y = frieza_y + 27;
			f_ap = 2;
		}



		if (ff == 0) {
			if (f_b == f_blast) {
				f_blast_x -= f_blast_speed;
			}
		}
		else if (ff == 1) {
			f_blast_x = 2300;
		}
		if (ff1 == 0) {
			if (f_b == f_blast1) {
				f_blast1_x -= f_blast_speed;
			}
		}
		else if (ff1 == 1) {
			f_blast1_x = 2300;
		}
		if (ff2 == 0) {
			if (f_b == f_blast2) {
				f_blast2_x -= f_blast_speed;
			}
		}
		else if (ff2 == 1) {
			f_blast2_x = 2300;
		}
		if (ff3 == 0) {
			if (f_b == f_blast3) {
				f_blast3_x -= f_blast_speed;
			}
		}
		else if (ff3 == 1) {
			f_blast3_x = 2300;
		}
		if (ff4 == 0) {
			if (f_b == f_blast4) {
				f_blast4_x -= f_blast_speed;
			}
		}
		else if (ff4 == 1) {
			f_blast4_x = 2300;
		}
	}




	else if (gol_frieza == 1) {
		if (frieza_y < 180) {
			ff = 0;
			f_b = f_blast;
			f_blast_x = frieza_x - 20;
			f_blast_y = frieza_y + 27;
			f_ap = 2;
		}
		if (frieza_y > 180 && frieza_y < 350) {
			f_ap = 0;
		}
		if (frieza_y > 350 && frieza_y < 430) {
			ff1 = 0;
			f_b1 = f_blast1;
			f_blast1_x = frieza_x - 20;
			f_blast1_y = frieza_y + 27;
			if (frieza_y < 400) {
				f_ap = 3;
			}
			else
				f_ap = 1;

		}
		if (frieza_y > 430 && frieza_y < 480) {
			ff2 = 0;
			f_b2 = f_blast2;
			f_blast2_x = frieza_x - 20;
			f_blast2_y = frieza_y + 27;
			f_ap = 2;
		}
		if (frieza_y > 490 && frieza_y < 560) {
			ff3 = 0;
			f_b3 = f_blast3;
			f_blast3_x = frieza_x - 20;
			f_blast3_y = frieza_y + 27;

			f_ap = 1;

		}
		if (frieza_y > 560 && frieza_y < 650) {
			f_ap = 0;
			if (frieza_y < 600) {
				f_ap = 3;
			}
		}

		if (frieza_y > 650) {
			ff4 = 0;
			f_b4 = f_blast4;
			f_blast4_x = frieza_x - 20;
			f_blast4_y = frieza_y + 27;
			f_ap = 2;
		}



		if (ff == 0) {
			if (f_b == f_blast) {
				f_blast_x -= f_blast_speed;
			}
		}
		else if (ff == 1) {
			f_blast_x = 2300;
		}
		if (ff1 == 0) {
			if (f_b == f_blast1) {
				f_blast1_x -= f_blast_speed;
			}
		}
		else if (ff1 == 1) {
			f_blast1_x = 2300;
		}
		if (ff2 == 0) {
			if (f_b == f_blast2) {
				f_blast2_x -= f_blast_speed;
			}
		}
		else if (ff2 == 1) {
			f_blast2_x = 2300;
		}
		if (ff3 == 0) {
			if (f_b == f_blast3) {
				f_blast3_x -= f_blast_speed;
			}
		}
		else if (ff3 == 1) {
			f_blast3_x = 2300;
		}
		if (ff4 == 0) {
			if (f_b == f_blast4) {
				f_blast4_x -= f_blast_speed;
			}
		}
		else if (ff4 == 1) {
			f_blast4_x = 2300;
		}

	}
}




void frieza_blast_goku_blast() {

	if ((blast_x >= f_blast_x - 10 && blast_x <= f_blast_x + 44) && (blast_y >= f_blast_y - 30 && blast_y <= f_blast_y + 80)) {

		blast_x = 1300;
		score += fbl;
		ff = 1;

	}
	else if ((blast1_x >= f_blast_x - 10 && blast1_x <= f_blast_x + 44) && (blast1_y >= f_blast_y - 30 && blast1_y <= f_blast_y + 80)) {
		blast1_x = 1300;
		score += fbl;
		ff = 1;
	}
	else if ((blast2_x >= f_blast_x - 10 && blast2_x <= f_blast_x + 44) && (blast2_y >= f_blast_y - 30 && blast2_y <= f_blast_y + 80)) {
		blast2_x = 1300;
		score += fbl;
		ff = 1;
	}
	else if ((blast3_x >= f_blast_x - 10 && blast3_x <= f_blast_x + 44) && (blast3_y >= f_blast_y - 30 && blast3_y <= f_blast_y + 80)) {
		blast3_x = 1300;
		score += fbl;
		ff = 1;
	}
	else if ((blast4_x >= f_blast_x - 10 && blast4_x <= f_blast_x + 44) && (blast4_y >= f_blast_y - 30 && blast4_y <= f_blast_y + 80)) {
		blast4_x = 1300;
		score += fbl;
		ff = 1;
	}
	else if ((blast5_x >= f_blast_x - 10 && blast5_x <= f_blast_x + 44) && (blast5_y >= f_blast_y - 30 && blast5_y <= f_blast_y + 80)) {
		blast5_x = 1300;
		score += fbl;
		ff = 1;
	}
	else if ((blast6_x >= f_blast_x - 10 && blast6_x <= f_blast_x + 44) && (blast6_y >= f_blast_y - 30 && blast6_y <= f_blast_y + 80)) {
		blast6_x = 1300;
		score += fbl;
		ff = 1;
	}
	else if ((blast7_x >= f_blast_x - 10 && blast7_x <= f_blast_x + 44) && (blast7_y >= f_blast_y - 30 && blast7_y <= f_blast_y + 80)) {
		blast7_x = 1300;
		score += fbl;
		ff = 1;
	}
	else if ((blast8_x >= f_blast_x - 10 && blast8_x <= f_blast_x + 44) && (blast8_y >= f_blast_y - 30 && blast8_y <= f_blast_y + 80)) {
		blast8_x = 1300;
		score += fbl;
		ff = 1;
	}
	else if ((blast9_x >= f_blast_x - 10 && blast9_x <= f_blast_x + 44) && (blast9_y >= f_blast_y - 30 && blast9_y <= f_blast_y + 80)) {
		blast9_x = 1300;
		score += fbl;
		ff = 1;
	}




	else if ((blast_x >= f_blast1_x - 10 && blast_x <= f_blast1_x + 44) && (blast_y >= f_blast1_y - 30 && blast_y <= f_blast1_y + 80)) {
		blast_x = 1300;
		score += fbl;
		ff1 = 1;
	}
	else if ((blast1_x >= f_blast1_x - 10 && blast1_x <= f_blast1_x + 44) && (blast1_y >= f_blast1_y - 30 && blast1_y <= f_blast1_y + 80)) {
		blast1_x = 1300;
		score += fbl;
		ff1 = 1;
	}
	else if ((blast2_x >= f_blast1_x - 10 && blast2_x <= f_blast1_x + 44) && (blast2_y >= f_blast1_y - 30 && blast2_y <= f_blast1_y + 80)) {
		blast2_x = 1300;
		score += fbl;
		ff1 = 1;

	}
	else if ((blast3_x >= f_blast1_x - 10 && blast3_x <= f_blast1_x + 44) && (blast3_y >= f_blast1_y - 30 && blast3_y <= f_blast1_y + 80)) {
		blast3_x = 1300;
		score += fbl;
		ff1 = 1;
	}
	else if ((blast4_x >= f_blast1_x - 10 && blast4_x <= f_blast1_x + 44) && (blast4_y >= f_blast1_y - 30 && blast4_y <= f_blast1_y + 80)) {
		blast4_x = 1300;
		score += fbl;
		ff1 = 1;
	}
	else if ((blast5_x >= f_blast1_x - 10 && blast5_x <= f_blast1_x + 44) && (blast5_y >= f_blast1_y - 30 && blast5_y <= f_blast1_y + 80)) {
		blast5_x = 1300;
		score += fbl;
		ff1 = 1;
	}
	else if ((blast6_x >= f_blast1_x - 10 && blast6_x <= f_blast1_x + 44) && (blast6_y >= f_blast1_y - 30 && blast6_y <= f_blast1_y + 80)) {
		blast6_x = 1300;
		score += fbl;
		ff1 = 1;
	}
	else if ((blast7_x >= f_blast1_x - 10 && blast7_x <= f_blast1_x + 44) && (blast7_y >= f_blast1_y - 30 && blast7_y <= f_blast1_y + 80)) {
		blast7_x = 1300;
		score += fbl;
		ff1 = 1;
	}
	else if ((blast8_x >= f_blast1_x - 10 && blast8_x <= f_blast1_x + 44) && (blast8_y >= f_blast1_y - 30 && blast8_y <= f_blast1_y + 80)) {
		blast8_x = 1300;
		score += fbl;
		ff1 = 1;
	}
	else if ((blast9_x >= f_blast1_x - 10 && blast9_x <= f_blast1_x + 44) && (blast9_y >= f_blast1_y - 30 && blast9_y <= f_blast1_y + 80)) {
		blast9_x = 1300;
		score += fbl;
		ff1 = 1;
	}

	else if ((blast_x >= f_blast2_x - 10 && blast_x <= f_blast2_x + 44) && (blast_y >= f_blast2_y - 30 && blast_y <= f_blast2_y + 80)) {

		blast_x = 1300;
		score += fbl;
		ff2 = 1;
	}
	else if ((blast1_x >= f_blast2_x - 10 && blast1_x <= f_blast2_x + 44) && (blast1_y >= f_blast2_y - 30 && blast1_y <= f_blast2_y + 80)) {
		blast1_x = 1300;
		score += fbl;
		ff2 = 1;
	}
	else if ((blast2_x >= f_blast2_x - 10 && blast2_x <= f_blast2_x + 44) && (blast2_y >= f_blast2_y - 30 && blast2_y <= f_blast2_y + 80)) {
		blast2_x = 1300;
		score += fbl;
		ff2 = 1;

	}
	else if ((blast3_x >= f_blast2_x - 10 && blast3_x <= f_blast2_x + 44) && (blast3_y >= f_blast2_y - 30 && blast3_y <= f_blast2_y + 80)) {
		blast3_x = 1300;
		score += fbl;
		ff2 = 1;
	}
	else if ((blast4_x >= f_blast2_x - 10 && blast4_x <= f_blast2_x + 44) && (blast4_y >= f_blast2_y - 30 && blast4_y <= f_blast2_y + 80)) {
		blast4_x = 1300;
		score += fbl;
		ff2 = 1;
	}
	else if ((blast5_x >= f_blast2_x - 10 && blast5_x <= f_blast2_x + 44) && (blast5_y >= f_blast2_y - 30 && blast5_y <= f_blast2_y + 80)) {
		blast5_x = 1300;
		score += fbl;
		ff2 = 1;
	}
	else if ((blast6_x >= f_blast2_x - 10 && blast6_x <= f_blast2_x + 44) && (blast6_y >= f_blast2_y - 30 && blast6_y <= f_blast2_y + 80)) {
		blast6_x = 1300;
		score += fbl;
		ff2 = 1;
	}
	else if ((blast7_x >= f_blast2_x - 10 && blast7_x <= f_blast2_x + 44) && (blast7_y >= f_blast2_y - 30 && blast7_y <= f_blast2_y + 80)) {
		blast7_x = 1300;
		score += fbl;
		ff2 = 1;
	}
	else if ((blast8_x >= f_blast2_x - 10 && blast8_x <= f_blast2_x + 44) && (blast8_y >= f_blast2_y - 30 && blast8_y <= f_blast2_y + 80)) {
		blast8_x = 1300;
		score += fbl;
		ff2 = 1;
	}
	else if ((blast9_x >= f_blast2_x - 10 && blast9_x <= f_blast2_x + 44) && (blast9_y >= f_blast2_y - 30 && blast9_y <= f_blast2_y + 80)) {
		blast9_x = 1300;
		score += fbl;
		ff2 = 1;
	}

	else if ((blast_x >= f_blast3_x - 10 && blast_x <= f_blast3_x + 44) && (blast_y >= f_blast3_y - 30 && blast_y <= f_blast3_y + 80)) {

		blast_x = 1300;
		score += fbl;
		ff3 = 1;
	}
	else if ((blast1_x >= f_blast3_x - 10 && blast1_x <= f_blast3_x + 44) && (blast1_y >= f_blast3_y - 30 && blast1_y <= f_blast3_y + 80)) {
		blast1_x = 1300;
		score += fbl;
		ff3 = 1;
	}
	else if ((blast2_x >= f_blast3_x - 10 && blast2_x <= f_blast3_x + 44) && (blast2_y >= f_blast3_y - 30 && blast2_y <= f_blast3_y + 80)) {
		blast2_x = 1300;
		score += fbl;
		ff3 = 1;

	}
	else if ((blast3_x >= f_blast3_x - 10 && blast3_x <= f_blast3_x + 44) && (blast3_y >= f_blast3_y - 30 && blast3_y <= f_blast3_y + 80)) {
		blast3_x = 1300;
		score += fbl;
		ff3 = 1;
	}
	else if ((blast4_x >= f_blast3_x - 10 && blast4_x <= f_blast3_x + 44) && (blast4_y >= f_blast3_y - 30 && blast4_y <= f_blast3_y + 80)) {
		blast4_x = 1300;
		score += fbl;
		ff3 = 1;
	}
	else if ((blast5_x >= f_blast3_x - 10 && blast5_x <= f_blast3_x + 44) && (blast5_y >= f_blast3_y - 30 && blast5_y <= f_blast3_y + 80)) {
		blast5_x = 1300;
		score += fbl;
		ff3 = 1;
	}
	else if ((blast6_x >= f_blast3_x - 10 && blast6_x <= f_blast3_x + 44) && (blast6_y >= f_blast3_y - 30 && blast6_y <= f_blast3_y + 80)) {
		blast6_x = 1300;
		score += fbl;
		ff3 = 1;
	}
	else if ((blast7_x >= f_blast3_x - 10 && blast7_x <= f_blast3_x + 44) && (blast7_y >= f_blast3_y - 30 && blast7_y <= f_blast3_y + 80)) {
		blast7_x = 1300;
		score += fbl;
		ff3 = 1;
	}
	else if ((blast8_x >= f_blast3_x - 10 && blast8_x <= f_blast3_x + 44) && (blast8_y >= f_blast3_y - 30 && blast8_y <= f_blast3_y + 80)) {
		blast8_x = 1300;
		score += fbl;
		ff3 = 1;
	}
	else if ((blast9_x >= f_blast3_x - 10 && blast9_x <= f_blast3_x + 44) && (blast9_y >= f_blast3_y - 30 && blast9_y <= f_blast3_y + 80)) {
		blast9_x = 1300;
		score += fbl;
		ff3 = 1;
	}


	else if ((blast_x >= f_blast4_x - 10 && blast_x <= f_blast4_x + 44) && (blast_y >= f_blast4_y - 30 && blast_y <= f_blast4_y + 80)) {

		blast_x = 1300;
		score += fbl;
		ff4 = 1;
	}
	else if ((blast1_x >= f_blast4_x - 10 && blast1_x <= f_blast4_x + 44) && (blast1_y >= f_blast4_y - 30 && blast1_y <= f_blast4_y + 80)) {
		blast1_x = 1300;
		score += fbl;
		ff4 = 1;
	}
	else if ((blast2_x >= f_blast4_x - 10 && blast2_x <= f_blast4_x + 44) && (blast2_y >= f_blast4_y - 30 && blast2_y <= f_blast4_y + 80)) {
		blast2_x = 1300;
		score += fbl;
		ff4 = 1;

	}
	else if ((blast3_x >= f_blast4_x - 10 && blast3_x <= f_blast4_x + 44) && (blast3_y >= f_blast4_y - 30 && blast3_y <= f_blast4_y + 80)) {
		blast3_x = 1300;
		score += fbl;
		ff4 = 1;
	}
	else if ((blast4_x >= f_blast4_x - 10 && blast4_x <= f_blast4_x + 44) && (blast4_y >= f_blast4_y - 30 && blast4_y <= f_blast4_y + 80)) {
		blast4_x = 1300;
		score += fbl;
		ff4 = 1;
	}
	else if ((blast5_x >= f_blast4_x - 10 && blast5_x <= f_blast4_x + 44) && (blast5_y >= f_blast4_y - 30 && blast5_y <= f_blast4_y + 80)) {
		blast5_x = 1300;
		score += fbl;
		ff4 = 1;
	}
	else if ((blast6_x >= f_blast4_x - 10 && blast6_x <= f_blast4_x + 44) && (blast6_y >= f_blast4_y - 30 && blast6_y <= f_blast4_y + 80)) {
		blast6_x = 1300;
		score += fbl;
		ff4 = 1;
	}
	else if ((blast7_x >= f_blast4_x - 10 && blast7_x <= f_blast4_x + 44) && (blast7_y >= f_blast4_y - 30 && blast7_y <= f_blast4_y + 80)) {
		blast7_x = 1300;
		score += fbl;
		ff4 = 1;
	}
	else if ((blast8_x >= f_blast4_x - 10 && blast8_x <= f_blast4_x + 44) && (blast8_y >= f_blast4_y - 30 && blast8_y <= f_blast4_y + 80)) {
		blast8_x = 1300;
		score += fbl;
		ff4 = 1;
	}
	else if ((blast9_x >= f_blast4_x - 10 && blast9_x <= f_blast4_x + 44) && (blast9_y >= f_blast4_y - 30 && blast9_y <= f_blast4_y + 80)) {
		blast9_x = 1300;
		score += fbl;
		ff4 = 1;
	}

}


int f_damage = 100;
int fala = 0;


void frieza_hit(){
	if ((blast_x >= frieza_x + 5 && blast_x <= frieza_x + 60) && (blast_y >= frieza_y - 20 && blast_y <= frieza_y + 70)) {
		frieza_life -= f_damage;
		blast_x = 1300;
		score += fs;
		fala = 1;
	}
	if ((blast1_x >= frieza_x + 5 && blast1_x <= frieza_x + 60) && (blast1_y >= frieza_y - 20 && blast1_y <= frieza_y + 70)) {
		frieza_life -= f_damage;
		blast1_x = 1300;
		score += fs;

		fala = 1;
	}
	if ((blast2_x >= frieza_x + 5 && blast2_x <= frieza_x + 60) && (blast2_y >= frieza_y - 20 && blast2_y <= frieza_y + 70)) {
		frieza_life -= f_damage;
		blast2_x = 1300;
		score += fs;
		fala = 1;
	}
	if ((blast3_x >= frieza_x + 5 && blast3_x <= frieza_x + 60) && (blast3_y >= frieza_y - 20 && blast3_y <= frieza_y + 70)) {
		frieza_life -= f_damage;
		blast3_x = 1300;
		score += fs;
		fala = 1;
	}
	if ((blast4_x >= frieza_x + 5 && blast4_x <= frieza_x + 60) && (blast4_y >= frieza_y - 20 && blast4_y <= frieza_y + 70)) {
		frieza_life -= f_damage;
		blast4_x = 1300;
		score += fs;
		fala = 1;
	}
	if ((blast5_x >= frieza_x + 5 && blast5_x <= frieza_x + 60) && (blast5_y >= frieza_y - 20 && blast5_y <= frieza_y + 70)) {
		frieza_life -= f_damage;
		blast5_x = 1300;
		score += fs;
		fala = 1;
	}
	if ((blast6_x >= frieza_x + 5 && blast6_x <= frieza_x + 60) && (blast6_y >= frieza_y - 20 && blast6_y <= frieza_y + 70)) {
		frieza_life -= f_damage;
		blast6_x = 1300;
		score += fs;
		fala = 1;
	}
	if ((blast7_x >= frieza_x + 5 && blast7_x <= frieza_x + 60) && (blast7_y >= frieza_y - 20 && blast7_y <= frieza_y + 70)) {
		frieza_life -= f_damage;
		blast7_x = 1300;
		score += fs;
		fala = 1;
	}
	if ((blast8_x >= frieza_x + 5 && blast8_x <= frieza_x + 60) && (blast8_y >= frieza_y - 20 && blast8_y <= frieza_y + 60)) {
		frieza_life -= f_damage;
		blast8_x = 1300;
		score += fs;
		fala = 1;
	}
	if ((blast9_x >= frieza_x + 5 && blast9_x <= frieza_x + 60) && (blast9_y >= frieza_y - 20 && blast9_y <= frieza_y + 60)) {
		frieza_life -= f_damage;
		blast9_x = 1300;
		score += fs;
		fala = 1;
	}
	if (frieza_life <= 2000) {
		gol_frieza = 1;
		f_damage = 70;
	}
}





void goku_hit_frieza_blast() {

	if ((f_blast_x >= goku_x - 30 && f_blast_x <= goku_x + 35) && (f_blast_y >= jump_y - 20 && f_blast_y <= jump_y + 70)) {
		ff = 1;
		damage -= 50;
		bala = 1;
	}
	else if ((f_blast1_x >= goku_x - 30 && f_blast1_x <= goku_x + 35) && (f_blast1_y >= jump_y - 20 && f_blast1_y <= jump_y + 70)) {
		ff1 = 1;
		damage -= 50;
		bala = 1;
	}
	else if ((f_blast2_x >= goku_x - 30 && f_blast2_x <= goku_x + 35) && (f_blast2_y >= jump_y - 20 && f_blast2_y <= jump_y + 70)) {
		ff2 = 1;
		damage -= 50;
		bala = 1;
	}
	else if ((f_blast3_x >= goku_x - 30 && f_blast3_x <= goku_x + 35) && (f_blast3_y >= jump_y - 20 && f_blast3_y <= jump_y + 70)) {
		ff3 = 1;
		damage -= 50;
		bala = 1;
	}
	else if ((f_blast4_x >= goku_x - 30 && f_blast4_x <= goku_x + 35) && (f_blast4_y >= jump_y - 20 && f_blast4_y <= jump_y + 70)) {
		ff4 = 1;
		damage -= 50;
		bala = 1;
	}
}


int dis = 10;
void distance() {
	dis += 20;
}


int f_death = 0;

int aftr = 1000;
void after_frieza() {
	if (frieza_life <= 0) {
		aftr += 25;
		f_death = 1;

	}
	if (aftr < 10000){
		cell_speed = 40;

		cell_damage = 150;
	}
	else if (aftr >= 10000) {
		cell_speed = 60;
		cell_damage = 160;
	}
	else if (aftr >= 30000) {
		cell_speed = 80;
		cell_damage = 170;
	}
	else if (aftr >= 50000) {
		cell_speed = 90;
		cell_damage = 180;
	}
	else if (aftr >= 70000) {
		cell_speed = 110;
		cell_damage = 220;
	}
	else if (aftr >= 150000) {
		cell_speed = 140;
		cell_damage = 300;
	}
}



void anim(){
	goku_jump();
	cell_move();
	cell_move2();
	cell_move3();
	cell_hit();
	cell1_hit();
	cell2_hit();
	distance();
	if (dis >= 70000) {
		frieza_move();
		frieza_blast();
		frieza_blast_goku_blast();

		goku_hit_frieza_blast();

		frieza_hit();
	}
	groundMovement();
	goku_hit();
	spike_move();
	senzu_bean();
	senzu_hit();
	obstacle();
	goku_run_obstacle_s();
	goku_obstacle_hit();
	blast_obs();
	background();
	spike_hit();
	dragon_ball_move();
	dragon_ball_hit();
	if (super == 1) {
		ss = 15;
		sd = 25;
		sd1 = 35;
		fs = 40;
		fbl = 5;

		obscr = 33;
		obscr1 = 66;
		obscr2 = 99;

	}

	else if (super == 2) {

		ss = 7;
		sd = 15;
		sd1 = 22;
		fs = 25;
		fbl = 3;

		obscr = 15;
		obscr1 = 30;
		obscr2 = 45;
	}

	if (gol_frieza == 1){
		if (gol_anim == 0)
			gol_anim = 1;
	}

	if (frieza_life <= 0) {
		gol_frieza = 0;
		dis = 0;
		frieza_x = 4000;
		f_blast_x = 5000;
		f_blast1_x = 5000;
		f_blast2_x = 5000;
		f_blast3_x = 5000;
		f_blast4_x = 5000;
		after_frieza();
	}
}




void all_again() {

	//upper half
	go = 0;
	res = 1;


	aftr = 1000;
	cell_damage = 100;

	obscr;
	obscr1;
	obscr2;

	damage = 1700;
	frieza_life = 3000;
	red;
	green;


	c = 0;
	g = 0;
	s = 0;


	super = 1;
	score = 0;

	run = 0;
	goku_x = 200;
	run_y = 140;
	run_co = 0;
	gr = 0;
	gr1 = 0;
	gr2 = 0;
	gr3 = 0;
	gr4 = 0;
	gr5 = 0;
	gr6 = 0;
	gr7 = 0;
	gr8 = 0;
	gr9 = 0;

	blast_co = 0;
	blast_speed = 25;

	blast = 0;
	blast_x = 240;
	blast_y;
	blast_button = 0;
	blast_flag = 0;

	blast1 = 0;
	blast1_x = 240;
	blast1_y;
	blast1_button = 0;
	blast1_flag = 0;

	blast2 = 0;
	blast2_x = 240;
	blast2_y;
	blast2_button = 0;
	blast2_flag = 0;

	blast3 = 0;
	blast3_x = 240;
	blast3_y;
	blast3_button = 0;
	blast3_flag = 0;

	blast4 = 0;
	blast4_x = 240;
	blast4_y;
	blast4_button = 0;
	blast4_flag = 0;

	blast5 = 0;
	blast5_x = 240;
	blast5_y;
	blast5_button = 0;
	blast5_flag = 0;

	blast6 = 0;
	blast6_x = 240;
	blast6_y;
	blast6_button = 0;
	blast6_flag = 0;

	blast7 = 0;
	blast7_x = 240;
	blast7_y;
	blast7_button = 0;
	blast7_flag = 0;

	blast8 = 0;
	blast8_x = 240;
	blast8_y;
	blast8_button = 0;
	blast8_flag = 0;

	blast9 = 0;
	blast9_x = 240;
	blast9_y;
	blast9_button = 0;
	blast9_flag = 0;

	f_death = 0;
	jump_key = 0;
	jump = 0;
	jump_x = 240;
	jump_y = 140;
	jump_h1 = 150;
	jump_h2 = 260;
	jump_limit = 450;
	jd = 25;
	jump_dif = jd;
	jump_co = 0;


	ground_y = 0;
	ground_x = 128;
	ground_x1 = 256;
	ground_x2 = 384;
	ground_x3 = 512;
	ground_x4 = 640;
	ground_x5 = 768;
	ground_x6 = 896;
	ground_x7 = 1024;
	ground_x8 = 1152;
	ground_x9 = 1280;
	ground_x10 = 1408;


	gdx = 8;
	cloud_position_x = 500;
	cloud_position_y = 520;
	cloud2_position_x = 900;
	cloud2_position_y = 620;
	cloud1_position_x = 2350;
	cloud1_position_y = 670;
	jumping = 0;


	spike_x = 1700;
	spike2_x = 2300;
	spike3_x = 2600;
	spike34_diff = 400;
	spike4_x = 3000;
	spike5_x = 2600;
	spike56_diff = 800;
	spike6_x = 3400;
	spike7_x = 2600;
	spike78_diff = 134;
	spike8_x = 2728;
	spike9_x = 2600;
	spike910_diff = 128;
	spike10_x = 2728;
	spike1011_diff = 600;
	spike11_x = 3128;
	spike_y = 140;
	spike_direction = 1;
	random;
	spike_limit = 300;
	spike_difference = 40;
	spike_speed = 8;
	spk_dmg = 8;


	sup_str[0] = '\0';
	strcat(sup_str, "SS1.bmp");


	sani_co = 0;
	s_anim = 0;
	sco = 0;





	gol_str[0] = '\0';
	strcat(gol_str, "GT1.bmp");
	gol_anim = 0;
	gol_c = 0;
	gco = 0;

	go_str[0] = '\0';
	strcat(go_str, "go1.bmp");
	go_co = 0;
	g_co = 0;



	spikehit = 0;
	spikehit2 = 0;
	spikehit3 = 0;
	spikehit4 = 0;
	spikehit5 = 0;
	spikehit6 = 0;
	spikehit7 = 0;
	spikehit8 = 0;
	spikehit9 = 0;
	spikehit10 = 0;
	spikehit11 = 0;

	obs_bl = 0;
	obm_bl = 0;
	obl_bl = 0;


	pause_state = 0;
	pause_str[0] = '\0';
	strcat(pause_str, "resume1.bmp");
	p_co = 0;
	pauseC = 0;
	pause_co = 0;
	pi = 0;

	ret_str[0] = '\0';
	strcat(ret_str, "ret1.bmp");
	r_co = 0;
	retC = 0;
	ret_co = 0;
	ri = 0;


	yes_st = 0;
	yes_str[0] = '\0';
	strcat(yes_str, "yes1.bmp");
	y_co = 0;
	yesC = 0;
	yes_co = 0;
	yi = 0;

	no_str[0] = '\0';
	strcat(no_str, "no1.bmp");
	n_co = 0;
	noC = 0;
	no_co = 0;
	ni = 0;


	story_st = 0;

	frs_co = 0;
	frco = 0;
	fri = 0;

	sec_co = 0;
	seco = 0;
	sei = 0;

	thr_co = 0;
	thco = 0;
	thi = 0;

	for_co = 0;
	foco = 0;
	foi = 0;

	fif_co = 0;
	fico = 0;
	fii = 0;

	six_co = 0;
	sico = 0;
	sii = 0;

	sev_co = 0;
	svco = 0;
	svi = 0;

	frb = 0;
	seb = 0;
	thb = 0;
	fob = 0;
	fib = 0;
	sib = 0;
	svb = 0;

	con_co = 0;
	conC = 0;
	con_po = 0;

	ins_st = 0;
	ins_co = 0;
	inco = 0;
	in_po = 0;

	hs_st = 0;
	hs_co = 0;
	hco = 0;
	hs_po = 0;


	//middle half


	cell_x = 1600;
	cell_y = 300;
	cell1_y = 300;
	cell2_y = 525;
	cell3_y = 600;


	cell_speed = 20;
	random_cell;

	cell = 0;


	random2_cell;
	cell10_x = 10000;
	cell10_y = 225;
	cell11_y = 225;
	cell12_y = 450;
	cell13_y = 675;
	cell_diff1 = 6;
	cell1 = 0;


	random3_cell;
	cell20_x = 20000;
	cell20_y = 150;
	cell21_y = 150;
	cell22_y = 375;

	cell23_y = 200;
	cell_diff2 = 10;

	cell2 = 0;

	hit = 0;
	ss = 5;

	hit1 = 0;
	sd = 7;


	hit2 = 0;
	sd1 = 10;


	randomob = 1;
	obs;
	obs_speed = 8;

	obs_y = 140;
	obs1_x = 1700;

	obs2_x = 2200;
	obs3_x = 3000;



	bck_speed = 1;

	bck_x = 128;
	bck_x1 = 256;
	bck_x2 = 384;
	bck_x3 = 512;
	bck_x4 = 640;
	bck_x5 = 768;
	bck_x6 = 896;
	bck_x7 = 1024;
	bck_x8 = 1152;
	bck_x9 = 1280;
	bck_x10 = 1408;

	k = 1;
	obss = 0;
	obss_y = obs_y + 150;

	obss1_y = obs_y + 326;

	obss2_y = obs_y + 520;



	over = 0;
	death_x = 1100;
	death_y = 360;


	senzu_x = 2000;
	senzu_y = 200;
	senzu_speed = 15;

	random_senzu;


	mala = 0;
	bala = 0;
	b = 0;
	ma = 0;
	fa = 0;
	f_d = 0;


	senzu = 1;
	flag = 0;
	score = 0;

	d = 1;
	ds = 0;
	db_x = 2600;
	db_y = 320;
	db_speed = 15;
	db = 0;
	dr = 1;
	random_db;


	gol_frieza = 0;

	frieza_x = 2100;
	frieza_y = 160;
	frieza_speed = 10;
	f;


	f_blast_x = frieza_x;
	f_blast1_x = frieza_x;
	f_blast = 0;
	f_blast2_x = frieza_x;
	f_blast1 = 0;
	f_blast3_x = frieza_x;
	f_blast2 = 0;
	f_blast4_x = frieza_x;
	f_blast3 = 0;
	f_blast_y = frieza_y + 27;
	f_blast1_y = frieza_y + 27;
	f_blast2_y = frieza_y + 27;
	f_blast3_y = frieza_y + 27;
	f_blast4_y = frieza_y + 27;
	f_blast_speed = 27;
	f_blast4 = 0;
	f_b = 0;

	f_b1 = 0;
	f_b2 = 0;
	f_b3 = 0;
	f_b4 = 0;
	f_ap;
	ff = 0;
	ff1 = 0;
	ff2 = 0;
	ff3 = 0;
	ff4 = 0;

	fs;
	fbl;

	f_damage = 100;


	dis = 10;
	sco_co = 0;

}







/*
function iDraw() is called again and again by the system.
*/



void iDraw()
{

	if (damage <= 0) {
		go = 1;
	}
	if (super == 2)
	{
		blast_speed = 40;
		jd = 27;
	}
	else
	{
		blast_speed = 25;
		jd = 25;
	}
	if (go == 0 && pause_state >= 1 && pause_state <= 2 && !(sp_sc >= 0 && sp_sc <= 2) && !(st_sc >= 0 && st_sc <= 4))
	{
		if (pause_state == 1){
			iClear();
			iShowBMP(0, 24, pause_str);
			pause_co++;
			if (pause_co % 3 == 0)
			{
				pause_str[0] = '\0';
				strcat(pause_str, "resume");
				char pa[10];
				strcat(pause_str, itoa((pauseC + 1), pa, 10));
				strcat(pause_str, ".bmp");
				if (pi % 2 == 0)
					pauseC++;
				else
					pauseC--;
				if (pauseC == 4)
					pi++;
				if (pauseC == 0)
					pi++;
			}

		}
		if (pause_state == 2){
			iClear();
			iShowBMP(0, 24, ret_str);
			ret_co++;
			if (ret_co % 3 == 0)
			{
				ret_str[0] = '\0';
				strcat(ret_str, "ret");
				char pa[10];
				strcat(ret_str, itoa((retC + 1), pa, 10));
				strcat(ret_str, ".bmp");
				if (ri % 2 == 0)
					retC++;
				else
					retC--;
				if (retC == 4)
					ri++;
				if (retC == 0)
					ri++;
			}
		}
		if (res == 1){
			iPauseTimer(2);
			res = 0;
		}
		hsc_st = 0;
		fr_st = 0;
	}


	else if (go == 0 && yes_st >= 1 && yes_st <= 2 && !(sp_sc >= 0 && sp_sc <= 2) && !(st_sc >= 0 && st_sc <= 4)){
		if (yes_st == 1){
			iClear();
			iShowBMP(0, 24, yes_str);
			yes_co++;
			if (yes_co % 3 == 0)
			{
				yes_str[0] = '\0';
				strcat(yes_str, "yes");
				char pa[10];
				strcat(yes_str, itoa((yesC + 1), pa, 10));
				strcat(yes_str, ".bmp");
				if (yi % 2 == 0)
					yesC++;
				else
					yesC--;
				if (yesC == 4)
					yi++;
				if (yesC == 0)
					yi++;
			}
		}
		if (yes_st == 2){
			iClear();
			iShowBMP(0, 24, no_str);
			no_co++;
			if (no_co % 3 == 0)
			{
				no_str[0] = '\0';
				strcat(no_str, "no");
				char pa[10];
				strcat(no_str, itoa((noC + 1), pa, 10));
				strcat(no_str, ".bmp");
				if (ni % 2 == 0)
					noC++;
				else
					noC--;
				if (noC == 4)
					ni++;
				if (noC == 0)
					ni++;
			}

		}
		if (res == 1){
			iPauseTimer(2);
			res = 0;
		}

	}

	else if (go == 1) {


		if (sco_st == 0){
			iClear();
			iShowBMP(0, 24, go_str);
			iShowBMP(0, 24, go_str);
			go_co++;

			if (go_co % 3 == 0)
			{
				go_str[0] = '\0';
				strcat(go_str, "go");
				char gop[10];
				strcat(go_str, itoa((g_co + 1), gop, 10));
				strcat(go_str, ".bmp");
				if (g_co < 27)
					g_co++;

			}
			if (go_co >= 120 && sco_st == 0)
				sco_st = 1;
		}


		else if (sco_st == 1){
			iShowBMP(0, 0, sco_str);
			char bla[2313];
			if (sco_co % 20 == 0)
				iSetColor(255, 0, 0);
			if (sco_co % 40 == 0)
				iSetColor(0, 255, 0);
			if (sco_co % 60 == 0)
				iSetColor(0, 0, 255);
			if (sco_co % 80 == 0)
				iSetColor(255, 255, 0);
			if (sco_co % 100 == 0)
				iSetColor(255, 0, 255);
			if (sco_co % 120 == 0)
				iSetColor(0, 255, 255);
			if (sco_co % 140 == 0)
				iSetColor(255, 255, 255);

			iRectangle(18, 54, 280, 30);
			iText(22, 60, itoa((score), bla, 10), GLUT_BITMAP_TIMES_ROMAN_24);
			sco_co++;
			if (sco_co == 20)
				write();
			if (sco_co % 3 == 0)
			{
				sco_str[0] = '\0';
				strcat(sco_str, "scorepl");
				char Hpr[10];
				strcat(sco_str, itoa((scoC + 1), Hpr, 10));
				strcat(sco_str, ".bmp");
				if (sco_po % 2 == 0)
					scoC++;
				else
					scoC--;
				if (scoC == 4)
					sco_po++;
				if (scoC == 0)
					sco_po++;
			}
		}
		else if (sco_st == 2){
			iShowBMP(0, 0, scor_str);
			char bla[2313];
			if (scor_co % 20 == 0)
				iSetColor(255, 0, 0);
			if (scor_co % 40 == 0)
				iSetColor(0, 255, 0);
			if (scor_co % 60 == 0)
				iSetColor(0, 0, 255);
			if (scor_co % 80 == 0)
				iSetColor(255, 255, 0);
			if (scor_co % 100 == 0)
				iSetColor(255, 0, 255);
			if (scor_co % 120 == 0)
				iSetColor(0, 255, 255);
			if (scor_co % 140 == 0)
				iSetColor(255, 255, 255);
			iRectangle(18, 54, 280, 30);
			iText(22, 60, itoa((score), bla, 10), GLUT_BITMAP_TIMES_ROMAN_24);
			scor_co++;
			if (scor_co % 3 == 0)
			{
				scor_str[0] = '\0';
				strcat(scor_str, "scorert");
				char Hpr[10];
				strcat(scor_str, itoa((scorC + 1), Hpr, 10));
				strcat(scor_str, ".bmp");
				if (scor_po % 2 == 0)
					scorC++;
				else
					scorC--;
				if (scorC == 4)
					scor_po++;
				if (scorC == 0)
					scor_po++;
			}
		}
		if (res == 1){
			iPauseTimer(2);
			res = 0;
		}

		fr_st = 0;
	}
	else if (sp_sc >= 0 && sp_sc <= 2){
		if (sp_sc == 0)
		{
			aust_co++;
			iShowBMP(0, 0, au_str);
			iShowBMP(0, 0, au_str);
			if (aust_co % 2 == 0)
			{
				if (aust_po != 1)
					aco++;
				else{
					if (aco != 1 || aub == 5)
						aco--;
					else
						aub++;
				}
				au_str[0] = '\0';
				strcat(au_str, "aust");
				char au[10];
				strcat(au_str, itoa((aco), au, 10));
				strcat(au_str, ".bmp");

				if (aco >= 11)
					aust_po = 1;
				if (aco <= 0){
					sp_sc++;
				}
			}
			hsc_st = 0;
			fr_st = 0;
		}

		if (sp_sc == 1)
		{
			niloy_co++;
			iShowBMP(0, 0, ni_str);
			iShowBMP(0, 0, ni_str);
			if (niloy_co % 2 == 0)
			{
				if (niloy_po != 1)
					nco++;
				else{
					if (nco != 1 || nib == 5)
						nco--;
					else
						nib++;
				}
				ni_str[0] = '\0';
				strcat(ni_str, "niloy");
				char au[10];
				strcat(ni_str, itoa((nco), au, 10));
				strcat(ni_str, ".bmp");

				if (nco >= 11)
					niloy_po = 1;
				if (nco <= 0)
					sp_sc++;
			}
			hsc_st = 0;
			fr_st = 0;
		}

		if (sp_sc == 2)
		{
			tokey_co++;
			iShowBMP(0, 0, to_str);
			iShowBMP(0, 0, to_str);
			if (tokey_co % 2 == 0)
			{
				if (tokey_po != 1)
					tco++;
				else{
					if (tco != 1 || tob == 5)
						tco--;
					else
						tob++;
				}
				to_str[0] = '\0';
				strcat(to_str, "tokey");
				char au[10];
				strcat(to_str, itoa((tco), au, 10));
				strcat(to_str, ".bmp");

				if (tco >= 11)
					tokey_po = 1;
				if (tco <= 0)
					sp_sc++;
			}

		}
		if (res == 1){
			iPauseTimer(2);
			res = 0;
		}
		hsc_st = 0;
		fr_st = 0;
	}

	else if (story_st >= 1 && story_st <= 7)
	{
		iClear();
		if (story_st == 1)
		{
			frs_co++;
			iShowBMP(0, 0, frs_str);
			iShowBMP(0, 0, frs_str);
			if (frs_co % 2 == 0)
			{
				if (fri != 1 && frco<11)
					frco++;
				else{
					if (frb == 15 && frco >= 0)
						frco--;
				}
				frs_str[0] = '\0';
				strcat(frs_str, "frs");
				char au[10];
				strcat(frs_str, itoa((frco + 1), au, 10));
				strcat(frs_str, ".bmp");

				if (frco >= 10)
					fri = 1;
				if (frco <= 0 && frb == 15)
					story_st++;
			}
		}
		if (story_st == 2)
		{
			sec_co++;
			iShowBMP(0, 0, sec_str);
			iShowBMP(0, 0, sec_str);
			if (sec_co % 2 == 0)
			{
				if (sei != 1 && seco<11)
					seco++;
				else{
					if (seb == 15 && seco >= 0)
						seco--;

				}
				sec_str[0] = '\0';
				strcat(sec_str, "sec");
				char au[10];
				strcat(sec_str, itoa((seco + 1), au, 10));
				strcat(sec_str, ".bmp");

				if (seco >= 10)
					sei = 1;
				if (seco <= 0 && seb == 15)
					story_st++;
			}
		}
		if (story_st == 3)
		{
			thr_co++;
			iShowBMP(0, 0, thr_str);
			iShowBMP(0, 0, thr_str);
			if (thr_co % 2 == 0)
			{
				if (thi != 1 && thco<11)
					thco++;
				else{
					if (thb == 15 && thco >= 0)
						thco--;

				}
				thr_str[0] = '\0';
				strcat(thr_str, "thr");
				char au[10];
				strcat(thr_str, itoa((thco + 1), au, 10));
				strcat(thr_str, ".bmp");

				if (thco >= 10)
					thi = 1;
				if (thco <= 0 && thb == 15)
					story_st++;
			}
		}
		if (story_st == 4)
		{
			for_co++;
			iShowBMP(0, 0, for_str);
			iShowBMP(0, 0, for_str);
			if (for_co % 2 == 0)
			{
				if (foi != 1 && foco<11)
					foco++;
				else{
					if (fob == 15 && foco >= 0)
						foco--;

				}
				for_str[0] = '\0';
				strcat(for_str, "for");
				char au[10];
				strcat(for_str, itoa((foco + 1), au, 10));
				strcat(for_str, ".bmp");

				if (foco >= 10)
					foi = 1;
				if (foco <= 0 && fob == 15)
					story_st++;
			}
		}
		if (story_st == 5)
		{
			fif_co++;
			iShowBMP(0, 0, fif_str);
			iShowBMP(0, 0, fif_str);
			if (fif_co % 2 == 0)
			{
				if (fii != 1 && fico<11)
					fico++;
				else{
					if (fib == 15 && fico >= 0)
						fico--;

				}
				fif_str[0] = '\0';
				strcat(fif_str, "fif");
				char au[10];
				strcat(fif_str, itoa((fico + 1), au, 10));
				strcat(fif_str, ".bmp");

				if (fico >= 10)
					fii = 1;
				if (fico <= 0 && fib == 15)
					story_st++;
			}
		}
		if (story_st == 6)
		{
			six_co++;
			iShowBMP(0, 0, six_str);
			iShowBMP(0, 0, six_str);
			if (six_co % 2 == 0)
			{
				if (sii != 1 && sico<11)
					sico++;
				else{
					if (sib == 15 && sico>0)
						sico--;

				}
				six_str[0] = '\0';
				strcat(six_str, "six");
				char au[10];
				strcat(six_str, itoa((sico + 1), au, 10));
				strcat(six_str, ".bmp");

				if (sico >= 10)
					sii = 1;
				if (sico <= 0 && sib == 15)
					story_st++;
			}
		}
		if (story_st == 7)
		{
			sev_co++;
			iShowBMP(0, 0, sev_str);
			iShowBMP(0, 0, sev_str);
			iShowBMP(0, 0, sev_str);
			if (sev_co % 2 == 0)
			{
				if (svi != 1 && sco<11)
					svco++;
				else{
					if (svb == 15 && svco >= 0)
						svco--;
					else
						svb++;
				}
				sev_str[0] = '\0';
				strcat(sev_str, "sev");
				char au[10];
				strcat(sev_str, itoa((svco + 1), au, 10));
				strcat(sev_str, ".bmp");

				if (svco >= 10)
					svi = 1;
				if (svco <= 0 && svb == 15)
				{
					story_st++;
				}
			}
			if (res == 1){
				iPauseTimer(2);
				res = 0;
			}
			hsc_st = 0;
			fr_st = 0;
		}
		if (story_st != 7 && (frco == 10 || seco == 10 || thco == 10 || foco == 10 || fico == 10 | sico == 10 || svco == 10)){
			iShowBMPWOBGWP(880, 15, con_str, 0);
			con_co++;
			if (con_co % 2 == 0)
			{
				con_str[0] = '\0';
				strcat(con_str, "cont");
				char lopr[10];
				strcat(con_str, itoa((conC + 1), lopr, 10));
				strcat(con_str, ".bmp");
				if (con_po % 2 == 0)
					conC++;
				else
					conC--;
				if (conC == 5)
					con_po++;
				if (conC == 0)
					con_po++;
			}

			iShowBMPWOBGWP(44, 15, ski_str, 0);
			ski_co++;
			if (ski_co % 2 == 0)
			{
				ski_str[0] = '\0';
				strcat(ski_str, "skip");
				char lopr[10];
				strcat(ski_str, itoa((skiC + 1), lopr, 10));
				strcat(ski_str, ".bmp");
				if (ski_po % 2 == 0)
					skiC++;
				else
					skiC--;
				if (skiC == 5)
					ski_po++;
				if (skiC == 0)
					ski_po++;
			}
		}
		if (res == 1){
			iPauseTimer(2);
			res = 0;
		}
		hsc_st = 0;
		fr_st = 0;
	}
	else if (load_st == 1)
	{
		iClear();
		if (load_bar <= 200)
			iShowBMP(0, 0, "load1.bmp");
		else if (load_bar <= 400)
			iShowBMP(0, 0, "load2.bmp");
		else if (load_bar <= 600)
			iShowBMP(0, 0, "load3.bmp");
		else if (load_bar <= 800)
			iShowBMP(0, 0, "load4.bmp");
		else if (load_bar <= 1000)
			iShowBMP(0, 0, "load5.bmp");


		iShowBMPWOBGWP(480, 110, lo_str, 0);
		lo_co++;
		if (lo_co % 3 == 0)
		{
			lo_str[0] = '\0';
			strcat(lo_str, "lo");
			char lopr[10];
			strcat(lo_str, itoa((lco + 1), lopr, 10));
			strcat(lo_str, ".bmp");
			if (lo_po % 2 == 0)
				lco++;
			else
				lco--;
			if (lco == 4)
				lo_po++;
			if (lco == 0)
				lo_po++;
		}
		iSetColor(255, 255, 255);
		iRectangle(70, 100, 1140, 30);
		iSetColor(25, 135, 255);
		iFilledRectangle(75, 105, load_bar*1.130, 20);

		load_bar += 5;
		if (load_bar > 1000)
		{
			load_st = 3;
			story_st = 1;
		}
		if (res == 1){
			iPauseTimer(2);
			res = 0;
		}
		hsc_st = 0;
		fr_st = 0;
	}
	else if (st_sc >= 0 && st_sc <= 4){
		if (st_sc == 0){
			iClear();
			iShowBMP(0, 24, pr_str);
			press_co++;
			if (press_co % 3 == 0)
			{
				pr_str[0] = '\0';
				strcat(pr_str, "N");
				char pr[10];
				strcat(pr_str, itoa((prc + 1), pr, 10));
				strcat(pr_str, ".bmp");
				if (pri % 2 == 0)
					prc++;
				else
					prc--;
				if (prc == 4)
					pri++;
				if (prc == 0)
					pri++;

			}
			hsc_st = 0;
			fr_st = 0;
		}
		else if (st_sc == 1)
		{
			iClear();
			iShowBMP(0, 24, S_str);
			press_co++;
			if (press_co % 3 == 0)
			{
				S_str[0] = '\0';
				strcat(S_str, "S");
				char Spr[10];
				strcat(S_str, itoa((Sc + 1), Spr, 10));
				strcat(S_str, ".bmp");
				if (Si % 2 == 0)
					Sc++;
				else
					Sc--;
				if (Sc == 4)
					Si++;
				if (Sc == 0)
					Si++;
			}
			hsc_st = 0;
			fr_st = 0;
		}

		else if (st_sc == 2)
		{
			iClear();
			iShowBMP(0, 24, I_str);
			press_co++;
			if (press_co % 3 == 0)
			{
				I_str[0] = '\0';
				strcat(I_str, "I");
				char Ipr[10];
				strcat(I_str, itoa((Ic + 1), Ipr, 10));
				strcat(I_str, ".bmp");
				if (Ii % 2 == 0)
					Ic++;
				else
					Ic--;
				if (Ic == 4)
					Ii++;
				if (Ic == 0)
					Ii++;
			}
			hsc_st = 0;
			fr_st = 0;
		}
		else if (st_sc == 3)
		{
			iClear();
			iShowBMP(0, 24, H_str);
			press_co++;
			if (press_co % 3 == 0)
			{
				H_str[0] = '\0';
				strcat(H_str, "H");
				char Hpr[10];
				strcat(H_str, itoa((Hc + 1), Hpr, 10));
				strcat(H_str, ".bmp");
				if (Hi % 2 == 0)
					Hc++;
				else
					Hc--;
				if (Hc == 4)
					Hi++;
				if (Hc == 0)
					Hi++;
			}
			hsc_st = 0;
			fr_st = 0;
		}
		else if (st_sc == 4)
		{
			iClear();
			iShowBMP(0, 24, Q_str);
			press_co++;
			if (press_co % 3 == 0)
			{
				Q_str[0] = '\0';
				strcat(Q_str, "Q");
				char Qpr[10];
				strcat(Q_str, itoa((Qc + 1), Qpr, 10));
				strcat(Q_str, ".bmp");
				if (Qi % 2 == 0)
					Qc++;
				else
					Qc--;
				if (Qc == 4)
					Qi++;
				if (Qc == 0)
					Qi++;
			}
		}
		if (res == 1){
			iPauseTimer(2);
			res = 0;
		}
		hsc_st = 0;
		fr_st = 0;
	}
	else if (ins_st == 1)
	{
		iClear();
		iShowBMP(0, 0, in_str);
		ins_co++;
		if (ins_co % 3 == 0)
		{
			in_str[0] = '\0';
			strcat(in_str, "ins");
			char lopr[10];
			strcat(in_str, itoa((inco + 1), lopr, 10));
			strcat(in_str, ".bmp");
			if (in_po % 2 == 0)
				inco++;
			else
				inco--;
			if (inco == 5)
				in_po++;
			if (inco == 0)
				in_po++;
		}
		if (res == 1){
			iPauseTimer(2);
			res = 0;
		}
		hsc_st = 0;
		fr_st = 0;
	}
	else if (hs_st == 1)
	{
		iClear();
		hsc_st = 1;
		iShowBMP(0, 0, hs_str);
		hs_co++;
		if (hs_co % 3 == 0)
		{
			hs_str[0] = '\0';
			strcat(hs_str, "popo");
			char lopr[10];
			strcat(hs_str, itoa((hco + 1), lopr, 10));
			strcat(hs_str, ".bmp");
			if (hs_po % 2 == 0)
				hco++;
			else
				hco--;
			if (hco == 5)
				hs_po++;
			if (hco == 0)
				hs_po++;
		}
		if (res == 1){
			iPauseTimer(2);
			res = 0;
		}
	}

	else if (super == 2 && s_anim == 1 && !(st_sc >= 0 && st_sc <= 4)){
		iClear();
		iShowBMP(0, 24, sup_str);
		iShowBMP(0, 24, sup_str);
		sani_co++;

		if (sani_co % 2 == 0)
		{
			sup_str[0] = '\0';
			strcat(sup_str, "SS");
			char sup[10];
			strcat(sup_str, itoa((sco + 1), sup, 10));
			strcat(sup_str, ".bmp");
			sco++;
			if (sco >= 147)
				s_anim = 3;
		}
		if (res == 1){
			iPauseTimer(2);
			res = 0;
		}
		hsc_st = 0;
		fr_st = 0;
	}
	else if (gol_anim == 1)
	{
		iClear();
		iShowBMP(0, 24, gol_str);
		iShowBMP(0, 24, gol_str);
		iShowBMP(0, 24, gol_str);
		gol_c++;

		if (gol_c % 2 == 0)
		{
			gol_str[0] = '\0';
			strcat(gol_str, "GT");
			char gol[10];
			strcat(gol_str, itoa((gco + 1), gol, 10));
			strcat(gol_str, ".bmp");
			gco++;
			if (gco >= 178)
				gol_anim = 3;
		}
		if (res == 1){
			iPauseTimer(2);
			res = 0;
		}
		hsc_st = 0;
		fr_st = 0;
	}


	else if (go == 0)
	{
		iClear();
		if (res == 0){
			iResumeTimer(2);
			res = 1;
		}

		hsc_st = 0;
		fr_st = 0;

		iShowBMP(bck_x, ground_y, "bck1.bmp");
		iShowBMP(bck_x1, ground_y, "bck2.bmp");
		iShowBMP(bck_x2, ground_y, "bck3.bmp");
		iShowBMP(bck_x3, ground_y, "bck4.bmp");
		iShowBMP(bck_x4, ground_y, "bck5.bmp");
		iShowBMP(bck_x5, ground_y, "bck6.bmp");
		iShowBMP(bck_x6, ground_y, "bck7.bmp");
		iShowBMP(bck_x7, ground_y, "bck8.bmp");
		iShowBMP(bck_x8, ground_y, "bck9.bmp");
		iShowBMP(bck_x9, ground_y, "bck10.bmp");
		iShowBMP(bck_x10, ground_y, "bck11.bmp");

		iShowBMP(0, 0, "bck1.bmp");


		iShowBMPWOBGWP(ground_x, ground_y, "gr1.bmp", 0);
		iShowBMPWOBGWP(ground_x1, ground_y, "gr2.bmp", 0);
		iShowBMPWOBGWP(ground_x2, ground_y, "gr3.bmp", 0);
		iShowBMPWOBGWP(ground_x3, ground_y, "gr4.bmp", 0);
		iShowBMPWOBGWP(ground_x4, ground_y, "gr5.bmp", 0);
		iShowBMPWOBGWP(ground_x5, ground_y, "gr6.bmp", 0);
		iShowBMPWOBGWP(ground_x6, ground_y, "gr7.bmp", 0);
		iShowBMPWOBGWP(ground_x7, ground_y, "gr8.bmp", 0);
		iShowBMPWOBGWP(ground_x8, ground_y, "gr9.bmp", 0);
		iShowBMPWOBGWP(ground_x9, ground_y, "gr10.bmp", 0);
		if (obs == 1) {
			if (obs_bl == 0)
				iShowBMPWOBGWP(obs1_x, obs_y, "obs.bmp", 0);
			else if (obs_bl == 1)
				iShowBMPWOBGWP(obs1_x, obs_y, "obs1.bmp", 0);
			else if (obs_bl == 2)
				iShowBMPWOBGWP(obs1_x, obs_y, "obs2.bmp", 0);
			else if (obs_bl == 3)
				iShowBMPWOBGWP(obs1_x, obs_y, "obs3.bmp", 0);
		}
		else if (obs == 2) {
			if (obm_bl == 0)
				iShowBMPWOBGWP(obs2_x, obs_y, "obm.bmp", 0);
			else if (obm_bl == 1)
				iShowBMPWOBGWP(obs2_x, obs_y, "obm1.bmp", 0);
			else if (obm_bl == 2)
				iShowBMPWOBGWP(obs2_x, obs_y, "obm2.bmp", 0);
			else if (obm_bl == 3)
				iShowBMPWOBGWP(obs2_x, obs_y, "obm3.bmp", 0);
			else if (obm_bl == 4)
				iShowBMPWOBGWP(obs2_x, obs_y, "obm4.bmp", 0);
			else if (obm_bl == 5)
				iShowBMPWOBGWP(obs2_x, obs_y, "obm5.bmp", 0);
		}
		else if (obs == 3) {
			if (obl_bl == 0)
				iShowBMPWOBGWP(obs3_x, obs_y, "obl.bmp", 0);
			else if (obl_bl == 1)
				iShowBMPWOBGWP(obs3_x, obs_y, "obl1.bmp", 0);
			else if (obl_bl == 2)
				iShowBMPWOBGWP(obs3_x, obs_y, "obl2.bmp", 0);
			else if (obl_bl == 3)
				iShowBMPWOBGWP(obs3_x, obs_y, "obl3.bmp", 0);
			else if (obl_bl == 4)
				iShowBMPWOBGWP(obs3_x, obs_y, "obl4.bmp", 0);
			else if (obl_bl == 5)
				iShowBMPWOBGWP(obs3_x, obs_y, "obl5.bmp", 0);
			else if (obl_bl == 6)
				iShowBMPWOBGWP(obs3_x, obs_y, "obl6.bmp", 0);
			else if (obl_bl == 7)
				iShowBMPWOBGWP(obs3_x, obs_y, "obl7.bmp", 0);
		}
		if (gol_frieza == 0) {
			if (f_ap == 1 && fala != 1)
				iShowBMPWOBG(frieza_x, frieza_y, "fb1.bmp");

			else if (f_ap == 2 && fala != 1)
				iShowBMPWOBG(frieza_x, frieza_y, "fb2.bmp");
			else if (f_ap != 1 && f_ap != 2 && fala != 1){
				iShowBMPWOBG(frieza_x, frieza_y, "frieza.bmp");
			}
		}
		else if (gol_frieza == 1) {
			cell_speed = 30;
			f_blast_speed = 50;
			if (f_ap == 3 && fala != 1){
				iShowBMPWOBG(frieza_x, frieza_y, "gf1.bmp");
			}
			else if (f_ap == 1 && fala != 1) {
				iShowBMPWOBG(frieza_x, frieza_y, "gf2.bmp");
			}
			else if (f_ap == 4 && fala != 1) {
				iShowBMPWOBG(frieza_x, frieza_y, "gf1.bmp");
			}
			else if (f_ap == 2 && fala != 1) {
				iShowBMPWOBG(frieza_x, frieza_y, "gf2.bmp");
			}
			else if (f_ap != 1 && f_ap != 2 && fala != 1){
				iShowBMPWOBG(frieza_x, frieza_y, "g_frieza.bmp");
			}
		}


		if (gol_frieza == 0) {
			iShowBMPWOBGWP(f_blast_x, f_blast_y, "rf_Blast.bmp", 0);
			iShowBMPWOBGWP(f_blast1_x, f_blast1_y, "rf_Blast.bmp", 0);
			iShowBMPWOBGWP(f_blast2_x, f_blast2_y, "rf_Blast.bmp", 0);
			iShowBMPWOBGWP(f_blast3_x, f_blast3_y, "rf_Blast.bmp", 0);
			iShowBMPWOBGWP(f_blast4_x, f_blast4_y, "rf_Blast.bmp", 0);
		}
		else if (gol_frieza == 1) {
			iShowBMPWOBG(f_blast_x, f_blast_y - 4, "gf_blast.bmp");
			iShowBMPWOBG(f_blast1_x, f_blast1_y - 4, "gf_blast.bmp");
			iShowBMPWOBG(f_blast2_x, f_blast2_y - 4, "gf_blast.bmp");
			iShowBMPWOBG(f_blast3_x, f_blast3_y - 4, "gf_blast.bmp");
			iShowBMPWOBG(f_blast4_x, f_blast4_y - 4, "gf_blast.bmp");
		}


		if (d = 1 && ds == 0) {
			if (db == 0) {
				iShowBMPWOBGWP(db_x, db_y, "db1.bmp", 0);
			}
			else if (db == 1) {
				iShowBMPWOBGWP(db_x, db_y, "db2.bmp", 0);
			}
			else if (db == 2) {
				iShowBMPWOBGWP(db_x, db_y, "db3.bmp", 0);
			}
			else if (db == 3) {
				iShowBMPWOBGWP(db_x, db_y, "db4.bmp", 0);
			}
			else if (db == 4) {
				iShowBMPWOBGWP(db_x, db_y, "db5.bmp", 0);
			}
			else if (db == 5) {
				iShowBMPWOBGWP(db_x, db_y, "db6.bmp", 0);
			}
			else if (db == 6) {
				iShowBMPWOBGWP(db_x, db_y, "db7.bmp", 0);
			}
		}



		if (super == 1) {
			if (jumping == 0 && gr != 1 && gr1 != 1 && gr2 != 1 && gr3 != 1 && gr4 != 1 && gr5 != 1 && gr6 != 1){
				if (run == 0 && bala != 1 && mala != 2) {
					iShowBMPWOBG(goku_x, jump_y, "r1.bmp");
				}
				else if (run == 1 && bala != 1 && mala != 2) {
					iShowBMPWOBG(goku_x, jump_y, "r2.bmp");
				}
				else if (run == 2 && bala != 1 && mala != 2) {
					iShowBMPWOBG(goku_x, jump_y, "r3.bmp");
				}
				else if (run == 3 && bala != 1 && mala != 2) {
					iShowBMPWOBG(goku_x, jump_y, "r4.bmp");
				}
				else if (run == 4 && bala != 1 && mala != 2) {
					iShowBMPWOBG(goku_x, jump_y, "r5.bmp");
				}
				else if (run == 5 && bala != 1 && mala != 2) {
					iShowBMPWOBG(goku_x, jump_y, "r6.bmp");
				}
				else if (run == 6 && bala != 1 && mala != 2) {
					iShowBMPWOBG(goku_x, jump_y, "r7.bmp");
				}
				else if (run == 7 && bala != 1 && mala != 2) {
					iShowBMPWOBG(goku_x, jump_y, "r8.bmp");
				}
			}



			if (k == 0) {
				if (run == 0 && bala != 1 && mala != 2) {
					iShowBMPWOBG(goku_x, jump_y, "r1.bmp");
				}
				else if (run == 1 && bala != 1 && mala != 2) {
					iShowBMPWOBG(goku_x, jump_y, "r2.bmp");
				}
				else if (run == 2 && bala != 1 && mala != 2) {
					iShowBMPWOBG(goku_x, jump_y, "r3.bmp");
				}
				else if (run == 3 && bala != 1 && mala != 2) {
					iShowBMPWOBG(goku_x, jump_y, "r4.bmp");
				}
				else if (run == 4 && bala != 1 && mala != 2) {
					iShowBMPWOBG(goku_x, jump_y, "r5.bmp");
				}
				else if (run == 5 && bala != 1 && mala != 2) {
					iShowBMPWOBG(goku_x, jump_y, "r6.bmp");
				}
				else if (run == 6 && bala != 1 && mala != 2) {
					iShowBMPWOBG(goku_x, jump_y, "r7.bmp");
				}
				else if (run == 7 && bala != 1 && mala != 2) {
					iShowBMPWOBG(goku_x, jump_y, "r8.bmp");
				}

			}
		}

		if (bala == 1) {
			if (b == 0) {
				b = 1;
			}
			b++;
			if (b > 1 && b <= 10){
				if (super == 1) {
					iShowBMPWOBG(goku_x, jump_y, "hurt.bmp");
				}
				if (super == 2) {
					iShowBMPWOBG(goku_x, jump_y, "hurtSS.bmp");
				}
			}
			else if (b > 10) {
				bala = 0;
				b = 0;
			}
		}
		if (mala == 2) {
			if (super == 1) {
				iShowBMPWOBG(goku_x, jump_y, "hurt.bmp");
			}
			else if (super == 2) {
				iShowBMPWOBG(goku_x, jump_y, "hurtSS.bmp");


			}
		}





		if (fala == 1) {
			if (fa == 0) {
				fa = 1;
			}
			fa++;
			if (fa > 1 && fa <= 10){
				if (gol_frieza == 0) {
					iShowBMPWOBG(frieza_x, frieza_y, "Fhurt.bmp");
				}
				if (gol_frieza == 1) {
					iShowBMPWOBG(frieza_x, frieza_y, "GFhurt.bmp");
				}
			}
			else if (fa > 10) {
				fala = 0;
				fa = 0;
			}
		}





		if (super == 2) {
			if (damage >= 850){
				if (run == 0)
					iShowBMPWOBGWP(goku_x - 34, jump_y - 10, "aura1.bmp", 0);
				else if (run == 1)
					iShowBMPWOBGWP(goku_x - 34, jump_y - 10, "aura2.bmp", 0);
				else if (run == 2)
					iShowBMPWOBGWP(goku_x - 34, jump_y - 10, "aura3.bmp", 0);
				else if (run == 3)
					iShowBMPWOBGWP(goku_x - 34, jump_y - 10, "aura4.bmp", 0);
				else if (run == 4)
					iShowBMPWOBGWP(goku_x - 34, jump_y - 10, "aura1.bmp", 0);
				else if (run == 5)
					iShowBMPWOBGWP(goku_x - 34, jump_y - 10, "aura2.bmp", 0);
				else if (run == 6)
					iShowBMPWOBGWP(goku_x - 34, jump_y - 10, "aura3.bmp", 0);
				else if (run == 7)
					iShowBMPWOBGWP(goku_x - 34, jump_y - 10, "aura4.bmp", 0);
			}
			else if (damage >= 680){
				if (run == 0)
					iShowBMPWOBGWP(goku_x - 34, jump_y - 10, "aura1.bmp", 0);
				else if (run == 2)
					iShowBMPWOBGWP(goku_x - 34, jump_y - 10, "aura2.bmp", 0);
				else if (run == 3)
					iShowBMPWOBGWP(goku_x - 34, jump_y - 10, "aura3.bmp", 0);
				else if (run == 4)
					iShowBMPWOBGWP(goku_x - 34, jump_y - 10, "aura4.bmp", 0);
				else if (run == 6)
					iShowBMPWOBGWP(goku_x - 34, jump_y - 10, "aura1.bmp", 0);
				else if (run == 7)
					iShowBMPWOBGWP(goku_x - 34, jump_y - 10, "aura2.bmp", 0);
			}
			else if (damage >= 430){
				if (run == 0)
					iShowBMPWOBGWP(goku_x - 34, jump_y - 10, "aura1.bmp", 0);
				else if (run == 2)
					iShowBMPWOBGWP(goku_x - 34, jump_y - 10, "aura2.bmp", 0);
				else if (run == 4)
					iShowBMPWOBGWP(goku_x - 34, jump_y - 10, "aura3.bmp", 0);
				else if (run == 6)
					iShowBMPWOBGWP(goku_x - 34, jump_y - 10, "aura4.bmp", 0);
			}
			else if (damage >= 300){
				if (run == 0)
					iShowBMPWOBGWP(goku_x - 34, jump_y - 10, "aura1.bmp", 0);
				else if (run == 4)
					iShowBMPWOBGWP(goku_x - 34, jump_y - 10, "aura2.bmp", 0);
			}
			else if (damage >= 110){
				if (run == 0)
					iShowBMPWOBGWP(goku_x - 34, jump_y - 10, "aura1.bmp", 0);
			}


			if (k == 0) {
				if (damage >= 850){
					if (run == 0)
						iShowBMPWOBGWP(goku_x - 34, jump_y - 10, "aura1.bmp", 0);
					else if (run == 1)
						iShowBMPWOBGWP(goku_x - 34, jump_y - 10, "aura2.bmp", 0);
					else if (run == 2)
						iShowBMPWOBGWP(goku_x - 34, jump_y - 10, "aura3.bmp", 0);
					else if (run == 3)
						iShowBMPWOBGWP(goku_x - 34, jump_y - 10, "aura4.bmp", 0);
					else if (run == 4)
						iShowBMPWOBGWP(goku_x - 34, jump_y - 10, "aura1.bmp", 0);
					else if (run == 5)
						iShowBMPWOBGWP(goku_x - 34, jump_y - 10, "aura2.bmp", 0);
					else if (run == 6)
						iShowBMPWOBGWP(goku_x - 34, jump_y - 10, "aura3.bmp", 0);
					else if (run == 7)
						iShowBMPWOBGWP(goku_x - 34, jump_y - 10, "aura4.bmp", 0);
				}
				else if (damage >= 680){
					if (run == 0)
						iShowBMPWOBGWP(goku_x - 34, jump_y - 10, "aura1.bmp", 0);
					else if (run == 2)
						iShowBMPWOBGWP(goku_x - 34, jump_y - 10, "aura2.bmp", 0);
					else if (run == 3)
						iShowBMPWOBGWP(goku_x - 34, jump_y - 10, "aura3.bmp", 0);
					else if (run == 4)
						iShowBMPWOBGWP(goku_x - 34, jump_y - 10, "aura4.bmp", 0);
					else if (run == 6)
						iShowBMPWOBGWP(goku_x - 34, jump_y - 10, "aura1.bmp", 0);
					else if (run == 7)
						iShowBMPWOBGWP(goku_x - 34, jump_y - 10, "aura2.bmp", 0);
				}
				else if (damage >= 430){
					if (run == 0)
						iShowBMPWOBGWP(goku_x - 34, jump_y - 10, "aura1.bmp", 0);
					else if (run == 2)
						iShowBMPWOBGWP(goku_x - 34, jump_y - 10, "aura2.bmp", 0);
					else if (run == 4)
						iShowBMPWOBGWP(goku_x - 34, jump_y - 10, "aura3.bmp", 0);
					else if (run == 6)
						iShowBMPWOBGWP(goku_x - 34, jump_y - 10, "aura4.bmp", 0);
				}
				else if (damage >= 300){
					if (run == 0)
						iShowBMPWOBGWP(goku_x - 34, jump_y - 10, "aura1.bmp", 0);
					else if (run == 4)
						iShowBMPWOBGWP(goku_x - 34, jump_y - 10, "aura2.bmp", 0);
				}
				else if (damage >= 110){
					if (run == 0)
						iShowBMPWOBGWP(goku_x - 34, jump_y - 10, "aura1.bmp", 0);
				}
				if (run == 0) {
					iShowBMPWOBG(goku_x, jump_y, "sr1.bmp");
				}
				else if (run == 1) {
					iShowBMPWOBG(goku_x, jump_y, "sr2.bmp");
				}
				else if (run == 2) {
					iShowBMPWOBG(goku_x, jump_y, "sr3.bmp");
				}
				else if (run == 3) {
					iShowBMPWOBG(goku_x, jump_y, "sr4.bmp");
				}
				else if (run == 4) {
					iShowBMPWOBG(goku_x, jump_y, "sr5.bmp");
				}
				else if (run == 5) {
					iShowBMPWOBG(goku_x, jump_y, "sr6.bmp");
				}
				else if (run == 6) {
					iShowBMPWOBG(goku_x, jump_y, "sr7.bmp");
				}
				else if (run == 7) {
					iShowBMPWOBG(goku_x, jump_y, "sr8.bmp");
				}

			}



			if (jumping == 0 && gr != 1 && gr1 != 1 && gr2 != 1 && gr3 != 1 && gr4 != 1 && gr5 != 1 && gr6 != 1){

				if (run == 0 && bala != 1 && mala != 2) {
					iShowBMPWOBG(goku_x, jump_y, "sr1.bmp");
				}
				else if (run == 1 && bala != 1 && mala != 2) {
					iShowBMPWOBG(goku_x, jump_y, "sr2.bmp");
				}
				else if (run == 2 && bala != 1 && mala != 2) {
					iShowBMPWOBG(goku_x, jump_y, "sr3.bmp");
				}
				else if (run == 3 && bala != 1 && mala != 2) {
					iShowBMPWOBG(goku_x, jump_y, "sr4.bmp");
				}
				else if (run == 4 && bala != 1 && mala != 2) {
					iShowBMPWOBG(goku_x, jump_y, "sr5.bmp");
				}
				else if (run == 5 && bala != 1 && mala != 2) {
					iShowBMPWOBG(goku_x, jump_y, "sr6.bmp");
				}
				else if (run == 6 && bala != 1 && mala != 2) {
					iShowBMPWOBG(goku_x, jump_y, "sr7.bmp");
				}
				else if (run == 7 && bala != 1 && mala != 2) {
					iShowBMPWOBG(goku_x, jump_y, "sr8.bmp");
				}
			}
		}



		//jump
		if (k == 1 && super == 1) {
			if (jumping == 1) {
				if (jump == 0 && bala != 1 && gr != 1 && gr1 != 1 && gr2 != 1 && gr3 != 1 && gr4 != 1 && gr5 != 1 && gr6 != 1){
					iShowBMPWOBG(goku_x, jump_y, "j2.bmp");
				}
				else if (jump == 1 && bala != 1 && gr != 1 && gr1 != 1 && gr2 != 1 && gr3 != 1 && gr4 != 1 && gr5 != 1 && gr6 != 1) {
					iShowBMPWOBG(goku_x, jump_y, "j3.bmp");
				}
				else if (jump == 2 && bala != 1 && gr != 1 && gr1 != 1 && gr2 != 1 && gr3 != 1 && gr4 != 1 && gr5 != 1 && gr6 != 1) {
					iShowBMPWOBG(goku_x, jump_y, "j3.bmp");
				}
			}
			else if (jumping == 2) {
				if (jump == 0 && bala != 1 && gr != 1 && gr1 != 1 && gr2 != 1 && gr3 != 1 && gr4 != 1 && gr5 != 1 && gr6 != 1){
					iShowBMPWOBG(goku_x, jump_y, "j5.bmp");
				}
				else if (jump == 1 && bala != 1 && gr != 1 && gr1 != 1 && gr2 != 1 && gr3 != 1 && gr4 != 1 && gr5 != 1 && gr6 != 1) {
					iShowBMPWOBG(goku_x, jump_y, "j6.bmp");
				}
				else if (jump == 2 && bala != 1 && gr != 1 && gr1 != 1 && gr2 != 1 && gr3 != 1 && gr4 != 1 && gr5 != 1 && gr6 != 1) {
					iShowBMPWOBG(goku_x, jump_y, "j8.bmp");
				}
			}
		}



		if (super == 2 && k == 1) {
			if (jumping == 1 && bala != 1) {
				if (jump == 0 && gr != 1 && gr1 != 1 && gr2 != 1 && gr3 != 1 && gr4 != 1 && gr5 != 1 && gr6 != 1){
					iShowBMPWOBG(goku_x, jump_y, "sj2.bmp");
				}
				else if (jump == 1 && bala != 1 && gr != 1 && gr1 != 1 && gr2 != 1 && gr3 != 1 && gr4 != 1 && gr5 != 1 && gr6 != 1) {
					iShowBMPWOBG(goku_x, jump_y, "sj3.bmp");
				}
				else if (jump == 2 && bala != 1 && gr != 1 && gr1 != 1 && gr2 != 1 && gr3 != 1 && gr4 != 1 && gr5 != 1 && gr6 != 1) {
					iShowBMPWOBG(goku_x, jump_y, "sj3.bmp");
				}
			}
			else if (jumping == 2) {
				if (jump == 0 && bala != 1 && gr != 1 && gr1 != 1 && gr2 != 1 && gr3 != 1 && gr4 != 1 && gr5 != 1 && gr6 != 1){
					iShowBMPWOBG(goku_x, jump_y, "sj5.bmp");
				}
				else if (jump == 1 && bala != 1 && gr != 1 && gr1 != 1 && gr2 != 1 && gr3 != 1 && gr4 != 1 && gr5 != 1 && gr6 != 1) {
					iShowBMPWOBG(goku_x, jump_y, "sj6.bmp");
				}
				else if (jump == 2 && bala != 1 && gr != 1 && gr1 != 1 && gr2 != 1 && gr3 != 1 && gr4 != 1 && gr5 != 1 && gr6 != 1) {
					iShowBMPWOBG(goku_x, jump_y, "sj8.bmp");
				}
			}
		}


		//Blast
		if (super == 1){
			if (blast_button != 0 && blast_button != 3)
			{
				jump = 4;
				gr = 1;
				if (bala != 1)
					iShowBMPWOBG(goku_x, jump_y, "b1.bmp");
			}
			else
				gr = 0;
			if (blast > 5 && blast_button != 0)
			{
				if (blast_x < 350)
				{
					gr = 1;
					if (bala != 1)
						iShowBMPWOBG(goku_x, jump_y, "b2.bmp");

				}
				else
					gr = 0;
				blast_button = 3;
				if (blast_flag == 0)
				{
					blast_y = jump_y + 27;
					blast_flag = 1;
				}

				iShowBMPWOBG(blast_x, blast_y, "blast.bmp");
				if (blast_x >= 1280)
				{
					blast_x = 240;
					blast_button = 0;
					blast_flag = 0;
					blast_y = 0;
				}
			}

			//Blast1
			if (blast1_button != 0 && blast1_button != 3)
			{

				jump = 4;
				gr1 = 1;
				if (bala != 1)
					iShowBMPWOBG(goku_x, jump_y, "b1.bmp");
			}
			else
				gr1 = 0;
			if (blast1 > 5 && blast1_button != 0)
			{
				if (blast1_x < 350)
				{
					gr1 = 1;
					if (bala != 1)
						iShowBMPWOBG(goku_x, jump_y, "b2.bmp");

				}
				else
					gr1 = 0;
				blast1_button = 3;
				if (blast1_flag == 0)
				{
					blast1_y = jump_y + 27;
					blast1_flag = 1;
				}
				iShowBMPWOBG(blast1_x, blast1_y, "blast.bmp");
				if (blast1_x >= 1280)
				{
					blast1_x = 240;
					blast1_button = 0;
					blast1_flag = 0;
					blast1_y = 0;
				}
			}

			//Blast2

			if (blast2_button != 0 && blast2_button != 3)
			{

				jump = 4;
				gr2 = 1;
				if (bala != 1)
					iShowBMPWOBG(goku_x, jump_y, "b1.bmp");
			}
			else
				gr2 = 0;
			if (blast2 > 5, k, k && blast2_button != 0)
			{
				if (blast2_x < 350)
				{
					gr2 = 1;
					if (bala != 1)
						iShowBMPWOBG(goku_x, jump_y, "b2.bmp");

				}
				else
					gr2 = 0;
				blast2_button = 3;
				if (blast2_flag == 0)
				{
					blast2_y = jump_y + 27;
					blast2_flag = 1;
				}

				iShowBMPWOBG(blast2_x, blast2_y, "blast.bmp");
				if (blast2_x >= 1280)
				{
					blast2_x = 240;
					blast2_button = 0;
					blast2_flag = 0;
					blast2_y = 0;
				}
			}

			//Blast3
			if (blast3_button != 0 && blast3_button != 3)
			{

				jump = 4;
				gr3 = 1;
				if (bala != 1)
					iShowBMPWOBG(goku_x, jump_y, "b1.bmp");
			}
			else
				gr3 = 0;
			if (blast3 > 5 && blast3_button != 0)
			{
				if (blast3_x < 350)
				{
					gr3 = 1;
					if (bala != 1)
						iShowBMPWOBG(goku_x, jump_y, "b2.bmp");

				}
				else
					gr3 = 0;
				blast3_button = 3;
				if (blast3_flag == 0)
				{
					blast3_y = jump_y + 27;
					blast3_flag = 1;
				}

				iShowBMPWOBG(blast3_x, blast3_y, "blast.bmp");
				if (blast3_x >= 1280)
				{
					blast3_x = 240;
					blast3_button = 0;
					blast3_flag = 0;
					blast3_y = 0;
				}
			}


			//Blast4

			if (blast4_button != 0 && blast4_button != 3)
			{

				jump = 4;
				if (bala != 1)
					iShowBMPWOBG(goku_x, jump_y, "b1.bmp");
				gr4 = 1;
			}
			else
				gr4 = 0;
			if (blast4 > 5 && blast4_button != 0)
			{
				if (blast4_x < 350)
				{
					gr4 = 1;
					if (bala != 1)
						iShowBMPWOBG(goku_x, jump_y, "b2.bmp");

				}
				else
					gr4 = 0;
				blast4_button = 3;
				if (blast4_flag == 0)
				{
					blast4_y = jump_y + 27;
					blast4_flag = 1;
				}

				iShowBMPWOBG(blast4_x, blast4_y, "blast.bmp");
				if (blast4_x >= 1280)
				{
					blast4_x = 240;
					blast4_button = 0;
					blast4_flag = 0;
					blast4_y = 0;
				}
			}


			//Blast5

			if (blast5_button != 0 && blast5_button != 3)
			{

				jump = 4;
				gr5 = 1;
				if (bala != 1)
					iShowBMPWOBG(goku_x, jump_y, "b1.bmp");
			}
			else
				gr5 = 0;
			if (blast5 > 5 && blast5_button != 0)
			{
				if (blast5_x < 350)
				{
					gr5 = 1;
					if (bala != 1)
						iShowBMPWOBG(goku_x, jump_y, "b2.bmp");

				}
				else
					gr5 = 0;
				blast5_button = 3;
				if (blast5_flag == 0)
				{
					blast5_y = jump_y + 27;
					blast5_flag = 1;
				}

				iShowBMPWOBG(blast5_x, blast5_y, "blast.bmp");
				if (blast5_x >= 1280)
				{
					blast5_x = 240;
					blast5_button = 0;
					blast5_flag = 0;
					blast5_y = 0;
				}
			}


			//Blast6

			if (blast6_button != 0 && blast6_button != 3)
			{

				jump = 4;
				gr6 = 1;
				if (bala != 1)
					iShowBMPWOBG(goku_x, jump_y, "b1.bmp");
			}
			else
				gr6 = 0;
			if (blast6 > 5 && blast6_button != 0)
			{
				if (blast6_x < 350)
				{
					gr6 = 1;
					if (bala != 1)
						iShowBMPWOBG(goku_x, jump_y, "b2.bmp");

				}
				else
					gr6 = 0;
				blast6_button = 3;
				if (blast6_flag == 0)
				{
					blast6_y = jump_y + 27;
					blast6_flag = 1;
				}

				iShowBMPWOBG(blast6_x, blast6_y, "blast.bmp");
				if (blast6_x >= 1280)
				{
					blast6_x = 240;
					blast6_button = 0;
					blast6_flag = 0;
					blast6_y = 0;
				}
			}

			//Blast7

			if (blast7_button != 0 && blast7_button != 3)
			{

				jump = 4;
				gr7 = 1;
				if (bala != 1)
					iShowBMPWOBG(goku_x, jump_y, "b1.bmp");
			}
			else
				gr7 = 0;
			if (blast7 > 5 && blast7_button != 0)
			{
				if (blast7_x < 350)
				{
					gr7 = 1;
					if (bala != 1)
						iShowBMPWOBG(goku_x, jump_y, "b2.bmp");

				}
				else
					gr7 = 0;
				blast7_button = 3;
				if (blast7_flag == 0)
				{
					blast7_y = jump_y + 27;
					blast7_flag = 1;
				}

				iShowBMPWOBG(blast7_x, blast7_y, "blast.bmp");
				if (blast7_x >= 1280)
				{
					blast7_x = 240;
					blast7_button = 0;
					blast7_flag = 0;
					blast7_y = 0;
				}
			}


			//Blast8

			if (blast8_button != 0 && blast8_button != 3)
			{

				jump = 4;
				gr8 = 1;
				if (bala != 1)
					iShowBMPWOBG(goku_x, jump_y, "b1.bmp");
			}
			else
				gr8 = 0;
			if (blast8 > 5 && blast8_button != 0)
			{
				if (blast8_x < 350)
				{
					gr8 = 1;
					if (bala != 1)
						iShowBMPWOBG(goku_x, jump_y, "b2.bmp");

				}
				else
					gr8 = 0;
				blast8_button = 3;
				if (blast8_flag == 0)
				{
					blast8_y = jump_y + 27;
					blast8_flag = 1;
				}

				iShowBMPWOBG(blast8_x, blast8_y, "blast.bmp");
				if (blast8_x >= 1280)
				{
					blast8_x = 240;
					blast8_button = 0;
					blast8_flag = 0;
					blast8_y = 0;
				}
			}


			//Blast9

			if (blast9_button != 0 && blast9_button != 3)
			{

				jump = 4;
				gr9 = 1;
				if (bala != 1)
					iShowBMPWOBG(goku_x, jump_y, "b1.bmp");
			}
			else
				gr9 = 0;
			if (blast9 > 5 && blast9_button != 0)
			{
				if (blast9_x < 350)
				{
					gr9 = 1;
					if (bala != 1)
						iShowBMPWOBG(goku_x, jump_y, "b2.bmp");

				}
				else
					gr9 = 0;
				blast9_button = 3;
				if (blast9_flag == 0)
				{
					blast9_y = jump_y + 27;
					blast9_flag = 1;
				}

				iShowBMPWOBG(blast9_x, blast9_y, "blast.bmp");
				if (blast9_x >= 1280)
				{
					blast9_x = 240;
					blast9_button = 0;
					blast9_flag = 0;
					blast9_y = 0;
				}
			}
		}

		//Super Blast
		if (super == 2) {
			if (blast_button != 0 && blast_button != 3)
			{
				gr = 1;
				if (bala != 1)
					iShowBMPWOBG(goku_x, jump_y, "sb1.bmp");
			}
			else
				gr = 0;
			if (blast > 5 && blast_button != 0)
			{
				if (blast_x < 350)
				{
					gr = 1;
					if (bala != 1)
						iShowBMPWOBG(goku_x, jump_y, "sb2.bmp");
				}
				else
					gr = 0;
				blast_button = 3;
				if (blast_flag == 0)
				{
					blast_y = jump_y + 27;
					blast_flag = 1;
				}

				iShowBMPWOBG(blast_x, blast_y, "s_blast.bmp");
				if (blast_x >= 1280)
				{
					blast_x = 240;
					blast_button = 0;
					blast_flag = 0;
					blast_y = 0;
				}
			}

			//Blast1
			if (blast1_button != 0 && blast1_button != 3)
			{
				gr1 = 1;
				if (bala != 1)
					iShowBMPWOBG(goku_x, jump_y, "sb1.bmp");
			}
			else
				gr1 = 0;
			if (blast1 > 5 && blast1_button != 0)
			{
				if (blast1_x < 350)
				{
					gr1 = 1;
					if (bala != 1)
						iShowBMPWOBG(goku_x, jump_y, "sb2.bmp");
				}
				else
					gr1 = 0;
				blast1_button = 3;
				if (blast1_flag == 0)
				{
					blast1_y = jump_y + 27;
					blast1_flag = 1;
				}

				iShowBMPWOBG(blast1_x, blast1_y, "s_blast.bmp");
				if (blast1_x >= 1280)
				{
					blast1_x = 240;
					blast1_button = 0;
					blast1_flag = 0;
					blast1_y = 0;
				}
			}

			//Blast2

			if (blast2_button != 0 && blast2_button != 3)
			{
				gr2 = 1;
				if (bala != 1)
					iShowBMPWOBG(goku_x, jump_y, "sb1.bmp");
			}
			else
				gr2 = 0;
			if (blast2 > 5, k, k && blast2_button != 0)
			{
				if (blast2_x < 350)
				{
					gr2 = 1;
					if (bala != 1)
						iShowBMPWOBG(goku_x, jump_y, "sb2.bmp");
				}
				else
					gr2 = 0;
				blast2_button = 3;
				if (blast2_flag == 0)
				{
					blast2_y = jump_y + 27;
					blast2_flag = 1;
				}

				iShowBMPWOBG(blast2_x, blast2_y, "s_blast.bmp");
				if (blast2_x >= 1280)
				{
					blast2_x = 240;
					blast2_button = 0;
					blast2_flag = 0;
					blast2_y = 0;
				}
			}

			//Blast3
			if (blast3_button != 0 && blast3_button != 3)
			{
				gr3 = 1;
				if (bala != 1)
					iShowBMPWOBG(goku_x, jump_y, "sb1.bmp");
			}
			else
				gr3 = 0;
			if (blast3 > 5 && blast3_button != 0)
			{
				if (blast3_x < 350)
				{
					gr3 = 1;
					if (bala != 1)
						iShowBMPWOBG(goku_x, jump_y, "sb2.bmp");
				}
				else
					gr3 = 0;
				blast3_button = 3;
				if (blast3_flag == 0)
				{
					blast3_y = jump_y + 27;
					blast3_flag = 1;
				}

				iShowBMPWOBG(blast3_x, blast3_y, "s_blast.bmp");
				if (blast3_x >= 1280)
				{
					blast3_x = 240;
					blast3_button = 0;
					blast3_flag = 0;
					blast3_y = 0;
				}
			}


			//Blast4

			if (blast4_button != 0 && blast4_button != 3)
			{
				if (bala != 1)
					iShowBMPWOBG(goku_x, jump_y, "sb1.bmp");
				gr4 = 1;
			}
			else
				gr4 = 0;
			if (blast4 > 5 && blast4_button != 0)
			{
				if (blast4_x < 350)
				{
					gr4 = 1;
					if (bala != 1)
						iShowBMPWOBG(goku_x, jump_y, "sb2.bmp");
				}
				else
					gr4 = 0;
				blast4_button = 3;
				if (blast4_flag == 0)
				{
					blast4_y = jump_y + 27;
					blast4_flag = 1;
				}

				iShowBMPWOBG(blast4_x, blast4_y, "s_blast.bmp");
				if (blast4_x >= 1280)
				{
					blast4_x = 240;
					blast4_button = 0;
					blast4_flag = 0;
					blast4_y = 0;
				}
			}


			//Blast5

			if (blast5_button != 0 && blast5_button != 3)
			{
				gr5 = 1;
				if (bala != 1)
					iShowBMPWOBG(goku_x, jump_y, "sb1.bmp");
			}
			else
				gr5 = 0;
			if (blast5 > 5 && blast5_button != 0)
			{
				if (blast5_x < 350)
				{
					gr5 = 1;
					if (bala != 1)
						iShowBMPWOBG(goku_x, jump_y, "sb2.bmp");
				}
				else
					gr5 = 0;
				blast5_button = 3;
				if (blast5_flag == 0)
				{
					blast5_y = jump_y + 27;
					blast5_flag = 1;
				}

				iShowBMPWOBG(blast5_x, blast5_y, "s_blast.bmp");
				if (blast5_x >= 1280)
				{
					blast5_x = 240;
					blast5_button = 0;
					blast5_flag = 0;
					blast5_y = 0;
				}
			}

			//Blast6

			if (blast6_button != 0 && blast6_button != 3)
			{
				gr6 = 1;
				if (bala != 1)
					iShowBMPWOBG(goku_x, jump_y, "sb1.bmp");
			}
			else
				gr6 = 0;
			if (blast6 > 5 && blast6_button != 0)
			{
				if (blast6_x < 350)
				{
					gr6 = 1;
					if (bala != 1)
						iShowBMPWOBG(goku_x, jump_y, "sb2.bmp");
				}
				else
					gr6 = 0;
				blast6_button = 3;
				if (blast6_flag == 0)
				{
					blast6_y = jump_y + 27;
					blast6_flag = 1;
				}

				iShowBMPWOBG(blast6_x, blast6_y, "s_blast.bmp");
				if (blast6_x >= 1280)
				{
					blast6_x = 240;
					blast6_button = 0;
					blast6_flag = 0;
					blast6_y = 0;
				}
			}

			//Blast7

			if (blast7_button != 0 && blast7_button != 3)
			{
				gr7 = 1;
				if (bala != 1)
					iShowBMPWOBG(goku_x, jump_y, "sb1.bmp");
			}
			else
				gr7 = 0;
			if (blast7 > 5 && blast7_button != 0)
			{
				if (blast7_x < 350)
				{
					gr7 = 1;
					if (bala != 1)
						iShowBMPWOBG(goku_x, jump_y, "sb2.bmp");
				}
				else
					gr7 = 0;
				blast7_button = 3;
				if (blast7_flag == 0)
				{
					blast7_y = jump_y + 27;
					blast7_flag = 1;
				}

				iShowBMPWOBG(blast7_x, blast7_y, "s_blast.bmp");
				if (blast7_x >= 1280)
				{
					blast7_x = 240;
					blast7_button = 0;
					blast7_flag = 0;
					blast7_y = 0;
				}
			}


			//Blast8

			if (blast8_button != 0 && blast8_button != 3)
			{
				gr8 = 1;
				if (bala != 1)
					iShowBMPWOBG(goku_x, jump_y, "sb1.bmp");
			}
			else
				gr8 = 0;
			if (blast8 > 5 && blast8_button != 0)
			{
				if (blast8_x < 350)
				{
					gr8 = 1;
					if (bala != 1)
						iShowBMPWOBG(goku_x, jump_y, "sb2.bmp");
				}
				else
					gr8 = 0;
				blast8_button = 3;
				if (blast8_flag == 0)
				{
					blast8_y = jump_y + 27;
					blast8_flag = 1;
				}

				iShowBMPWOBG(blast8_x, blast8_y, "s_blast.bmp");
				if (blast8_x >= 1280)
				{
					blast8_x = 240;
					blast8_button = 0;
					blast8_flag = 0;
					blast8_y = 0;
				}
			}


			//Blast9

			if (blast9_button != 0 && blast9_button != 3)
			{
				gr9 = 1;
				if (bala != 1)
					iShowBMPWOBG(goku_x, jump_y, "sb1.bmp");
			}
			else
				gr9 = 0;
			if (blast9 > 5 && blast9_button != 0)
			{
				if (blast9_x < 350)
				{
					gr9 = 1;
					if (bala != 1)
						iShowBMPWOBG(goku_x, jump_y, "sb2.bmp");
				}
				else
					gr9 = 0;
				blast9_button = 3;
				if (blast9_flag == 0)
				{
					blast9_y = jump_y + 27;
					blast9_flag = 1;
				}

				iShowBMPWOBG(blast9_x, blast9_y, "s_blast.bmp");
				if (blast9_x >= 1280)
				{
					blast9_x = 240;
					blast9_button = 0;
					blast9_flag = 0;
					blast9_y = 0;
				}
			}
		}


		if (spike_direction == 1) {
			iShowBMPWOBGWP(spike_x, spike_y, "spikes.bmp", 0);
			if (spikehit == 1)
				iShowBMPWOBGWP(spike_x, spike_y, "spikesX.bmp", 0);
		}
		else if (spike_direction == 2) {
			iShowBMPWOBGWP(spike2_x, spike_y, "spikes.bmp", 0);
			if (spikehit2 == 1)
				iShowBMPWOBGWP(spike2_x, spike_y, "spikesX.bmp", 0);
		}
		else if (spike_direction == 3) {

			iShowBMPWOBGWP(spike3_x, spike_y, "spikes.bmp", 0);
			if (spikehit3 == 1)
				iShowBMPWOBGWP(spike3_x, spike_y, "spikesX.bmp", 0);
			iShowBMPWOBGWP(spike4_x, spike_y, "spikes.bmp", 0);
			if (spikehit4 == 1)
				iShowBMPWOBGWP(spike4_x, spike_y, "spikesX.bmp", 0);
		}
		else if (spike_direction == 4) {
			iShowBMPWOBGWP(spike5_x, spike_y, "spikes.bmp", 0);
			if (spikehit5 == 1)
				iShowBMPWOBGWP(spike5_x, spike_y, "spikesX.bmp", 0);
			iShowBMPWOBGWP(spike6_x, spike_y, "spikes.bmp", 0);
			if (spikehit6 == 1)
				iShowBMPWOBGWP(spike6_x, spike_y, "spikesX.bmp", 0);
		}
		else if (spike_direction == 5) {
			iShowBMPWOBGWP(spike7_x, spike_y, "spikes.bmp", 0);
			if (spikehit7 == 1)
				iShowBMPWOBGWP(spike7_x, spike_y, "spikesX.bmp", 0);
			iShowBMPWOBGWP(spike8_x, spike_y, "spikes.bmp", 0);
			if (spikehit8 == 1)
				iShowBMPWOBGWP(spike8_x, spike_y, "spikesX.bmp", 0);
		}
		else if (spike_direction == 6) {
			iShowBMPWOBGWP(spike9_x, spike_y, "spikes.bmp", 0);
			if (spikehit9 == 1)
				iShowBMPWOBGWP(spike9_x, spike_y, "spikesX.bmp", 0);

			iShowBMPWOBGWP(spike10_x, spike_y, "spikes.bmp", 0);
			if (spikehit10 == 1)
				iShowBMPWOBGWP(spike10_x, spike_y, "spikesX.bmp", 0);

			iShowBMPWOBGWP(spike11_x, spike_y, "spikes.bmp", 0);
			if (spikehit11 == 1)
				iShowBMPWOBGWP(spike11_x, spike_y, "spikesX.bmp", 0);

		}



		//cellJr
		if (cell == 0) {
			iShowBMPWOBG(cell_x, cell_y, "c1.bmp");
		}
		if (cell1 == 0) {
			iShowBMPWOBG(cell10_x, cell10_y, "c1.bmp");
		}
		if (cell2 == 0) {
			iShowBMPWOBG(cell20_x, cell20_y, "c1.bmp");
		}
		if (hit == 1) {
			iShowBMPWOBG(cell_x, cell_y, "c2.bmp");
		}
		if (hit1 == 1) {
			iShowBMPWOBG(cell10_x, cell10_y, "c2.bmp");
		}
		if (hit2 == 1) {
			iShowBMPWOBG(cell20_x, cell20_y, "c2.bmp");
		}
		//death

		if (f_death == 1) {

			f_d++;
			if (f_d <= 10) {
				iShowBMPWOBG(death_x, death_y, "dead2.bmp");
			}
			if (f_d > 10){
				if (death_y > 128) {
					death_x += 2;
					death_y -= 10;
					iShowBMPWOBG(death_x, death_y, "dead3.bmp");

				}
				if (death_y <= 128) {
					death_y = 128;
					death_x -= spike_speed;
					iShowBMPWOBG(death_x, death_y, "dead1.bmp");
				}


			}

		}


		//hit

		if (bala == 1) {
			if (b == 0) {
				b = 1;
			}
			b++;
			if (b > 1 && b <= 10){
				if (super == 1) {
					iShowBMPWOBG(goku_x, jump_y, "hurt.bmp");
				}
				else if (super == 2) {
					iShowBMPWOBG(goku_x, jump_y, "hurtSS.bmp");
				}
			}
			else if (b > 10) {
				bala = 0;
				b = 0;
			}
		}
		if (mala == 2) {
			if (ma == 0) {
				ma = 1;
			}
			ma++;
			if (ma > 1 && ma <= 10){
				if (super == 1) {
					iShowBMPWOBG(goku_x, jump_y, "hurt.bmp");
				}
				else if (super == 2) {
					iShowBMPWOBG(goku_x, jump_y, "hurtSS.bmp");
				}
			}
			else if (ma > 10) {
				mala = 0;
				ma = 0;
			}
		}









		//senzu

		if (senzu == 1) {
			iShowBMPWOBGWP(senzu_x, senzu_y, "senzu.bmp", 0);
		}
		if (super == 1)
			iShowBMP(0, 0, "st_r.bmp");
		if (super == 2)
			iShowBMP(0, 0, "st_ss.bmp");
		iShowBMPWOBGWP(0, 350, "HP.bmp", 0);
		iShowBMPWOBGWP(0, 300, "score.bmp", 0);
		iSetColor(255, 255, 255);
		char p[500];
		char b[100];
		p[0] = '\0';
		strcat_s(p, itoa(score, b, 10));
		iText(40, 280, p, GLUT_BITMAP_TIMES_ROMAN_24);

		//HP_Bar
		if (dis < 70000){
			if (damage >= 500 * 1.7){
				red = (255 - damage / (3.921568627*1.7)) * 2;
				green = 255;
			}
			else{
				green = (damage / (3.921568627*1.7)) * 2;
				red = 255;
			}
			iSetColor(red, green, 0);
			char q[500];
			char l[100];
			q[0] = '\0';
			strcat(q, itoa(damage / (10 * 1.7), l, 10));
			strcat(q, "%");
			iText(46, 744, q, GLUT_BITMAP_HELVETICA_18);
			iFilledRectangle(52, 453, 19, (damage / (4 * 1.7))*1.126);
			iFilledCircle(62.5, 410, 10);
		}
		else if (dis >= 70000)
		{
			if (damage >= 500 * 1.7){
				red = (255 - damage / (3.921568627*1.7)) * 2;
				green = 255;
			}
			else{
				green = (damage / (3.921568627*1.7)) * 2;
				red = 255;
			}
			if (frieza_life >= 3 * 500){
				fgreen = (255 - frieza_life / (3.921568627 * 3)) * 2;
				fred = 255;
			}
			else{
				fred = (frieza_life / (3.921568627 * 3)) * 2;
				fgreen = 255;
			}
			iSetColor(red, green, 0);
			char q[500];
			char l[100];
			q[0] = '\0';
			strcat(q, itoa(damage / 17, l, 10));
			strcat(q, "%");
			iText(46, 744, q, GLUT_BITMAP_HELVETICA_18);
			iFilledRectangle(52, 453, 8.7, (damage / (4 * 1.7))*1.126);
			iFilledCircle(62.5, 410, 10);
			iSetColor(fred, 0, fgreen);
			iFilledRectangle(62.5, 453, 8.7, (frieza_life / 12)*1.126);

		}
		//DragonBalls ST bar
		if (db == 1){
			iShowBMPWOBGWP(28, 180, "dbs1.bmp", 0);
		}
		if (db == 2){
			iShowBMPWOBGWP(28, 180, "dbs1.bmp", 0);
			iShowBMPWOBGWP(72, 180, "dbs2.bmp", 0);
		}
		if (db == 3){
			iShowBMPWOBGWP(28, 180, "dbs1.bmp", 0);
			iShowBMPWOBGWP(72, 180, "dbs2.bmp", 0);
			iShowBMPWOBGWP(28, 130, "dbs3.bmp", 0);
		}
		if (db == 4){
			iShowBMPWOBGWP(28, 180, "dbs1.bmp", 0);
			iShowBMPWOBGWP(72, 180, "dbs2.bmp", 0);
			iShowBMPWOBGWP(28, 130, "dbs3.bmp", 0);
			iShowBMPWOBGWP(72, 130, "dbs4.bmp", 0);
		}
		if (db == 5){
			iShowBMPWOBGWP(28, 180, "dbs1.bmp", 0);
			iShowBMPWOBGWP(72, 180, "dbs2.bmp", 0);
			iShowBMPWOBGWP(28, 130, "dbs3.bmp", 0);
			iShowBMPWOBGWP(72, 130, "dbs4.bmp", 0);
			iShowBMPWOBGWP(28, 80, "dbs5.bmp", 0);
		}
		if (db == 6){
			iShowBMPWOBGWP(28, 180, "dbs1.bmp", 0);
			iShowBMPWOBGWP(72, 180, "dbs2.bmp", 0);
			iShowBMPWOBGWP(28, 130, "dbs3.bmp", 0);
			iShowBMPWOBGWP(72, 130, "dbs4.bmp", 0);
			iShowBMPWOBGWP(28, 80, "dbs5.bmp", 0);
			iShowBMPWOBGWP(72, 80, "dbs6.bmp", 0);
		}
		if (db >= 7)
		{
			iShowBMPWOBGWP(28, 180, "dbs1.bmp", 0);
			iShowBMPWOBGWP(72, 180, "dbs2.bmp", 0);
			iShowBMPWOBGWP(28, 130, "dbs3.bmp", 0);
			iShowBMPWOBGWP(72, 130, "dbs4.bmp", 0);
			iShowBMPWOBGWP(28, 80, "dbs5.bmp", 0);
			iShowBMPWOBGWP(72, 80, "dbs6.bmp", 0);
			iShowBMPWOBGWP(50, 30, "dbs7.bmp", 0);
		}








		//iShowBMPWOBG(frieza_x, frieza_y, "frieza.bmp");
		//place your drawing codes here

	}


	if (mode == 1)
	{
		iShowBMP(340, 209, nhs_str);
		nhs_co++;
		if (nhs_co % 20 == 0)
		{
			nhs_str[0] = '\0';
			strcat(nhs_str, "nhs");
			char gol[10];
			strcat(nhs_str, itoa((nhsC + 1), gol, 10));
			strcat(nhs_str, ".bmp");
			nhsC++;
			if (nhsC >= 6)
				nhsC = 0;
		}
		iSetColor(200, 200, 200);
		iRectangle(545, 350, 200, 40);
		iSetColor(240, 240, 240);
		iText(555, 362, string, GLUT_BITMAP_TIMES_ROMAN_24);
	}
	else if (hsc_st == 1 && st_sc != 3)
	{
		fr_st++;
		if (fr_st == 1)
			read();
		iShowBMP(hs_x, hs_y, hsc_str);
		hsc_co++;


		//dx score

		if (score_direction == 1) {
			hs_x -= dsd;
			hs_y += dsd;
		}
		if (score_direction == 2) {
			hs_x += dsd;
			hs_y += dsd;
		}
		if (score_direction == 3) {
			hs_x -= dsd;
			hs_y -= dsd;
		}
		if (score_direction == 4) {
			hs_x += dsd;
			hs_y -= dsd;
		}
		if (score_direction == 5) {
			hs_y += dsd;
		}
		if (score_direction == 6) {
			hs_y -= dsd;
		}



		if (hs_x <= 1) {
			if (score_direction == 1) {
				score_direction = 2;
			}
			else if (score_direction == 3) {
				score_direction = 4;
			}
		}
		else if (hs_x >= 480) {
			if (score_direction == 2) {
				score_direction = 1;
			}

			if (score_direction == 4) {
				score_direction = 3;

			}
		}
		else if (hs_y >= 256) {
			if (score_direction == 2) {
				score_direction = 4;
			}

			if (score_direction == 1) {
				score_direction = 3;

			}
		}
		else if (hs_y <= 0) {
			if (score_direction == 4) {
				score_direction = 2;
			}

			if (score_direction == 3) {
				score_direction = 1;

			}
		}

		if (hsc_co % 20 == 0)
		{
			hsc_str[0] = '\0';
			strcat(hsc_str, "hs");
			char gol[10];
			strcat(hsc_str, itoa((hsco + 1), gol, 10));
			strcat(hsc_str, ".bmp");
			hsco++;
			if (hsco >= 6)
				hsco = 0;
		}




		iText(hs_x + 180, hs_y + 52, name[6], GLUT_BITMAP_TIMES_ROMAN_24);
		iText(hs_x + 180, hs_y + 107, name[5], GLUT_BITMAP_TIMES_ROMAN_24);
		iText(hs_x + 180, hs_y + 161, name[4], GLUT_BITMAP_TIMES_ROMAN_24);
		iText(hs_x + 180, hs_y + 218, name[3], GLUT_BITMAP_TIMES_ROMAN_24);
		iText(hs_x + 180, hs_y + 270.5, name[2], GLUT_BITMAP_TIMES_ROMAN_24);
		iText(hs_x + 180, hs_y + 321, name[1], GLUT_BITMAP_TIMES_ROMAN_24);
		iText(hs_x + 180, hs_y + 372, name[0], GLUT_BITMAP_TIMES_ROMAN_24);
		char Spr[1000];
		iText(hs_x + 600, hs_y + 52, itoa((fscore[6]), Spr, 10), GLUT_BITMAP_TIMES_ROMAN_24);
		iText(hs_x + 600, hs_y + 107, itoa((fscore[5]), Spr, 10), GLUT_BITMAP_TIMES_ROMAN_24);
		iText(hs_x + 600, hs_y + 161, itoa((fscore[4]), Spr, 10), GLUT_BITMAP_TIMES_ROMAN_24);
		iText(hs_x + 600, hs_y + 218, itoa((fscore[3]), Spr, 10), GLUT_BITMAP_TIMES_ROMAN_24);
		iText(hs_x + 600, hs_y + 270.5, itoa((fscore[2]), Spr, 10), GLUT_BITMAP_TIMES_ROMAN_24);
		iText(hs_x + 600, hs_y + 321, itoa((fscore[1]), Spr, 10), GLUT_BITMAP_TIMES_ROMAN_24);
		iText(hs_x + 600, hs_y + 372, itoa((fscore[0]), Spr, 10), GLUT_BITMAP_TIMES_ROMAN_24);

		iText(hs_x + 290, hs_y + 52, "        ------------", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(hs_x + 290, hs_y + 107, "        ------------", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(hs_x + 290, hs_y + 161, "        ------------", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(hs_x + 290, hs_y + 218, "        ------------", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(hs_x + 290, hs_y + 270.5, "        ------------", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(hs_x + 290, hs_y + 321, "        ------------", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(hs_x + 290, hs_y + 372, "        ------------", GLUT_BITMAP_TIMES_ROMAN_24);





		if (line == 0) {
			iRectangle(hs_x + 160, hs_y + 350, 540, 60);
		}
		else if (line == 1) {
			iRectangle(hs_x + 160, hs_y + 297, 540, 60);
		}
		else if (line == 2) {
			iRectangle(hs_x + 160, hs_y + 245, 540, 60);
		}
		else if (line == 3) {
			iRectangle(hs_x + 160, hs_y + 194, 540, 60);
		}
		else if (line == 4) {
			iRectangle(hs_x + 160, hs_y + 136, 540, 60);
		}
		else if (line == 5) {
			iRectangle(hs_x + 160, hs_y + 82, 540, 60);
		}
		else if (line == 6) {
			iRectangle(hs_x + 160, hs_y + 28, 540, 60);
		}


		if (res == 1){
			iPauseTimer(2);
			res = 0;
		}
	}
	if (hsc_st == 1 && hs_st == 1)
	{
		fr_st++;
		if (fr_st == 1)
			read();
		iShowBMP(hs_x, hs_y, hsc_str);
		hsc_co++;


		//dx score

		if (score_direction == 1) {
			hs_x -= dsd;
			hs_y += dsd;
		}
		if (score_direction == 2) {
			hs_x += dsd;
			hs_y += dsd;
		}
		if (score_direction == 3) {
			hs_x -= dsd;
			hs_y -= dsd;
		}
		if (score_direction == 4) {
			hs_x += dsd;
			hs_y -= dsd;
		}
		if (score_direction == 5) {
			hs_y += dsd;
		}
		if (score_direction == 6) {
			hs_y -= dsd;
		}



		if (hs_x <= 1) {
			if (score_direction == 1) {
				score_direction = 2;
			}
			else if (score_direction == 3) {
				score_direction = 4;
			}
		}
		else if (hs_x >= 480) {
			if (score_direction == 2) {
				score_direction = 1;
			}

			if (score_direction == 4) {
				score_direction = 3;

			}
		}
		else if (hs_y >= 256) {
			if (score_direction == 2) {
				score_direction = 4;
			}

			if (score_direction == 1) {
				score_direction = 3;

			}
		}
		else if (hs_y <= 0) {
			if (score_direction == 4) {
				score_direction = 2;
			}

			if (score_direction == 3) {
				score_direction = 1;

			}
		}


		if (hsc_co % 20 == 0)
		{
			hsc_str[0] = '\0';
			strcat(hsc_str, "hs");
			char gol[10];
			strcat(hsc_str, itoa((hsco + 1), gol, 10));
			strcat(hsc_str, ".bmp");
			hsco++;
			if (hsco >= 6)
				hsco = 0;
		}
		if (hsc_co % 30 == 0)
			iSetColor(255, 0, 0);
		if (hsc_co % 60 == 0)
			iSetColor(0, 255, 0);
		if (hsc_co % 120 == 0)
			iSetColor(0, 0, 255);
		if (hsc_co % 150 == 0)
			iSetColor(255, 255, 0);
		if (hsc_co % 180 == 0)
			iSetColor(255, 0, 255);
		if (hsc_co % 210 == 0)
			iSetColor(0, 255, 255);
		if (hsc_co % 280 == 0)
			iSetColor(255, 255, 255);
		iText(hs_x + 180, hs_y + 52, name[6], GLUT_BITMAP_TIMES_ROMAN_24);
		iText(hs_x + 180, hs_y + 107, name[5], GLUT_BITMAP_TIMES_ROMAN_24);
		iText(hs_x + 180, hs_y + 161, name[4], GLUT_BITMAP_TIMES_ROMAN_24);
		iText(hs_x + 180, hs_y + 218, name[3], GLUT_BITMAP_TIMES_ROMAN_24);
		iText(hs_x + 180, hs_y + 270.5, name[2], GLUT_BITMAP_TIMES_ROMAN_24);
		iText(hs_x + 180, hs_y + 321, name[1], GLUT_BITMAP_TIMES_ROMAN_24);
		iText(hs_x + 180, hs_y + 372, name[0], GLUT_BITMAP_TIMES_ROMAN_24);
		char Spr[1000];
		iText(hs_x + 600, hs_y + 52, itoa((fscore[6]), Spr, 10), GLUT_BITMAP_TIMES_ROMAN_24);
		iText(hs_x + 600, hs_y + 107, itoa((fscore[5]), Spr, 10), GLUT_BITMAP_TIMES_ROMAN_24);
		iText(hs_x + 600, hs_y + 161, itoa((fscore[4]), Spr, 10), GLUT_BITMAP_TIMES_ROMAN_24);
		iText(hs_x + 600, hs_y + 218, itoa((fscore[3]), Spr, 10), GLUT_BITMAP_TIMES_ROMAN_24);
		iText(hs_x + 600, hs_y + 270.5, itoa((fscore[2]), Spr, 10), GLUT_BITMAP_TIMES_ROMAN_24);
		iText(hs_x + 600, hs_y + 321, itoa((fscore[1]), Spr, 10), GLUT_BITMAP_TIMES_ROMAN_24);
		iText(hs_x + 600, hs_y + 372, itoa((fscore[0]), Spr, 10), GLUT_BITMAP_TIMES_ROMAN_24);

		iText(hs_x + 290, hs_y + 52, "        ------------", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(hs_x + 290, hs_y + 107, "        ------------", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(hs_x + 290, hs_y + 161, "        ------------", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(hs_x + 290, hs_y + 218, "        ------------", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(hs_x + 290, hs_y + 270.5, "        ------------", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(hs_x + 290, hs_y + 321, "        ------------", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(hs_x + 290, hs_y + 372, "        ------------", GLUT_BITMAP_TIMES_ROMAN_24);

		if (res == 1){
			iPauseTimer(2);
			res = 0;
		}
	}
}

/*
function iMouseMove() is called when the user presses and drags the mouse.
(mx, my) is the position where the mouse pointer is.
*/


void iMouseMove(int mx, int my)
{
	//place your codes here
}
/*
function iMouse() is called when the user presses/releases the mouse.
(mx, my) is the position where the mouse pointer is.
*/
void iMouse(int button, int state, int mx, int my)
{
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		blast_co++;

		if (blast_co % 10 == 9)
			blast_button = 1;

		if (blast_co % 10 == 8)
			blast1_button = 1;

		if (blast_co % 10 == 7)
			blast2_button = 1;

		if (blast_co % 10 == 6)
			blast3_button = 1;

		if (blast_co % 10 == 5)
			blast4_button = 1;

		if (blast_co % 10 == 4)
			blast5_button = 1;

		if (blast_co % 10 == 3)
			blast6_button = 1;

		if (blast_co % 10 == 2)
			blast7_button = 1;

		if (blast_co % 10 == 1)
			blast8_button = 1;

		if (blast_co % 10 == 0)
			blast9_button = 1;
	}
	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		jump_co++;
		if (jump_co == 1)
		{
			jumping = 1;
		}
		else if (jump_co == 2)
		{
			jumping = 1;
			jump_limit = jump_y + 300;
			jump_dif = jd;
			jump_co++;
		}
	}
}
/*iPassiveMouseMove is called to detect and use
the mouse point without pressing any button */
void iPassiveMouseMove(int mx, int my)
{
	//place your code here
	if (mx == 2){}        /*Something to do with mx*/
	else if (my == 2){}   /*Something to do with my*/
}
/*
function iKeyboard() is called whenever the user hits a key in keyboard.
key- holds the ASCII value of the key pressed.
*/
void iKeyboard(unsigned char key)
{
	int i;

	if (mode == 1)
	{


		if (key == '\r')
		{
			mode = 0;
			strcpy(name[7], string);
			for (i = 0; i < len; i++)
				string[i] = 0;
			len = 0;
			sortit();
			find();
			hsc_st = 1;
		}
		else if (key != ' '&&len <= 12 && key != '\b')
		{
			string[len] = key;
			len++;
		}
		else if (key == '\b'&&len>0)
		{
			string[--len] = NULL;
		}
	}
	else{
		if (key == ' ')
		{
			if (story_st >= 1 && story_st <= 7)
			{
				story_st = 7;
			}
			else{
				jump_co++;
				if (jump_co == 1)
				{
					jumping = 1;
				}
				else if (jump_co == 2)
				{
					jumping = 1;
					jump_limit = jump_y + 300;
					jump_dif = jd;
					jump_co++;
				}
			}
		}
		if (key == 'x' || key == 'X')
		{
			blast_co++;

			if (blast_co % 10 == 9)
				blast_button = 1;

			if (blast_co % 10 == 8)
				blast1_button = 1;

			if (blast_co % 10 == 7)
				blast2_button = 1;

			if (blast_co % 10 == 6)
				blast3_button = 1;

			if (blast_co % 10 == 5)
				blast4_button = 1;

			if (blast_co % 10 == 4)
				blast5_button = 1;

			if (blast_co % 10 == 3)
				blast6_button = 1;

			if (blast_co % 10 == 2)
				blast7_button = 1;

			if (blast_co % 10 == 1)
				blast8_button = 1;

			if (blast_co % 10 == 0)
				blast9_button = 1;

		}

		int gg = 0;
		if (key == '\r'){
			if (st_sc == 0)
			{
				st_sc = 1;

			}

			else if (st_sc == 1)
			{
				st_sc = 100;
				load_st = 1;
			}
			else if (st_sc == 2)
			{
				st_sc = 100;
				ins_st = 1;
			}
			else if (st_sc == 3)
			{
				st_sc = 100;
				hs_st = 1;
			}
			else if (st_sc == 4)
			{
				exit(0);
			}
			else if (story_st >= 1 && story_st <= 7)
			{
				if (story_st == 1)
					frb = 15;
				if (story_st == 2)
					seb = 15;
				if (story_st == 3)
					thb = 15;
				if (story_st == 4)
					fob = 15;
				if (story_st == 5)
					fib = 15;
				if (story_st == 6)
					sib = 15;
			}

			if (pause_state == 1)
			{
				pause_state = 0;
				p_co++;
			}
			else if (pause_state == 2)
			{
				yes_st = 1;
				pause_state = 0;
				p_co++;

			}
			else if (yes_st == 2 && pause_state == 0){
				pause_state = 2;
				p_co++;
				yes_st = 0;
			}

			else if (yes_st == 1 && pause_state == 0)
			{

				st_sc = 1;
				yes_st = 0;
				gg++;
				if (gg == 1){
					all_again();
				}
			}
			else if (hsc_st == 1 && go == 1)
				hsc_st = 0;
			else if (sco_st == 1)
			{
				if (sco_co >= 22){
					sco_st = 0;
					gg++;
					if (gg == 1){
						all_again();
					}
					go = 0;
					iResumeTimer(2);
				}
			}
			else if (sco_st == 2)
			{
				if (sco_co >= 22){
					gg++;
					st_sc = 1;
					if (gg == 1){
						all_again();
					}
					sco_st = 0;
					go = 0;
				}

			}

		}
		if (key == 's' || key == 'S') {
			s++;
			if (s % 2 == 0 && db >= 7) {
				super = 1;
			}
			else if (s % 2 != 0 && db >= 7) {
				super = 2;
				if (s_anim != 3)
					s_anim = 1;
			}
		}


		//cheats
		if (key == 's') {
			if (sa == 0)
				sa++;
			else {
				sa = 0;
			}
		}
		if (key == 'a') {
			if (sa == 1 || sa == 4) {
				sa++;
			}
			else {
				sa = 0;
			}
		}
		if (key == 'i') {
			if (sa == 2) {
				sa++;
			}
			else {
				sa = 0;
			}
			if (g == 1) {
				g++;
			}
			else {
				g = 0;
			}
		}
		if (key == 'y') {
			if (sa == 3) {
				sa++;
			}
			else {
				sa = 0;
			}
			if (g == 3) {
				g++;
			}
			else {
				g = 0;
			}
		}

		if (key == 'n') {
			if (sa == 5) {
				sa++;
			}
			else {
				sa = 0;
			}


			if (sa == 6) {
				super = 2;
				if (s_anim != 3)
					s_anim = 1;

			}

			if (g == 2) {
				g++;
			}
			else {
				g = 0;
			}
		}







		if (key == 'g'){
			if (g == 0) {
				g++;
			}

			else {
				g = 0;
			}
		}
		if (key == 'u'){
			if (g == 4) {
				g++;
			}

			else {
				g = 0;
			}

			if (g == 5) {
				if (gol_anim == 0)
					gol_anim = 1;
				gol_frieza = 1;
			}


		}


		if (key == 'h') {
			if (c == 0) {
				c++;
			}
			else {
				c = 0;
			}
		}
		if (key == 'e') {
			if (c == 1) {
				c++;
			}
			else {
				c = 0;
			}
		}

		if (key == 'l') {
			if (c == 2 || c == 3) {
				c++;
			}
			else {
				c = 0;
			}

			if (c == 4) {
				dis = 75000;
			}
		}





		if ((key == 'p') || (key == 'P') && go == 0 && !(sp_sc >= 0 && sp_sc <= 2) && !(st_sc >= 0 && st_sc <= 4) && !(yes_st >= 1 && yes_st <= 2))
		{
			p_co++;
			if (p_co % 2 == 1 && load_st != 1)
				pause_state = 1;
			else
				pause_state = 0;
		}
		if (key == '\b')
		{
			if (ins_st == 1)
			{
				st_sc = 2;
				ins_st = 0;
			}
			if (hs_st == 1)
			{
				st_sc = 3;
				hs_st = 0;
			}
		}
		
	}
	//place your codes for other keys here
}
/*
function iSpecialKeyboard() is called whenver user hits special keys like-
function keys, home, end, pg up, pg down, arraows etc. you have to use
appropriate constants to detect them. A list is:
GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
*/
void iSpecialKeyboard(unsigned char key)
{
	if (key == GLUT_KEY_END)
	{
		st_sc = 1;
	}
	if (key == GLUT_KEY_UP&&st_sc != 0)
	{
		if (st_sc == 1)
			st_sc = 4;
		else
			st_sc--;
		if (pause_state == 1)
			pause_state = 2;
		else if (pause_state == 2)
			pause_state = 1;
		if (sco_st == 1)
			sco_st = 2;
		else if (sco_st == 2)
			sco_st = 1;
	}
	if (key == GLUT_KEY_DOWN&&st_sc != 0)
	{
		if (st_sc == 4)
			st_sc = 1;
		else
			st_sc++;
		if (pause_state == 1)
			pause_state = 2;
		else if (pause_state == 2)
			pause_state = 1;

		if (sco_st == 1)
			sco_st = 2;
		else if (sco_st == 2)
			sco_st = 1;
	}
	if (key == GLUT_KEY_LEFT&&st_sc != 0){

		if (yes_st == 1)
			yes_st = 2;
		else if (yes_st == 2)
			yes_st = 1;
	}
	if (key == GLUT_KEY_RIGHT&&st_sc != 0){

		if (yes_st == 1)
			yes_st = 2;
		else if (yes_st == 2)
			yes_st = 1;
	}
	//place your codes for other keys here
}

int main()
{
	iSetTimer(150, goku_run);
	iSetTimer(1, goku_blast);
	iSetTimer(20, anim);
	srand(time(NULL));
	srand(time(NULL));
	PlaySound("Goku_SSJ", NULL, SND_ASYNC);
	iInitialize(1280, 768, "Our Last Hope");

	return 0;
}