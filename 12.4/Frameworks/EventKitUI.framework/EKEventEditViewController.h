//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UINavigationController.h>

@class EKEvent, EKEventEditor, EKEventStore, NSString, UIColor;
@protocol EKEventEditViewDelegate;

@interface EKEventEditViewController : UINavigationController
{
    EKEventStore *_store;
    EKEvent *_event;
    NSString *_eventId;
    _Bool _completedWithAction;
    int _transitionForModalViewPresentation;
    id <EKEventEditViewDelegate> _editViewDelegate;
    EKEventEditor *_editor;
    EKEventEditViewController *_strongSelf;
    NSString *_suggestionKey;
}

+ (void)setDefaultDatesForEvent:(id)arg1;
+ (id)eventEditViewControllerWithEvent:(id)arg1 eventStore:(id)arg2 editViewDelegate:(id)arg3;
@property(retain, nonatomic) NSString *suggestionKey; // @synthesize suggestionKey=_suggestionKey;
@property(nonatomic) int transitionForModalViewPresentation; // @synthesize transitionForModalViewPresentation=_transitionForModalViewPresentation;
@property(retain, nonatomic) EKEventEditViewController *strongSelf; // @synthesize strongSelf=_strongSelf;
@property(retain, nonatomic) EKEventEditor *editor; // @synthesize editor=_editor;
@property(nonatomic) __weak id <EKEventEditViewDelegate> editViewDelegate; // @synthesize editViewDelegate=_editViewDelegate;
- (void).cxx_destruct;
- (id)_eventEditorForTestingOnly;
@property(nonatomic) _Bool timeImplicitlySet;
@property(nonatomic) double editorNavBarRightContentInset;
@property(nonatomic) double editorNavBarLeftContentInset;
@property(retain, nonatomic) UIColor *editorBackgroundColor;
- (void)focusTitle;
- (void)focusAndSelectStartDate;
- (void)focusAndSelectTitle;
- (_Bool)hasUnsavedChanges;
- (_Bool)willPresentDialogOnSave;
- (void)completeAndSave;
- (void)handleTapOutside;
@property(nonatomic) _Bool canHideDoneAndCancelButtons;
@property(nonatomic) _Bool showAttachments;
@property(nonatomic) _Bool scrollToNotes;
- (struct CGSize)preferredContentSize;
- (unsigned long long)supportedInterfaceOrientations;
- (void)_storeChanged:(id)arg1;
- (void)editor:(id)arg1 prepareCalendarItemForEdit:(id)arg2;
- (void)editor:(id)arg1 didCompleteWithAction:(long long)arg2;
- (void)cancelEditing;
- (_Bool)saveWithSpan:(long long)arg1 animated:(_Bool)arg2;
- (void)refreshStartAndEndDates;
@property(retain, nonatomic) EKEvent *event;
@property(retain, nonatomic) EKEventStore *eventStore;
- (void)dealloc;
- (_Bool)shouldAutorotate;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

