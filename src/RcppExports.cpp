// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/clckhs.h"
#include <Rcpp.h>
#include <string>
#include <set>

using namespace Rcpp;

// fetch
DataFrame fetch(XPtr<Result> res, ssize_t n);
static SEXP clckhs_fetch_try(SEXP resSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< XPtr<Result> >::type res(resSEXP);
    Rcpp::traits::input_parameter< ssize_t >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(fetch(res, n));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP clckhs_fetch(SEXP resSEXP, SEXP nSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(clckhs_fetch_try(resSEXP, nSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// clearResult
void clearResult(XPtr<Result> res);
static SEXP clckhs_clearResult_try(SEXP resSEXP) {
BEGIN_RCPP
    Rcpp::traits::input_parameter< XPtr<Result> >::type res(resSEXP);
    clearResult(res);
    return R_NilValue;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP clckhs_clearResult(SEXP resSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(clckhs_clearResult_try(resSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// hasCompleted
bool hasCompleted(XPtr<Result> res);
static SEXP clckhs_hasCompleted_try(SEXP resSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< XPtr<Result> >::type res(resSEXP);
    rcpp_result_gen = Rcpp::wrap(hasCompleted(res));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP clckhs_hasCompleted(SEXP resSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(clckhs_hasCompleted_try(resSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// getRowCount
size_t getRowCount(XPtr<Result> res);
static SEXP clckhs_getRowCount_try(SEXP resSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< XPtr<Result> >::type res(resSEXP);
    rcpp_result_gen = Rcpp::wrap(getRowCount(res));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP clckhs_getRowCount(SEXP resSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(clckhs_getRowCount_try(resSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// getRowsAffected
size_t getRowsAffected(XPtr<Result> res);
static SEXP clckhs_getRowsAffected_try(SEXP resSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< XPtr<Result> >::type res(resSEXP);
    rcpp_result_gen = Rcpp::wrap(getRowsAffected(res));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP clckhs_getRowsAffected(SEXP resSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(clckhs_getRowsAffected_try(resSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// connect
XPtr<Client> connect(String host, int port, String db, String user, String password);
static SEXP clckhs_connect_try(SEXP hostSEXP, SEXP portSEXP, SEXP dbSEXP, SEXP userSEXP, SEXP passwordSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< String >::type host(hostSEXP);
    Rcpp::traits::input_parameter< int >::type port(portSEXP);
    Rcpp::traits::input_parameter< String >::type db(dbSEXP);
    Rcpp::traits::input_parameter< String >::type user(userSEXP);
    Rcpp::traits::input_parameter< String >::type password(passwordSEXP);
    rcpp_result_gen = Rcpp::wrap(connect(host, port, db, user, password));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP clckhs_connect(SEXP hostSEXP, SEXP portSEXP, SEXP dbSEXP, SEXP userSEXP, SEXP passwordSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(clckhs_connect_try(hostSEXP, portSEXP, dbSEXP, userSEXP, passwordSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// disconnect
void disconnect(XPtr<Client> conn);
static SEXP clckhs_disconnect_try(SEXP connSEXP) {
BEGIN_RCPP
    Rcpp::traits::input_parameter< XPtr<Client> >::type conn(connSEXP);
    disconnect(conn);
    return R_NilValue;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP clckhs_disconnect(SEXP connSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(clckhs_disconnect_try(connSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// select
XPtr<Result> select(XPtr<Client> conn, String query);
static SEXP clckhs_select_try(SEXP connSEXP, SEXP querySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< XPtr<Client> >::type conn(connSEXP);
    Rcpp::traits::input_parameter< String >::type query(querySEXP);
    rcpp_result_gen = Rcpp::wrap(select(conn, query));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP clckhs_select(SEXP connSEXP, SEXP querySEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(clckhs_select_try(connSEXP, querySEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// insert
void insert(XPtr<Client> conn, String tableName, DataFrame df);
static SEXP clckhs_insert_try(SEXP connSEXP, SEXP tableNameSEXP, SEXP dfSEXP) {
BEGIN_RCPP
    Rcpp::traits::input_parameter< XPtr<Client> >::type conn(connSEXP);
    Rcpp::traits::input_parameter< String >::type tableName(tableNameSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type df(dfSEXP);
    insert(conn, tableName, df);
    return R_NilValue;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP clckhs_insert(SEXP connSEXP, SEXP tableNameSEXP, SEXP dfSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(clckhs_insert_try(connSEXP, tableNameSEXP, dfSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}

// validate (ensure exported C++ functions exist before calling them)
static int clckhs_RcppExport_validate(const char* sig) { 
    static std::set<std::string> signatures;
    if (signatures.empty()) {
        signatures.insert("DataFrame(*fetch)(XPtr<Result>,ssize_t)");
        signatures.insert("void(*clearResult)(XPtr<Result>)");
        signatures.insert("bool(*hasCompleted)(XPtr<Result>)");
        signatures.insert("size_t(*getRowCount)(XPtr<Result>)");
        signatures.insert("size_t(*getRowsAffected)(XPtr<Result>)");
        signatures.insert("XPtr<Client>(*connect)(String,int,String,String,String)");
        signatures.insert("void(*disconnect)(XPtr<Client>)");
        signatures.insert("XPtr<Result>(*select)(XPtr<Client>,String)");
        signatures.insert("void(*insert)(XPtr<Client>,String,DataFrame)");
    }
    return signatures.find(sig) != signatures.end();
}

// registerCCallable (register entry points for exported C++ functions)
RcppExport SEXP clckhs_RcppExport_registerCCallable() { 
    R_RegisterCCallable("clckhs", "clckhs_fetch", (DL_FUNC)clckhs_fetch_try);
    R_RegisterCCallable("clckhs", "clckhs_clearResult", (DL_FUNC)clckhs_clearResult_try);
    R_RegisterCCallable("clckhs", "clckhs_hasCompleted", (DL_FUNC)clckhs_hasCompleted_try);
    R_RegisterCCallable("clckhs", "clckhs_getRowCount", (DL_FUNC)clckhs_getRowCount_try);
    R_RegisterCCallable("clckhs", "clckhs_getRowsAffected", (DL_FUNC)clckhs_getRowsAffected_try);
    R_RegisterCCallable("clckhs", "clckhs_connect", (DL_FUNC)clckhs_connect_try);
    R_RegisterCCallable("clckhs", "clckhs_disconnect", (DL_FUNC)clckhs_disconnect_try);
    R_RegisterCCallable("clckhs", "clckhs_select", (DL_FUNC)clckhs_select_try);
    R_RegisterCCallable("clckhs", "clckhs_insert", (DL_FUNC)clckhs_insert_try);
    R_RegisterCCallable("clckhs", "clckhs_RcppExport_validate", (DL_FUNC)clckhs_RcppExport_validate);
    return R_NilValue;
}
