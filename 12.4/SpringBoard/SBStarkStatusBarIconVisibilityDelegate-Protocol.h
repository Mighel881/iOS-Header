//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, SBLeafIcon;

@protocol SBStarkStatusBarIconVisibilityDelegate <NSObject>
- (SBLeafIcon *)leafIconForIdentifier:(NSString *)arg1;
- (_Bool)iconIsDisplayingBadgeForLeafIdentifier:(NSString *)arg1;
- (_Bool)iconIsVisibleForLeafIdentifier:(NSString *)arg1;
@end

