#include "RobotUtilities/utilities.h"
#include <Eigen/Geometry>

using namespace RUT;

int main() {
  // Eigen::Vector3d p1, p2;
  // p1 << 0, 0, 0;
  // p2 << 1, 0, 0;
  // Eigen::Vector3d n1, n2;
  // n1 << 0, 0, 1;
  // n2 << 0, -1, 1;
  // RUT::Vector6d line1, line2;
  // line1 = RUT::getPluckerLine(p1, n1);
  // line2 = RUT::getPluckerLine(p2, n2);
  // double dist = RUT::distBTPluckerLines(line1, line2);
  // double ang = RUT::angleBTPluckerLines(line1, line2);
  // std::cout << "line1: " << line1.transpose() << std::endl;
  // std::cout << "line2: " << line2.transpose() << std::endl;
  // std::cout << "dist = " << dist << std::endl;
  // std::cout << "ang (deg) = " << ang*180.0/3.1415926 << std::endl;
  // Eigen::Vector3d p3;
  // p3 << 1, 1, 0;
  // double dist1 = distPoint2PluckerLine(p3, line1);
  // double dist2 = distPoint2PluckerLine(p3, line2);
  // std::cout << "point dist to line 1 = " << dist1 << std::endl;
  // std::cout << "point dist to line 2 = " << dist2 << std::endl;

  // std::vector<double> pose_vec = {1,2,3,0,1,0,0};
  // CartesianPose pose = CartesianPose(pose_vec);
  // Eigen::Isometry3d iso = pose.getIsometry3d();
  // CartesianPose pose2 = CartesianPose(iso);
  // std::cout << "Pose 1: " << std::endl;
  // pose.print();
  // std::cout << "Pose 2: " << std::endl;
  // pose2.print();

  // Eigen::MatrixXd A(3,3);
  // A << -4.3102,   14.3674,   -3.3332,
  //        0,         0,         0,
  //   4.3102,   14.3674,   -0.8333;
  // std::cout << "A: \n" << A << std::endl;
  // int r = rowSpace(&A, 1e-10);
  // std::cout << "rank: " << r << std::endl;
  // std::cout << "rowSpace(A): \n" << A << std::endl;
  // std::cout << "A*(A'): \n" << A*A.transpose() << std::endl;
  std::vector<double> pose_temp = {0,0,2,1,0,0,0};
  CartesianPose testpose, testpose2;
  testpose = CartesianPose(pose_temp);
  std::cout << "debug 0" << std::endl;
  testpose2 = testpose.inv();
  std::cout << "debug 1" << std::endl;
  return 0;
}