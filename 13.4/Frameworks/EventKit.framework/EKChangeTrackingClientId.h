//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CADChangeTrackingClientId, NSString;

@interface EKChangeTrackingClientId : NSObject
{
    NSString *_suffix;
    NSString *_customClientId;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *customClientId; // @synthesize customClientId=_customClientId;
@property(readonly, copy, nonatomic) NSString *suffix; // @synthesize suffix=_suffix;
@property(readonly, nonatomic) CADChangeTrackingClientId *CADChangeTrackingClientId;
- (id)initWithCustomClientId:(id)arg1 suffix:(id)arg2;
- (id)init;
- (id)initWithSuffix:(id)arg1;
- (id)initWithCustomClientId:(id)arg1;

@end

