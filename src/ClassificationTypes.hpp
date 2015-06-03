#ifndef _SONARIMAGEFEATURE_CLASSTYPES_HPP_
#define _SONARIMAGEFEATURE_CLASSTYPES_HPP_

#include "DetectorTypes.hpp"
#include <base/Eigen.hpp>
#include <base/samples/RigidBodyState.hpp>
#include <base/Time.hpp>
#include <base/samples/SonarScan.hpp>
#include <vector>
#include <math.h>
#include "libsvm/svm.h"

namespace sonar_image_feature_extractor
{
 
  
  struct SVMConfig{
    std::string svm_path;
    
    SVMType svm_type;
    KERNEL_TYPE kernel_type;
    int kernel_degree;
    double rbf_gamma;
    double coef0;
    
    //Learning parameters    
    double cache_size;
    double stopping_eps;
    double C;
    std::vector<double> weights;
    std::vector<int> weight_labels;
    int use_shrinking;
    int use_probability;
    
    bool learn;
    
  };
  
  
  struct Label{
    base::Vector2d pos;
    double label_id;    
  };
  
  struct LabeledSonar{
    base::samples::SonarScan scan;
    Label label;
  };
  
  struct LabeledCluster{
    Cluster cluster;
    Label label;    
  };  
  

} // end namespace sonar_image_feature_extractor

#endif // _DUMMYPROJECT_DUMMY_HPP_