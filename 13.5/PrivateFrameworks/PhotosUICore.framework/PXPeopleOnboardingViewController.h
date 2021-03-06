//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PhotosUICore/PXPeopleStatusViewDelegate-Protocol.h>

@class NSString, PXPeopleProgressManager, PXPeopleSectionedDataSource, PXPeopleStatusViewController;

@interface PXPeopleOnboardingViewController : UIViewController <PXPeopleStatusViewDelegate>
{
    unsigned long long _onboardStatus;
    PXPeopleProgressManager *_progressManager;
    PXPeopleStatusViewController *_statusViewController;
    PXPeopleSectionedDataSource *_peopleDataSource;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PXPeopleSectionedDataSource *peopleDataSource; // @synthesize peopleDataSource=_peopleDataSource;
@property(retain, nonatomic) PXPeopleStatusViewController *statusViewController; // @synthesize statusViewController=_statusViewController;
@property(retain, nonatomic) PXPeopleProgressManager *progressManager; // @synthesize progressManager=_progressManager;
@property(nonatomic) unsigned long long onboardStatus; // @synthesize onboardStatus=_onboardStatus;
- (void)_progressChanged:(id)arg1;
- (void)_pushToPeopleHome:(id)arg1;
- (id)peopleHomeController;
- (void)statusViewControllerEnterButtonTapped:(id)arg1;
- (void)_transitionFromViewController:(id)arg1 toViewController:(id)arg2;
- (void)_updateStatusViewForStatus:(unsigned long long)arg1 progress:(double)arg2;
- (void)_updateWithStatus:(unsigned long long)arg1 progress:(double)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithDataSource:(id)arg1 progressManager:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

