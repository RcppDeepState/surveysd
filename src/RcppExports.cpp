// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// rollMeanC
NumericVector rollMeanC(NumericVector x, int k, char type);
RcppExport SEXP _surveysd_rollMeanC(SEXP xSEXP, SEXP kSEXP, SEXP typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< char >::type type(typeSEXP);
    rcpp_result_gen = Rcpp::wrap(rollMeanC(x, k, type));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_surveysd_rollMeanC", (DL_FUNC) &_surveysd_rollMeanC, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_surveysd(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}