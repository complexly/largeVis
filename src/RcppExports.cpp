// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// neighbors_inner
void neighbors_inner(int maxIter, NumericMatrix old_knns, NumericMatrix data, NumericMatrix outputKnns, Function callback);
RcppExport SEXP largeVis_neighbors_inner(SEXP maxIterSEXP, SEXP old_knnsSEXP, SEXP dataSEXP, SEXP outputKnnsSEXP, SEXP callbackSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< int >::type maxIter(maxIterSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type old_knns(old_knnsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type data(dataSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type outputKnns(outputKnnsSEXP);
    Rcpp::traits::input_parameter< Function >::type callback(callbackSEXP);
    neighbors_inner(maxIter, old_knns, data, outputKnns, callback);
    return R_NilValue;
END_RCPP
}
// sgd
arma::mat sgd(NumericMatrix coords, NumericVector positiveEdges, NumericVector is, NumericVector js, NumericVector ps, NumericVector ws, double gamma, double rho, double minRho, bool useWeights, int M, double alpha, Function callback);
RcppExport SEXP largeVis_sgd(SEXP coordsSEXP, SEXP positiveEdgesSEXP, SEXP isSEXP, SEXP jsSEXP, SEXP psSEXP, SEXP wsSEXP, SEXP gammaSEXP, SEXP rhoSEXP, SEXP minRhoSEXP, SEXP useWeightsSEXP, SEXP MSEXP, SEXP alphaSEXP, SEXP callbackSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type coords(coordsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type positiveEdges(positiveEdgesSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type is(isSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type js(jsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type ps(psSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type ws(wsSEXP);
    Rcpp::traits::input_parameter< double >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< double >::type rho(rhoSEXP);
    Rcpp::traits::input_parameter< double >::type minRho(minRhoSEXP);
    Rcpp::traits::input_parameter< bool >::type useWeights(useWeightsSEXP);
    Rcpp::traits::input_parameter< int >::type M(MSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< Function >::type callback(callbackSEXP);
    __result = Rcpp::wrap(sgd(coords, positiveEdges, is, js, ps, ws, gamma, rho, minRho, useWeights, M, alpha, callback));
    return __result;
END_RCPP
}
// distance
void distance(NumericVector is, NumericVector js, NumericVector xs, NumericMatrix data);
RcppExport SEXP largeVis_distance(SEXP isSEXP, SEXP jsSEXP, SEXP xsSEXP, SEXP dataSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type is(isSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type js(jsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type xs(xsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type data(dataSEXP);
    distance(is, js, xs, data);
    return R_NilValue;
END_RCPP
}
// distMatrixTowij
arma::sp_mat distMatrixTowij(NumericVector is, NumericVector js, NumericVector xs, NumericVector sigmas, int N, Function callback);
RcppExport SEXP largeVis_distMatrixTowij(SEXP isSEXP, SEXP jsSEXP, SEXP xsSEXP, SEXP sigmasSEXP, SEXP NSEXP, SEXP callbackSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type is(isSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type js(jsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type xs(xsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type sigmas(sigmasSEXP);
    Rcpp::traits::input_parameter< int >::type N(NSEXP);
    Rcpp::traits::input_parameter< Function >::type callback(callbackSEXP);
    __result = Rcpp::wrap(distMatrixTowij(is, js, xs, sigmas, N, callback));
    return __result;
END_RCPP
}
// searchTrees
arma::mat searchTrees(int threshold, int n_trees, NumericMatrix data, Function callback);
RcppExport SEXP largeVis_searchTrees(SEXP thresholdSEXP, SEXP n_treesSEXP, SEXP dataSEXP, SEXP callbackSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< int >::type threshold(thresholdSEXP);
    Rcpp::traits::input_parameter< int >::type n_trees(n_treesSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type data(dataSEXP);
    Rcpp::traits::input_parameter< Function >::type callback(callbackSEXP);
    __result = Rcpp::wrap(searchTrees(threshold, n_trees, data, callback));
    return __result;
END_RCPP
}
// sigFunc
double sigFunc(double sigma, NumericVector x_i, double perplexity);
RcppExport SEXP largeVis_sigFunc(SEXP sigmaSEXP, SEXP x_iSEXP, SEXP perplexitySEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< double >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type x_i(x_iSEXP);
    Rcpp::traits::input_parameter< double >::type perplexity(perplexitySEXP);
    __result = Rcpp::wrap(sigFunc(sigma, x_i, perplexity));
    return __result;
END_RCPP
}
