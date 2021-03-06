//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "RAPReportTableViewController.h"

#import "HomeWorkAutocompleteViewControllerDelegate-Protocol.h"
#import "RAPInstrumentableTarget-Protocol.h"
#import "RAPRouter-Protocol.h"

@class NSString, RAPAddAPlaceReportComposer, RAPQuestion, RAPReportComposerImageryCorrectionController, RAPReportComposerLabelCorrectionController, RAPTransitStationInfoController;
@protocol RAPMenu;

__attribute__((visibility("hidden")))
@interface RAPReportComposerCategoryViewController : RAPReportTableViewController <HomeWorkAutocompleteViewControllerDelegate, RAPRouter, RAPInstrumentableTarget>
{
    RAPReportComposerLabelCorrectionController *_labelCorrectionController;
    RAPReportComposerImageryCorrectionController *_imageryCorrectionController;
    RAPAddAPlaceReportComposer *_addAPlaceComposer;
    RAPTransitStationInfoController *_placeCorrectionController;
    RAPQuestion<RAPMenu> *_categoryQuestion;
}

- (void).cxx_destruct;
- (void)addressSelectedWithViewController:(id)arg1 question:(id)arg2;
- (void)proceedToLineShapeIncorrectQuestion:(id)arg1;
- (void)proceedToSchedulesIncorrectQuestion:(id)arg1;
- (void)proceedToLineNameIncorrectQuestion:(id)arg1;
- (void)proceedToRAPHomeWorkCorrectionsQuestion:(id)arg1;
- (void)proceedToStationAccessPointQuestion:(id)arg1;
- (void)proceedToStationAccessPointSelectionQuestion:(id)arg1;
- (void)proceedToBadRouteSuggestionsQuestion:(id)arg1;
- (void)proceedToTransitLineSelectionQuestion:(id)arg1;
- (void)proceedToTransitSubcategoryQuestion:(id)arg1;
- (void)proceedToTransitStationInfoQuestion:(id)arg1;
- (void)proceedToAddNewPlaceQuestion:(id)arg1;
- (void)proceedToLabelCorrectionsQuestion:(id)arg1;
- (void)proceedToBrandCorrectionsQuestion:(id)arg1;
- (void)proceedToPlaceClosureQuestion:(id)arg1;
- (void)proceedToPlaceCorrectionsQuestion:(id)arg1;
- (void)proceedToPlaceLocationCorrectionsQuestion:(id)arg1;
- (void)proceedToProblemWithImageryQuestion:(id)arg1;
- (void)proceedToProblemWithDirectionsQuestion:(id)arg1;
- (void)proceedToIncorrectSearchResultsQuestion:(id)arg1;
- (void)proceedToArrivalTimeIncorrectQuestion:(id)arg1;
- (void)proceedToProblemNotListedQuestion:(id)arg1;
- (void)proceedToNextQuestion:(id)arg1;
- (void)coreRoutineEnabledStateChanged:(id)arg1;
@property(readonly, nonatomic) int analyticTarget;
- (void)_cancel;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithReport:(id)arg1 question:(id)arg2 completion:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, nonatomic) int backAction;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

