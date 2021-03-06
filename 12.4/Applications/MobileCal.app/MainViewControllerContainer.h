//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MainViewController.h"

#import "MainViewControllerOptionalMethods-Protocol.h"
#import "UITraitEnvironment-Protocol.h"

@class CalendarModel, NSString, UITraitCollection;

@interface MainViewControllerContainer : MainViewController <MainViewControllerOptionalMethods, UITraitEnvironment>
{
    MainViewController *_currentChildViewController;
    MainViewController *_emptyChildViewController;
    _Bool _animatingViewTransition;
    CalendarModel *_model;
}

+ (_Bool)_shouldForwardViewWillTransitionToSize;
@property(retain, nonatomic) CalendarModel *model; // @synthesize model=_model;
@property(nonatomic) _Bool animatingViewTransition; // @synthesize animatingViewTransition=_animatingViewTransition;
- (void).cxx_destruct;
- (void)viewSwitcherSwitchedToViewWithDate:(id)arg1;
@property(nonatomic) _Bool isWaitingForBackgroundLoadingOfSelectedEventOccurrenceView;
- (id)updateBackButtonWhileTopViewControllerToDate:(id)arg1;
- (_Bool)shouldUpdateOwnBackButtonWhenTopViewController;
- (void)updateBackButtonToDate:(id)arg1;
- (void)invalidateBackButtonDate;
- (void)updateNavigationBarDisplayedDateString;
- (id)navigationBarDisplayedDateString;
- (int)supportedToggleMode;
- (id)toolBarTintColor;
- (id)navigationBarTintColor;
@property(readonly, nonatomic) _Bool shouldAdaptEventViewControllers;
- (_Bool)showEventDetailsWhenNewEventAdded;
- (id)bestDateForNewEvent;
- (void)updatePalette:(id)arg1;
- (double)leftBarButtonBlankFixedSpaceWidth;
- (void)disableGestureRecognizers;
- (void)enableGestureRecognizers;
- (void)showNowAnimated:(_Bool)arg1;
- (id)_todaysDate;
- (_Bool)isTodayVisible;
- (_Bool)shouldPushNextLevelViewControllerWhenTodayIsVisible;
- (void)setShouldRespondToApplicationDidBecomeActiveStateChange:(_Bool)arg1;
- (_Bool)shouldRespondToApplicationDidBecomeActiveStateChange;
- (void)navigateToPreviousDateComponentUnitAnimated:(_Bool)arg1;
- (void)navigateToNextDateComponentUnitAnimated:(_Bool)arg1;
- (void)navigateToPreviousSelectableItem;
- (void)navigateToNextSelectableItem;
- (void)showTodayAnimated:(_Bool)arg1;
- (void)selectDate:(id)arg1 animated:(_Bool)arg2;
- (void)showEvent:(id)arg1 animated:(_Bool)arg2 showDetails:(_Bool)arg3 showComments:(_Bool)arg4 context:(struct NSDictionary *)arg5;
- (void)showEvent:(id)arg1 animated:(_Bool)arg2 showDetails:(_Bool)arg3 context:(struct NSDictionary *)arg4;
- (void)showEvent:(id)arg1 animated:(_Bool)arg2 context:(struct NSDictionary *)arg3;
- (_Bool)allowsOverriddenToolbarItems;
- (_Bool)allowsOverriddenRightNavigationBarItems;
- (_Bool)shouldModallyPresentFirstShownViewController;
- (_Bool)shouldInvalidateManagedNavigationControllerOnPresentationDismissal;
- (void)invalidateManagedNavigationController;
- (id)managedNavigationController;
- (Class)childViewControllerClassForTraits:(id)arg1;
- (id)childViewControllerForRegularWidthRegularHeight;
- (id)childViewControllerForRegularWidthCompactHeight;
- (id)childViewControllerForCompactWidthRegularHeight;
- (id)childViewControllerForCompactWidthCompactHeight;
- (id)childViewControllerForUnknownTraits;
- (id)emptyChildViewController;
- (id)pushedNextLevelMainViewControllerContainerAnimated:(_Bool)arg1;
- (_Bool)shouldRemoveSelfFromNavigationStackIfTraitCollectionIsUnsupported;
- (void)_removeChildViewControllerForCurrentTraits;
- (void)_addChildViewControllerForCurrentTraits;
- (id)_childViewControllerForTraitCollection:(id)arg1;
- (id)currentChildViewController;
- (_Bool)currentChildViewControllerIsLoaded;
- (void)_updateForCurrentTraits;
- (void)setupForViewAppearance;
- (id)viewControllerToShowFrom;
- (long long)presentationStyleOverrideForChildViewControllers;
- (void)showViewController:(id)arg1 sender:(id)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
@property(readonly, nonatomic) UITraitCollection *traitCollection;
- (void)viewWillLayoutSubviews;
- (void)setupUIForTraitCollection:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
@property(readonly, copy) NSString *description;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)initWithModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(retain, nonatomic) UITraitCollection *futureTraitCollection;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isTransitioningTraitCollection;
@property(readonly) Class superclass;

@end

