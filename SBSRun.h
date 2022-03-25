#ifndef SBSRun_h
#define SBSRun_h

//////////////////////////////////////////////////////////////////////////
//
// SBSRun
//
//////////////////////////////////////////////////////////////////////////

#include "THaRun.h"

class SBSRun : public THaRun {

public:
  explicit SBSRun( const char* filename="", const char* description="" );
  SBSRun( const std::vector<TString>& pathList, const char* filename,
          const char* description="" );

  virtual ~SBSRun();

protected:


  ClassDef(SBSRun,1)  // A THaRun with addition features useful for SBS
};


#endif //SBSRun_h
