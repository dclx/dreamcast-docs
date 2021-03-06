// logowaw.cpp : implementation file
//
// This is a part of the Microsoft Foundation Classes C++ library.
// Copyright (C) 1995 Microsoft Corporation
// All rights reserved.
//
// This source code is only intended as a supplement to the
// Microsoft Foundation Classes Reference and related
// electronic documentation provided with the library.
// See these sources for detailed information regarding the
// Microsoft Foundation Classes product.

#include "stdafx.h"
#include "logowiz.h"
#include "logowaw.h"
#include "chooser.h"

#ifdef _PSEUDO_DEBUG
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

// This is called immediately after the custom AppWizard is loaded.  Initialize
//  the state of the custom AppWizard here.
void CLogowizAppWiz::InitCustomAppWiz()
{
	// Create a new dialog chooser; CDialogChooser's constructor initializes
	//  its internal array with pointers to the steps.
	m_pChooser = new CDialogChooser;

	// At first, we don't know the total number of steps, since there are two
	//  possible "tracks" (MDI/SDI app and dialog-based app).
	SetNumberOfSteps(-1);

	// Inform AppWizard of the languages we support
	SetSupportedLanguages(_T("U.S. English (appwzenu.dll);0x40904b0"));

	// custom AppWizard-wide initialization
	m_Dictionary.SetAt(_T("PROJTYPE_DLG"), CString("1"));   // default to dialog-based
	m_Dictionary.SetAt(_T("HELP"), CString("1"));           // default to F1 help enabled
}

// This is called just before the custom AppWizard is unloaded.
void CLogowizAppWiz::ExitCustomAppWiz()
{
	// Deallocate memory used for the dialog chooser
	ASSERT(m_pChooser != NULL);
	delete m_pChooser;
	m_pChooser = NULL;

	// TODO: Add code here to deallocate resources used by the custom AppWizard
}

// This is called when the user clicks "Create..." on the New Project dialog
//  or "Next" on one of the custom AppWizard's steps.
CAppWizStepDlg* CLogowizAppWiz::Next(CAppWizStepDlg* pDlg)
{
	// Delegate to the dialog chooser
	return m_pChooser->Next(pDlg);
}

// This is called when the user clicks "Back" on one of the custom
//  AppWizard's steps.
CAppWizStepDlg* CLogowizAppWiz::Back(CAppWizStepDlg* pDlg)
{
	// Delegate to the dialog chooser
	return m_pChooser->Back(pDlg);
}

// Here we define one instance of the CLogowizAppWiz class.  You can access
//  m_Dictionary and any other public members of this class through the
//  global logowizaw.
CLogowizAppWiz logowizaw;
