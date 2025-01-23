#ifndef _IEGUIDP_H_
#define _IEGUIDP_H_

#ifndef _WIN32_IE
#define _WIN32_IE 0x0600
#else
#if (_WIN32_IE < 0x0400) && defined(_WIN32_WINNT) && (_WIN32_WINNT >= 0x0500)
#error _WIN32_IE setting conflicts with _WIN32_WINNT setting
#endif
#endif


//
// from shlguidp.h
//

#if (_WIN32_IE >= 0x0400)

// favorites band
// {EFA24E61-B078-11d0-89E4-00C04FC9E26E}
DEFINE_GUID(CLSID_FavBand,              0xefa24e61, 0xb078, 0x11d0, 0x89, 0xe4, 0x0, 0xc0, 0x4f, 0xc9, 0xe2, 0x6e);

// history band
// {EFA24E62-B078-11d0-89E4-00C04FC9E26E}
DEFINE_GUID(CLSID_HistBand,              0xefa24e62, 0xb078, 0x11d0, 0x89, 0xe4, 0x0, 0xc0, 0x4f, 0xc9, 0xe2, 0x6e);

// channels band
// {EFA24E63-B078-11d0-89E4-00C04FC9E26E}
DEFINE_GUID(CLSID_ChannelBand,          0xefa24e63, 0xb078, 0x11d0, 0x89, 0xe4, 0x0, 0xc0, 0x4f, 0xc9, 0xe2, 0x6e);

// {A2B0DD40-CC59-11d0-A3A5-00C04FD706EC}
DEFINE_GUID( CLSID_IESplashScreen, 0xa2b0dd40, 0xcc59, 0x11d0, 0xa3, 0xa5, 0x0, 0xc0, 0x4f, 0xd7, 0x6, 0xec);

#endif  // (_WIN32_IE >= 0x0400)



#if (_WIN32_IE >= 0x0400)

DEFINE_GUID(IID_IWinEventHandler,       0xEA5F2D61L, 0xE008, 0x11CF, 0x99, 0xCB, 0x00, 0xC0, 0x4F, 0xD6, 0x44, 0x97);

DEFINE_GUID(IID_IExplorerToolbar,       0x8455F0C1L, 0x158F, 0x11D0, 0x89, 0xAE, 0x00, 0xA0, 0xC9, 0x0A, 0x90, 0xAC);
#define SID_SExplorerToolbar IID_IExplorerToolbar

// IQueryCodePage {C7B236CE-EE80-11D0-985F-006008059382}
DEFINE_GUID(IID_IQueryCodePage, 0xC7B236CEL, 0xEE80, 0x11D0, 0x98, 0x5F, 0x00, 0x60, 0x08, 0x05, 0x93, 0x82);

DEFINE_GUID(CGID_AddressEditBox, 0x72730b70, 0xe8f7, 0x11d0, 0xbc, 0x44, 0x0, 0xaa, 0x0, 0x6c, 0xe2, 0xf5);

/// AddressEditBox stuff
// {A08C11D1-A228-11d0-825B-00AA005B4383}
DEFINE_GUID(IID_IAddressEditBox, 0xa08c11d1, 0xa228, 0x11d0, 0x82, 0x5b, 0x0, 0xaa, 0x0, 0x5b, 0x43, 0x83);
DEFINE_GUID(CLSID_AddressEditBox,0xa08c11d2, 0xa228, 0x11d0, 0x82, 0x5b, 0x0, 0xaa, 0x0, 0x5b, 0x43, 0x83);

// {????} - For JITting in HTML Help Feature
DEFINE_GUID(CLSID_IEHelp, 0x45ea75a0L, 0xa269, 0x11d1, 0xb5, 0xbf, 0x00, 0x00, 0xf8, 0x05, 0x15, 0x15);

// {603D3800-BD81-11d0-A3A5-00C04FD706EC}
DEFINE_GUID(CLSID_ShellTaskScheduler,        0x603d3800, 0xbd81, 0x11d0, 0xa3, 0xa5, 0x0, 0xc0, 0x4f, 0xd7, 0x6, 0xec);

// {6CCB7BE0-6807-11d0-B810-00C04FD706EC}
DEFINE_GUID(IID_IShellTaskScheduler,         0x6ccb7be0, 0x6807, 0x11d0, 0xb8, 0x10, 0x0, 0xc0, 0x4f, 0xd7, 0x6, 0xec);

// {04B3813B-0A23-11d2-B5AC-006097DF5BD4} - For JITting in FTP Shell Extension.
DEFINE_GUID(CLSID_FTPShellExtension, 0x4b3813b, 0xa23, 0x11d2, 0xb5, 0xac, 0x0, 0x60, 0x97, 0xdf, 0x5b, 0xd4);

// {CB81A3CB-1039-11d1-AB74-00C04FC30936}
DEFINE_GUID( IID_ISplashScreen, 0xcb81a3cb, 0x1039, 0x11d1, 0xab, 0x74, 0x0, 0xc0, 0x4f, 0xc3, 0x9, 0x36);

// {6B707A1C-744F-11d2-86B9-00C04F8EEA99}
DEFINE_GUID(IID_IBrowserBand, 0x6b707a1c, 0x744f, 0x11d2, 0x86, 0xb9, 0x0, 0xc0, 0x4f, 0x8e, 0xea, 0x99);

DEFINE_GUID(VID_WebView, 0x5984FFE0L, 0x28D4, 0x11CF, 0xAE, 0x66, 0x08, 0x00, 0x2B, 0x2E, 0x12, 0x62);
// {BE098140-A513-11d0-A3A4-00C04FD706EC}

// {603D3801-BD81-11d0-A3A5-00C04FD706EC}
DEFINE_GUID(CLSID_SharedTaskScheduler,       0x603d3801, 0xbd81, 0x11d0, 0xa3, 0xa5, 0x0, 0xc0, 0x4f, 0xd7, 0x6, 0xec);

DEFINE_GUID(CLSID_ImageListCache,            0x3f4eef80, 0xbfe8, 0x11d0, 0xa3, 0xa5, 0x0, 0xc0, 0x4f, 0xd7, 0x6, 0xec);

DEFINE_GUID(IID_IAddressBand,           0x106E86E1, 0x52B5, 0x11D0, 0xBF, 0xED, 0x0, 0xAA, 0x0, 0x5B, 0x43, 0x83);

// used by shell32 and ie components.
// same interface as IID_IExtractImage
// {D4029EC0-0920-11d1-9A0B-00C04FC2D6C1}
DEFINE_GUID(IID_IExtractLogo,                0xd4029ec0, 0x920, 0x11d1, 0x9a, 0xb, 0x0, 0xc0, 0x4f, 0xc2, 0xd6, 0xc1);

// {0D14E31C-D8C0-11d0-9816-00C04FD91972}
DEFINE_GUID(SID_SMenuBandHandler,           0xd14e31c, 0xd8c0, 0x11d0, 0x98, 0x16, 0x0, 0xc0, 0x4f, 0xd9, 0x19, 0x72);

// {3F4EEF80-BFE8-11d0-A3A5-00C04FD706EC}
// {4FCE9180-BFE8-11d0-A3A5-00C04FD706EC}
DEFINE_GUID(IID_IImageCache,                 0x4fce9180, 0xbfe8, 0x11d0, 0xa3, 0xa5, 0x0, 0xc0, 0x4f, 0xd7, 0x6, 0xec);

// {8A4D3EDC-13A4-11d1-9A22-00C04FC2D6C1}
DEFINE_GUID(CLSID_ThumbnailScaler, 0x8a4d3edc, 0x13a4, 0x11d1, 0x9a, 0x22, 0x0, 0xc0, 0x4f, 0xc2, 0xd6, 0xc1);

// {45B324CE-B8A1-11d1-98D3-00C04FB687DA}
DEFINE_GUID(IID_IScaleAndSharpenImage2, 0x45b324ce, 0xb8a1, 0x11d1, 0x98, 0xd3, 0x0, 0xc0, 0x4f, 0xb6, 0x87, 0xda);

DEFINE_GUID(IID_IDeskBarClient,         0xEB0FE175L, 0x1A3A, 0x11D0, 0x89, 0xB3, 0x00, 0xA0, 0xC9, 0x0A, 0x90, 0xAC);

DEFINE_GUID(IID_IMultiMonitorDockingSite, 0x03879DE0L, 0xA205, 0x11D0, 0x99, 0xCB, 0x00, 0xC0, 0x4F, 0xD6, 0x55, 0xE1); 

// {D12F26B1-D90A-11d0-830D-00AA005B4383}
DEFINE_GUID(IID_IRestrict, 0xd12f26b1, 0xd90a, 0x11d0, 0x83, 0xd, 0x0, 0xaa, 0x0, 0x5b, 0x43, 0x83);

// {D12F26B2-D90A-11d0-830D-00AA005B4383}
DEFINE_GUID(SID_SRestrictionHandler, 0xd12f26b2, 0xd90a, 0x11d0, 0x83, 0xd, 0x0, 0xaa, 0x0, 0x5b, 0x43, 0x83);

// {D12F26B3-D90A-11d0-830D-00AA005B4383}
DEFINE_GUID(RID_RDeskBars, 0xd12f26b3, 0xd90a, 0x11d0, 0x83, 0xd, 0x0, 0xaa, 0x0, 0x5b, 0x43, 0x83);

// {4622AD16-FF23-11d0-8D34-00A0C90F2719}
DEFINE_GUID(IID_IInitializeObject,0x4622ad16, 0xff23, 0x11d0, 0x8d, 0x34, 0x0, 0xa0, 0xc9, 0xf, 0x27, 0x19);



#endif  // (_WIN32_IE >= 0x0400)


#if _WIN32_IE >= 0x0500

DEFINE_GUID(IID_IPersistString, 0xD5E37E20L, 0x0257, 0x11CF, 0xAE, 0x65, 0x08, 0x00, 0x2B, 0x2E, 0x12, 0x62);
// {8210BAC0-C6D2-11cf-89AA-00A0C9054129}

// {AC3E9E59-96D7-11d1-98A4-00C04FB687DA}
DEFINE_GUID(IID_IImageCache2,                0xac3e9e59, 0x96d7, 0x11d1, 0x98, 0xa4, 0x0, 0xc0, 0x4f, 0xb6, 0x87, 0xda);

#endif  // _WIN32_IE >= 0x0500

#if (_WIN32_IE >= 0x0501)
// {58C73AE8-6AFE-4784-96FC-F97F65773B64}
DEFINE_GUID(IID_IShellTaskScheduler2,        0x58c73ae8, 0x6afe, 0x4784, 0x96, 0xfc, 0xf9, 0x7f, 0x65, 0x77, 0x3b, 0x64);

// {B61D9AB3-F120-4a5c-83A0-542923985BF7}
DEFINE_GUID(IID_IImageCache3,                0xb61d9ab3, 0xf120, 0x4a5c, 0x83, 0xa0, 0x54, 0x29, 0x23, 0x98, 0x5b, 0xf7);
#endif


#if _WIN32_IE >= 0x0600

#ifndef DEFINE_SHLGUID
#define DEFINE_SHLGUID(name, l, w1, w2) DEFINE_GUID(name, l, w1, w2, 0xC0,0,0,0,0,0,0,0x46)

#endif

// SID_SBrandBand: the spinning globe {82A62DE8-32AC-4e4a-9935-9046C378CF90}
DEFINE_GUID(SID_SBrandBand, 0x82a62de8, 0x32ac, 0x4e4a, 0x99, 0x35, 0x90, 0x46, 0xc3, 0x78, 0xcf, 0x90);

// Command group for the BrandBand {25019D8C-9EE0-45c0-883B-972D48325E18}
DEFINE_GUID(CGID_BrandCmdGroup, 0x25019d8c, 0x9ee0, 0x45c0, 0x88, 0x3b, 0x97, 0x2d, 0x48, 0x32, 0x5e, 0x18);

// Command IDs for the BrandBand's CGID_BrandCmdGroup (to be called in Exec)
#define CBRANDIDM_STARTGLOBEANIMATION   1
#define CBRANDIDM_STOPGLOBEANIMATION    2


// {31D44C2F-6C6A-45fc-B8C7-946BA8EDB8B4}
DEFINE_GUID(CGID_MediaBar, 0x31d44c2f, 0x6c6a, 0x45fc, 0xb8, 0xc7, 0x94, 0x6b, 0xa8, 0xed, 0xb8, 0xb4);

#endif // _WIN32_IE >= 0x0600


// Private Dochost Commands
//
DEFINE_SHLGUID(CGID_DocHostCmdPriv,         0x000214D4L, 0, 0);



//
//  from shguidp.h
//

// explorer band
// {EFA24E64-B078-11d0-89E4-00C04FC9E26E}
DEFINE_GUID(CLSID_ExplorerBand,         0xefa24e64, 0xb078, 0x11d0, 0x89, 0xe4, 0x0, 0xc0, 0x4f, 0xc9, 0xe2, 0x6e);

/// INSCTree
// {43A8F463-4222-11d2-B641-006097DF5BD4}
DEFINE_GUID(CLSID_NSCTree,              0x43a8f463, 0x4222, 0x11d2, 0xb6, 0x41, 0x0, 0x60, 0x97, 0xdf, 0x5b, 0xd4);

// {1FBA04EE-3024-11d2-8F1F-0000F87ABD16}
DEFINE_GUID(CLSID_ToolbarExtExec, 0x1fba04ee, 0x3024, 0x11d2, 0x8f, 0x1f, 0x0, 0x0, 0xf8, 0x7a, 0xbd, 0x16);

// {E0DD6CAB-2D10-11d2-8F1A-0000F87ABD16}
DEFINE_GUID(CLSID_ToolbarExtBand, 0xe0dd6cab, 0x2d10, 0x11d2, 0x8f, 0x1a, 0x0, 0x0, 0xf8, 0x7a, 0xbd, 0x16);

// {83799FE0-1F5A-11d1-95C7-00609797EA4F}
DEFINE_GUID(CLSID_DocFileInfoTip,   0x83799fe0, 0x1f5a, 0x11d1, 0x95, 0xc7, 0x0, 0x60, 0x97, 0x97, 0xea, 0x4f);

// {8E6E6079-0CB7-11d2-8F10-0000F87ABD16}
DEFINE_GUID(CLSID_OfflinePagesCacheCleaner, 0x8e6e6079, 0xcb7, 0x11d2, 0x8f, 0x10, 0x0, 0x0, 0xf8, 0x7a, 0xbd, 0x16);

// Internet Cache Cleaner
// {9B0EFD60-F7B0-11D0-BAEF-00C04FC308C9}
DEFINE_GUID(CLSID_InternetCacheCleaner,     0x9b0efd60, 0xf7b0, 0x11d0, 0xba, 0xef, 0x0, 0xc0, 0x4f, 0xc3, 0x08, 0xc9);

// {67EA19A0-CCEF-11d0-8024-00C04FD75D13}
DEFINE_GUID(CLSID_CDFCopyHook, 0x67ea19a0, 0xccef, 0x11d0, 0x80, 0x24, 0x0, 0xc0, 0x4f, 0xd7, 0x5d, 0x13);

//ffdc1a80-d527-11d0-a32c-34af06c10000
DEFINE_GUID (CLSID_WinListShellProc, 0xffdc1a80, 0xd527, 0x11d0, 0xa3, 0x2c, 0x34, 0xaf, 0x06, 0xc1, 0x00, 0x00);

DEFINE_GUID(CLSID_ChannelOC,            0x131A6951L, 0x7F78, 0x11D0, 0xA9, 0x79, 0x00, 0xC0, 0x4F, 0xD7, 0x05, 0xA2);

DEFINE_GUID(CLSID_CStubBindStatusCallback, 
                                        0x2B4F54B1, 0x3D6D, 0x11d0, 0x82, 0x58, 0x00, 0xC0, 0x4F, 0xD5, 0xAE, 0x38);// 2B4F54B1-3D6D-11d0-8258-00C04FD5AE38

// History Shell Folder
DEFINE_GUID(CLSID_HistFolder,           0xFF393560L, 0xC2A7, 0x11CF, 0xBF, 0xF4, 0x44, 0x45, 0x53, 0x54, 0x00, 0x00);

// Cache Shell Folder UICLSID
DEFINE_GUID(CLSID_CacheFolder,          0x7BD29E00L, 0x76C1, 0x11CF, 0x9D, 0xD0, 0x00, 0xA0, 0xC9, 0x03, 0x49, 0x33);
// Cache Shell Folder full implementation
DEFINE_GUID(CLSID_CacheFolder2,         0x7BD29E01L, 0x76C1, 0x11CF, 0x9D, 0xD0, 0x00, 0xA0, 0xC9, 0x03, 0x49, 0x33);

DEFINE_GUID(CLSID_CDocObjectFolder,     0xE7E4BC40, 0xE76A, 0x11CE, 0xA9,0xBB,0x00,0xAA,0x00,0x4A,0xE8,0x37);//E7E4BC40-E76A-11CE-A9BB-00AA004AE837

// {BB90CD8B-4F08-11d0-B497-00C04FD90119}
DEFINE_GUID(IID_IShellHTMLWindowSupport,0xbb90cd8bL, 0x4f08, 0x11d0, 0xb4, 0x97, 0x00, 0xc0, 0x4f, 0xd9, 0x01, 0x19);

DEFINE_GUID(IID_IExpDispSupport,        0x0D7D1D00, 0x6FC0, 0x11D0, 0xA9, 0x74, 0x00, 0xC0, 0x4F, 0xD7, 0x05, 0xA2);//0D7D1D00-6FC0-11D0-A974-00C04FD705A2

DEFINE_GUID(IID_IDocNavigate,           0x131A6950L, 0x7F78, 0x11D0, 0xA9, 0x79, 0x00, 0xC0, 0x4F, 0xD7, 0x05, 0xA2);

//***   SID_STopFrameBrowser -- like SID_STopLevelBrowser, but blocked by BrowserBand
// currently used to make BrowserBand get its own global history, but could
// be more generally useful than that, hence the more generic name.
// {A9227C3C-7F8E-11d0-8CB0-00A0C92DBFE8}
DEFINE_GUID(SID_STopFrameBrowser,       0xa9227c3c, 0x7f8e, 0x11d0, 0x8c, 0xb0, 0x0, 0xa0, 0xc9, 0x2d, 0xbf, 0xe8);

// {C7A30296-907E-11d2-B02F-00C04FA35D89}
DEFINE_GUID(IID_IUrlHistoryPriv,        0xc7a30296, 0x907e, 0x11d2, 0xb0, 0x2f, 0x0, 0xc0, 0x4f, 0xa3, 0x5d, 0x89);

// 20C46561-8491-11CF-960C-0080C7F4EE85 
// this is who should navigate instead
DEFINE_GUID(SID_SProxyBrowser,          0x20C46561L, 0x8491, 0x11CF, 0x96, 0x0C, 0x00, 0x80, 0xC7, 0xF4, 0xEE, 0x85);

//1E79697E-9CC5-11D1-A83F-00C04FC99D61
DEFINE_GUID(CLSID_CommonButtons, 0x1E79697EL, 0x9CC5, 0x11D1, 0xA8, 0x3F, 0x00, 0xC0, 0x4F, 0xC9, 0x9D, 0x61);

DEFINE_GUID(SID_PendingBindStatusCallback, 0xfe390c68, 0xe2bc, 0x11d0, 0x88, 0x8c, 0x0, 0xc0, 0x4f, 0xc2, 0xc8, 0x36);

// {32bb8320-b41b-11cf-a6bb-0080c7b2d682}
DEFINE_GUID(IID_IBrowserExtension, 0x32bb8320, 0xb41b, 0x11cf, 0xa6, 0xbb, 0x0, 0x80, 0xc7, 0xb2, 0xd6, 0x82);

DEFINE_GUID(SID_ITopViewHost,           0xd1e7afec, 0x6a2e, 0x11d0, 0x8c, 0x78, 0x0, 0xc0, 0x4f, 0xd9, 0x18, 0xb4);

DEFINE_GUID(IID_IEFrameAuto,            0x131A6953L, 0x7F78, 0x11D0, 0xA9, 0x79, 0x00, 0xC0, 0x4F, 0xD7, 0x05, 0xA2);

DEFINE_GUID(IID_IExpDispSupportOC,      0x0D7D1D01, 0x6FC0, 0x11D0, 0xA9, 0x74, 0x00, 0xC0, 0x4F, 0xD7, 0x05, 0xA2);//0D7D1D01-6FC0-11D0-A974-00C04FD705A2

// {48123bc4-99d9-11d1-a6b3-00c04fd91555}
DEFINE_GUID(CLSID_XMLViewerDocObj, 0x48123bc4, 0x99d9, 0x11d1, 0xa6, 0xb3, 0x0, 0xc0, 0x4f, 0xd9, 0x15, 0x55);

DEFINE_GUID(IID_IOrderList,             0x8bfcb27d, 0xcf1a, 0x11d0, 0xb9, 0x3d, 0x0, 0xa0, 0xc9, 0x3, 0x12, 0xe1);
DEFINE_GUID(CLSID_OrderListExport,      0xf3368374, 0xcf19, 0x11d0, 0xb9, 0x3d, 0x0, 0xa0, 0xc9, 0x3, 0x12, 0xe1);

// Interface used to keep channel cache in sync.
DEFINE_GUID(IID_IChannelMgrPriv, 0xc9ace0f0, 0xac1, 0x11d1, 0x8f, 0x45, 0x0, 0xa0, 0xc9, 0x5, 0x41, 0x3f);
DEFINE_GUID(IID_IChannelMgrPriv2, 0xc9ace0f1, 0xac1, 0x11d1, 0x8f, 0x45, 0x0, 0xa0, 0xc9, 0x5, 0x41, 0x3f);

// {1ABCFC13-2340-11d2-B601-006097DF5BD4}
DEFINE_GUID(CLSID_FtpInstaller, 0x1abcfc13, 0x2340, 0x11d2, 0xb6, 0x1, 0x0, 0x60, 0x97, 0xdf, 0x5b, 0xd4);
DEFINE_GUID(IID_IFtpInstaller, 0x1abcfc13, 0x2340, 0x11d2, 0xb6, 0x1, 0x0, 0x60, 0x97, 0xdf, 0x5b, 0xd4);

// this is used in shdocvw's CConnectionPoint implementation
// to let CShellOcx type OCs get advised of Advise/Unadvise
// calls to the connection point. CShellFolderViewOC uses it.
//
DEFINE_GUID(IID_IConnectionPointCB,     0xAAAC9640L, 0x1252, 0x11D0, 0x89, 0xA9, 0x00, 0xA0, 0xC9, 0x05, 0x41, 0x29);

// {4ec5337e-4554-4705-81fd-06a3e1b0430a}
DEFINE_GUID(IID_IShellHTMLWindowSupport2,0x4ec5337e, 0x4554, 0x4705, 0x81, 0xfd, 0x06, 0xa3, 0xe1, 0xb0, 0x43, 0x0a);

// {DD313E04-FEFF-11d1-8ECD-0000F87A470C}
DEFINE_GUID(CLSID_UserAssist, 0xdd313e04, 0xfeff, 0x11d1, 0x8e, 0xcd, 0x0, 0x0, 0xf8, 0x7a, 0x47, 0xc);

// {DD313E05-FEFF-11d1-8ECD-0000F87A470C}
DEFINE_GUID(IID_IUserAssist, 0xdd313e05, 0xfeff, 0x11d1, 0x8e, 0xcd, 0x0, 0x0, 0xf8, 0x7a, 0x47, 0xc);

// navigate band UI from pidl
DEFINE_GUID(IID_IBandNavigate,          0x3697c30b, 0xcd88, 0x11d0, 0x8a, 0x3e, 0x0, 0xc0, 0x4f, 0xc9, 0xe2, 0x6e);

// {3050f803-98b5-11cf-bb82-00aa00bdce0b} SID_QIClientSite
DEFINE_GUID(SID_QIClientSite, 0x3050f803, 0x98b5, 0x11cf, 0xbb, 0x82, 0x00, 0xaa, 0x00, 0xbd, 0xce, 0x0b);

// {996E1EB1-B524-11d1-9120-00A0C98BA67D}
DEFINE_GUID(SRCID_SFindComputer,   0x996e1eb1, 0xb524, 0x11d1, 0x91, 0x20, 0x0, 0xa0, 0xc9, 0x8b, 0xa6, 0x7d);

// {D515F311-B78B-11d1-9123-00A0C98BA67D}
DEFINE_GUID(SRCID_SFindPrinter,    0xd515f311, 0xb78b, 0x11d1, 0x91, 0x23, 0x0, 0xa0, 0xc9, 0x8b, 0xa6, 0x7d);

// {169A0691-8DF9-11d1-A1C4-00C04FD75D13}
DEFINE_GUID(CLSID_ShellSearchExt,       0x169a0691, 0x8df9, 0x11d1, 0xa1, 0xc4, 0x0, 0xc0, 0x4f, 0xd7, 0x5d, 0x13);

// {23d9b0f1-40fc-11d2-bf8c-00c04fb93661}
DEFINE_GUID(IID_IFolderSearches, 0x23d9b0f1, 0x40fc, 0x11d2, 0xbf, 0x8c, 0x0, 0xc0, 0x4f, 0xb9, 0x36, 0x61);

// 830abff0-afd9-11d1-b9f1-00a0c98bc547
DEFINE_GUID(IID_ISearchItems,      0x830abff0L, 0xafd9, 0x11d1, 0xb9, 0xf1, 0x00, 0xa0, 0xc9, 0x8b, 0xc5, 0x47);

// New MSIE FTP UI from msieftp.dll
DEFINE_GUID(CLSID_FtpFolder,            0x63da6ec0, 0x2e98, 0x11cf, 0x8d,0x82,0x44,0x45,0x53,0x54,0,0);

//A48F1A32-A340-11D1-BC6B-00A0C90312E1
DEFINE_GUID(GUID_Restrictions, 0xA48F1A32L, 0xA340, 0x11D1, 0xBC, 0x6B, 0x00, 0xA0, 0xC9, 0x03, 0x12, 0xE1);

DEFINE_GUID (IID_IHist,                 0x06faeb04L, 0x191c, 0x11d3, 0x95, 0x73, 0x00, 0xc0, 0x4f, 0xa3, 0x1a, 0x86);
DEFINE_GUID (IID_ICache,                0x06faeb05L, 0x191c, 0x11d3, 0x95, 0x73, 0x00, 0xc0, 0x4f, 0xa3, 0x1a, 0x86);

// {B1E437E0-047A-11D1-B833-00C04FC9B31F}
DEFINE_GUID(IID_IDwnCodePage, 0xb1e437e0, 0x047a, 0x11d1, 0xb8, 0x33, 0x0, 0xc0, 0x4f, 0xc9, 0xb3, 0x1f);

// {AFD971E0-C870-11d0-A3A5-00C04FD706EC}
DEFINE_GUID(IID_IPrivateOleObject, 0xafd971e0, 0xc870, 0x11d0, 0xa3, 0xa5, 0x0, 0xc0, 0x4f, 0xd7, 0x6, 0xec);

// {a28a872c-1bce-11d4-a114-00c04f8ef9b9}
DEFINE_GUID(IID_ISearchBandTBHelper, 0xa28a872c, 0x1bce, 0x11d4, 0xa1, 0x14, 0x0, 0xc0, 0x4f, 0x8e, 0xf9, 0xb9);

// used when communicating with the Internet Toolbar. 
DEFINE_GUID(CGID_ShellBrowser, 0x3531F060L, 0x22B3, 0x11D0, 0x96, 0x9E, 0x00, 0xAA, 0x00, 0xB6, 0x01, 0x04 );

/// IAddressList
// {D7E67AA1-AA76-11d0-8282-00AA005B4383}
DEFINE_GUID(IID_IAddressList,           0xd7e67aa1, 0xaa76, 0x11d0, 0x82, 0x82, 0x0, 0xaa, 0x0, 0x5b, 0x43, 0x83);

/// IBandProxy
// {208CE801-754B-11d0-80CA-00AA005B4383}
DEFINE_GUID(IID_IBandProxy,             0x208ce801, 0x754b, 0x11d0, 0x80, 0xca, 0x0, 0xaa, 0x0, 0x5b, 0x43, 0x83);

// {1011fa30-69da-11d2-8599-006097df8c11}
DEFINE_GUID(IID_IMRU,                   0x1011fa30, 0x69da, 0x11d2, 0x85, 0x99, 0x00, 0x60, 0x97, 0xdf, 0x8c, 0x11);

//0F12079C-C193-11D0-8D49-00C04FC99D61
DEFINE_GUID(CGID_Theater, 0x0F12079CL, 0xC193, 0x11D0, 0x8D, 0x49, 0x00, 0xC0, 0x4F, 0xC9, 0x9D, 0x61);

// {9581015C-D08E-11d0-8D36-00A0C92DBFE8}
DEFINE_GUID(CLSID_BrowserBar,           0x9581015c, 0xd08e, 0x11d0, 0x8d, 0x36, 0x0, 0xa0, 0xc9, 0x2d, 0xbf, 0xe8);

// {2D3DDFC0-09E1-11d1-BC59-00AA006CE2F5}
DEFINE_GUID(CGID_MenuBandHandler, 0x2d3ddfc0, 0x9e1, 0x11d1, 0xbc, 0x59, 0x0, 0xaa, 0x0, 0x6c, 0xe2, 0xf5);

// this defines the deskbar and also id's for each of the toolbands that we implement
//ECD4FC4C-521C-11D0-B792-00A0C90312E1
DEFINE_GUID(CLSID_DeskBar,              0xECD4FC4CL, 0x521C, 0x11D0, 0xB7, 0x92, 0x00, 0xA0, 0xC9, 0x03, 0x12, 0xE1);
DEFINE_GUID(CLSID_RebarBandSite,        0xECD4FC4DL, 0x521C, 0x11D0, 0xB7, 0x92, 0x00, 0xA0, 0xC9, 0x03, 0x12, 0xE1);
DEFINE_GUID(CLSID_BandSiteMenu,         0xECD4FC4EL, 0x521C, 0x11D0, 0xB7, 0x92, 0x00, 0xA0, 0xC9, 0x03, 0x12, 0xE1);
DEFINE_GUID(CLSID_MenuDeskBar,          0xECD4FC4FL, 0x521C, 0x11D0, 0xB7, 0x92, 0x00, 0xA0, 0xC9, 0x03, 0x12, 0xE1);

// {8C7461EF-2B13-11d2-BE35-3078302C2030}
DEFINE_GUID(CLSID_ComCatCacheTask,  0x8c7461ef, 0x2b13, 0x11d2, 0xbe, 0x35, 0x30, 0x78, 0x30, 0x2c, 0x20, 0x30);

// {3CCF8A41-5C85-11d0-9796-00AA00B90ADF}
DEFINE_GUID(CLSID_DeskBarApp,           0x3ccf8a41, 0x5c85, 0x11d0, 0x97, 0x96, 0x0, 0xaa, 0x0, 0xb9, 0xa, 0xdf);

// 4AF4A5FA-912A-11D1-B945-00A0C90312E1
DEFINE_GUID(IID_IDockingBarPropertyBagInit, 0x4AF4A5FAL, 0x912A, 0x11D1, 0xB9, 0x45, 0x00, 0xA0, 0xC9, 0x03, 0x12, 0xE1);

// ef8ad2d3-ae36-11d1-b2d2-006097df8c11
DEFINE_GUID(IID_IGlobalFolderSettings, 0xef8ad2d3L, 0xae36, 0x11d1, 0xb2, 0xd2, 0x00, 0x60, 0x97, 0xdf, 0x8c, 0x11);

// {37e856d7-3dfd-11d2-bf8b-00c04fb93661}
DEFINE_GUID(IID_IEnumUrlSearch,   0x37e856d7, 0x3dfd, 0x11d2, 0xbf, 0x8b, 0x0, 0xc0, 0x4f, 0xb9, 0x36, 0x61);

DEFINE_GUID(SID_IBandProxy,             0x80243ac1, 0x569, 0x11d1, 0xa7, 0xae, 0x0, 0x60, 0x97, 0xdf, 0x5b, 0xd4);

// {AF4F6511-F982-11d0-8595-00AA004CD6D8}
DEFINE_GUID(IID_IRegTreeOptions, 0xaf4f6511, 0xf982, 0x11d0, 0x85, 0x95, 0x0, 0xaa, 0x0, 0x4c, 0xd6, 0xd8);

// {07798131-AF23-11d1-9111-00A0C98BA67D}
DEFINE_GUID(CLSID_WebSearchExt,         0x7798131, 0xaf23, 0x11d1, 0x91, 0x11, 0x0, 0xa0, 0xc9, 0x8b, 0xa6, 0x7d);

// NOTE!  Different from the IID_ITranslateShellChangeNotify in IE4x and IE5.0
// {B4DF2675-BA23-11d2-B5EE-006097C686F6}
DEFINE_GUID(IID_ITranslateShellChangeNotify, 0xb4df2675, 0xba23, 0x11d2, 0xb5, 0xee, 0x0, 0x60, 0x97, 0xc6, 0x86, 0xf6);

//Pidl Filtering for Menu Bands.
// {B16C55D1-0534-11d1-8D3F-00A0C90F2719}
DEFINE_GUID(CGID_FilterObject,0xb16c55d1, 0x534, 0x11d1, 0x8d, 0x3f, 0x0, 0xa0, 0xc9, 0xf, 0x27, 0x19);

// {B16C55D3-0534-11d1-8D3F-00A0C90F2719}
DEFINE_GUID(SID_SHostProxyFilter,0xb16c55d3, 0x534, 0x11d1, 0x8d, 0x3f, 0x0, 0xa0, 0xc9, 0xf, 0x27, 0x19);

// Also used by SHCreateGlobalCounter to count changes to global folder settings
#define GUID_FolderSettingsChange       CLSID_ShellFldSetExt

// {7376D660-C583-11d0-A3A5-00C04FD706EC}
DEFINE_GUID(CLSID_ImgCtxThumbnailExtractor, 0x7376d660, 0xc583, 0x11d0, 0xa3, 0xa5, 0x0, 0xc0, 0x4f, 0xd7, 0x6, 0xec);

// 438755C2-A8BA-11D1-B96B-00A0C90312E1
DEFINE_GUID(CLSID_BrowseuiPreloader, 0x438755C2L, 0xA8BA, 0x11D1, 0xB9, 0x6B, 0x00, 0xA0, 0xC9, 0x03, 0x12, 0xE1);

// ef8ad2d1-ae36-11d1-b2d2-006097df8c11
DEFINE_GUID(CLSID_GlobalFolderSettings, 0xef8ad2d1L, 0xae36, 0x11d1, 0xb2, 0xd2, 0x00, 0x60, 0x97, 0xdf, 0x8c, 0x11);

// {D1E7AFEA-6A2E-11d0-8C78-00C04FD918B4}
DEFINE_GUID(IID_IBandSiteHelper,        0xd1e7afea, 0x6a2e, 0x11d0, 0x8c, 0x78, 0x0, 0xc0, 0x4f, 0xd9, 0x18, 0xb4);

//AF604EFE-8897-11D1-B944-00A0C90312E1
DEFINE_GUID(CLSID_CCommonBrowser, 0xAF604EFEL, 0x8897, 0x11D1, 0xB9, 0x44, 0x00, 0xA0, 0xC9, 0x03, 0x12, 0xE1);

// Currently not used -- will be used when dbapp moves to shell32
// 4AF4A5FC-912A-11D1-B945-00A0C90312E1
DEFINE_GUID(CLSID_CDockingBarPropertyBag, 0x4AF4A5FCL, 0x912A, 0x11D1, 0xB9, 0x45, 0x00, 0xA0, 0xC9, 0x03, 0x12, 0xE1);

// {AF4F6510-F982-11d0-8595-00AA004CD6D8}
DEFINE_GUID(CLSID_CRegTreeOptions, 0xaf4f6510, 0xf982, 0x11d0, 0x85, 0x95, 0x0, 0xaa, 0x0, 0x4c, 0xd6, 0xd8);

// {E56829C9-2D59-11d2-BE38-3078302C2030}
DEFINE_GUID(CLSID_ComCatConditionalCacheTask, 0xe56829c9, 0x2d59, 0x11d2, 0xbe, 0x38, 0x30, 0x78, 0x30, 0x2c, 0x20, 0x30);

// URL Shell Execute Hook for IE4
// {AEB6717E-7E19-11d0-97EE-00C04FD91972}
DEFINE_GUID(CLSID_URLExecHook,          0xaeb6717e, 0x7e19, 0x11d0, 0x97, 0xee, 0x0, 0xc0, 0x4f, 0xd9, 0x19, 0x72);



//
// From shdguid.h
//

// 3DC7A020-0ACD-11CF-A9BB-00AA004AE837
DEFINE_GUID(CLSID_CURLFolder,       0x3DC7A020L, 0x0ACD, 0x11CF, 0xA9, 0xBB, 0x00, 0xAA, 0x00, 0x4A, 0xE8, 0x37);

//A5E46E3A-8849-11D1-9D8C-00C04FC99D61
DEFINE_GUID(CLSID_CBaseBrowser, 0xA5E46E3AL, 0x8849, 0x11D1, 0x9D, 0x8C, 0x00, 0xC0, 0x4F, 0xC9, 0x9D, 0x61);

// IID_IShellService is used in shdocvw and shell32.  Put it here so shdocvw builds.
DEFINE_GUID(IID_IShellService, 0x5836FB00L, 0x8187, 0x11CF, 0xA1, 0x2B, 0x00, 0xAA, 0x00, 0x4A, 0xE8, 0x37);

// f62d9369-75ef-4578-8856-232802c76468
DEFINE_GUID(IID_ITridentService2, 0xf62d9369, 0x75ef, 0x4578, 0x88, 0x56, 0x23, 0x28, 0x02, 0xc7, 0x64, 0x68);

// 3050f801-98b5-11cf-bb82-00aa00bdce0b
DEFINE_GUID(IID_ITridentService, 0x3050f801, 0x98b5, 0x11cf, 0xbb, 0x82, 0x0, 0xaa, 0x00, 0xbd, 0xce, 0x0b);

DEFINE_GUID(IID_IBrowserService, 0x02ba3b52, 0x0547, 0x11d1, 0xb8, 0x33, 0x0, 0xc0, 0x4f, 0xc9, 0xb3, 0x1f);

// (old: E4A141D2-70C7-11D1-8DD7-00C04FC99D61 until 980512)
// (old: C3F16B61-E91A-11d1-BCD9-00A0C92DBFE8 until 980903)
// {68BD21CC-438B-11d2-A560-00A0C92DBFE8}
DEFINE_GUID(IID_IBrowserService2, 0x68bd21cc, 0x438b, 0x11d2, 0xa5, 0x60, 0x0, 0xa0, 0xc9, 0x2d, 0xbf, 0xe8);
DEFINE_GUID(IID_IBrowserService3, 0x27D7CE21L, 0x762D, 0x48F3, 0x86, 0xF3, 0x40, 0xE2, 0xFD, 0x37, 0x49, 0xC4);

// C2EA74E0-0ED2-11CF-A9BB-00AA004AE837
DEFINE_GUID(CLSID_CDocObjectView,   0xC2EA74E0L, 0x0ED2, 0x11CF, 0xA9, 0xBB, 0x00, 0xAA, 0x00, 0x4A, 0xE8, 0x37);

// 3050f804-98b5-11cf-bb82-00aa00bdce0b
DEFINE_GUID(IID_IWebBrowserPriv,  0x3050f804, 0x98b5, 0x11cf, 0xbb, 0x82, 0x0,  0xaa, 0x00, 0xbd, 0xce, 0x0b);

// Remove this after Beta 2.
DEFINE_GUID(CLSID_QuickLinksOld, 0x7BA4C741L, 0x9E81, 0x11CF, 0x99, 0xD3, 0x00, 0xAA, 0x00, 0x4A, 0xE8, 0x37);

// 01E04581-4EEE-11d0-BFE9-00AA005B4383
DEFINE_GUID(CLSID_AddressBand, 0x1e04581, 0x4eee, 0x11d0, 0xbf, 0xe9, 0x0, 0xaa, 0x0, 0x5b, 0x43, 0x83);

// {30D02401-6A81-11d0-8274-00C04FD5AE38}
DEFINE_GUID(CLSID_SearchBand, 0x30d02401, 0x6a81, 0x11d0, 0x82, 0x74, 0x0, 0xc0, 0x4f, 0xd5, 0xae, 0x38);
#define CGID_SearchBand CLSID_SearchBand

// {32683183-48a0-441b-a342-7c2a440a9478}
DEFINE_GUID(CLSID_MediaBand, 0x32683183, 0x48a0, 0x441b, 0xa3, 0x42, 0x7c, 0x2a, 0x44, 0x0a, 0x94, 0x78);

// {B6E3D794-F864-42a4-8F7B-1779A4DEAC83}
DEFINE_GUID(SID_SMediaBar, 0xb6e3d794, 0xf864, 0x42a4, 0x8f, 0x7b, 0x17, 0x79, 0xa4, 0xde, 0xac, 0x83);

// 5E6AB780-7743-11CF-A12B-00AA004AE837
DEFINE_GUID(CLSID_InternetToolbar, 0x5E6AB780L, 0x7743, 0x11CF, 0xA1, 0x2B, 0x00, 0xAA, 0x00, 0x4A, 0xE8, 0x37);

/// {AFA7AD8A-51A7-11d2-83A1-00C04FD918D0}
DEFINE_GUID(IID_IOrderList2,    0xafa7ad8a, 0x51a7, 0x11d2, 0x83, 0xa1, 0x0, 0xc0, 0x4f, 0xd9, 0x18, 0xd0);

// {F98D8294-2BBC-11d2-8DBD-0000F87A556C}
DEFINE_GUID(IID_IShellFolderSearchableCallback, 0xf98d8294, 0x2bbc, 0x11d2, 0x8d, 0xbd, 0x0, 0x0, 0xf8, 0x7a, 0x55, 0x6c);

// {4E1AE66C-204B-11d2-8DB3-0000F87A556C}
DEFINE_GUID(IID_IShellFolderSearchable, 0x4e1ae66c, 0x204b, 0x11d2, 0x8d, 0xb3, 0x0, 0x0, 0xf8, 0x7a, 0x55, 0x6c);

// {49422C1E-1C03-11d2-8DAB-0000F87A556C}
DEFINE_GUID(IID_IShellFolderViewType, 0x49422c1e, 0x1c03, 0x11d2, 0x8d, 0xab, 0x0, 0x0, 0xf8, 0x7a, 0x55, 0x6c);

// {94FD6891-92CD-11d1-A1C6-00C04FD75D13}
DEFINE_GUID(SRCID_SWebSearch,      0x94fd6891, 0x92cd, 0x11d1, 0xa1, 0xc6, 0x0, 0xc0, 0x4f, 0xd7, 0x5d, 0x13);

#define SRCID_SFileSearch          CLSID_ShellSearchExt

// {B8A9C381-19DF-11d1-9193-006097DF5BD4}
DEFINE_GUID(IID_IIsWebBrowserSB, 0xb8a9c381, 0x19df, 0x11d1, 0x91, 0x93, 0x0, 0x60, 0x97, 0xdf, 0x5b, 0xd4);

// 062E1261-A60E-11d0-82C2-00C04FD5AE38
DEFINE_GUID(IID_IHistSFPrivate, 0x62e1261, 0xa60e, 0x11d0, 0x82, 0xc2, 0x0, 0xc0, 0x4f, 0xd5, 0xae, 0x38);

// 22BF0C20-6DA7-11D0-B373-00A0C9034938
DEFINE_GUID(CLSID_BrandBand, 0x22BF0C20, 0x6DA7, 0x11D0, 0xB3, 0x73, 0x00, 0xA0, 0xC9, 0x03, 0x49, 0x38);

DEFINE_GUID(CLSID_BrowserBand, 0x7BA4C742L, 0x9E81, 0x11CF, 0x99, 0xD3, 0x00, 0xAA, 0x00, 0x4A, 0xE8, 0x37);

// {4D5C8C2A-D075-11d0-B416-00C04FB90376}
DEFINE_GUID(CLSID_CommBand, 0x4d5c8c2a, 0xd075, 0x11d0, 0xb4, 0x16, 0x0, 0xc0, 0x4f, 0xb9, 0x3, 0x76);

// {35C042C1-75BE-11d0-80D2-00AA005B4383}
DEFINE_GUID(CLSID_MRUList, 0x35c042c1, 0x75be, 0x11d0, 0x80, 0xd2, 0x0, 0xaa, 0x0, 0x5b, 0x43, 0x83);

// {91EA3F8C-C99B-11d0-9815-00C04FD91972}
DEFINE_GUID(IID_IAugmentedShellFolder,      0x91ea3f8c, 0xc99b, 0x11d0, 0x98, 0x15, 0x0, 0xc0, 0x4f, 0xd9, 0x19, 0x72);
// {8DB3B3F4-6CFE-11d1-8AE9-00C04FD918D0}
DEFINE_GUID(IID_IAugmentedShellFolder2,     0x8db3b3f4, 0x6cfe, 0x11d1, 0x8a, 0xe9, 0x0, 0xc0, 0x4f, 0xd9, 0x18, 0xd0);

// {F61FFEC1-754F-11d0-80CA-00AA005B4383}
DEFINE_GUID(CLSID_BandProxy, 0xf61ffec1, 0x754f, 0x11d0, 0x80, 0xca, 0x0, 0xaa, 0x0, 0x5b, 0x43, 0x83);

// {91EA3F8B-C99B-11d0-9815-00C04FD91972}
DEFINE_GUID(CLSID_AugmentedShellFolder,     0x91ea3f8b, 0xc99b, 0x11d0, 0x98, 0x15, 0x0, 0xc0, 0x4f, 0xd9, 0x19, 0x72);

// {6413BA2C-B461-11d1-A18A-080036B11A03}
DEFINE_GUID(CLSID_AugmentedShellFolder2,    0x6413ba2c, 0xb461, 0x11d1, 0xa1, 0x8a, 0x8, 0x0, 0x36, 0xb1, 0x1a, 0x3);





#endif // _IEGUIDP_H_
