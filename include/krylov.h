#ifndef KRYLOV_H
#define KRYLOV_H

#include <Eigen/Dense>
#include <string>

struct KrylovResult
{
    Eigen::VectorXd x;
    int iterations;
    double residual;
    double time;
    bool converged;
};

KrylovResult steepestDescent(
    const Eigen::MatrixXd& A,
    const Eigen::VectorXd& b,
    double tol,
    int maxIter);

KrylovResult conjugateGradient(
    const Eigen::MatrixXd& A,
    const Eigen::VectorXd& b,
    double tol,
    int maxIter);

KrylovResult bicgstab(
    const Eigen::MatrixXd& A,
    const Eigen::VectorXd& b,
    double tol,
    int maxIter);

#endif