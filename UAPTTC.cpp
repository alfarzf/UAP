#include <iostream>
#include <ncurses.h>
#include <windows.h>

using namespace std;

/* 	Anggota Kelompok :
	1. Alfa Rizki Fadlillah (2117051003)
	2. Az Zahra Adellia (2117051034)
	3. Tasya Azzahra Putri (2117051043)
*/

char kotak[10]={'o','1','2','3','4','5','6','7','8','9'};
void box(){
		for(int i=1;i<=25;i++){//atas
		mvprintw(i,0,"|");
	}
	for(int i=1;i<=25;i++){//bawah
		mvprintw(i,50,"|");
	}
	for(int i=1 ;i<=49;i++){//kanan
		mvprintw(0,i,"_");
		cout<<"|";
	}
	for(int i=1; i<=49;i++){//kiri
		mvprintw(25,i,"_");
	}
}

void depan(){
	char s[14]={'S','E','L','A','M','A','T',' ','D','A','T','A','N','G'};
	initscr();
	start_color();
	init_pair(1, COLOR_CYAN,COLOR_BLACK);
	init_pair(2, COLOR_YELLOW,COLOR_BLACK);
	attron (COLOR_PAIR(2));
	box();
	for(int i=1;i<=25;i++){//atas
		mvprintw(i,0,"|");
	}
	for(int i=1;i<=25;i++){//bawah
		mvprintw(i,50,"|");
	}
	for(int i=1 ;i<=49;i++){//kanan
		mvprintw(0,i,"_");
		cout<<"|";
	}
	for(int i=1; i<=49;i++){//kiri
		mvprintw(25,i,"_");
	}for(int k=0;k<=13;k++){
	mvprintw(12,k+17,"%c",s[k]);
	refresh();
	Sleep(400);
}	Sleep(1000);
	clear();
	attroff(COLOR_PAIR(2));
	attron(COLOR_PAIR(1));
	box();
	mvprintw(2,19,"TIC TAC TOE");
	refresh();
	Sleep(400);
	mvprintw(3,3,"Tic tac toe adalah permainan kertas dan pensil");
	mvprintw(4,1,"untuk dua pemain yang bergiliran menandai ruang");
	mvprintw(5,1,"dalam kotak 3x3 dengan X/O");
	refresh();
	Sleep(400);
	mvprintw(7,20,"Peraturan : ");
	refresh();
	Sleep(400);
	mvprintw(8,1,"1. Permainan ini dimainkan di kotak berukuran 3x3");
	refresh();
	Sleep(400);
	mvprintw(9,1,"2. Pemain bergiliran menempatkan tanda X/O");
	mvprintw(10,4,"di kotak kosong");
	refresh();
	Sleep(400);
	mvprintw(11,1,"3. Pemain pertama yang mendapatkan");
	mvprintw(12,4,"3 nilai berturut turut secara horizontal,");
	mvprintw(13,4,"vertikan atau diagonal adalah pemenangnya");
	refresh();
	Sleep(400);
	mvprintw(14,1,"4. Ketika semua kotak penuh, permainan");
	mvprintw(15,4,"berakhir, jika tidak ada pemain yang mendapat");
	mvprintw(16,4,"3 nilai berturut turut, permainan berakhir");
	mvprintw(17,4,"seri");
	refresh();
	getch();
	clear();
	endwin();
}

void papan(){
    system("cls");
    cout << "\n\n\tTic Tac Toe\n\n";

    cout << "Pemain 1 (X)  -  Pemain 2 (O)" << endl << endl;
    cout << endl;

    cout << "     |     |     " << endl;
    cout << "  " << kotak[1] << "  |  " << kotak[2] << "  |  " << kotak[3] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << kotak[4] << "  |  " << kotak[5] << "  |  " << kotak[6] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << kotak[7] << "  |  " << kotak[8] << "  |  " << kotak[9] << endl;

    cout << "     |     |     " << endl << endl;
}

int menang(){
    if (kotak[1] == kotak[2] && kotak[2] == kotak[3])

        return 1;
    else if (kotak[4] == kotak[5] && kotak[5] == kotak[6])

        return 1;
    else if (kotak[7] == kotak[8] && kotak[8] == kotak[9])

        return 1;
    else if (kotak[1] == kotak[4] && kotak[4] == kotak[7])

        return 1;
    else if (kotak[2] == kotak[5] && kotak[5] == kotak[8])

        return 1;
    else if (kotak[3] == kotak[6] && kotak[6] == kotak[9])

        return 1;
    else if (kotak[1] == kotak[5] && kotak[5] == kotak[9])

        return 1;
    else if (kotak[3] == kotak[5] && kotak[5] == kotak[7])

        return 1;
    else if (kotak[1] != '1' && kotak[2] != '2' && kotak[3] != '3' 
                    && kotak[4] != '4' && kotak[5] != '5' && kotak[6] != '6' 
                  && kotak[7] != '7' && kotak[8] != '8' && kotak[9] != '9')

        return 0;
    else
        return -1;
}

int main(){
	depan();
	system("cls");
	int Pemain = 1,i,pilihan;
    char tanda;
    do{
        papan();
        Pemain=(Pemain%2)?1:2;
        cout << "Pemain " << Pemain << ", Silahkan masukkan angka :  ";
        cin >> pilihan;

        tanda=(Pemain == 1) ? 'X' : 'O';

        if (pilihan == 1 && kotak[1] == '1')

            kotak[1] = tanda;
        else if (pilihan == 2 && kotak[2] == '2')

            kotak[2] = tanda;
        else if (pilihan == 3 && kotak[3] == '3')

            kotak[3] = tanda;
        else if (pilihan == 4 && kotak[4] == '4')

            kotak[4] = tanda;
        else if (pilihan == 5 && kotak[5] == '5')

            kotak[5] = tanda;
        else if (pilihan == 6 && kotak[6] == '6')

            kotak[6] = tanda;
        else if (pilihan == 7 && kotak[7] == '7')

            kotak[7] = tanda;
        else if (pilihan == 8 && kotak[8] == '8')

            kotak[8] = tanda;
        else if (pilihan == 9 && kotak[9] == '9')

            kotak[9] = tanda;
        else
        {
            cout<<"Masukkan anda salah ";

            Pemain--;
            cin.ignore();
            cin.get();
        }
        i=menang();

        Pemain++;
    }while(i==-1);
    papan();
    if(i==1)

        cout<<"==> \aPemain "<<--Pemain<< " menang ";
    else
        cout<<"==> \aseri";

    cin.ignore();
    cin.get();
    int pilih;
	cout<<"1. Main lagi\n2. Keluar\nMasukkan nomor(1/2) : ";
	cin>>pilih;
	if(pilih==1){
		system("cls");
		main();
	}else{
		system("cls");
		cout<<"Terimakasih telah bermain";
	}return 0;
}
