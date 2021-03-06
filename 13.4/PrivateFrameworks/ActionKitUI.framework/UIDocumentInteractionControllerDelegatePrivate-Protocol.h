//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ActionKitUI/UIDocumentInteractionControllerDelegate-Protocol.h>

@class NSArray, NSURL, QLPreviewController, UIDocumentInteractionController, UIImage, UIPrintInfo;

@protocol UIDocumentInteractionControllerDelegatePrivate <UIDocumentInteractionControllerDelegate>

@optional
- (UIPrintInfo *)printInfoForDocumentInteractionController:(UIDocumentInteractionController *)arg1;
- (NSArray *)documentInteractionControllerMarkupDismissActions:(UIDocumentInteractionController *)arg1;
- (void)previewController:(QLPreviewController *)arg1 willMarkUpAtURL:(NSURL *)arg2;
- (UIImage *)documentInteractionControllerTransitionImageForPreview:(UIDocumentInteractionController *)arg1 contentRect:(struct CGRect *)arg2;
- (NSArray *)additionalActivitiesForDocumentInteractionController:(UIDocumentInteractionController *)arg1;
- (id)activityItemForDocumentInteractionController:(UIDocumentInteractionController *)arg1;
- (NSArray *)excludedActivityTypesForDocumentInteractionController:(UIDocumentInteractionController *)arg1;
@end

