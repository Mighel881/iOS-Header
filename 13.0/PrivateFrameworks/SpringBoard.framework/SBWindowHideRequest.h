//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SBWindowHideRequest : NSObject
{
    NSString *_reason;
    struct SBWindowLevelRange_struct _windowLevelRange;
}

+ (id)hideRequestWithWindowLevelRange:(struct SBWindowLevelRange_struct)arg1 reason:(id)arg2;
@property(copy) NSString *reason; // @synthesize reason=_reason;
@property struct SBWindowLevelRange_struct windowLevelRange; // @synthesize windowLevelRange=_windowLevelRange;
- (void).cxx_destruct;
- (id)description;

@end

