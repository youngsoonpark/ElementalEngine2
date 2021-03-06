///============================================================================
/// \note   Elemental Engine
///         Copyright (c)  2005-2008 Signature Devices, Inc.
///
///         This code is redistributable under the terms of the EE License.
///
///         This code is distributed without warranty or implied warranty of
///			merchantability or fitness for a particular purpose. See the 
///			EE License for more details.
///
///         You should have received a copy of the EE License along with this
///			code; If not, write to Signature Devices, Inc.,
///			3200 Bridge Parkway Suite 102, Redwood City, CA 94086 USA.
///============================================================================

#if !defined(AFX_EXAMPLEFRM_H__D0F99C6B_8296_469D_9CCD_028B2E15383F__INCLUDED_)
#define AFX_EXAMPLEFRM_H__D0F99C6B_8296_469D_9CCD_028B2E15383F__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// ModelViewFrm.h : header file
//

#include "ModelViewToolPal.h"

/////////////////////////////////////////////////////////////////////////////
// CModelViewFrm frame


class CModelViewFrm : public CMDIChildWnd
{
	DECLARE_DYNCREATE(CModelViewFrm)
protected:
	
	CModelViewFrm();           // protected constructor used by dynamic creation

// Attributes
public:
	
	CModelViewToolPal m_ModelViewToolPal;
	
	HINSTANCE m_AppInst;

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CModelViewFrm)
	//}}AFX_VIRTUAL

// Implementation
protected:
	
	virtual ~CModelViewFrm();

	// Generated message map functions
	//{{AFX_MSG(CModelViewFrm)
	
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_EXAMPLEFRM_H__D0F99C6B_8296_469D_9CCD_028B2E15383F__INCLUDED_)
