//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CKConversationListCellLayout : NSObject
{
    _Bool _invalid;
    _Bool _shouldShowChevron;
    double _summaryLabelCapFrameYOrigin;
    double _trailingLayoutMarginSize;
    struct CGRect _tableBounds;
    struct CGRect _summaryFrame;
    struct CGRect _dateFrame;
    struct CGRect _senderFrame;
    struct CGRect _chevronFrame;
    struct CGRect _unreadFrame;
}

+ (id)sharedInstance;
@property(nonatomic) double trailingLayoutMarginSize; // @synthesize trailingLayoutMarginSize=_trailingLayoutMarginSize;
@property(nonatomic) double summaryLabelCapFrameYOrigin; // @synthesize summaryLabelCapFrameYOrigin=_summaryLabelCapFrameYOrigin;
@property(nonatomic) struct CGRect unreadFrame; // @synthesize unreadFrame=_unreadFrame;
@property(nonatomic) struct CGRect chevronFrame; // @synthesize chevronFrame=_chevronFrame;
@property(nonatomic) struct CGRect senderFrame; // @synthesize senderFrame=_senderFrame;
@property(nonatomic) struct CGRect dateFrame; // @synthesize dateFrame=_dateFrame;
@property(nonatomic) struct CGRect summaryFrame; // @synthesize summaryFrame=_summaryFrame;
@property(nonatomic) struct CGRect tableBounds; // @synthesize tableBounds=_tableBounds;
@property(nonatomic) _Bool shouldShowChevron; // @synthesize shouldShowChevron=_shouldShowChevron;
@property(nonatomic) _Bool invalid; // @synthesize invalid=_invalid;
- (void)invalidate;
- (id)init;

@end

