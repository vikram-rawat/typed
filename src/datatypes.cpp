#include <Rcpp.h>
using namespace Rcpp;

//' Multiplies two doubles
//'
//' @param x RObject to be checked
//' @return Either a NumericVector or an Error depending upon the type checked
//' @export
// [[Rcpp::export]]
NumericVector NumVec( NumericVector x){
  return(x);
}
