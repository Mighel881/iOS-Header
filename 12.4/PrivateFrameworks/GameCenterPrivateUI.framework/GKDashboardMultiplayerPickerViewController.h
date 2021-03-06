//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterPrivateUI/GKDashboardCollectionViewController.h>

#import <GameCenterPrivateUI/GKComposeControllerDelegate-Protocol.h>
#import <GameCenterPrivateUI/UISearchBarDelegate-Protocol.h>
#import <GameCenterPrivateUI/UITextFieldDelegate-Protocol.h>

@class GKContactSkipControl, NSArray, NSLayoutConstraint, NSString, UIButton, UILabel, UISegmentedControl, UITextField, UIView, UIViewController;
@protocol GKDashboardNearbyBrowserDelegate;

@interface GKDashboardMultiplayerPickerViewController : GKDashboardCollectionViewController <UITextFieldDelegate, UISearchBarDelegate, GKComposeControllerDelegate>
{
    _Bool _supportsNearby;
    _Bool _shouldIgnoreClearSelection;
    _Bool _shouldApplyInitialOffset;
    NSString *_message;
    CDUnknownBlockType _completionHandler;
    id <GKDashboardNearbyBrowserDelegate> _nearbyDelegate;
    NSArray *_initiallySelectedPlayers;
    UILabel *_descriptionLabel;
    UIButton *_sendButton;
    UIButton *_customizeMessageButton;
    UITextField *_messageField;
    UIView *_scrollingHeader;
    NSLayoutConstraint *_scrollingHeaderTopConstraint;
    double _scrollingHeaderTopConstraintConstant;
    NSLayoutConstraint *_customizeMessageBottomConstraint;
    double _initialCustomizeMessageBottomConstraintConstant;
    UISegmentedControl *_sectionControl;
    GKContactSkipControl *_contactSkipControl;
    UIView *_effectView;
    UIViewController *_composeController;
    struct UIEdgeInsets _initialInsets;
}

@property(retain, nonatomic) UIViewController *composeController; // @synthesize composeController=_composeController;
@property(nonatomic) UIView *effectView; // @synthesize effectView=_effectView;
@property(nonatomic) GKContactSkipControl *contactSkipControl; // @synthesize contactSkipControl=_contactSkipControl;
@property(nonatomic) UISegmentedControl *sectionControl; // @synthesize sectionControl=_sectionControl;
@property(nonatomic) double initialCustomizeMessageBottomConstraintConstant; // @synthesize initialCustomizeMessageBottomConstraintConstant=_initialCustomizeMessageBottomConstraintConstant;
@property(nonatomic) NSLayoutConstraint *customizeMessageBottomConstraint; // @synthesize customizeMessageBottomConstraint=_customizeMessageBottomConstraint;
@property(nonatomic) _Bool shouldApplyInitialOffset; // @synthesize shouldApplyInitialOffset=_shouldApplyInitialOffset;
@property(nonatomic) struct UIEdgeInsets initialInsets; // @synthesize initialInsets=_initialInsets;
@property(nonatomic) double scrollingHeaderTopConstraintConstant; // @synthesize scrollingHeaderTopConstraintConstant=_scrollingHeaderTopConstraintConstant;
@property(nonatomic) NSLayoutConstraint *scrollingHeaderTopConstraint; // @synthesize scrollingHeaderTopConstraint=_scrollingHeaderTopConstraint;
@property(nonatomic) UIView *scrollingHeader; // @synthesize scrollingHeader=_scrollingHeader;
@property(nonatomic) UITextField *messageField; // @synthesize messageField=_messageField;
@property(nonatomic) UIButton *customizeMessageButton; // @synthesize customizeMessageButton=_customizeMessageButton;
@property(nonatomic) UIButton *sendButton; // @synthesize sendButton=_sendButton;
@property(nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(nonatomic) _Bool shouldIgnoreClearSelection; // @synthesize shouldIgnoreClearSelection=_shouldIgnoreClearSelection;
@property(retain, nonatomic) NSArray *initiallySelectedPlayers; // @synthesize initiallySelectedPlayers=_initiallySelectedPlayers;
@property(nonatomic) id <GKDashboardNearbyBrowserDelegate> nearbyDelegate; // @synthesize nearbyDelegate=_nearbyDelegate;
@property(nonatomic) _Bool supportsNearby; // @synthesize supportsNearby=_supportsNearby;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
- (void)scrollViewDidScroll:(id)arg1;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)setSearchText:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)_updateButtonEnableState;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)cancel:(id)arg1;
- (void)addMessage:(id)arg1;
- (void)send:(id)arg1;
- (void)contactSkipSelected:(id)arg1;
- (void)segmentSectionChanged:(id)arg1;
- (void)clearSelection;
- (id)preferredFocusEnvironments;
- (void)setupNoContentView:(id)arg1 withError:(id)arg2;
- (void)selectPlayersAtIndexPaths:(id)arg1 askDelegateFirst:(_Bool)arg2;
- (void)dataUpdated:(_Bool)arg1 withError:(id)arg2;
@property(nonatomic) _Bool excludesContacts;
- (void)applyInitialContentOffset;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)adjustCustomizeMessageConstraint;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)dealloc;
- (id)initWithMaxSelectable:(long long)arg1 hiddenPlayers:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

