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

#pragma once


// CEffectEditorDockDlg dialog

class CEffectEditorDockDlg : public CDialog
{
	DECLARE_DYNAMIC(CEffectEditorDockDlg)

public:
	CEffectEditorDockDlg(CWnd* pParent = NULL);   // standard constructor
	virtual ~CEffectEditorDockDlg();

// Dialog Data
	enum { IDD = IDD_EFFECTEDITOR_DCKDLG };

protected:
	IToolBox *m_ToolBox;
	CEffectEditor* m_pEditor;

	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnSize(UINT nType, int cx, int cy);
};
