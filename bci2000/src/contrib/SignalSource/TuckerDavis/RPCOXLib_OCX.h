// ************************************************************************ //
// WARNING                                                                    
// -------                                                                    
// The types declared in this file were generated from data read from a       
// Type Library. If this type library is explicitly or indirectly (via        
// another type library referring to this type library) re-imported, or the   
// 'Refresh' command of the Type Library Editor activated while editing the   
// Type Library, the contents of this file will be regenerated and all        
// manual modifications will be lost.                                         
// ************************************************************************ //

// C++ TLBWRTR : $Revision: 1813 $
// File generated on 1/23/2008 5:37:25 PM from Type Library described below.

// ************************************************************************  //
// Type Lib: c:\tdt\ActiveX\RPcoX.ocx (1)
// LIBID: {D323A622-1D13-11D4-8858-444553540000}
// LCID: 0
// Helpfile: c:\tdt\ActiveX\RPcoX.hlp
// HelpString: RPcoX ActiveX Control module
// DepndLst: 
//   (1) v2.0 stdole, (C:\WINDOWS\System32\stdole2.tlb)
// ************************************************************************ //
#ifndef   RPCOXLib_OCXH
#define   RPCOXLib_OCXH

#pragma option push -b -w-inl

#include <olectrls.hpp>
#include <oleserver.hpp>
#include <utilcls.h>
#if !defined(__UTILCLS_H_VERSION) || (__UTILCLS_H_VERSION < 0x0600)
//
// The code generated by the TLIBIMP utility or the Import|TypeLibrary 
// and Import|ActiveX feature of C++Builder rely on specific versions of
// the header file UTILCLS.H found in the INCLUDE\VCL directory. If an 
// older version of the file is detected, you probably need an update/patch.
//
#error "This file requires a newer version of the header UTILCLS.H" \
       "You need to apply an update/patch to your copy of C++Builder"
#endif
#include <olectl.h>
#include <ocidl.h>
#if !defined(_NO_VCL)
#include <stdvcl.hpp>
#endif  //   _NO_VCL
#include <ocxproxy.h>

#include "RPCOXLib_TLB.h"
namespace Rpcoxlib_tlb
{

// *********************************************************************//
// HelpString: RPcoX ActiveX Control module
// Version:    1.0
// *********************************************************************//


// *********************************************************************//
// COM Component Proxy Class Declaration
// Component Name   : TRPcoX
// Help String      : RPcoX Control
// Default Interface: _DRPcoX
// Def. Intf. Object: _DRPcoXDisp
// Def. Intf. DISP? : Yes
// Event   Interface: _DRPcoXEvents
// TypeFlags        : (34) CanCreate Control
// *********************************************************************//

// *********************************************************************//
// Definition of closures to allow VCL handlers to catch OCX events.      
// *********************************************************************//
typedef void __fastcall (__closure * TRPcoXDefComplete)(System::TObject * Sender, 
                                                        long DefID);
//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-
// Proxy class to host RPcoX Control in CBuilder IDE/Applications.
//-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
class PACKAGE TRPcoX : public TOleControl
{
  OVERLOADED_PROP_METHODS;
  static TNoParam  OptParam;
  static GUID      DEF_CTL_INTF;

  // Instance of Closures to expose OCX Events as VCL ones
  //
  TRPcoXDefComplete              FOnDefComplete;

  // Default Interace of OCX
  //
  _DRPcoXDisp m_OCXIntf;

  // VCL Property Getters/Setters which delegate to OCX
  //

  // Static variables used by all instances of OCX proxy
  //
  static int          EventDispIDs[1];
  static TControlData CControlData;
  static GUID         CTL_DEF_INTF;

  // Method providing access to interface as __property 
  //
  _DRPcoXDisp __fastcall GetDefaultInterface();
  _DRPcoXDisp __fastcall GetControlInterface()
  { return GetDefaultInterface(); }

protected:
  void     __fastcall CreateControl  ();
  void     __fastcall InitControlData();

public:
  virtual  __fastcall TRPcoX(TComponent* AOwner) : TOleControl(AOwner)
  {};
  virtual  __fastcall TRPcoX(HWND        Parent) : TOleControl(Parent)
  {};

  // OCX methods
  //
  BSTR            __fastcall GetError(void);
  long            __fastcall Connect(long Interface, long DevNum);
  long            __fastcall SetTagVal(BSTR Name, float Val);
  long            __fastcall LoadCOF(BSTR FileName);
  long            __fastcall Run(void);
  long            __fastcall Halt(void);
  long            __fastcall SoftTrg(long Trg_Bitn);
  float           __fastcall GetTagVal(BSTR Name);
  long            __fastcall ReadTag(BSTR Name, float* pBuf, long nOS, long nWords);
  long            __fastcall WriteTag(BSTR Name, float* pBuf, long nOS, long nWords);
  long            __fastcall SendParTable(BSTR Name, float IndexID);
  long            __fastcall SendSrcFile(BSTR Name, long SeekOS, long nWords);
  long            __fastcall GetNames(BSTR NameList, long MaxNames, long ObjType);
  VARIANT         __fastcall ReadTagV(BSTR Name, long nOS, long nWords);
  long            __fastcall WriteTagV(BSTR Name, long nOS, VARIANT Buf);
  long            __fastcall GetTagSize(BSTR Name);
  long            __fastcall GetTagType(BSTR Name);
  long            __fastcall SetSrcFileName(BSTR Name, BSTR FileName);
  long            __fastcall GetNumOf(BSTR ObjTypeName);
  BSTR            __fastcall GetNameOf(BSTR ObjTypeName, long Index);
  long            __fastcall ReadCOF(BSTR FileName);
  long            __fastcall ConnectRP2(BSTR IntName, long DevNum);
  long            __fastcall ConnectRL2(BSTR IntName, long DevNum);
  long            __fastcall ConnectRA16(BSTR IntName, long DevNum);
  VARIANT         __fastcall ReadTagVEX(BSTR Name, long nOS, long nWords, BSTR SrcType, BSTR DstType, 
                                        long nChans);
  long            __fastcall GetStatus(void);
  long            __fastcall GetCycUse(void);
  long            __fastcall ClearCOF(void);
  long            __fastcall WriteTagVEX(BSTR Name, long nOS, BSTR DstType, VARIANT Buf);
  long            __fastcall ZeroTag(BSTR Name);
  float           __fastcall GetSFreq(void);
  long            __fastcall ConnectRV8(BSTR IntName, long DevNum);
  long            __fastcall GetDevCfg(long Addr, long Width32);
  long            __fastcall SetDevCfg(long Addr, long Val, long Width32);
  long            __fastcall LoadCOFsf(BSTR FileName, float SampFreq);
  long            __fastcall DefStatus(long DefID);
  VARIANT         __fastcall GetDefData(long DefID);
  void            __fastcall AboutBox(void);
  long            __fastcall ConnectRM1(BSTR IntName, long DevNum);
  long            __fastcall ConnectRM2(BSTR IntName, long DevNum);
  long            __fastcall ConnectRX5(BSTR IntName, long DevNum);
  long            __fastcall ConnectRX6(BSTR IntName, long DevNum);
  long            __fastcall ConnectRX7(BSTR IntName, long DevNum);
  long            __fastcall ConnectRX8(BSTR IntName, long DevNum);
  long            __fastcall ConnectRX9(BSTR IntName, long DevNum);
  long            __fastcall ConnectRZ2(BSTR IntName, long DevNum);
  long            __fastcall ConnectRZ3(BSTR IntName, long DevNum);
  long            __fastcall ConnectRZ4(BSTR IntName, long DevNum);
  long            __fastcall ConnectRZ5(BSTR IntName, long DevNum);
  long            __fastcall ConnectRZ6(BSTR IntName, long DevNum);

  // OCX properties
  //
  __property _DRPcoXDisp ControlInterface={ read=GetDefaultInterface };

  // Published properties
  //
__published:

  // Standard/Extended properties
  //

  // OCX properties
  //

  // OCX Events
  //
  __property TRPcoXDefComplete OnDefComplete={ read=FOnDefComplete, write=FOnDefComplete };
};
typedef TRPcoX  TRPcoXProxy;

};     // namespace Rpcoxlib_tlb

#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using  namespace Rpcoxlib_tlb;
#endif

#pragma option pop

#endif // RPCOXLib_OCXH
