/******************************************************************************
 *                       Code generated with sympy 1.4                        *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                         This file is part of 'ekf'                         *
 ******************************************************************************/
void err_fun(double *nom_x, double *delta_x, double *out_3920478622251051253);
void inv_err_fun(double *nom_x, double *true_x, double *out_2327993012117312013);
void H_mod_fun(double *state, double *out_7938682589021015044);
void f_fun(double *state, double dt, double *out_3941550653175681841);
void F_fun(double *state, double dt, double *out_5223875331261208702);
void h_3(double *state, double *unused, double *out_2872196655238775051);
void H_3(double *state, double *unused, double *out_8604280979402854113);
void h_4(double *state, double *unused, double *out_6434946371378608113);
void H_4(double *state, double *unused, double *out_4432272754707904723);
void h_9(double *state, double *unused, double *out_4824225355881454737);
void H_9(double *state, double *unused, double *out_5342322677449429374);
void h_10(double *state, double *unused, double *out_2827159319102839687);
void H_10(double *state, double *unused, double *out_7278523481038079335);
void h_12(double *state, double *unused, double *out_2067339770898072749);
void H_12(double *state, double *unused, double *out_3367739108183854002);
void h_31(double *state, double *unused, double *out_8590609671191170880);
void H_31(double *state, double *unused, double *out_6274111446447832122);
void h_32(double *state, double *unused, double *out_7447626711145157118);
void H_32(double *state, double *unused, double *out_8711186035599369492);
void h_13(double *state, double *unused, double *out_5766187407195023956);
void H_13(double *state, double *unused, double *out_1692966009356055306);
void h_14(double *state, double *unused, double *out_4824225355881454737);
void H_14(double *state, double *unused, double *out_5342322677449429374);
void h_19(double *state, double *unused, double *out_5020274983462579641);
void H_19(double *state, double *unused, double *out_1199397821856744794);
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
const static double MAHA_THRESH_31 = 7.814728;
void update_31(double *, double *, double *, double *, double *);
const static double MAHA_THRESH_32 = 9.487729;
void update_32(double *, double *, double *, double *, double *);
const static double MAHA_THRESH_13 = 7.814728;
void update_13(double *, double *, double *, double *, double *);
const static double MAHA_THRESH_14 = 7.814728;
void update_14(double *, double *, double *, double *, double *);
const static double MAHA_THRESH_19 = 7.814728;
void update_19(double *, double *, double *, double *, double *);