//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface _SBBatteryLogContext : NSObject
{
    _Bool _hasChargedPartially;
    int _capacity;
    int _voltage;
    NSArray *_foregroundApplications;
    double _usageTimeInSeconds;
    double _standbyTimeInSeconds;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasChargedPartially; // @synthesize hasChargedPartially=_hasChargedPartially;
@property(nonatomic) double standbyTimeInSeconds; // @synthesize standbyTimeInSeconds=_standbyTimeInSeconds;
@property(nonatomic) double usageTimeInSeconds; // @synthesize usageTimeInSeconds=_usageTimeInSeconds;
@property(nonatomic) int voltage; // @synthesize voltage=_voltage;
@property(nonatomic) int capacity; // @synthesize capacity=_capacity;
@property(retain, nonatomic) NSArray *foregroundApplications; // @synthesize foregroundApplications=_foregroundApplications;

@end

