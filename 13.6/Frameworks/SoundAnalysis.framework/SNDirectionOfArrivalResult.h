//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SoundAnalysis/SNTimeRangeProviding-Protocol.h>
#import <SoundAnalysis/SNTimeRangeProvidingWritable-Protocol.h>

@class NSArray, NSString;

@interface SNDirectionOfArrivalResult : NSObject <SNTimeRangeProvidingWritable, SNTimeRangeProviding>
{
    float _azimuth;
    NSArray *_spatialSpectrum;
    CDStruct_e83c9415 timeRange;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *spatialSpectrum; // @synthesize spatialSpectrum=_spatialSpectrum;
@property(nonatomic) float azimuth; // @synthesize azimuth=_azimuth;
- (void)setTimeRange:(CDStruct_e83c9415)arg1;
@property(readonly, nonatomic) CDStruct_e83c9415 timeRange;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

