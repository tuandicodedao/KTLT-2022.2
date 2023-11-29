#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <ctype.h>
#include <windows.h>
#include <unistd.h>

#define MAX 7  
#define MIN 1   
#define N 100
#define max_loop 1000
#define delta 0.000001
#define learning_rate 0.01

void TextColor(int x) 	
{
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h, x);
}

void gotoxy(int x, int y)	
{
    COORD c = { x, y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

void arrowHere(int realPosition, int arrowPosition)	
{
    if (realPosition == arrowPosition)	
    {
        TextColor(236); printf("%c  ", 175);
    }
    else {
        TextColor(252);  printf("    ");
    }
}
const char* option[] = 
{
    "Tim cac mien chua nghiem cua phuong trinh",
    "Thu hep khoang phan ly ",
    "Tim nghiem gan dung voi so lan lap n",
    "Tim nghiem gan dung voi sai so e",
    "Tim nghiem gan dung Xn",
    "Help",
    "Exit"
};

void giao_dien_ngoai()	
{
	TextColor(236);
	for(int i=0; i<=70;i++){
		for(int j=1;j<29;j++){
			gotoxy(i,j);
			printf(" ");
		}
	}
    TextColor(15);
    for (int i = 0; i <= 70; i++)		
    {
        gotoxy(i, 0); printf("%c", 205);
        gotoxy(i, 29); printf("%c", 205);
    }
    gotoxy(20, 0); TextColor(206); printf(" GIAI PHUONG PHAP DAY CUNG ");		
    gotoxy(0, 0); printf("%c", 	201);
    gotoxy(70, 0); printf("%c", 187);
    TextColor(15);
    for (int i = 0; i <= 14; i++)		
    {
        gotoxy(0, 14 - i); printf("%c", 186);	
        gotoxy(0, 14 + i); printf("%c", 186);
        gotoxy(70, 14 - i); printf("%c", 186);
        gotoxy(70, 14 + i); printf("%c", 186);
    }
    gotoxy(0, 0); printf("%c", 201);
    gotoxy(70, 0); printf("%c", 187);
    gotoxy(0, 29); printf("%c", 200);
    gotoxy(70, 29); printf("%c", 188);
   
}
void giao_dien_pp(){
TextColor(236);
	for(int i=71; i<=118;i++){
	TextColor(236);	for(int j=1;j<29;j++){
			gotoxy(i,j);
			printf(" ");
		}
	}
    TextColor(15);
    for (int i = 71; i <= 118; i++)		
    {
        gotoxy(i, 0); printf("%c", 205);
        gotoxy(i, 29); printf("%c", 205);
    }
    gotoxy(84, 0); TextColor(206); printf("GIOI THIEU PP DAY CUNG ");		
    gotoxy(0, 0); printf("%c", 	201);
    gotoxy(118, 0); printf("%c", 187);
    TextColor(15);
    for (int i = 0; i <= 14; i++)		
    {
        gotoxy(0, 14 - i); printf("%c", 186);	
        gotoxy(0, 14 + i); printf("%c", 186);
        gotoxy(118, 14 - i); printf("%c", 186);
        gotoxy(118, 14 + i); printf("%c", 186);
    }
    gotoxy(0, 0); printf("%c", 201);
    gotoxy(118, 0); printf("%c", 187);
    gotoxy(0, 29); printf("%c", 200);
    gotoxy(118, 29); printf("%c", 188);
    gotoxy(72, 3);TextColor(236);; printf("f(x) la da thuc bac n:");
    gotoxy(72, 4);TextColor(236); printf("f(x)= a0*x^n + a1*x^(n-1)+...+ an = 0,a0!= 0");
    gotoxy(72, 7);TextColor(236);printf("Uu diem cua pp:");
    gotoxy(73, 8);TextColor(236);printf("De hieu, de trien khai");
    gotoxy(73, 9);TextColor(236);printf("Co TH hoi tu nhanh");
    gotoxy(73, 10);TextColor(236);printf("Ap dung rong rai");
    gotoxy(72, 13);TextColor(236);printf("Nhuoc diem cua pp");
    gotoxy(73, 14);TextColor(236);printf("Phu thuoc diem ban dau");
    gotoxy(73, 15);TextColor(236);printf("Kho doan dinh so lan lap"); 
    gotoxy(73, 16);TextColor(236);printf("Can tinh dao ham");
    gotoxy(73, 17);TextColor(236);printf("Co the bi sai so"); 
    gotoxy(73, 18);TextColor(236);printf("Co TH hoi tu cham");
     gotoxy(88, 25);TextColor(236); printf("   /\\_/\\ ");
    gotoxy(88, 26);TextColor(236); printf("  ( o.o )");
    gotoxy(88, 27);TextColor(236); printf("   > ^ < ");
    gotoxy(86, 28); TextColor(206); printf("NGUYEN VAN TUAN");
}

void giao_dien_ben_trong()		
{	
	TextColor(252);
	for(int i=8; i<57;i++){
		for(int j=7;j<=17;j++){
			gotoxy(i,j);
			printf(" ");
		}
	}
	gotoxy(28, 6); TextColor(244); printf(" MENU ");	
}

void giao_dien_kq() 	
{	
	TextColor(236);
	for(int i=71; i<=118;i++){
	TextColor(236);	for(int j=1;j<29;j++){
			gotoxy(i,j);
			printf(" ");
		}
	}
    TextColor(15);
    for (int i = 71; i <= 118; i++)		
    {
        gotoxy(i, 0); printf("%c", 205);
        gotoxy(i, 29); printf("%c", 205);
    }
   		
    gotoxy(0, 0); printf("%c", 	201);
    gotoxy(118, 0); printf("%c", 187);
    TextColor(15);
    for (int i = 0; i <= 14; i++)		
    {
        gotoxy(0, 14 - i); printf("%c", 186);	
        gotoxy(0, 14 + i); printf("%c", 186);
        gotoxy(118, 14 - i); printf("%c", 186);
        gotoxy(118, 14 + i); printf("%c", 186);
    }
    gotoxy(0, 0); printf("%c", 201);
    gotoxy(118, 0); printf("%c", 187);
    gotoxy(0, 29); printf("%c", 200);
    gotoxy(118, 29); printf("%c", 188);
   
    gotoxy(88, 0); TextColor(206); printf(" KET QUA ");
    gotoxy(88, 25);TextColor(236); printf("   /\\_/\\ ");
    gotoxy(88, 26);TextColor(236); printf("  ( o.o )");
    gotoxy(88, 27);TextColor(236); printf("   > ^ < ");
    gotoxy(86, 28); TextColor(206); printf("NGUYEN VAN TUAN");
    
}

void giao_dienhuongdan(){
	TextColor(236);
	for(int i=71; i<=118;i++){
	TextColor(236);	for(int j=1;j<29;j++){
			gotoxy(i,j);
			printf(" ");
		}
	}
    TextColor(15);
    for (int i = 71; i <= 118; i++)		
    {
        gotoxy(i, 0); printf("%c", 205);
        gotoxy(i, 29); printf("%c", 205);
    }
   		
    gotoxy(0, 0); printf("%c", 	201);
    gotoxy(118, 0); printf("%c", 187);
    TextColor(15);
    for (int i = 0; i <= 14; i++)		
    {
        gotoxy(0, 14 - i); printf("%c", 186);	
        gotoxy(0, 14 + i); printf("%c", 186);
        gotoxy(118, 14 - i); printf("%c", 186);
        gotoxy(118, 14 + i); printf("%c", 186);
    }
    gotoxy(0, 0); printf("%c", 201);
    gotoxy(118, 0); printf("%c", 187);
    gotoxy(0, 29); printf("%c", 200);
    gotoxy(118, 29); printf("%c", 188);
    gotoxy(86, 7); TextColor(236); printf("Have a good day!");
    gotoxy(73,9);TextColor(236);printf("On The Way To Success,");
    gotoxy(88,10);TextColor(236);printf("There Is No Trace Of Lazy Men");
    gotoxy(88, 25);TextColor(236); printf("   /\\_/\\ ");
    gotoxy(88, 26);TextColor(236); printf("  ( o.o )");
    gotoxy(88, 27);TextColor(236); printf("   > ^ < ");
    gotoxy(92, 0); TextColor(206); printf(" HELP ");
    gotoxy(86, 28); TextColor(206); printf("NGUYEN VAN TUAN");
}
void giao_dien()	
{
    giao_dien_ngoai();
    giao_dien_kq();
    giao_dien_ben_trong();
}
void giao_dien_nen(){
	giao_dien_ngoai();
	giao_dien_pp();
	}
double min(double a, double b){
	if (a >= b) return b;
	return a;
}

double max(double valExt[100]){
	double max = -100000;
	for (int i = 0; i < 100; i++){
		if(valExt[i] > max) max = valExt[i];
	}
	return max;
}


double polynomial_coefficients[N];   // mang luu tru he so cua da thuc
int polynomial_degree;               // mang luu tru bac cua da thuc
double survey_values[N];             // mang luu tru cac gia tri khao sat
double distance_values[N];           // mang luu tru cac khoang cach ly
double lower_bound;                  // gioi han duoi cua mien chua ngiem
double upper_bound;                  // gioi han tren cua mien chua nghiem
double extreme_values[N];            // mang luu cac gia tri cuc tri
double m;
double M;
int digit_count;

  double f(double x)	
{
    double temp = 0;
    for (int i = polynomial_degree; i >= 0; i--) {
        temp +=polynomial_coefficients[polynomial_degree - i] * pow(x, i);
    }
    return temp;
}
   double df(double x) 	
{
    double temp = 0;
    for (int i = polynomial_degree; i >= 1; i--) {
        temp += polynomial_coefficients[polynomial_degree - i] * i * pow(x, i - 1);
    }
    return temp;
}
   double df2(double x){
	double temp = 0;
	for (int i = polynomial_degree; i >= 2; i--){
		temp += polynomial_coefficients[polynomial_degree - i] * i * (i-1) * pow(x, i - 2);
	}
	return temp;

} 
	double dfn(double x, int deg){
	if (deg == 1) return df(x);
	else if (deg == 2) return df2(x);
}
   // nhap bac, he so
void enter_poly()
{
    bool valid_input = false;
    do {
        TextColor(236);
        gotoxy(4, 3); printf(" Nhap bac cua da thuc: ");

        if (scanf("%d", &polynomial_degree) != 1 || polynomial_degree < 0 || polynomial_degree > N) {
            gotoxy(4, 12); TextColor(244); printf(">> ERROR. Hay nhap lai. ");
            Sleep(2000);
            TextColor(14);
            system("cls");
            giao_dien_nen();
            while (getchar() != '\n')
                continue;
            memset(polynomial_coefficients, 0, sizeof(polynomial_coefficients)); 
            continue;
        }

        gotoxy(4, 5); printf(" Nhap cac he so cua da thuc: ");
        for (int i = 0; i <= polynomial_degree; i++) {
            gotoxy(4, 6 + i);
            printf(">> a%d = ", i);
            if (scanf("%lf", &polynomial_coefficients[i]) != 1) {
                gotoxy(4, 19); printf(">> He so khong hop le. Vui long nhap lai!");
                Sleep(2000);
                system("cls");
                giao_dien_nen();
                while (getchar() != '\n')
                    continue;
                valid_input = false;
                memset(polynomial_coefficients, 0, sizeof(polynomial_coefficients)); 
                break;
            }
            valid_input = true;
        }

        if (!valid_input)
            continue;

        gotoxy(4, 18); printf("Ban muon hien thi may so sau dau phay: ");
        scanf("%d", &digit_count);

        FILE* fout = fopen("ketqua.txt", "a");
        if (fout == NULL) {
            printf("Khong mo duoc File de ghi.\n");
            return;
        }
        fprintf(fout, "Ban muon hien thi may so sau dau phay: %d\n", digit_count);
        fprintf(fout, "Bac cua da thuc: %d\n", polynomial_degree);
        fprintf(fout, "Cac he so cua da thuc:\n");
        for (int i = 0; i <= polynomial_degree; i++) {
            fprintf(fout, "He so a%d: %.*lf\n", i, digit_count, polynomial_coefficients[i]);
        }

        fclose(fout);

    } while (!valid_input);
}
 
//option 1

float find_solution_interval_R(double polynomial_coefficients[N],int  polynomial_degree) {
    float max = fabs(polynomial_coefficients[0]);
    float R;

    for (int i = 0; i <= polynomial_degree; i++) {
        if (fabs(polynomial_coefficients[i]) >= max) {
            max = fabs(polynomial_coefficients[i]);
        }
    }

    R = 1 + (max / fabs(polynomial_coefficients[0]));
    return R;
}
void find_solution_interval() {
    double temp[N],max=0,k=0;
    upper_bound = -1;
    lower_bound = -1;
    bool invertCoefficients = false;

    for (int i = 0; i <= polynomial_degree; i++) {
        temp[i] = polynomial_coefficients[i];
    }

    do {
        max = 0;
        k = 0;
        if (invertCoefficients) {
            for (int i = 0; i <= polynomial_degree; i++) {
                temp[i] = -temp[i];
            }
        }

        for (int i = 1; i <= polynomial_degree; i++) {
            if (temp[i] < 0) {
                k = i;
                break;
            }
        }

        for (int i = 1; i <= polynomial_degree; i++) {
            if (temp[i] < 0 && fabs(temp[i]) > max) {
                max = fabs(temp[i]);
            }
        }

       (max == 0) ? ((upper_bound == -1) ? upper_bound = 0 : lower_bound = 0)
                   : ((upper_bound == -1) ? upper_bound = 1 + pow((max / temp[0]), 1.0 / k)
                                          : lower_bound = -(1 + pow((max / temp[0]), 1.0 / k)));
        for (int i = 1; i <= polynomial_degree; i += 2) {
            temp[i] = -temp[i];
        }

        invertCoefficients = true;
    } while (lower_bound > 0);
}

void cau1()
{
    double x0, x1, sign, temp0, temp1, value1, value2;
    double eta = 1e-11;
    int k = 1;
    int stt = 1; 
    system("cls");
    giao_dien();
     find_solution_interval();
   if (polynomial_degree == 0) {
    (polynomial_coefficients[0] == 0) ? (gotoxy(84, 3), TextColor(236), printf("Phuong trinh vo so nghiem"))
                                      : (gotoxy(84, 3), TextColor(236), printf("Phuong trinh vo nghiem"));
}
else if (lower_bound == upper_bound) {
    (f(lower_bound) == 0) ? (gotoxy(84, 3), TextColor(236), printf("Nghiem cua phuong trinh la: %.*lf", digit_count, lower_bound))
                          : (gotoxy(84, 3), TextColor(236), printf("Phuong trinh vo nghiem"));
}
else {
    x1 = lower_bound;
    while (x1 < upper_bound) {
        x0 = x1;
        temp0 = df(x0);
        sign = (temp0 < 0) ? -1 : 1;
        x1 = x0 + sign * eta * temp0;
        temp1 = df(x1);

        for (int i = 0; i < max_loop; i++) {
            if (temp0 * temp1 > 0) {
                while (eta < 0.008) {
                    eta *= 2;
                    x1 = x0 + sign * eta * temp0;

                    if (df(x1) * temp0 < 0) {
                        eta /= 2;
                        break;
                    }
                }
            }
            else {
                while (eta > 0) {
                    eta /= 2;
                    x1 = x0 + sign * eta * temp0;

                    if (df(x1) * temp0 > 0) {
                        break;
                    }
                }
            }

            x1 = x0 + sign * eta * temp0;
            x0 = x1;

            if (abs(df(x1)) < 1e-4) {
                survey_values[k++] = x1;
                break;
            }

            eta = 1e-11;
            temp0 = df(x0);
            x1 = x0 + sign * eta * temp0;
            temp1 = df(x1);

            if (x1 > upper_bound) {
                break;
            }
        }

        x1 += 0.001;
    }


        survey_values[0] = lower_bound;
        survey_values[k] = upper_bound;
        gotoxy(13, 9);TextColor(252); printf("Day la nhung mien chua nghiem");
        gotoxy(13, 11); TextColor(252);printf("Hay nho so khoang muon thu hep de lam p2");
        gotoxy(13, 13); TextColor(252);printf("Nen nho cac khoang de lam cau sau thuan tien");
        gotoxy(13, 15); TextColor(252);printf("Tranh nhap dau phay ma phai la dau cham");
        float R = find_solution_interval_R(polynomial_coefficients, polynomial_degree);
        gotoxy(76,1);TextColor(236);printf("fx nam trong mat tron tam O, R: %.*f",digit_count,R);
        gotoxy(84,2);  TextColor(236);
        printf("Mien chua nghiem la: ");
        gotoxy(84,3); TextColor(236);
        printf("Can duoi : %.*lf", digit_count, lower_bound);
        gotoxy(84,4); TextColor(236);
        printf("Can tren : %.*lf", digit_count, upper_bound);
    }
    FILE* fout = fopen("ketqua.txt", "a");
     fprintf(fout, "\n_______________________");
     fprintf(fout,"\nCau 1: Tim mien chua nghiem cua phuong trinh da thuc fx");
     	float R = find_solution_interval_R(polynomial_coefficients, polynomial_degree); 
			fprintf(fout,"\nfx nam trong mat tron tam O, R: %.*f",digit_count,R);
        	fprintf(fout,"\nMien chua nghiem la: ");
        	fprintf(fout,"\nCan duoi : %.*lf", digit_count, lower_bound);
        	fprintf(fout,"\nCan tren : %.*lf", digit_count, upper_bound);
	int j=0;
    for (int i = 0; i < k; i++) {
        value1 = f(survey_values[i]);
        value2 = f(survey_values[i + 1]);
        if (value1 * value2 < 0) {
        	distance_values[j++] = survey_values[i];
			distance_values[j++] = survey_values[i+1];
            fprintf(fout, "\nKhoang cach ly thu %d\n", stt);
            fprintf(fout, "\nCan duoi: %.*lf\nCan tren: %.*lf\n",digit_count , survey_values[i], digit_count, survey_values[i + 1]);
            gotoxy(84, 6+3*(stt-1));
            printf("%d. Khoang cach ly thu %d", stt, stt);
            gotoxy(84, 7+3*(stt-1));
            printf("- Can duoi: %.*lf", digit_count, survey_values[i]);
            gotoxy(84, 8+3*(stt-1));
            printf("- Can tren: %.*lf", digit_count, survey_values[i+1]);
        	stt++;
        } 
    }if (stt == 1) {
    gotoxy(84, 5); TextColor(236);
    printf("Phuong trinh vo nghiem");
    gotoxy(84,6); TextColor(236);printf("Hay nhap lai ban nhe!!");
    fprintf(fout,"\nPhuong trinh vo nghiem");
    sleep(5);
    exit(0);
    
    }
    fclose(fout);
}
  

  
  // Option 2
void cau2()
{
    int i = 0, k, stt = 1;
    double c = 0,a, b, f1, f2;
    system("cls");
    giao_dien();
    gotoxy(16, 9);TextColor(252);
    printf("Thu hep khoang phan ly nghiem ");
    gotoxy(16, 10);TextColor(252);printf("Hay nhap so nguyen k=1,2,3,..,n");
    gotoxy(16, 12);TextColor(252);printf("Chon khoang phan ly nghiem k= ");
    FILE* fout = fopen("ketqua.txt", "a");
    fprintf(fout, "\n_______________________");
    fprintf(fout," \nCau 2: Thu hep khoang phan ly");
    fprintf(fout, "\nKhoang cach ly ban dau:\n");
    fprintf(fout, "\nCan duoi: %.*lf\nCan tren: %.*lf\n", digit_count, a, digit_count, b);
    scanf("%d", &k);
    a = distance_values[2 * k - 2];
    b = distance_values[2 * k - 1];
    while ((b - a) > 0.5) {
        c = (a + b) / 2.0;
        f1 = f(a);
        f2 = f(c);
        if (f1 * f2 < 0) {
            b = c;
        }
        else {
            a = c;
        }
        fprintf(fout, "\nLan lap thu %d\n", stt);
        fprintf(fout, "\nCan duoi: %.*lf\nCan tren: %.*lf\n", digit_count, a, digit_count, b);
        stt++;
    }

    TextColor(236);
    giao_dien_kq();
    gotoxy(80, 3);TextColor(236);
    printf("Khoang cach ly ban dau la:");
    gotoxy(80, 4);TextColor(236);
    printf("Can duoi: %.*lf", digit_count, distance_values[2 * k - 2]);
    gotoxy(80, 5);TextColor(236);
    printf("Can tren: %.*lf", digit_count, distance_values[2 * k - 1]);
    gotoxy(80, 7);TextColor(236);
    printf("Khoang cach ly sau khi rut gon la:");
    gotoxy(80, 8);TextColor(236);
    printf("Can duoi: %.*lf", digit_count, a);
    gotoxy(80, 9);TextColor(236);
    printf("Can tren: %.*lf", digit_count, b);
    if ((distance_values[2 * k - 2] == 0 && distance_values[2 * k - 1] == 0) || a == 0 || b == 0) {
        gotoxy(80, 12);
        printf("Khong co khoang phan ly nay");
        fprintf(fout,"\nKhong co khoang phan ly nay");
		gotoxy(80, 14);printf("Hay nhap lai nha");
    }

    fclose(fout);
}

	// cac ham de thuc hien cac option con lai
double error(double x, double x_old, double M, double m, int error_type){
    if (error_type == 1)
        return fabs(f(x))/ m;
    else if (error_type== 2)
        return (M-m) * abs(x - x_old)/m;
}
    double chord_method(double left, double right, int deg) {
    double x1 = left;
    double x2 = right;
    double x;
    int count = 1;

    while (!(fabs(f(x2)) < delta)) {
        x = x2 - (f(x2) * (x2 - x1)) / (f(x2) - f(x1));
        count += 1;

        if (count > max_loop) {
            break;
        } else if (x > right) {
            break;
        } else if (x < left) {
            break;
        }

        x1 = x2;
        x2 = x;
    }

    return x2;
}
 double gradient_descent(double a, double b, int direction, int  degree) {
    double current_x = a;
    int count = 1;

    while (!(fabs(dfn(current_x,  degree)) < delta)) {
        current_x= current_x - direction *learning_rate * dfn(current_x,  degree);
        count += 1;

        if (count > max_loop || current_x > b || current_x < a) {
            break; 
        }
    }

    return current_x;
}
double* extrema(double left, double right, int  degree) {
    int count = 2;
    double temp1, temp2;
    int k = 0;
    extreme_values[k++] = left;
    extreme_values[k++] = right;

    while (1) {
        temp1 = gradient_descent(left, right, 1,  degree);
        temp2 = gradient_descent(left, right, -1,  degree);

        if ((temp1 > right && temp2 < left) || (temp1 < left && temp2 > right)) {
            break;
        }

        if (temp1 > left && temp1 < right) {
            extreme_values[k++] = temp1;
            left = extreme_values[count++] + 0.05;
        }

        if (temp2 > left && temp2 < right) {
            extreme_values[k++] = temp2;
            left = extreme_values[count++] + 0.05;
        }
    }

    if (count > 2 &&  degree== 1) {
        // printf("Ham so ton tai cuc tri tren khoang (%.*lf , %.*lf)", digit_count, digit_count, extreme_values[0], extreme_values[1]);
    }

    return extreme_values;
}

double check_input(double *left, double *right){
	if(f(*left) * f(*right) > 0) return false;
	if (*left > *right) {
		double temp = *left;
		*left = *right;
		*right = temp; 
	}
	double *ext1 = extrema(*left, *right, 1);
	double *ext2 = extrema(*left, *right, 2);
	int len1 = sizeof(ext1) / sizeof(ext1[0]);
	int len2 = sizeof(ext2) / sizeof(ext2[0]); 
	if (len1 == 2 && len2 == 2) return true;
    else if (len1 > 2){
        printf("f'(x) doi dau tai it nhat 1 diem ");
        return false;
	}
	else if (len2 > 2){
        printf("f\"(x) doi dau tai it nhat 1 diem ");
        return false;
	}
}


void check_input_format(double a, double b, int n, double esp) {
    bool flag = true;
    char aStr[100], bStr[100];
    sprintf(aStr, "%.15g", a);
    sprintf(bStr, "%.15g", b);
    if (strchr(aStr, ',') != NULL || strchr(bStr, ',') != NULL) {
        gotoxy(80,3);TextColor(236);printf("Ban da nhap sai. Vui long nhap lai");
        flag = false;
        Sleep(2000);
        system("cls");
            giao_dien();
    }

    if (n <= 0) {
        gotoxy(80,3);TextColor(236);printf("Ban da nhap sai. Vui long nhap lai");
        flag = false;
        Sleep(2000);
        system("cls");
        giao_dien();
    }

    if (esp <= 0) {
        gotoxy(80,3);TextColor(236);printf("Ban da nhap sai. Vui long nhap lai");
        flag = false;
        Sleep(2000);
        system("cls");
         giao_dien();   
    }
    if (!flag) {
       
        getch(); 
        return; 
    }
}



void check_convergence_chord_method(double a, double b) {
    if ((f(b) * df2(b) < 0 && f(a) * df2(a) > 0) || (f(a) * df2(a) < 0 && f(b) * df2(b) > 0)) {
        // diem Fourier
        double d = (f(a) * df2(a) > 0) ? a : b;
        gotoxy(16,13);TextColor(252);printf("Diem Fourier: %lf\n", d);
    } else {
         gotoxy(16,13);TextColor(252);printf("Khong thoa man phuong phap day cung.\n");
          gotoxy(80,3);TextColor(236);printf("Ban da nhap sai. Vui long nhap lai");
         Sleep(2000);
        system("cls");
         giao_dien(); 
    }
}

bool check_interval(double a, double b) {
    if (f(a) * f(b) >= 0) {
        return false;
    }
    if (df(a)*df(b)<0){
        return false;
    }
    return true;
}
// option 3
void calculate_x_after_n_iterations(double a, double b, int n, int num, double eps) {
    double valExt[N], Delta;
    int k = 0, temp, count;
    double *ext = extrema(a, b, 3);
    int length = sizeof(ext) / sizeof(ext[0]);

    for (int i = 0; i < length; i++) {
        valExt[k++] = fabs(df2(ext[i]));
    }

    double m = min(fabs(df(a)), fabs(df(b)));
    double M = max(valExt);

    if (f(a) * df2(a) > 0) {
        temp = a;
        a = b;
        b = temp;
    }

    double x_old = b;
    double x = chord_method(a, b, 1);
    Delta = error(x, x_old, M, m, num);
    count = 1;

    FILE *fout;
    fout = fopen("ketqua.txt", "a");
    fprintf(fout, "\n_______________________");
    fprintf(fout,"\nCau 3: Tim nghiem gan dung voi so lan lap n");

    while (!(Delta < eps) && (count < max_loop)) {
        x_old = x;
        x = chord_method(a, b, 1);
        Delta = error(x, x_old, M, m, num);
        count++;
    }

    fprintf(fout, "\nNghiem cua phuong trinh la: %lf", x);
    fclose(fout);

    gotoxy(80, 4);TextColor(236);
    printf("Nghiem cua phuong trinh:");
    for (int cnt = 1; cnt <= n; cnt++) {
        double x = a - f(a) * (a - b) / (f(a) - f(b));
        gotoxy(80, cnt + 4);TextColor(236);
        printf("%d. x = %.*lf\n", cnt,digit_count, x);   
        a = x;
        double fa = f(a);
        double fb = f(b);
    }
}

void cau3() {
    double a, b, eps;
    int choose;
    int n;
    bool check;
    FILE *fout;
    system("cls");
    giao_dien();
    TextColor(236);
    gotoxy(16, 9);TextColor(252);
    printf("Nhap khoang cach ly nghiem: ");
    gotoxy(16, 10);TextColor(252);
    printf("Nhap a: ");
    scanf("%lf", &a);
    gotoxy(16, 11);TextColor(252);
    printf("Nhap b: ");
    scanf("%lf", &b);
    gotoxy(16, 12);TextColor(252);
    printf("Nhap n: ");
    scanf("%d", &n);

    check_input_format(a, b, n, eps);

    fout = fopen("ketqua.txt", "a");
    check = check_input(&a, &b);
    bool isIntervalValid = check_interval(a, b);
    if (!isIntervalValid) {
        gotoxy(80, 4);TextColor(236);
        printf("Khoang phan ly a va b khong dung.\n");
        gotoxy(80, 6);TextColor(236);
        printf("Hay nhap lai a va b.\n");
        fprintf(fout, "Khoang phan ly a va b khong dung");
        fclose(fout);
        return;
    }

    double d = (f(a) * df2(a) > 0) ? a : b;
    check_convergence_chord_method(a, b);
    if (!check) {
        gotoxy(16, 14);TextColor(236);
        printf("Kiem tra lai input");
         Sleep(2000);
        system("cls");
         giao_dien();
        fclose(fout);
        return;
    }

    gotoxy(16, 14);TextColor(252);
    printf("Nhap lua chon: ");
    scanf("%d", &choose);

    fprintf(fout, "\n nhap a: %.*lf",digit_count,a);
    fprintf(fout, "\n nhap b: %.*lf",digit_count, b);
    fprintf(fout, "\n nhap n: %d", n);
    fprintf(fout, "\n Diem Fourier: %.*lf\n", digit_count,d);
    fprintf(fout, "\n So lan lap: %d", n);

    if (choose == 1) {
        giao_dien_kq();
        gotoxy(80, 3);TextColor(236);
        printf("So lan lap: %d", n);
        calculate_x_after_n_iterations(a, b, n, 3, eps);
        fprintf(fout, "\nNghiem cua phuong trinh:\n");
        for (int cnt = 1; cnt <= n; cnt++) {
            double x = a - f(a) * (a - b) / (f(a) - f(b));
            fprintf(fout, "%d. x = %.*lf\n", cnt,digit_count, x);
            a = x;
            double fa = f(a);
            double fb = f(b);
        }
        fclose(fout);
    }
}



     
     // option 4
     
double* daycung(double left, double right, int num, double eps) {
    double valExt[N], Delta;
    int k = 0, temp, count;
    double *ext = extrema(left, right, 3);
    int length = sizeof(ext) / sizeof(ext[0]);

    for (int i = 0; i < length; i++) {
        valExt[k++] = fabs(df2(extreme_values[i]));
    }

    m = min(fabs(df(left)), fabs(df(right)));
    M = max(valExt);

    if (f(left) * df2(left) > 0) {
        temp = left;
        left = right;
        right = temp;
    }

    double x_old = right;
    double x = chord_method(left, right, 1);
    Delta = error(x, x_old, M, m, num);
    count = 1;

    FILE *fout;
    fout = fopen("ketqua.txt", "a");
    fprintf(fout, "\n_______________________");
    fprintf(fout,"\nCau 4: Tim nghiem gan dung voi sai so e");
    while (!(Delta < eps) && (count < max_loop)) {
        x_old = x;
        x = chord_method(left, right, 1);
        Delta = error(x, x_old, M, m, num);
        count++;
    }

    fprintf(fout, "\nNghiem cua phuong trinh la: %.*lf",digit_count , x);
    fprintf(fout, "\nSo lan lap: %d", count);
    fclose(fout);

    static double result[2];
    result[0] = x;
    result[1] = count;

    return result;
}

void cau4() {
    double a, b, eps;
    int choose;
    bool check;
    FILE *fout;
    system("cls");
    giao_dien();
    TextColor(236);
    gotoxy(16, 9);TextColor(252); printf("Nhap khoang cach ly nghiem: ");
    gotoxy(16, 10); TextColor(252);printf("Nhap a: "); scanf("%lf", &a);
    gotoxy(16, 11); TextColor(252);printf("Nhap b: "); scanf("%lf", &b);
    gotoxy(16, 12);TextColor(252); printf("Nhap sai so: "); scanf("%lf", &eps);
    check = check_input(&a, &b);
    int n = ceil(log2((b - a) / eps));
     check_input_format(a, b, n, eps);
    double *x0;
    double d = (f(a) * df2(a) > 0) ? a : b;
    fout = fopen("ketqua.txt", "a");
    bool isIntervalValid = check_interval(a, b);
    if (!isIntervalValid) {
       gotoxy(80,4);TextColor(236); printf("Khoang phan ly a va b khong dung.\n");
       gotoxy(80,6);TextColor(236); printf("Hay nhap lai a va b.\n");
       fprintf(fout,"khoang phan ly a va b khong dung");
        Sleep(2000);
        system("cls");
         giao_dien();
        return;
    } 
    check_convergence_chord_method(a,b);
    
    if (check == false) {
        gotoxy(16, 14); TextColor(252);printf("Kiem tra lai input"); Sleep(2000);
        system("cls");
         giao_dien();
    } else if (check == true) {
        gotoxy(16, 14); TextColor(252);printf("Nhap lua chon: "); scanf("%d", &choose);
      
        if (choose == 1) {
        	 fprintf(fout,"\n nhap a: %.*lf", digit_count,a);
             fprintf(fout,"\n nhap b: %.*lf", digit_count,b);
             fprintf(fout,"\n nhap sai so: %.*lf", digit_count,eps);
             fprintf(fout,"\n Diem Fourier: %*lf\n", digit_count,d);
             fprintf(fout,"\n nhap lua chon: %d",choose);
            x0 = daycung(a, b, 1, eps);
            giao_dien_kq();
            gotoxy(80, 4);TextColor(236); printf("Nghiem cua phuong trinh: %.*lf", digit_count, x0[0]);
            gotoxy(80,5);TextColor(236);printf("Tinh n bang CT (b-a)/2^n: %d",n);
            gotoxy(80,3);TextColor(236);printf("Cong thuc |f(x)|/m");
            gotoxy(80,6);TextColor(236);printf("n la so lan phai lap");
            fprintf(fout,"\nCong thuc |f(x)|/m");
            fprintf(fout, "\nNghiem cua phuong trinh la: %.*lf", digit_count, x0[0]);
            fprintf(fout,"\n Tinh n bang CT (b-a)/2^n: %d",n);
            fprintf(fout,"\n n la so lan phai lap");
            fclose(fout);
        } else if (choose == 2) {
        	fprintf(fout,"\n nhap a: %.*lf", digit_count,a);
             fprintf(fout,"\n nhap b: %.*lf", digit_count,b);
             fprintf(fout,"\n nhap sai so: %.*lf", digit_count,eps);
             fprintf(fout,"\n Diem Fourier: %*lf\n", digit_count,d);
             fprintf(fout,"\n nhap lua chon: %d",choose);
        	giao_dien_kq();
            x0 = daycung(a, b, 2, eps);
            fprintf(fout,"\n nhap lua chon: %d",choose);
            gotoxy(80, 4);TextColor(236);printf("Nghiem cua phuong trinh: %.*lf", digit_count, x0[0]);
            fout = fopen("ketqua.txt", "a");
            fprintf(fout,"\nCong thuc (M-m)*|xn-xn-1|/m");
            fprintf(fout, "\nNghiem cua phuong trinh la: %f", x0[0]);
            fprintf(fout,"\n Tinh n bang CT (b-a)/2^n: %d",n);
            fprintf(fout,"\n n la so lan phai lap");
            gotoxy(80,5);TextColor(236);printf("Tinh n bang CT (b-a)/2^n: %d",n);
            gotoxy(80,6);TextColor(236);printf("n la so lan phai lap");
            gotoxy(80,3);TextColor(236);printf("Cong thuc (M-m)*|xn-xn-1|/m");
            fclose(fout);
        }
    }
}

     
     // option 5
 void approximate_x_after_iterations(double a, double b, int n, double eps) {
    double valExt[N], Delta;
    int k = 0, temp, count, num;
    double *ext = extrema(a, b, 3);
    int length = sizeof(ext) / sizeof(ext[0]);

    for (int i = 0; i < length; i++) {
        valExt[k++] = fabs(df2(ext[i]));
    }

    double m = min(fabs(df(a)), fabs(df(b)));
    double M = max(valExt);

    if (f(a) * df2(a) > 0) {
        temp = a;
        a = b;
        b = temp;
    }

    double x_old = b;
    double x = chord_method(a, b, 1);
    Delta = error(x, x_old, M, m, num);
    count = 1;

    FILE *fout;
    fout = fopen("ketqua.txt", "a");
    fprintf(fout, "\n_______________________");
    fprintf(fout,"\nCau 5: Tm nghiem gan dung cua Xn");

    while (!(Delta < eps) && (count < max_loop)) {
        x_old = x;
        x = chord_method(a, b, 1);
        Delta = error(x, x_old, M, m, num);
        count++;
    }

    fprintf(fout, "\nNghiem cua phuong trinh la: %.*lf", digit_count, x);
    fclose(fout);

    gotoxy(80,4);TextColor(236);printf("Nghiem cua phuong trinh:");
    for (int cnt = 1; cnt <= n; cnt++) {
        x = a - f(a) * (a - b) / (f(a) - f(b));
        gotoxy(80,4+cnt);TextColor(236);printf("%d. x = %.*lf\n", cnt,digit_count, x);

        if (fabs(x - x_old) <= eps) {
             
             gotoxy(80,5+cnt);TextColor(236);printf("Dung sau %d lan lap  ", cnt);
             gotoxy(80,6+cnt);TextColor(236);printf("vi |xn - xn-1| <= %.9lf\n", eps);
            break;
        }

        x_old = x;
        a = x;
        double fa = f(a);
        double fb = f(b);
    }
}

    void cau5() {
    double a, b, eps;
    int choose;
    double x_old;
    bool check;
    FILE *fout;
    system("cls");
    giao_dien();
    gotoxy(12, 10);TextColor(252); printf("Nhap khoang cach ly nghiem: Nhap a: "); scanf("%lf", &a);
    gotoxy(16, 11); TextColor(252);printf("Nhap b: "); scanf("%lf", &b);
    gotoxy(16, 12);TextColor(252); printf("Nhap epsilon: "); scanf("%lf", &eps);
    gotoxy(16,10); TextColor(252);("Nhap khoang cach ly nghiem: ");
    check = check_input(&a, &b);
    double d = (f(a) * df2(a) > 0) ? a : b;
    fout = fopen("ketqua.txt", "a");
     bool isIntervalValid = check_interval(a, b);
    if (!isIntervalValid) {
       gotoxy(80,4);TextColor(236); printf("Khoang phan ly a va b khong dung.\n");
       gotoxy(80,6);TextColor(236); printf("Hay nhap lai a va b.\n");
       fprintf(fout,"khoang phan ly a va b khong dung");
        Sleep(2000);
        system("cls");
         giao_dien();
        return;
    }
    check_convergence_chord_method(a,b);
     int n = ceil(log2((b - a) / eps));
     check_input_format(a, b, n, eps);
     fprintf(fout,"\n nhap a:%.*lf", digit_count,a);
    fprintf(fout,"\n nhap b: %.*lf", digit_count,b);
    fprintf(fout,"\n nhap epsilon: %.*lf", digit_count,eps);
    fprintf(fout,"\n Diem Fourier: %.*lf\n", digit_count ,d);
    if (check == false) {
        gotoxy(16, 14);TextColor(252); printf("Kiem tra lai input"); Sleep(2000);
        system("cls");
         giao_dien();
    } else if (check == true) {
        gotoxy(16, 14); TextColor(252);printf("Nhap lua chon: "); scanf("%d", &choose);
    }
    if (choose == 1) { 
        giao_dien_kq();
        approximate_x_after_iterations(a, b, n, eps);
        fprintf(fout, "\nNghiem cua phuong trinh:\n");
        for (int cnt = 1; cnt <= n; cnt++) {
            double x = a - f(a) * (a - b) / (f(a) - f(b));
            fprintf(fout, "%d. x = %.*lf\n", cnt,digit_count, x);
            if (fabs(x - x_old) <= eps) {
                fprintf(fout, "Dung sau %d lan lap vi |xn - xn-1| <= %.9lf\n", cnt, eps);
                break;
            }

            a = x;
            double fa = f(a);
            double fb = f(b);
        }
        fclose(fout);
    }
}
     // option 6
    void cau6(){
    system("cls");
    giao_dien_ngoai();
    giao_dien_ben_trong();
    giao_dienhuongdan();
    
    TextColor(252);
    gotoxy(8,8);printf("De chay chuong trinh ban su dung cach sau:");
    gotoxy(9,9);printf("De di chuyen len tren dung : mui ten xuong,s,S,2");
    gotoxy(9,10);printf("De di chuyen len tren dung: mui ten len,w,W,8");
    gotoxy(9,11);printf("De chon phan muon lam chon enter.");
    gotoxy(9,12);printf("Cau 3,5 chon lua chon 1 de chay");
    gotoxy(9,13);printf("Cau 3,5 chon 1 de kiem tra dieu kien");
    gotoxy(9,14);printf("Cau 4 chon lua chon 1 or 2 de chay");
    gotoxy(9,15);printf("Cau 4 lua chon 1,2 co chuc nang");
    gotoxy(9,16);printf("1.CT sai so:|f(x)|/m");
    gotoxy(9,17);printf("2.CT sai so (M-m)*(xn-xn-1)/m");
   }
   
   
   
   
   
void menu()		
{	
	int position = 1;
    int keyPress = 0;
    giao_dien_nen();
    giao_dien_ben_trong();
    while (keyPress != 13) {	
        for (int i = 1; i <= MAX; i++) {
            gotoxy(8, 9 + i);
            arrowHere(i, position);
            printf("%d. %s \n", i, option[i - 1]);
        }
        fflush(stdin);
        keyPress = _getch();
        if (keyPress == 80 || keyPress == 's' || keyPress == 'S' || keyPress == '2') {
            if (position == MAX) position = MIN;
            else position++;
        }
        else if (keyPress == 72 || keyPress == 'w' || keyPress == 'W' || keyPress == '8') {
            if (position == MIN ) position = MAX;
            else position--;
        }
        
}
    switch (position) {
    case 1:
        cau1();
        _getch(); fflush(stdin);
        system("cls");
        menu();
        break;
    case 2:
        cau2();
        _getch(); 
        fflush(stdin);
        system("cls");
        menu();
        break;
    case 3:
        cau3();
        _getch(); 
        fflush(stdin);
        system("cls");
        menu();
        break;
    case 4:
    	cau4();
        _getch(); 
        fflush(stdin);
        system("cls");
        menu();
        break;
    case 5:
       cau5();
        _getch(); 
        fflush(stdin);
        system("cls");
        menu();
        break;
    case 6:
       cau6();
        _getch();
	giao_dienhuongdan();
        fflush(stdin);
        system("cls");
        menu();
        break;
    case 7: 
		exit(0);
    }
}


int main()
{
	int n, stt = 1, choose;
	double a, b, eps;
	giao_dien_nen();
    enter_poly();
	menu();
    return 0;
}


