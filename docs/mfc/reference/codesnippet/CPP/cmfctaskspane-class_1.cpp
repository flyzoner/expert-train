CMFCTasksPane *tPane = new CMFCTasksPane();
tPane->EnableGroupCollapse(true);
tPane->EnableHistoryMenuButtons(true);
tPane->EnableScrollButtons(true);
tPane->EnableWrapLabels(true);
tPane->SetCaption(_T("Task Pane"));
tPane->SetGroupTextColor(0, RGB(0, 0, 128));
tPane->SetHorzMargin(15);
tPane->SetVertMargin(15);
tPane->Update();