// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// lmatch
Rcpp::NumericVector lmatch(Rcpp::NumericVector soil_data, Rcpp::NumericVector depths_in, Rcpp::NumericVector depths_out);
RcppExport SEXP _dssatR_lmatch(SEXP soil_dataSEXP, SEXP depths_inSEXP, SEXP depths_outSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type soil_data(soil_dataSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type depths_in(depths_inSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type depths_out(depths_outSEXP);
    rcpp_result_gen = Rcpp::wrap(lmatch(soil_data, depths_in, depths_out));
    return rcpp_result_gen;
END_RCPP
}
// read_forage_spe
Rcpp::List read_forage_spe(Rcpp::StringVector file_name);
RcppExport SEXP _dssatR_read_forage_spe(SEXP file_nameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::StringVector >::type file_name(file_nameSEXP);
    rcpp_result_gen = Rcpp::wrap(read_forage_spe(file_name));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_dssatR_lmatch", (DL_FUNC) &_dssatR_lmatch, 3},
    {"_dssatR_read_forage_spe", (DL_FUNC) &_dssatR_read_forage_spe, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_dssatR(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
