#ifndef MotionCam_hpp
#define MotionCam_hpp

#include <string>

#include "motioncam/ImageProcessorProgress.h"

namespace motioncam {
    void ConvertVideoToDNG(const std::string& containerPath, const std::string& outputPath, const int numThreads=4);
    void ProcessImage(const std::string& containerPath, const std::string& outputFilePath, const ImageProcessorProgress& progressListener);
}

#endif /* MotionCam_hpp */
