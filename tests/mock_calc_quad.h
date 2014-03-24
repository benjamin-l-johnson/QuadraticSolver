// mock_qsolve_sqrt.h
// mock_qsolve_sqrt.c provides a mock object fvor qsolve_sqrt() and
// these are the uusual mock support functions .

// Initialize to expect 1 call to qsolve_sqrt() 
void mock_setup_calc_quad(double lx, double lsqrtx, double leps);
// Check the results 
int mock_check_calc_quad(int *lcount,  double *lx); 
// Reset internal values to the start state
void mock_teardown_calc_quad();
