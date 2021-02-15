/******************************************************************************
 *                       Code generated with sympy 1.4                        *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                         This file is part of 'ekf'                         *
 ******************************************************************************/
void err_fun(double *nom_x, double *delta_x, double *out_9067331892332460981);
void inv_err_fun(double *nom_x, double *true_x, double *out_5087050738550943603);
void H_mod_fun(double *state, double *out_2199195300504232484);
void f_fun(double *state, double dt, double *out_7063095812728218823);
void F_fun(double *state, double dt, double *out_1051379992296870882);
void h_3(double *state, double *unused, double *out_7822973802547960399);
void H_3(double *state, double *unused, double *out_1041722885896409401);
void h_4(double *state, double *unused, double *out_2745461719661198798);
void H_4(double *state, double *unused, double *out_120397843038334458);
void h_9(double *state, double *unused, double *out_1552726356437433599);
void H_9(double *state, double *unused, double *out_678488564658329034);
void h_10(double *state, double *unused, double *out_753547954009091500);
void H_10(double *state, double *unused, double *out_8118309363795299282);
void h_12(double *state, double *unused, double *out_8787379407797433267);
void H_12(double *state, double *unused, double *out_853183818121938470);
void h_13(double *state, double *unused, double *out_153446615968004172);
void H_13(double *state, double *unused, double *out_1543493103772720870);
void h_14(double *state, double *unused, double *out_1552726356437433599);
void H_14(double *state, double *unused, double *out_678488564658329034);
void h_19(double *state, double *unused, double *out_9116829281075740439);
void H_19(double *state, double *unused, double *out_5705878529589711710);
#define DIM 23
#define EDIM 22
#define MEDIM 22
typedef void (*Hfun)(double *, double *, double *);

void predict(double *x, double *P, double *Q, double dt);
const static double MAHA_THRESH_3 = 3.841459;
void update_3(double *, double *, double *, double *, double *);
const static double MAHA_THRESH_4 = 7.814728;
void update_4(double *, double *, double *, double *, double *);
const static double MAHA_THRESH_9 = 7.814728;
void update_9(double *, double *, double *, double *, double *);
const static double MAHA_THRESH_10 = 7.814728;
void update_10(double *, double *, double *, double *, double *);
const static double MAHA_THRESH_12 = 7.814728;
void update_12(double *, double *, double *, double *, double *);
const static double MAHA_THRESH_13 = 7.814728;
void update_13(double *, double *, double *, double *, double *);
const static double MAHA_THRESH_14 = 7.814728;
void update_14(double *, double *, double *, double *, double *);
const static double MAHA_THRESH_19 = 7.814728;
void update_19(double *, double *, double *, double *, double *);