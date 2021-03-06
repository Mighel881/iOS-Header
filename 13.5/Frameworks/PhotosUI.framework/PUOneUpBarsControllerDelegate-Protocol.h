//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUBarsControllerDelegate-Protocol.h>

@class PUAssetActionPerformer, PUAssetReference, PUOneUpBarsController;
@protocol PUDisplayAsset, PUDisplayLocationProvider;

@protocol PUOneUpBarsControllerDelegate <PUBarsControllerDelegate>

@optional
- (void)oneUpBarsControllerDidEndShowingOriginal:(PUOneUpBarsController *)arg1;
- (void)oneUpBarsControllerDidBeginShowingOriginal:(PUOneUpBarsController *)arg1;
- (_Bool)oneUpBarsController:(PUOneUpBarsController *)arg1 shouldEnableShowOriginalForAsset:(id <PUDisplayAsset>)arg2;
- (_Bool)oneUpBarsController:(PUOneUpBarsController *)arg1 canViewInLibraryForAsset:(id <PUDisplayAsset>)arg2;
- (_Bool)oneUpBarsController:(PUOneUpBarsController *)arg1 canShowOriginalForAsset:(id <PUDisplayAsset>)arg2;
- (void)oneUpBarsController:(PUOneUpBarsController *)arg1 willExecuteActionPerformer:(PUAssetActionPerformer *)arg2;
- (_Bool)oneUpBarsController:(PUOneUpBarsController *)arg1 shouldHideToolbarWhenShowingAccessoryViewForAssetReference:(PUAssetReference *)arg2;
- (_Bool)oneUpBarsController:(PUOneUpBarsController *)arg1 shouldTapBeginAtLocationFromProvider:(id <PUDisplayLocationProvider>)arg2;
- (_Bool)oneUpBarsController:(PUOneUpBarsController *)arg1 canShowCommentsForAsset:(id <PUDisplayAsset>)arg2;
- (void)oneUpBarsControllerToggleCommentsVisibility:(PUOneUpBarsController *)arg1;
- (void)oneUpBarsControllerToggleDetailsVisibility:(PUOneUpBarsController *)arg1;
- (_Bool)oneUpBarsController:(PUOneUpBarsController *)arg1 isAccessoryAvailableForAssetReference:(PUAssetReference *)arg2;
- (void)oneUpBarsControllerDidTapTitle:(PUOneUpBarsController *)arg1;
- (void)oneUpBarsController:(PUOneUpBarsController *)arg1 didTapPlayPauseButton:(_Bool)arg2;
- (void)oneUpBarsControllerDidChangeShowingPlayPauseButton:(PUOneUpBarsController *)arg1;
@end

