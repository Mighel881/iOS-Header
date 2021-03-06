//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableOrderedSet, PXCMMComposeRecipientDataSource, PXCMMComposeRecipientSelectionSnapshot;
@protocol PXCMMComposeRecipientSelectionManagerDelegate;

@interface PXCMMComposeRecipientSelectionManager : NSObject
{
    NSMutableOrderedSet *_selectedComposeRecipients;
    NSMutableOrderedSet *_selectedRecipients;
    PXCMMComposeRecipientDataSource *_dataSource;
    id <PXCMMComposeRecipientSelectionManagerDelegate> _delegate;
    PXCMMComposeRecipientSelectionSnapshot *_selectionSnapshot;
}

+ (id)new;
@property(retain, nonatomic) PXCMMComposeRecipientSelectionSnapshot *selectionSnapshot; // @synthesize selectionSnapshot=_selectionSnapshot;
@property(nonatomic) __weak id <PXCMMComposeRecipientSelectionManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) PXCMMComposeRecipientDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)_invalidateCurrentSelectionSnapshotWithChangedComposeRecipients:(id)arg1;
- (id)_createComposeRecipientSelectionSnapshotFromCurrentState;
- (id)_setSelectedState:(_Bool)arg1 forComposeRecipients:(id)arg2;
- (void)setSelectedState:(_Bool)arg1 atIndex:(long long)arg2;
- (void)selectAll;
- (void)setDataSource:(id)arg1 changeDetails:(id)arg2;
- (id)initWithDataSource:(id)arg1;
- (id)init;

@end

