//*-- Author :    Ole Hansen   20-Dec-2021

//////////////////////////////////////////////////////////////////////////
//
// SBSRun
//
// CODA data on disk, taken for the Hall A SBS experiments.
//
// Adds the following features to THaRun:
// - Retrieves run date from database, using the run number as key
// - Selects physics events based on list of event ranges read from file
//
//////////////////////////////////////////////////////////////////////////

#include "SBSRun.h"

//_____________________________________________________________________________
SBSRun::SBSRun( const char* filename, const char* description )
{

}

//_____________________________________________________________________________
SBSRun::SBSRun( const std::vector<TString>& pathList, const char* filename,
                const char* description )
  : THaRun(pathList, filename, description)
{

}

//_____________________________________________________________________________
SBSRun::~SBSRun()
{

}

//_____________________________________________________________________________
ClassImp(SBSRun)
