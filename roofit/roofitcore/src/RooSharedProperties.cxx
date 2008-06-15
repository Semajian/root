/*****************************************************************************
 * Project: RooFit                                                           *
 * Package: RooFitCore                                                       *
 * @(#)root/roofitcore:$Id$
 * Authors:                                                                  *
 *   WV, Wouter Verkerke, UC Santa Barbara, verkerke@slac.stanford.edu       *
 *   DK, David Kirkby,    UC Irvine,         dkirkby@uci.edu                 *
 *                                                                           *
 * Copyright (c) 2000-2005, Regents of the University of California          *
 *                          and Stanford University. All rights reserved.    *
 *                                                                           *
 * Redistribution and use in source and binary forms,                        *
 * with or without modification, are permitted according to the terms        *
 * listed in LICENSE (http://roofit.sourceforge.net/license.txt)             *
 *****************************************************************************/

//////////////////////////////////////////////////////////////////////////////
//
// BEGIN_HTML
// Class RooSharedProperties is the base class for shared properties
// that can be stored in RooSharedPropertiesList.
// END_HTML
//

#include "RooFit.h"
#include "RooSharedProperties.h"
#include "RooMsgService.h"
#include "RooTrace.h"

#include "Riostream.h"
using std::cout ;
using std::endl ;

ClassImp(RooSharedProperties)
;



//_____________________________________________________________________________
RooSharedProperties::RooSharedProperties() 
{
  RooTrace::create(this) ;
} 


//_____________________________________________________________________________
RooSharedProperties::RooSharedProperties(const char* uuidstr) : _uuid(uuidstr) 
{
  RooTrace::create(this) ;
} 



//_____________________________________________________________________________
RooSharedProperties::~RooSharedProperties() 
{
  RooTrace::destroy(this) ;
} 



//_____________________________________________________________________________
Bool_t RooSharedProperties::operator==(const RooSharedProperties& other) 
{
  // Forward comparison to Unique UID component
  return (_uuid==other._uuid) ;
}


//_____________________________________________________________________________
void RooSharedProperties::Print(Option_t* /*opts*/) const 
{
  cout << "RooSharedProperties(" << this << ") UUID = " << _uuid.AsString() << endl ;
}
