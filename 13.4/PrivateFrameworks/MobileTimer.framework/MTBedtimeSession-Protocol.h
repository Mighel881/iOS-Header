//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MobileTimer/NSObject-Protocol.h>
#import <MobileTimer/NSSecureCoding-Protocol.h>

@class NSArray, NSDate, NSDictionary;

@protocol MTBedtimeSession <NSSecureCoding, NSObject>
@property(readonly, nonatomic) _Bool needsAdditionalProcessing;
@property(readonly, nonatomic) unsigned long long endReason;
@property(readonly, nonatomic) NSDictionary *metadata;
@property(readonly, nonatomic) long long sampleType;
@property(readonly, nonatomic) NSArray *intervals;
@property(readonly, nonatomic) NSDate *endDate;
@property(readonly, nonatomic) NSDate *startDate;
@end

