//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class NSString;

@interface HMDSyncOperationOptions : HMFObject
{
    _Bool _cloudConflict;
    NSString *_zoneName;
}

+ (id)defaultPushOptions:(id)arg1;
+ (id)defaultFetchOptions:(id)arg1 cloudConflict:(_Bool)arg2;
- (void).cxx_destruct;
@property(nonatomic, getter=isCloudConflict) _Bool cloudConflict; // @synthesize cloudConflict=_cloudConflict;
@property(readonly, nonatomic) NSString *zoneName; // @synthesize zoneName=_zoneName;
- (id)description;
- (id)_initWithZone:(id)arg1 cloudConflict:(_Bool)arg2;

@end

