//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIFocusedInterfaceActionPressDelegate-Protocol.h>
#import <UIKitCore/UIGestureRecognizerDelegate-Protocol.h>

@class NSArray, NSMutableSet, NSPointerArray, NSString, UIGestureRecognizer, UILongPressGestureRecognizer, UIScrollView, UISelectionFeedbackGenerator, UIView, _UIInterfaceActionSelectByPressGestureRecognizer;

__attribute__((visibility("hidden")))
@interface UIInterfaceActionSelectionTrackingController : NSObject <UIGestureRecognizerDelegate, UIFocusedInterfaceActionPressDelegate>
{
    _Bool _selectByPressGestureEnabled;
    _Bool _selectionFeedbackEnabled;
    UIView *_trackableContainerView;
    UIScrollView *_actionsScrollView;
    NSArray *_representationViews;
    UILongPressGestureRecognizer *_selectionGestureRecognizer;
    UIGestureRecognizer *_systemProvidedGestureRecognizer;
    NSMutableSet *_viewsRequiringSelectionGestureDisabling;
    _UIInterfaceActionSelectByPressGestureRecognizer *_selectByPressGestureRecognizer;
    UISelectionFeedbackGenerator *_selectionRetargetFeedbackGenerator;
    NSPointerArray *_weakCooperatingSelectionTrackingControllers;
    id _scrollViewWillBeginDraggingNotificationToken;
    id _scrollViewDidEndDraggingNotificationToken;
    id _scrollViewDidEndDeceleratingNotificationToken;
    struct CGPoint _actionSelectionInitialLocationInContainerView;
}

@property(retain, nonatomic) id scrollViewDidEndDeceleratingNotificationToken; // @synthesize scrollViewDidEndDeceleratingNotificationToken=_scrollViewDidEndDeceleratingNotificationToken;
@property(retain, nonatomic) id scrollViewDidEndDraggingNotificationToken; // @synthesize scrollViewDidEndDraggingNotificationToken=_scrollViewDidEndDraggingNotificationToken;
@property(retain, nonatomic) id scrollViewWillBeginDraggingNotificationToken; // @synthesize scrollViewWillBeginDraggingNotificationToken=_scrollViewWillBeginDraggingNotificationToken;
@property(retain, nonatomic) NSPointerArray *weakCooperatingSelectionTrackingControllers; // @synthesize weakCooperatingSelectionTrackingControllers=_weakCooperatingSelectionTrackingControllers;
@property(retain, nonatomic) UISelectionFeedbackGenerator *selectionRetargetFeedbackGenerator; // @synthesize selectionRetargetFeedbackGenerator=_selectionRetargetFeedbackGenerator;
@property(retain, nonatomic) _UIInterfaceActionSelectByPressGestureRecognizer *selectByPressGestureRecognizer; // @synthesize selectByPressGestureRecognizer=_selectByPressGestureRecognizer;
@property(readonly, nonatomic) NSMutableSet *viewsRequiringSelectionGestureDisabling; // @synthesize viewsRequiringSelectionGestureDisabling=_viewsRequiringSelectionGestureDisabling;
@property(readonly, nonatomic) UIGestureRecognizer *systemProvidedGestureRecognizer; // @synthesize systemProvidedGestureRecognizer=_systemProvidedGestureRecognizer;
@property(readonly, nonatomic) UILongPressGestureRecognizer *selectionGestureRecognizer; // @synthesize selectionGestureRecognizer=_selectionGestureRecognizer;
@property(readonly, nonatomic) struct CGPoint actionSelectionInitialLocationInContainerView; // @synthesize actionSelectionInitialLocationInContainerView=_actionSelectionInitialLocationInContainerView;
@property(retain, nonatomic) NSArray *representationViews; // @synthesize representationViews=_representationViews;
@property(nonatomic) _Bool selectionFeedbackEnabled; // @synthesize selectionFeedbackEnabled=_selectionFeedbackEnabled;
@property(nonatomic) _Bool selectByPressGestureEnabled; // @synthesize selectByPressGestureEnabled=_selectByPressGestureEnabled;
@property(nonatomic) __weak UIScrollView *actionsScrollView; // @synthesize actionsScrollView=_actionsScrollView;
@property(nonatomic) __weak UIView *trackableContainerView; // @synthesize trackableContainerView=_trackableContainerView;
- (void).cxx_destruct;
- (id)_allGestureRecognizers;
- (id)_allActionViewsIncludingCooperatingActionViews;
- (void)_performRecursivelyWithVisitedCooperatingControllers:(id)arg1 block:(CDUnknownBlockType)arg2;
- (_Bool)_shouldDisableSelectionTrackingIfScrollingScrollView:(id)arg1;
- (void)_noteScrollView:(id)arg1 isUserScrolling:(_Bool)arg2;
- (void)_unregisterForScrollViewNotifications;
- (void)_registerForScrollViewNotifications;
- (void)_initializeSelectionGestureRecognizer;
- (id)_actionViewAtCurrentLocationForGestureRecognizer:(id)arg1;
- (id)_actionViewIncludingCooperatingActionViewsAtCurrentLocationForGestureRecognizer:(id)arg1;
- (_Bool)_allowSelectionForCurrentGestureLocationWithGestureRecognizer:(id)arg1;
- (void)_invokeHandlerForInterfaceAction:(id)arg1;
- (_Bool)_isPresentedAndVisible;
- (void)_handleActionSelectionGestureRecognizer:(id)arg1;
- (void)_handleSystemProvidedGestureRecognizer:(id)arg1;
- (_Bool)_gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)_gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)_clearSystemProvidedGestureRecognizer;
- (void)_setSystemProvidedGestureRecognizer:(id)arg1;
- (void)beginTrackingSessionByTakingOverForSystemProvidedGestureRecognizer:(id)arg1;
- (void)handlePressedFocusedInterfaceAction:(id)arg1;
- (id)_interfaceActionOfFocusedRepresentationView;
- (id)focusedInterfaceAction;
- (void)setCooperatingSelectionTrackingControllers:(id)arg1;
- (void)dealloc;
- (id)initWithTrackableContainerView:(id)arg1 actionsScrollView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

