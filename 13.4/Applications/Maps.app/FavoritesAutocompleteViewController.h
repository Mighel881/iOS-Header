//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PersonalizedMapsAutocompleteViewController.h"

#import "PersonalizedMapsPlaceViewControllerDelegate-Protocol.h"

@class NSString;
@protocol FavoritesAutocompleteViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface FavoritesAutocompleteViewController : PersonalizedMapsAutocompleteViewController <PersonalizedMapsPlaceViewControllerDelegate>
{
    id <FavoritesAutocompleteViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <FavoritesAutocompleteViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) int placeViewAnalyticTarget;
- (void)dismissAfterSavingMapItem:(id)arg1 title:(id)arg2;
- (void)personalizedMapsPlaceViewController:(id)arg1 actionButtonTappedForMapItem:(id)arg2;
@property(readonly, copy, nonatomic) NSString *actionButtonTitle;
- (int)backAction;
- (int)analyticTarget;
- (void)selectedMapItem:(id)arg1;
- (void)searchFieldTextDidChange:(id)arg1;
- (void)viewDidLoad;
- (id)initWithMapRegion:(id)arg1;

@end

