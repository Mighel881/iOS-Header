//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class MISSING_TYPE, NSArray, NSUndoManager, UIBarButtonItem, UIToolbar, UIView;

@interface _TtC9Reminders31TTRIRemindersListViewController : UIViewController
{
    MISSING_TYPE *scrollViewDelegate;
    MISSING_TYPE *untypedTreeView;
    MISSING_TYPE *doneBarButton;
    MISSING_TYPE *addReminderBarButton;
    MISSING_TYPE *toolbar;
    MISSING_TYPE *presenter;
    MISSING_TYPE *listInfo;
    MISSING_TYPE *listMessagingView;
    MISSING_TYPE *listMessaging;
    MISSING_TYPE *$__lazy_storage_$_editingButtons;
    MISSING_TYPE *defaultKeyCommands;
    MISSING_TYPE *editingCell;
    MISSING_TYPE *pendingStartEditingItem;
    MISSING_TYPE *cellNeedingDeferredUpdate;
    MISSING_TYPE *$__lazy_storage_$_actionMenuBarButton;
    MISSING_TYPE *itemsPendingUpdate;
    MISSING_TYPE *toolbarHeight;
    MISSING_TYPE *keyboardHeight;
    MISSING_TYPE *pencilInputAreaHeight;
    MISSING_TYPE *pendingLoadCellPromises;
    MISSING_TYPE *chromelessToolbarUpdater;
    MISSING_TYPE *canMoveItemReturnValueTempOverrides;
    MISSING_TYPE *lastSetLargeTitleColor;
    MISSING_TYPE *contentScrollViewNeedsAdjustmentAfterScrollingAnimation;
    MISSING_TYPE *$__lazy_storage_$_completedTasksRotor;
    MISSING_TYPE *$__lazy_storage_$_incompleteTasksRotor;
    MISSING_TYPE *$__lazy_storage_$_overdueTasksRotor;
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)keyboardWillChangeFrameNotificationWithNotification:(id)arg1;
- (void)keyboardWillHideNotificationWithNotification:(id)arg1;
- (void)keyboardWillShowNotificationWithNotification:(id)arg1;
- (void)willResignActiveNotificationWithNotification:(id)arg1;
- (void)batchDeleteSelectionAction:(id)arg1;
- (void)batchMoveSelectionToListAction:(id)arg1;
- (void)outdentSelectedReminderAction:(id)arg1;
- (void)indentSelectedReminderAction:(id)arg1;
- (void)toggleReminderCompletionStateAction:(id)arg1;
- (void)showReminderInfoAction:(id)arg1;
- (void)newReminderAction:(id)arg1;
- (void)didTapEdit:(id)arg1;
- (void)actionMenuAction:(id)arg1;
- (void)doneBarButtonAction:(id)arg1;
@property(nonatomic) __weak UIToolbar *toolbar; // @synthesize toolbar;
@property(nonatomic, retain) UIBarButtonItem *addReminderBarButton; // @synthesize addReminderBarButton;
@property(nonatomic, retain) UIBarButtonItem *doneBarButton; // @synthesize doneBarButton;
@property(nonatomic) __weak UIView *untypedTreeView; // @synthesize untypedTreeView;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateUserActivityState:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (_Bool)becomeFirstResponder;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
@property(nonatomic, readonly) _Bool canBecomeFirstResponder;
@property(nonatomic, readonly) NSArray *keyCommands;
@property(nonatomic, readonly) NSUndoManager *undoManager;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;

@end

