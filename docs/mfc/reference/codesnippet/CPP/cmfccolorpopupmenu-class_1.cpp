COLORREF color;
CArray<COLORREF, COLORREF> colors;
CString strAutoColorText;
CString strOtherText;
CString strDocColorsText;
CList<COLORREF, COLORREF> lstDocColors;
COLORREF colorAutomatic;
int nColumns;
CMFCColorButton colorButton;
CMFCColorPopupMenu *pPopup = new CMFCColorPopupMenu(&colorButton, colors, color, strAutoColorText, strOtherText, strDocColorsText, lstDocColors, nColumns, colorAutomatic);